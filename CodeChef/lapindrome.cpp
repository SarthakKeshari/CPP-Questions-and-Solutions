
/*Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.
Your task is simple. Given a string, you need to tell if it is a lapindrome.*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here


int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int l=s.length();
  
    int a[26]={0};
    int b[26]={0};
   
  
   
   
    for(int i=0;i<l/2;i++){
      a[(s[i]-'a')]++;
//   cout<<a[i]<<endl;
    }
    for(int i=(l+1)/2;i<l;i++){
      b[(s[i]-'a')]++;
   }
   bool x= false;
   for (int i=0;i<26;i++){
       if(a[i]!=b[i])
       x=true;
       
}
if (x){
    cout<<'N'<<endl;
}
    else{
        cout<<'Y'<<endl;
    }

}

return 0;
}