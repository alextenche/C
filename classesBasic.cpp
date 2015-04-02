// classes, basics, getters, setters, const functions, mutable functions
#include <iostream>
using namespace std;

class A{
	int ia;
public:
	void setA(const int a);
	int getA();
	int getA() const;
};

void A::setA(const int a){
	ia = a;
}

int A::getA(){
	cout << "this is the mutable getA" << endl;
	return ia;
}

int A::getA() const{
	cout << "this is the const getA" << endl;
	return ia;
}

int main( int argc, char ** argv ) {
	A a;
	a.setA(42);
	const A b = a;
	cout << "a is " << a.getA() << endl;
	cout << "b is " << b.getA() << endl;
	return 0;
}
