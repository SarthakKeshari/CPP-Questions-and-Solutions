#include <iostream>
#include <string>//library for string manipulation functions
#include <sstream>//library for string to integer type casting
using namespace std;
	int main()
	{
		//begin input from user
		string d;
		cout<<"Enter a date in the format dd/yyyy/mm\n";
		cin>>d;
		
		//begin checking invalid condition on format and if the user entered anything other than numbers
		if(d.at(2)!='/' || d.at(7)!='/')// to check if the user entered as dd/mm/yyyy or any pther format other than dd/yyyy/mm
		{
			cout<<"Invalid Format\n";
			return 0;
		}
		int f=0;//flag variable
		for(int i=0;i<10;i++)
		{
			if((int)d.at(i)<48 || (int)d.at(i)>57)//checking the ASCII values of each character entered in the string. ASCII value for 0 is 48 and ASCII value for 9 is 57.
			{
				f++;//flag increased(intentional usage is just to see that there are only two non-numeric entries in the string, that is '/')
			}
		}
		if(f>2)//will enter if block if there were other non numbers entered by the user other than the two '/'
		{
			cout<<"Invalid Input, all entries are not numbers.\n";
			return 0;
		}
		//converting entries from String into Integers
		int D,M,Y;
		stringstream g(d.substr(0,2));//Step1 of string to integer type casting
		g>>D;//Step2 of string to integer type casting
		cout<<"Date: "<<D<<"\n";
		stringstream h(d.substr(3,4));
		h>>Y;
		cout<<"Year: "<<Y<<"\n";
		stringstream i(d.substr(8,2));
		i>>M;
		cout<<"Month: "<<M<<"\n\n";
		
		// checking if user entered zero in date, month or year
		if(M>12)
		{
			cout<<"Invalid format, seems you entered date in place of month\n";
			return 0;
		}
		if(D==0 || M==0 || Y==0)
		{
			cout<<"Invalid format, an entry is entered as zero.\n";
			return 0;
		}
			
		//begin checking if the date is valid according to calender rules
		f=0;//flag set to zero. for all possible errors made by the user, flag value will be increased.
		if(M%2==0)// checks for even months
		{
			if(M==4 || M==6)//april and june
				if(D>30)
					f++;
			if(M==2)//february
			{
				if(Y%4==0)//checks leap year
				{
					if(D>29)
						f++;//flag will increase if error is encountered
				}
				else
				{
					if(D>28)
						f++;
				}
			}
			if(D>31)//for rest of even months
				f++;
		}
		else//this block executes if month is odd
		{
			if(M==9 || M==11)//september and november are exceptions for odd months
			{
				if(D>30)
					f++;
			}
			else //rest of the odd months
			{
				if(D>31)
					f++;
			}
		}
		if(f>0) cout<<"Date is not valid\n";//if everything was fine, flag would still be zero
		else cout<<"The Date entered is valid!\n";//flag will be non-zero if error was encountered
	}//main() closed
