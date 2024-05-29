#include <stdio.h>
int main()
{
    int n,k=1;
    scanf("%d",&n);
   int line = (n+1)/2 + 5;
 int s = line - 1;
    

   for(int i=0;i<line;i++){
        for(int j=0;j<s;j++){
            printf(" ");
        }
        for(int j=0;j<k;j++){
            printf("*");
        }
        k+=2;
        s--;
        printf("\n");
    }
    s = ((line*2)-1-n)/2;

     for(int j=0;j<5;j++){
           for(int i=0;i<s;i++){
             printf(" ");
           }
           for(int i=0;i<n;i++){
             printf("*");
           }
            printf("\n");
        }
 return 0;
}
