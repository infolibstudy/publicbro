#include <stdlib.h>

int index_last_zero(int arr[],int kolvoel){
    for (int i=kolvoel-1; i>=0;i--){
        if (arr[i]==0){
            return i;
            break;
        }
    }
    return -1;// те данные некорректны 
   }

