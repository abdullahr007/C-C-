/*
MB-213-A
a13 p7.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#include <iostream>
#include <cstring>

// MINE FUNCTION
class OwnException : public std::exception
{
	private:
		char msg[81];
	public:
		OwnException(const char * m) { strncpy(msg, m, 80); }
		~OwnException() {}
		const char *showMsg() const { return msg; }
        virtual const char* what() const noexcept 
        {
            return "OwnException\n";
        }
};

// The functoin that gets called
void function(int i)
{
    // Throw the exceptions
    if (i == 1)
        throw 'a';
    else if (i == 2)
        throw 12;
    else if (i == 3)
        throw true;
    else
        throw OwnException("Default case exception");
}

// A BUNCH OF TRY AND CATCHES
int main()
{
    try
    {
        function(1);
    }
    catch(char& e)
    {
        std::cerr << "Caught in main: " << e << "\n";
    }
    try
    {
        function(2);
    }
    catch(int& i)
    {
        std::cerr << "Caught in main: " << i << "\n";
    }
    try
    {
        function(3);
    }
    catch(bool& b)
    {
        std::cerr << "Caught in main: " << b << "\n";
    }
    try
    {
        function(4);
    }
    catch(const OwnException& e)
    {
        std::cerr << "Caught in main: " << e.what();
    }
    
    return 0;
}
