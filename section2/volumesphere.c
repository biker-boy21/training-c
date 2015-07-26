/* this program generates the volume of a sphere when a user enters a value for the radius of the sphere
 */
#include<stdio.h>
# define PI 3.142f
int main(void)
{
  float radius, volume_of_sphere;
  printf("enter radius of sphere: ");
  scanf("%f", &radius);
  printf("%f\n", radius);
  volume_of_sphere = (4.0/3.0)*(PI*radius*radius*radius);
  printf("A sphere of radius: %.2f has volume: %.2f \n", radius, volume_of_sphere);
  return 0;
}
  
