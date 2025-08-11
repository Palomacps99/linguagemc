#include <stdio.h>
#include <stdlib.h>

int main(){
system("Clear");
int vet1[10] = {10,8,7,16,89,12,55,37,61,48};

int vet2[7] = {0,12,8,30,49,78,61};
int i, j;
for (i = 0; i < 10; i++){
    for(j = 0 ; j < 7 ; j++){
        if(vet1[i] == vet2[j]){
            printf("%d\n" ,vet1[i]);       
        }
    }
}
return 0;
}