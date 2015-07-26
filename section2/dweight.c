/* this program determines the dimensional weight of a box, based on the equation introduced within the C_programming_A_Modern_Approach.pdf 
 */
#include<stdio.h>

int main(void)
{
  int height, length, width, weight, volume;
    printf("enter height in inches: ");
    scanf("%d",&height);
      printf("enter length in inches: ");
      scanf("%d",&length);
      printf("enter width in inches: ");
      scanf("%d",&width);
    volume = height*length*width;
    printf("volume of box is: %d",volume);
    weight = (volume+165)/166;
    /* The 165 prevents rounding down due to truncation as currently using             intergers
     */
    printf("\ndimensional weight of box is: %d\n", weight);
    return 0;
}
  
