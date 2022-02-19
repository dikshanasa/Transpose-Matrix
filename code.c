#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], n;
  scanf("%d", &n);
  


  for (int i = 0; i < n; ++i)
  for (int j = 0; j < n; ++j) {
    
    scanf("%d", &a[i][j]);
  }



  
  for (int i = 0; i < n; ++i)
  for (int j = 0; j < n; ++j) {
    transpose[j][i] = a[i][j];
  }

  
 
  for (int i = 0; i < n; ++i)
  for (int j = 0; j < n; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == n - 1)
    printf("\n");
  }
  return 0;
}
