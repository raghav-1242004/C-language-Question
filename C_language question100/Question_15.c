// 15.	Input 3 numbers and print their average.
    # include <stdio.h>
    int main(){
        int first, second, third, average;
        printf("Enter a number\n");
        printf("First:-     ");
        scanf("%d",&first);
        printf("Second;-    ");
        scanf("%d",&second);
        printf("Third:-     ");
        scanf("%d",&third);
        average = (first+second+third)/3;
        printf("Average of This number %d %d %d =%d", first,second,third,average) ;
        return 0;

    }