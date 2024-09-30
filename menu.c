#include <stdio.h>
#include "index_first_zero.h"
#include "index_last_zero.h"
#include "sum_before_and_after.h"
#include "sum_between.h"

int main() {
    int mode;
    scanf("%d", &mode);
    int arr[100];
    int i = 0;
  while (getchar()!='\n'){
      scanf("%d", &arr[i]);
      i++;
      }
      int dlina = i;// число эл, длина
    // for (i=0;i<dlina;i++){
    //   printf("%d ", arr[i]);
  switch (mode){
      case 0:
        printf("%d\n",index_first_zero(arr,dlina));
        break;
      case 1:
      	printf("%d\n", index_last_zero(arr,dlina));
        break;
      case 2:
      	printf("%d\n", sum_between(arr,dlina));
        break;
      case 3:
      	printf("%d\n", sum_before_and_after(arr,dlina));
        break;
      default:
        printf("Данные некорректны");

    }

  
    return 0;
}
