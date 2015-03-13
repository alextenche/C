#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	string cppstring = "This is a C++ string.";

	cout << cppstring << endl;
	cout << "size of cppstring is: " << sizeof(cppstring) << endl;

	for( char c : cppstring ) {
		printf("%c\n", c);
	}

	for( auto it = cppstring.begin(); it != cppstring.end(); ++it ) {
		printf("%c\n", *it);
	}


	return 0;
}
