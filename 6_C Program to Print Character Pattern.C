#include<stdio.h>
main(){
 int i,j,rows;
 char crctr;
 crctr='S';
 printf("Enter the number of rows: ");
 scanf("%d", &rows);
 //printf("\nEnter the character: ");
// scanf("%c", &crctr);
 for(i=1;i<=rows;i++)
 {
     for(j=1;j<=i;j++)
     {
         printf(" %c ",crctr);
     }
     printf("\n");
      crctr++;
 }
}
