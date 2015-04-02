// namespace
#include <iostream>

namespace ATString {

	const std::string ats = "This is ATString::string";

	class string {
		std::string s;
	public:
		string (void) : s(ats) {};
		string (const std::string & _s) : s(ats) {};
		operator std::string & (void) { return s; };
	};
};	// namespace ATString

ATString::string s1("This is a string");

int main( int argc, char ** argv ) {
	std::string s = s1;
	std::cout << s << std::endl;
	return 0;
}
