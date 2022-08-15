#include<stdio.h>

int main(){
    int height, width, area, perimeter;
    printf("enter height = ");
    scanf("%d", &height);
    printf("enter width = ");
    scanf("%d",&width);

    area = height * width;
    perimeter = (2*height+2*width);

    printf("area = %d\n", area);
    printf("perimeter = %d", perimeter);


}
