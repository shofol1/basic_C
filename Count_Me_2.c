#include <stdio.h>
int main()
{
    char w[1001];
    scanf("%s",w);
    int count=0;
    for (int i = 0; w[i] != '\0'; i++)
    {
      if(w[i]>='a' && w[i]<='z' || w[i]>='A' && w[i]<='Z'){
        if(w[i] != 'a' && w[i] != 'e' && w[i] != 'i' && w[i] != 'o' && w[i] != 'u' &&
            w[i] != 'A' && w[i] != 'E' && w[i] != 'I' && w[i] != 'O' && w[i] != 'U'){
        count++;
      }
      }
    }
    printf("%d\n",count);
 return 0;
}
