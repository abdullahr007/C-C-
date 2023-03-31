#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
/*
MB-213-A
a9 p7.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

using namespace std ;

//swap integers
void swapping(int &n1, int &n2)
{
    int help=n1;
    n1 = n2;
    n2 = help;
}
// swap float
void swapping(float &n1, float &n2)
{
    float help= n1;
    n1 = n2;
    n2 = help;
}
// swap two pointers to char
void swapping(const char *&str1, const char *&str2)
{
    const char *help = str1;
    str1 = str2;
    str2 = help;
}
// main 
int main(void) 
{
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";
  
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);
    
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    return 0;
}