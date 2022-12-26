#include<stdio.h>
int main(){
    int n;
    int i;
    scanf("%d", &n);

    int *arr=(int*)malloc(n*sizeof(int));
    int max=arr[0];
    for(i=0; i<n; i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }

    printf("The Largest Element %d",max);
}