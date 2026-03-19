// Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
# include<stdio.h>
void sum(int a);
int main(){
    int a;
    printf("Enter a Value");
    scanf("%d",&a);
    sum(a);
    return 0;
}
void sum(int a){
    int sum=0;
    for (int i=1; i<=a; i++){
       sum = sum+i;
    }
    printf("%d",sum);
}