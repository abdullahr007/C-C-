#include <iostream>
#include <string>

/*
MB-213-A
a9 p2.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

using namespace std ;
int main()
{
    int n;   // Declare the variable
    cin >>n;
    // READ THE VARIABLE
    
    double x;   // Declare the variable
    cin >> x;
    
    string s;   
    getchar();
    getline(cin , s);
    // READ THE VARIABLES
    //printing
    for(int i=0; i<n; i++)
    {
      cout << s << ":" << x << "\n";
    }
 
  return 0;
}