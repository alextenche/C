#include <iostream>
using namespace std;

void func(int &);

void func2(const string &);

int main( int argc, char ** argv ) {
	string s = "really big string with lots of text in it.";
	int i = 7;
	func(i);
	func2(s);
	printf("i is %d\n", i);
	printf("s is %s\n", s.c_str());
	return 0;
}

void func(int & i) {
	i = 132;
	printf("in func() i is %d\n", i);
}

void func2(const string & s) {
	cout << "in func() " << s << endl;
}
