#include<stdio.h>
int main(){
    char alphabet;
    printf("Alphabet are \n");
    scanf("%c", &alphabet);
    if(alphabet=='a'|| alphabet=='e'|| alphabet=='i'|| alphabet=='o'|| alphabet=='u'|| alphabet=='A'|| alphabet=='E'|| alphabet=='I'|| alphabet=='O'|| alphabet=='U'){
        printf("This a an vovel");
    }
    else{
        printf("This is not a vovel");
    }
    return 0;
}