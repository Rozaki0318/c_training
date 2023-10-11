#include <stdio.h>

typedef struct
{
	char	name[8];
	int		age;
	double	height;
} S_PERSON;

int main(void)
{
	S_PERSON	player = { "Ichiro", 45, 180.0 };

	printf("%s\n", player.name);
	printf("%d\n", player.age);
	printf("%lf\n", player.height);

	return 0;
}