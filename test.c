#include <stdio.h>

#define PI 3.141592653589793

int main(void)
{
   double radius;

   printf("Dette program beregner arealet af en cirkel.\n\n");

   printf("Input the radius:   ");
   scanf("%lf", &radius);

   printf("\nArea = PI * radius * radius\n");
   printf("     = %.2f * %.2f * %.2f\n", PI, radius, radius);
   printf("     = %.5f\n", PI * radius * radius );
   printf("hej");

   return 0;

}