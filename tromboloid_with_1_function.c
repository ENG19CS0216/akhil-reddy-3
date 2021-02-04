//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
void main()
{
   float h,d,b;
   float volume_of_tromoboloid;
   printf("Enter the values of h,d,b");
   scanf("%f%f%f",&h,&d,&b);
   volume_of_tromoboloid = (((h*d*b)+(d/b))/3);
   printf("Volume of tromoboloid is %f",volume_of_tromoboloid);
 }
