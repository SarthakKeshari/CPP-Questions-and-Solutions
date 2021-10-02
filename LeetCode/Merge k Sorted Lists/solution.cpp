//https://leetcode.com/problems/merge-k-sorted-lists/
class Solution {
    
// Using a priority queue, at a time, the priority queue will have
// atmost k elements. 
    
// The idea is to input the first element of each list, so at a time
// we are comparing all k elements of the lists, now we pop the smallest
// one and push its next element if it exists.    
    
    struct compare{
        
      // if this function returns false, then the relative position in  
      // which the elements of the arguement are received in the function
      // will be same in the priority queue
      // like if this function return true, then element b will be
      // above element a;
      bool operator()(ListNode *a, ListNode *b){
          return a->val > b->val;
      }  
    };
        
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        // heap
        priority_queue<ListNode*, vector<ListNode*>, compare> pq;
        
        // pushing first node of each list into pq
        for(auto i: lists){
            if(i) pq.push(i);
        }
        
        if(pq.empty())
            return NULL;
            
        // initialising our sortedList
        ListNode *sortedList = pq.top();
        ListNode *sortedListTail = sortedList;
        pq.pop();
        
        // when the current node inserted in sorted list has a next in i         // its list, then insert that in the pq
        if(sortedList->next)
            pq.push(sortedList->next);
        
        while(!pq.empty()){
                            
            sortedListTail->next = pq.top();
            sortedListTail = sortedListTail->next;
            pq.pop();
            
            if(sortedListTail->next)
                pq.push(sortedListTail->next);
        }
            
        return sortedList;
    }
};