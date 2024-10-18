#include <stdio.h>
int main()
{
	int l,b,p,a;
	printf("Enter length and breadth of rectangle: ");
	scanf("%d%d",&l,&b);
	p=2*(l+b);
	a=l*b;
	printf("perimeter of rectangle is: %d",p);
	printf("\nArea of rectangle is: %d",a);
}
