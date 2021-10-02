//problem link:https://www.hackerrank.com/challenges/simple-array-sum/problem

int simpleArraySum(vector<int> ar) {
    int sum=0;
   for(int i=0;i<ar.size();i++)
   {
    sum=sum+ar[i];
    }
return sum;
}
