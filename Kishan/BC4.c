#include<stdio.h>
int main(){
    float x, y;
    printf("Enter the x and y coordinates \n");
    scanf("%f %f", &x, &y);
    if(x==0 && y==0)
    printf("It is the origin");
    else if(x>0 && y>0)
    printf("This is First quadrant");
    else if(x<0 && y>0)
    printf("This is Second quadrant");
    else if(x<0 && y<0)
    printf("This is Third quadrant");
    else if(x>0 && y<0)
    printf("This is Fourth quadrant");
    return 0;
}