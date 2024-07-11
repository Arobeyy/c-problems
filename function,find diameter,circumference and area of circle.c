#include <stdio.h>
#include <math.h>

double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);

double getDiameter(double radius)
{
    return (2 * radius);
}

double getCircumference(double radius)
{
    return (2 * M_PI * radius);
}

double getArea(double radius)
{
    return (M_PI * radius * radius);
}

int main()
{
    double radius;
    printf("Enter radius: ");
    scanf("%lf", &radius);

    printf("Diameter of the circle = %.2lf units\n", getDiameter(radius));
    printf("Circumference of the circle = %.2lf units\n", getCircumference(radius));
    printf("Area of the circle = %.2lf sq. units\n", getArea(radius));



    return 0;
}
