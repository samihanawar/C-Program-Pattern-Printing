#include<stdio.h>
main(){
int i,j,rows;
printf("Enter the number of rows: ");
scanf("%d",&rows);
for(i=rows;i>=1;i--)//maintain rows (1st row >>)
{
    for(j=1;j<=i;j++) //maintain number(1-2-3-4....)
    {
        printf("%d ",i);
    }
    printf("\n");
}
}

