#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("\n\n\n");
    printf("\n==*==*==*==*==*==*==*==*==*==*==*==*==*\n");
    printf("Enter A Value :");
    scanf("%d",&a);
    printf("Enter B value :");
    scanf("%d",&b);
    printf("\n==*==*==*==*==*==*==*==*==*==*==*==*==*\n");
    printf("Before Swapping :\n A=%d \n B=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping : \n A=%d \n B=%d\n",a,b);
    printf("==*==*==*==*==*==*==*==*==*==*==*==*==*\n");
    printf("\n\n\n");


    
}