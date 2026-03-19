// 19.	Insert an element at a given position.
# include<stdio.h>
void position(){
    int i,n,a,b,c;
    printf("Enter an Length:-");
    scanf("%d",&n);
    int array[n];
    printf("Enter a Element of array:-");
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("If you Add element in an array than Press 1");
    printf("If you not add Element in an array Press 2");
    scanf("%d",&a);

    if(a==1){
        printf("Enter An position:-");
        scanf("%d",&b); // b is position there add element array
        printf("Enter Element:-");
        scanf("%d",&c);//wher c add element
        array[b]= c;
    }
    else if(a==2){
    }
    for(i=0; i<=n; i++){
        printf("%d\n",array[i]);
    }

}
int main(){
    position();
}