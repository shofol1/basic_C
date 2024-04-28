#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

   for(int j=0;j<n;j++){
     char w[10000];
        scanf("%s", w); 
        int cCount = 0, sCount = 0, dCount = 0;

        for (int i = 0; w[i] != '\0'; i++) {
            if (w[i] >= 'A' && w[i] <= 'Z')
                cCount++;
            else if (w[i] >= 'a' && w[i] <= 'z')
                sCount++;
            else if (w[i] >= '0' && w[i] <= '9')
                dCount++;
        }
        printf("%d %d %d\n", cCount, sCount, dCount);
   }

    return 0;
}
