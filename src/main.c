#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i, j,k,l,sum=1;
    printf("Enter the number of terms:\n");
    scanf("%d", &number);
    j=0;
    k=1;
    printf("First %d terms of Fibonacci numbers are: \n",number);
    printf("%d\n%d\n",j,k);
    for (i=2;i<number;i++){
       l=j+k;
       sum+=l;
       printf("%d\n",l);
       j=k;
       k=l;


    }
    printf("The sum value of the above sequence is:\n%d",sum);
    return 0;
}
