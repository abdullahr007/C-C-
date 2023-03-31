#include <iostream>
/*
MB-213-A
a11 p2.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

using namespace std;

class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
// A bird 
class Bird : public Creature
{
    public:
        Bird();
        void fly() const;
    
    private:
        int flyDistance;
};

Bird::Bird() : flyDistance(1000)
{
    cout << "\nCreating a bird. "<<endl;
}

void Bird::fly() const
{
    cout << "flying " << flyDistance << " meters"<<endl;
}

// A barking dog
class Dog : public Creature
{
    public:
        Dog();
        void bark();
    private:
        int barkCount;
};

Dog::Dog() : barkCount(69696)
{
    cout << "\nCreating a dog."<< endl;
}

void Dog::bark()
{
    cout << "Dog barked " << barkCount << " times\n";
}

int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    // calling birds methods
    Bird b;
    b.run();
    b.fly();

    // calling dogs all methods
    Dog d;
    d.run();
    d.bark();

    return 0;
}

  