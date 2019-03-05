#include<stdio.h>
#include<string.h>
int main() {
	char a[100],b[100];
	int i,n,n1;
	scanf("%s",a);
	scanf("%s",b);
	n=strlen(a);
	n1=strlen(b);
    if(n==n1)
    {
        printf("%s",b);
    }
    else if(n>n1)
    {
        printf("%s",a);
    }
    else
    {
        printf("%s",b);
    }
	 return 0;
}
