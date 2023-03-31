/*
MB-213-A
a13 p8.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#include <iostream>


class Motor
{
public:
    Motor()
    {
        std::string s = "This motor has problems";
        throw std::runtime_error(s.c_str());
    }
};

class Car
{
private:
    Motor *motor;
public:
    Car()
    {
        // Create the motor
        motor = new Motor();
    }
    ~Car()
    {
        // Delete the motor pointer before the car is no more
        delete motor;
    }
};

class Garage
{
private:
    Car *car;
public:
    Garage()
    {
        // Put the car in the garage
        try
        {
            car = new Car();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            std::string s = "Car in this garage has problem with the motor";
            throw std::runtime_error(s.c_str());
        }
    }

    ~Garage()
    {
        // Delete the car pointer before the Garage is no more
        delete car;
    }
};
// main function
int main()
{
    try
    {
        Garage g = Garage();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}