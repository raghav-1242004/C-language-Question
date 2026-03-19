// 27.	Input marks of 3 subjects, check pass/fail (>=33).
# include <stdio.h>
int main(){
    int a , b, c;
    printf("Enter Marks of Three Subject  \n");
    scanf("%d \n %d \n %d",&a,&b,&c);
    ((a>=33) ? printf("Pass in First Subject\n",a) : printf("Not pass in First Subject\n",a));
    ((b>=33) ? printf("Pass in Second Subject\n",b) : printf("Not pass in Second Subject\n",b));
    ((c>=33) ? printf("Pass in Third Subject\n",c) : printf("Not pass in Third Subject\n",c));
    return 0;
}