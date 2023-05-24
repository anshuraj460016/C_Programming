#include<stdio.h>
void sum(int a , int b){
int c;
c=a+b;
printf("the sum of given number %d and %d is %d",a,b,c);
}
int main(){
    int a,b;
    printf("enter the two number");
    scanf("%d%d",&a,&b);
     sum(a,b);
return 0;
}