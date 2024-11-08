#include <stdio.h>

struct vector
{
	double x;
	double y;
};
struct vector getvectorsum(struct vector a, struct vector b);

int main(void)
{
	struct vector a = { 2.0, 3.0 }; struct vector b = { 5.0, 6.0 }; struct vector sum;

	sum = getvectorsum(a, b);

	printf("벡터의 합은 (%f, %f)입니다.\n", sum.x, sum.y);
	return 0;
}
