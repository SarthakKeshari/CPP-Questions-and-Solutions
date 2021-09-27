#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float a,b,c,D,X1,X2,img,real; 
    char ch=253;
    cout<<"please enter the coefficients of x"<<ch<<",x and the constant:"<<endl;
    cin>>a>>b>>c;
    D=b*b-4*a*c;

    if(D>0)
    {
        X1=(-b+sqrt(D))/(2*a);
        X2=(-b-sqrt(D))/(2*a);
        cout<<"The roots are Real and Different."<<endl;
        cout<<"They are:"<<endl;
        cout<<X1<<endl<<X2<<endl;
    }
    else if(D<0)
    {
        real=(-b)/(2*a);
        img=sqrt(D)/(2*a);
        cout<<"The roots are Imaginary."<<endl;
        cout<<"They are:"<<endl;
        cout<<real<<"+("<<img<<"*i"<<endl;
        cout<<real<<"-("<<img<<"*i"<<endl;
    }
    else if(D==0)
    {
        X1=(-b)/(2*a);
        cout<<"the roots are Real and Same."<<endl;
        cout<<"The root is:"<<endl;
        cout<<"X1=X2="<<X1<<endl;
    }
    return 0;
}