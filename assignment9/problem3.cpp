#include <iostream>
#include <string>
/*
MB-213-A
a9 p3.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

using namespace std ;
// function to return absoulte value
float Abs(float x)
{
    if(x<0)
     {
       return -x;
     }
    else 
    {
        return x;
    }
}
float Abs(float x);
int main()
{
    // calling function to change the values to absolute
    cout <<"Absolute value of -7.6 is: "<< Abs(-7.6) << "\n";
    cout << "Absolute value of 8 is: " << Abs(8) << "\n";
    
    return 0;
}