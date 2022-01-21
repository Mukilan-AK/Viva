#include<stdio.h>
#define PI 3.14 //this pre-processor is defined because the value of pi is 3.14
void main()
{
	float radius, length, breadth;
	float base, height, area;
	int choice;

	printf("Enter\n");
	printf("1. To find area of triangle\n2. To find area of Square\n");
	printf("3. To find area of circle\n4. To find area of rectangle\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: //Area Of Triangle
			printf("Enter base and height of a triangle\n");
			scanf("%f %f", &base, &height);
			area = (1.0/2) * base * height;
			printf("Area of Triangle:\t%f\n", area);
			break;
		case 2: //Area Of Square
			printf("Enter length of a Square\n");
			scanf("%f", &length);
			area = length * length;
			printf("Area of Square:\t%f\n", area);
            break;
		case 3: //Radius Of Circle
			printf("Enter the radius of a Circle\n");
			scanf("%f", &radius);
			area = PI * radius * radius;
			printf("Area of Circle:\t%f\n", area);
			break;
		case 4: //Area Of Rectangle
			printf("Enter the length and breadth of a Rectangle\n");
			scanf("%f %f", &length, &breadth);
			area = length * breadth;
			printf("Area of Rectangle:\t%f\n", area);
			break;
		default:
			printf("Invalid Choice\n");
	}
}
