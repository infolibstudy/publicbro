#include <stdlib.h>
#include "index_first_zero.h"
#include "index_last_zero.h"

int sum_before_and_after(int arr[], int kolvoel){
    int s1=index_first_zero(arr,kolvoel);
    int s2=index_last_zero(arr,kolvoel);
    int res=0;
    for (int i=0; i<s1; i++) {
        res+=abs(arr[i]);
        }
  	
    for (int i=s2; i<kolvoel; i++) {
        res+=abs(arr[i]);
        }
    return res;
}    

