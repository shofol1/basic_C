#include <stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    long long int ar[row][col];
    int flag=1;
   
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%lld",&ar[i][j]);
        }
      
    }
     if(row!=col){
        flag=0;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if((i==j || i+j == row-1) && ( ar[i][j] != 1))
{
flag = 0;
break;
}
else if(i!=j && i+j!=row-1 && ar[i][j] != 0)
{
flag = 0;
break;
}
            
        }

    }
    if(flag==1){
        printf("YES\n");
    }else{
         printf("NO\n");
    }
 return 0;
}
