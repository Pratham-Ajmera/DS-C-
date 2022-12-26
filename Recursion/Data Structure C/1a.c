#include<stdlib.h>
#include<stdio.h>
int main(){
    int n;
    int i;
    int sum=0;
    printf("Enter the No. of the students\n");
    scanf("%d",&n);

    int *arr =(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        printf("Enter the marks of %d student ", i);
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++){
        sum+=arr[i];
    }

    printf("The average of the student is %f",(sum/n) );

    return 0;

}