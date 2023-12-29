#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int l;
    scanf("%[^
]s",s);
    l=strlen(s);
    printf("%d",l);
}