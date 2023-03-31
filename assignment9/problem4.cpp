#include <iostream>
#include <string>
/*
MB-213-A
a9 p4.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

using namespace std ;

int mycount(int a , int b) //difference of integers
{
  return b - a;
}
// counting specific character
int mycount(char a,string str)
{
  int count=0;

  for (unsigned int i = 0; i < str.length(); ++i)
  {
      if (str[i] == a) // checking for letter
            ++count;
  }

  return count;
}

int mycount(int a , int b);
int mycount(char a,string str);

int main()
{
//showing the function
cout <<"Differene between 9 and 6 is: "
     << mycount(6,9) << endl;
cout <<"Character 'i' appears "
     << mycount('i', "idkwhatisthis")
     << " times in 'idkwhatisthis'"<< endl;

  return 0;

}
