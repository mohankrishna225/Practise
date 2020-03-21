#include<stdio.h>
#include<math.h>
int main()
{
	double side_a;
	double side_b;
	double side_c;
	double area, perimeter;
	scanf("%lf",&side_a);
	scanf("%lf",&side_b);
	
	double side_temp = (side_a*side_a) + (side_b*side_b);
	side_c = sqrt(side_temp);
	
	area = 0.5 * side_a * side_b;
	perimeter = side_a + side_b + side_c;
	
	printf("Area: %lf\n",area);
	printf("Perimeter: %lf",perimeter);
	
	return 0;
}

//Area and Perimeter of a right angled triangle
