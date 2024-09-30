#include <stdlib.h>
#include "index_first_zero.h"
#include "index_last_zero.h"

int sum_between(int arr[], int kolvoel){
    int s1=index_first_zero(arr,kolvoel);
    int s2=index_last_zero(arr,kolvoel);
    int res=0;
    for (s1;s1<=s2;s1++){
        res+=abs(arr[s1]);
        }
    return res;
}
