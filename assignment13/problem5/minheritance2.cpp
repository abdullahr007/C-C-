/*
MB-213-A
a13 p5.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C:  virtual public A 
{
public:
  C():A(10) {  }
};
 

/*
 * Class D does not have a default constuctor defined as
 * it inherits from 2 different places.
 * We need to specify and  we also need to call A
 * because that does not have a default constuctor
 * either
 */
class D: public B, public C {
public:
    D() : B::A(10) { }
};
 
int main()
{
    D d;
    d.print();
    return 0;
}