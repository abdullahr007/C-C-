#include <vector>
#include <iostream>
/*
MB-213-A
a13 p6.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

int main()
{
    // Create the vector and add 8 20 times
    std::vector<int> v;
    for (int i = 0; i < 20; ++i)
    {
        v.push_back(8);
    }

    // Do the requested thing
    try
    {
        v.at(21);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}