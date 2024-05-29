#include <stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    long long int ar[row][col];

   
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%lld",&ar[i][j]);
        }
      
    }
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%lld ",ar[row-1][j]);
         
        }
    printf("\n");
        break;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%lld ",ar[i][col-1]);
            break;
        }
    
    }
   
     
    
 return 0;
}
