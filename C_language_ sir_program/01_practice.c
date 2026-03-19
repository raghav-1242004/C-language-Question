//Q1- Program to find Factorial using recursion
# include<stdio.h>
int facto(int n){
    // int i=1;
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*facto(n-1);
    }
    
}

int main(){
    int n;
    scanf("%d",&n);
    int a= facto(n);
    printf("%d",a);

}
