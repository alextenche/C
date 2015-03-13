#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;

string func(){
	return "15";
}

int main( int argc, char ** argv ) {
	auto x = func();
	cout << x << endl;
	cout << typeid(x).name() << endl;

	vector<int> i = {1, 2, 3, 4, 5};
	for(auto it = i.begin(); it != i.end(); ++it){
		cout << *it << endl;
	}
	return 0;
}
