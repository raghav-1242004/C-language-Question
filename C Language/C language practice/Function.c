// write a function to calculate area of square, a circle & a rectangle.
# include<stdio.h>

void printsquare();
void printcircle();
void printrectangle();

int main(){
    int side,r,l,b;
    printf("Enter a value side of square:- ");
    scanf("%d",&side);

    printsquare();

    printf("Enter a value of radius of Circle :- ");
    scanf("%d",&r);

    printcircle();

    printf("Enter a value of Lenth and Breath of Rectangle");
    scanf("%d %d,&l,&b");

    printrectangle();
    return 0;
}

void printsquare(){
    int side;
    printf("Area of square:- %d",side*side);
}
void printcircle(){
    int r;
    printf("Area of Circle:- %d",3.14*(r*r));
}
void printretcangle(){
    int l,b;
    printf("Area of rectangle:- %d",l*b);
}



