#include<stdio.h>
int main(){
    int a,b,n;
    scanf("%d%d%d",&n,&a,&b);
    for(int i=a;i<=b;i++)
    {
    int product=n*i;
    printf("%d x %d = %d
",n,i,product);
    }
    return 0;
}