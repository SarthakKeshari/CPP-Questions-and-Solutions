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