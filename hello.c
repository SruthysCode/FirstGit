#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Hello ...welcome to c \n");

    printf("Enter a value \n");
    scanf("%d",&n);

    printf("Even numbers are : \n");
    for(i=0;i<n;++i)
    {
        if(i%2==0)
        {
            printf("%d \n",i);
        }
        
    }

}