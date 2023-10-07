#include<stdio.h>
main(){
    int i,k,j,l,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
        {
        for(j=1;j<=2*(rows-i);j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ", i);
        }
        for(l=1;l<=i;l++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
        }



