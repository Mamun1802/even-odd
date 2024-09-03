#include<stdio.h>
#include<math.h>

int main()
{
    int num1,num2,i,count1=0,count2=0;
    int evenPrint=0,oddPrint=0;

    //Input the range
    printf("Enter the beginning number:");
    scanf("%d",&num1);
    printf("Enter the ending number:");
    scanf("%d",&num2);

    //Check the validation of range
      if (num1 > num2) {
        printf("Invalid range. The beginning number should be less than or equal to the ending number.\n");
        return 1;
    }

     //Check if both numbers are equal
     if(num1==num2){
        printf("The beginning and ending number are equal");
     }

     //Loop through the range to check even or odd
    for(i=num1; i<=num2; i++)
    {
        if(i%2==0)
        {
            if(evenPrint==0)
            {
                printf("\n\nEven numbers = ");
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
     //Print the total
    printf("\n\nTotal even numbers = %d",count1);
    printf("\n\nTotal odd numbers = %d",count2);

    return 0;
}
