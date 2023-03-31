/*
MB-213-A
a13 p4.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  public A
{
public:
  B()  { setX(10); }
};
 
class C:  public A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};

/*
 * D class is inheriting from 2 classes that inherit from A.
 * Class D has 2 definitions for print(). We just need to choose which one 
 * to use
 */
int main()
{
    D d;
    d.C::print();
    return 0;
}

