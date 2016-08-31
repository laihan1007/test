#include <stdio.h>
main() {
    int i, j, t;
    int a[5] = { 3, 7, 2, 8, 5 };
    for (j = 0; j < 5; j++)
        for (i = 0; i < 5 - j - 1; i++)
           //如果逆序，则交换
  if(a[i]>a[i+1]){
            	t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t; 
            }
    printf("排序后:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
re
}
