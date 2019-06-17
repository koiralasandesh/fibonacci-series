#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    printf("===========================================\n");
    while(true){
        int number, i, j,k,l,sum=1;
        printf("Enter the number of terms, 0 to exit:\n");
        scanf("%d", &number);
        if(number==0){
            break;
        }
        j=0;
        k=1;
        printf("-------------------------------------------\n");
        printf("First %d terms of Fibonacci numbers are: \n",number);
        printf("%d\n%d\n",j,k);
        for (i=2;i<number;i++){
        l=j+k;
        sum=sum+l;
        printf("%d\n",l);
        j=k;
        k=l;
        }

        printf("-------------------------------------------\n");
        printf("The sum value of the above sequence is:\n%d\n",sum);
        printf("===========================================\n");
    }
    return 0;

}
