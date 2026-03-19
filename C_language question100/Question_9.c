// 9.	Input length and breadth of a rectangle, print area.
# include <stdio.h>
int main(){
    int l , b , area; // l = Length : b = Breadth
    printf ("Enter a value of Langth:-  ");
    scanf("%d",&l);
    printf("Enter a value of Breadth:-  ");
    scanf("%d",&b);
    area = l*b;
    printf("\n");
    printf("Area of Rectangle %d(Length) X %d(Breadth) =  %d",l,b,area);
    return 0;
}