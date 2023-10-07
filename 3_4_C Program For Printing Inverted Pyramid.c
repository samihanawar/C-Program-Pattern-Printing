#include<stdio.h>
main(){
    int i,j,k,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=2*(rows-i);j++)
        {
            printf(" ");
        }
        for(k=1;k<2*i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }

}
