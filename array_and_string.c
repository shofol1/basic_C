#include <stdio.h>
#include <string.h>

void play(char *ar){
    *ar='G';
    *(ar+1)='D';

}
int main()
{
    char name[20]="shafol";
    play(name);
    for(int i=0;i<strlen(name);i++){
        printf("%c",name[i]);
    }
 
 return 0;
}
