#include<stdio.h>

int main()
{
    int height, feet, temp;
    printf("Enter Your Height = ");
    scanf("%d", &height);

    feet = height/12;
    temp = height%12;

    printf("Height = %d feet %d inch", feet, temp);

    return 0;
}
