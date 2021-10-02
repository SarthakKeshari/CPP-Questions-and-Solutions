#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
    int y;
    cin >> y;
    string s = "12.09.";    //as Programmer's day will always be in the month of september, we create a string already containing date 12 and month September

    if (y < 1918){
        if (y%4 == 0){      //before 1918, leap year was considered only when the year was divisible by 4
            s[0] = '1';     //so the 256th day on leap year will be 12.09.yyyy, hence keeping the string as it is
            s[1] = '2';
        }
        else {
            s[0] = '1';     //the 256th day on a non-leap year will fall on the 13.09.yyyy
            s[1] = '3';
        }
    }
    else if (y == 1918){
        s[0] = '2';         
        s[1] = '6';
        //in year 1918, the days 1-13th Feb are not counted, so we'll have to add 13 to 13th Sep, which is 26.09.1918
    }
    else {
        if (y%400 == 0 || (y%4 == 0) && (y%100 != 0)){  //after 1918, the condition for leap year becomes that it should be divisible by 400 or should be divisible by 4 and not by 100
            s[0] = '1';     //so the 256th day on leap year will be 12.09.yyyy, hence keeping the string as it is
            s[1] = '2';
        }
        else{
            s[0] = '1';     //the 256th day on a non-leap year will fall on the 13.09.yyyy
            s[1] = '3';
        }
    }
    cout << s << y << endl;     //appending the year to the string
 
    return 0;
}
