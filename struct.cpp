#include <cstdio>
using namespace std;

struct employee {
	int id;
	const char * name;
	const char * role;
};

typedef struct angajat {
	int id;
	const char * name;
	const char * role;
} angajat_t;


int main( int argc, char ** argv ) {

	struct employee joe = { 42, "Joe", "Boss" };
	struct employee *ep = &joe;

	printf("%s is the %s and has id %d\n", joe.name, joe.role, joe.id);
	printf("%s is the %s and has id %d\n", ep->name, ep->role, ep->id);

	angajat_t alex = { 36, "Alex", "Angajat" };
	angajat_t *ang = &alex;

	printf("%s is the %s and has id %d\n", alex.name, alex.role, alex.id);
	printf("%s is the %s and has id %d\n", ang->name, ang->role, ang->id);

	return 0;
}
