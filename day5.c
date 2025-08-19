#include <stdio.h>
// Func to find leaders in the array
void findLeaders(int arr[],int n){
  int leaders[n];
  int count = 0;
  int max_from_right = arr[n-1];
  leaders[count++]=max_from_right;

  for(int i = n-2; i>= 0;i--) {
      if (arr[i] >=max_from_right) {
          max_from_right = arr[i];
          leaders[count++] = arr[i];
      }
  }
    printf("Leaders: ");
    for (int i= count - 1; i>=0; i--) {
        printf("%d", leaders[i]);
    }
printf("/n");
}
// Driver code
int main() {
  int arr1[]= {16,17,4,3,5,2};
  int n1 = sizeof(arr1)/sizeof(arr1[0]);
  findLeaders(arr1, n1);

  int arr2[]= {1,2,3,4,0};
  int n2 = sizeof(arr2)/sizeof(arr2[0]);
  findLeaders(arr2, n2);

  int arr3[]= {7,10,4,10,6,5,2};
  int n3 = sizeof(arr3)/sizeof(arr3[0]);
  findLeaders(arr3, n3);

  int arr4[]= {5};
  int n4 = sizeof(arr4)/sizeof(arr4[0]);
  findLeaders(arr4, n4);

  int arr5[]= {100,50,20,10};
  int n5 = sizeof(arr5)/sizeof(arr5[0]);
  findLeaders(arr5, n5);

  return 0;
}

  
