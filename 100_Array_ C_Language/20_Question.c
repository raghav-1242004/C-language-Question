// 20.	Delete an element from a given position.
# include<stdio.h>
int main(){
    int i,n,a;
    printf("Enter you length of array:-\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter your Array Elements:-\n");
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("\n---Your Arrays Elements---\n[");
    for(i=0; i<n; i++){
        printf("%d, ",array[i]);
    }
    printf("]");
    printf("Enter position position of array those you delete:-");
    scanf("%d",&a);
    if(a>n || a<n){
        printf("Enter Correct Indexing");
    }
    for(i=a-1; i<n-1; i++){
        array[i] = array[i + 1];
    }
    n--;
    printf("Array after deletion\n");
    for(i=0; i<n; i++){
        printf("%d",array[i]);
    }
}