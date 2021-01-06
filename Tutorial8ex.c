#include<stdio.h>
/*print a muliplication table oif a number entered by the user in pretty form

example:
input
enter the number you want multilication table of:
0
output:
table of 6:
*/
// int main(){
// int a ; 
// printf("enter the value you want to know the table \n",a);
// scanf("%d",&a);
// printf("the table of %d is\n",a);

// for(int n=1;n<=10;n++){
//     printf(" %d x %d = %d\n", a,n,a*n);
// }
//        return 0;
// }
int main(){
int rows , colloms ;

printf("Enter the number of rows you want\n");
scanf("%d",&rows);
 printf("Enter the number of colloms you want \n");
 scanf("%d",&colloms);
for(int n=1; n<=rows;n++);
{
  for(int j=1;j<=colloms;j++){
      printf("* ");
  }
  printf("\n");
}

return 0;
}