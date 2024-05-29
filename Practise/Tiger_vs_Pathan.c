#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
   for(int i=0;i<t;i++){
     int n,pCount=0,tCount=0;
      scanf("%d",&n);
      char s[n];
      scanf("%s",s);
      for(int i=0;i<n;i++){
        if(s[i]=='T'){
            tCount++;
          
        }else{
            pCount++;
        }
      }
    if(pCount>tCount){
    printf("Pathaan\n");
   }else if(tCount>pCount){
    printf("Tiger\n");
   }else{
    printf("Draw\n");
   }
   }

 return 0;
}
