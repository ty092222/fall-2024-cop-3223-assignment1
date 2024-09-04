// Tyler Register
// UCFID: 5515915

#include <stdio.h>
#include <math.h>

#define PI 3.14159;

//***********************************************
// void printPoints(double x1, double y1, double x2, double y2)
//
// Purpose: Helper function that prints all points
// Output: A line to STDOUT containing a string with the computed value
//***********************************************
void printPoints(double x1, double y1, double x2, double y2)
{
  printf("Point #1 entered: x1 = %.3lf; y1 = %.3lf\n", x1, y1);
  printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf\n", x2, y2);
}

//***********************************************
// double computeDistance(double x1, double y1, double x2, double y2)
//
// Purpose: Helper function that computes and returns distance
// Output: A line to STDOUT containing a string with the computed value
//***********************************************
double computeDistance(double x1, double y1, double x2, double y2)
{
  // The hypot() function from math.h is equivalent to the mathematical formula for calculating distance
  double distance = hypot(x2 - x1, y2 - y1);

  return distance;
}

//***********************************************
// double askForUserInput()
//
// Purpose: Helper function that returns the user's inputted value
// Output: Prints points via printPoints()
// Returns: Computed distance
//***********************************************
double askForUserInput()
{
  double x1;
  scanf("%lf", &x1);

  double x2;
  scanf("%lf", &x2);

  double y1;
  scanf("%lf", &y1);

  double y2;
  scanf("%lf", &y2);

  printPoints(x1, y1, x2, y2);

  double distance = computeDistance(x1, y1, x2, y2);

  return distance;
}

//***********************************************
// double calculateDistance()
//
// Purpose: Required function that calculates the distance between two points
// Output: Prints the entered points via printPoints() function and the computed value.
//***********************************************
double calculateDistance()
{
  double distance = askForUserInput(); 
  printf("The distance between the two points is %.3lf.\n", distance); 

  return distance;
}

//***********************************************
// double calculatePerimeter()
//
// Purpose: Required function that calculates the perimeter of a circle given the end points of its diameter
// Output: Prints the entered points via printPoints() function and the computed value.
//***********************************************
double calculatePerimeter()
{
  // 2 * pi * radius is equivalent to pi * diameter.
  double distance = askForUserInput(); 
  double perimeter = distance * PI; 
  printf("The perimeter of the city encompassed by your request is %.3lf.\n", perimeter); 

  return 2.0;
}

//***********************************************
// double calculateArea()
//
// Purpose: Required function that calculates the area of a circle given the end points of its diameter
// Output: Prints the entered points via printPoints() function and the computed value.
//***********************************************
double calculateArea()
{
  // The radius squared can be calculated by dividing the distance (diameter) by 2 and squaring with pow().
  double distance = askForUserInput(); 
  double area = pow(distance / 2, 2) * PI;
  printf("The area of the city encompassed by your request is %.3lf.\n", area);

  return 2.0;
}

//***********************************************
// double calculateWidth()
//
// Purpose: Required function that calculates the width of a circle given the end points of its diameter
// Output: Prints the entered points via printPoints() function and the computed value.
//***********************************************
double calculateWidth()
{
  // Width is equivalent to diameter.
  double distance = askForUserInput(); 
  printf("The width of the city encompassed by your request is %.3lf.\n", distance);

  return 2.0;
}

//***********************************************
// double calculateHeight()
//
// Purpose: Required function that calculates the height of a circle given the end points of its diameter
// Output: Prints the entered points via printPoints() function and the computed value.
//***********************************************
double calculateHeight()
{
  // Height is equivalent to diameter.
  double distance = askForUserInput(); 
  printf("The height of the city encompassed by your request is %.3lf.\n", distance);

  return 2.0;
}

int main(void)
{
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth();
  calculateHeight();

  return 0;
}
