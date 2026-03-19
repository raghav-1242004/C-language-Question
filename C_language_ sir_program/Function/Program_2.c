// find square
# include <stdio.h>
# include <math.h>

int square(inta);

int main(){
    int a;
    printf("Enter a value");
    scanf("%d",&a);
    printf("%d",square(a));
    return 0;
}

int square(int a){
    return a*a;
}
