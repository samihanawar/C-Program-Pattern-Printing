#include<stdio.h>
main(){
int i,j,k,rows;
printf("Enter the number of rows: ");
scanf("%d",&rows);
for(i=10;i<=rows;i++) //maintains rows
    {
        for(j=10;j<=2*(rows-i);j++) //maintains space before number
        {
            printf(" ");
        }
        for(k=10;k<2*i;k++) //maintains number
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
