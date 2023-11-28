#include <stdio.h>

struct dog
{
	char *name;
	int *age;
	char *owner;
};

int main(void)
{
	struct dog my_dog;

	my_dog.name = "poppy";
	my_dog.age = 3.5;
	my_dog.owner = "ALX";

	return (0);
}
