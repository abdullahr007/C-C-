#ifndef H_CREATURE
#define H_CREATURE
/*
MB-213-A
a11 p3.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/


class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

// A bird 
class Bird : public Creature
{
    public:
        Bird();
        void fly() const;
    
    private:
        int flyDistance;
};
// A barking dog
class Dog : public Creature
{
    public:
        Dog();
        void bark();
    private:
        int barkCount;
};
#endif