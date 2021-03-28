#include<stdio.h>
main()
{
	int x=10 , y=5;
	x=x*y; // x becomes 50
	y=x/y;  // y becomes 10
	x=x/y;  // x becomes 5
	printf ("after swapping:x=%d,y=%d,x,y");
	return 0;
}
