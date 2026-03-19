# include <stdio.h>
int main(){
    float si,p,r,t;       //si= simple interest, p= principal, r= rate, T= time
    printf("Enter a Value\n");
    printf("Principal:- ");
    scanf("%2f",&p);
    printf("Rate:-  ");
    scanf("%2f",&r);
    printf("Time:-  ");
    scanf("%2f",&t);

    si = (p*r*t)/100;
    printf("Simple Interest:-  %2f ",si);
    return 0;
}