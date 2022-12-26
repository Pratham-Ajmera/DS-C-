#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,key,j;
    int flag=0;
    printf("Enter the no. of elements");
    scanf("%d",&n);
    printf("Enter Elements");
    int* arr = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element you want to search");
    scanf("%d",&key);
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            j=i;
            flag=1;
        }
    }

    if(flag==0){
        printf("Not Found");
    }
    else{
        printf("Element found at position %d",j+1);
    }


    return 0;
}