#include<stdio.h>
main()
{
 int  x,y,z;
 printf("Value of X=");
 scanf("%d",&x);
 printf("Value of Y=");
 scanf("%d",&y);
 printf("Value of Z=");
 scanf("%d",&z);

(x<y)?(x<z)?printf("X is Minimum=%d"):printf("Z is Minimum=%d")
     :(y<z)?printf("Y is Minimum=%d"):printf("Z is Minimum=%d");
}