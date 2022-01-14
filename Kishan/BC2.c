#include <stdio.h>
void findnotes(int amount)
{
    int rm;
    // if(amount!=0)
    printf("Number of 100 rs notes in the amount is %d", amount / 100);
    rm = amount % 100;
    // if(rm!=0)
    printf("\n Number of 50 rs notes in the amount is %d", rm / 50);
    rm = amount % 50;
    // if(rm!=0)
    printf("\n Number of 10 rs notes in the amound is %d", rm / 10);
}
int main()
{
    int amount;
    printf("Give the total amount of money\n");
    scanf("%d", &amount);
    findnotes(amount);
    return 0;
}