# include <stdio.h>
void printsquare(int a, int b);
void printrectangle(int a, int b);
void printcircule(int r);

void printsquare(int a, int b){
    printf("%d\n",a*b);
}
void printrectangle(int a, int b){
    printf("%d\n",a*b);
}
void printcircule(int r){
    int s = 3.14*(r*r);
    printf("%d\n",s);
}
int main(){
    int a, b, r, n;
    scanf("%d",&n);
    if (n == 1){
        printsquate(a, b);
    }
    else if (n==2){
        printrectangle(a, b);
    }
    else if (n==3){
        printcircule(r);
    
        return 0;
    }

}