#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
	char first_name[32];
	char last_name[32];
	int age;
};

struct person *allocateStruct(void);
void fillStructure(struct person *p);
void showStructure(struct person *p);

int main()
{
	struct person *author;

	author = allocateStruct();
	fillStructure(author);
	showStruct(author);
	return(0);
}

struct person *allocateStruct(void)
{
	struct person *p;

	p = (struct person *)malloc(sizeof(struct person));
	if( p == NULL)
	{
		perror("Unable to allocate structure");
		exit(1);
	}
	return(p);
}

void fillStructure(struct person *p)
{
    printf("First Name: ");
    scanf("%s", p->first_name);
	printf("Last Name: ");
    scanf("%s", p->last_name);
    printf("Age: ");
    scanf("%d", &p->age);
}

void showStruct(struct person *p)
{
	printf("%s %s is %d years old\n", p->first_name, p->last_name, p->age);
}

