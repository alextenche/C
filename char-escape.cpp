#include <iostream>
using namespace std;

int main( int argc, char ** argv ) {
	char string[] = "This \u03bc is \' \" \\ \x40 a  \t string.\n";

	cout << string << endl;
	return 0;
}
