#include <iostream>
#include <string>
#include <vector>
#include <cmath>

/*
MB-213-A
a9 p6.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

using namespace std ;

int myfirst(vector<int> arr)
{
    // Search element
    for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
       
        if (*it % 2 == 0 && *it > 0)
            return *it;
    }
    // No element found
    return -1;
}

double myfirst(vector<double> arr)
{
    // Search for the requested element
    double dummy; 
    vector<double>::iterator it;
    for (it = arr.begin(); it != arr.end(); ++it)
    {
       
        if (*it < 0 && modf(*it, &dummy) == 0)
            return *it;
    }
    // No element given properties
    return -1.1;
}

// Returns true 
// false otherwise
bool isConsonant(const char c)
{
    const char lower = tolower(c);
    const string consonants = "bcdfghjklmnpqrstvwxyz";
    return consonants.find(lower) != string::npos;
}

char myfirst(vector<char> arr)
{
    // Search 
    vector<char>::iterator it;
    for (it = arr.begin(); it != arr.end(); ++it)
    {
        
        if (isConsonant(*it))
            return *it;
    }
    return '0';
}

int main()
{
    vector<int> intArr1 = {0, 1, 3, 9};
    cout << "first positive even number in  {0, 1, 3, 9}: "<<endl;
    cout << myfirst(intArr1) << "\n";
    
    vector<int> intArr2 = {0, 5, 7, 8};
    cout << "first positive even number in {0, 5, 7, 8}: "<< endl;
    cout << myfirst(intArr2) << "\n";


    vector<double> doubleArr1 = {2, 4, -5.6, -21.2255};
    cout << "first negative number with no fractional ";
    cout<< " {2, 4, -5.6, -21.2255}:"<< endl;
    cout << myfirst(doubleArr1) << "\n";

    vector<double> doubleArr2 = {1, 3, -6.35, -7, 55.213};
    cout << "first negative number with no fractional {1, 3, -6.35, -7, 55.213}";
    cout << "{1, 3, -6.35, -7, 55.213}:" << endl ;
    cout << myfirst(doubleArr2) << "\n";

    vector<char> charArr1 = {'i', 'o'};
    cout << "first consonant in {'i', 'o'}:"<<endl;
    cout << myfirst(charArr1) << "\n";

    vector<char> charArr2 = {'e', 'c', 'i'};
    cout << "first consonant in {'e', 'c', 'i'}: "<<endl;
    cout << myfirst(charArr2) << "\n";
    return 0;
}