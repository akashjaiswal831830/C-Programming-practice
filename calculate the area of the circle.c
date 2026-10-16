#include <stdio.h>

int main() {
  //Calculate the volume of cylinder with help of length and height 
  
 int volume;
  int height;
  int radius;
float pi=3.14;
  printf("the height of cylinder is ");
  scanf("%d",&height);
  printf("the radius of cylinder is");
  scanf("%d",&radius);
  volume=pi*radius*radius*height;
  
  printf("The volume of cylinder  is %d",volume);
  
    return 0;
}

