#include<stdio.h>
#include<math.h>
void cube(int num){
    int ans= pow(num, 3);
    printf("%d", ans);
}
int main(){
    int num;
    printf("write the number");
    scanf("%d", &num);
    cube(num);
}