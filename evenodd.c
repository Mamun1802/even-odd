#include<stdio.h>
#include<math.h>

int main()
{
    int num1,num2,i,count1=0,count2=0;
    int evenPrint=0,oddPrint=0;
    printf("Enter the beginning number:");
    scanf("%d",&num1);
    printf("Enter the ending number:");
    scanf("%d",&num2);

    for(i=num1; i<=num2; i++)
    {
        if(i%2==0)
        {
            if(evenPrint==0)
            {
                printf("\nEven numbers = ");
                evenPrint=1;
            }
            printf("%d ",i);
            count1=count1+1;
        }
    }
    printf("\n");
    for(i=num1; i<=num2; i++)
    {
        if(i%2!=0)
        {
            if(oddPrint==0)
            {
                printf("\nOdd numbers = ");
                oddPrint=1;
            }
            printf("%d ",i);
            count2=count2+1;
        }


    }
     printf("\n \n");
    printf("Total even numbers = %d",count1);
     printf("\n \n");
    printf("Total odd numbers = %d",count2);

    return 0;
}
