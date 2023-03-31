/*
MB-213-A
a13 p3.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#include <fstream>
#include <string>
#include <iostream>

using namespace std;
int main()
{
    // Get the number of files
    int n;
    cin >> n;

    // Create the output stream
     ofstream out("concatn.txt");

    for (int i = 0; i < n; ++i)
    {
        // Get the file name
        string fname;
        cin >> fname;

        // Create the input stream and check if it is valid
        ifstream in(fname);
        if (in.fail())
        {
            std::cout << "File name is not valid\n";
            continue;
        }

        // Read line by line and put them in the output stream
        string line;
        while (getline(in, line))
        {
            out << line;
            if (!in.eof())
                out << "\n";
        }
        out << "\n";
    }

    return 0;
}