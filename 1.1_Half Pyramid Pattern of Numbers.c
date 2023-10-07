#include<stdio.h>
main(){
int i,j,rows;
printf("Enter the number of rows: ");
scanf("%d",&rows);
for(i=1;i<=rows;i++) //maintains row
{
    for(j=1;j<=i;j++) //maintains patterns/number
    {
        printf("%d ",i);
        //printf("* ");
    }
    printf("\n");
}
}
