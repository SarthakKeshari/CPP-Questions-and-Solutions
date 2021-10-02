//https://www.facebook.com/codingcompetitions/hacker-cup/2021/qualification-round/problems/A1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){
    fast;
    ll t;
    cin>>t;
    for(int p=1;p<=t;p++){
        string s;
        cin>>s;
        vector<int> v(26);//counter for individual vowel
        vector<int> c(26);//counter for individual consonant
        ll vc=cc=0;//counter for total vowel and consonant
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){   
                vc++;
                v[s[i]-'A']++;//storing the exact vowel
            }
            else{
                cc++;
                c[s[i]-'A']++;//storing the exact consonant
            }
        }
        ll vm=cm=0;//for storing maximum vowel and consonant 
        for(int i=0;i<26;i++)
        {
            vm=max(vm,v[i]);//finding maximum repititive vowel
            cm=max(cm,c[i]);//finding maximum repititive consonant
        }
        ll fv=cc+(vc-vm)*2;//calculating time if we change all alphabets to vowel
        ll fc=vc+(cc=cm)*2;//calculating time if we change all alphabets to consonants
        cout<<"Case #"<<p<<": "<<min(fv,fc)<<endl;
    }
	return 0;
}
