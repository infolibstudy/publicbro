#include <stdlib.h>

int index_first_zero(int arr[],int kolvoel){
    for (int i = 0; i<kolvoel;i++){
        if (arr[i]==0){
            return i;
            break;
        }
        }
    return -1;// те данные некорректны
    }

