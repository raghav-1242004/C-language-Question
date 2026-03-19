# include<stdio.h>
void add(int a){
    a = a+10;
}
int main(){
    int x;
    x=5;
    add(x);
    printf("%d",x);
    return 0;
}