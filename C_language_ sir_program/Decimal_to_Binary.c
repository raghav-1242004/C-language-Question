# include<stdio.h>
int main(){
    int input1,input2,e,c;
    int and,or,not;
    scanf("%d",&input1);
    scanf("%d",&input2);
    
    while(input1>0 && input2>0)
    {
        c = input1%2;
        // printf("%d",c);
        e=input2%2;
        // printf("%d",e);
        and=c&e;
        or=c|e;
        not=c^e;
        input1 = input1 / 2;
        input2=input2/2;
    printf("%d\n",and);
    printf("%d\n",or);
    printf("%d\n",not);
    }
   
}