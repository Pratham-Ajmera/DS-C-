#include<stdio.h>
int  main(){

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c){
        printf("Triangle is Equilateral");
    }
    else if (a==b || b==c || a==c)
    {
        printf("Triangle is isosceles");
    }
    else{
        printf("Triangle is scalen");
    }

    return 0;

}