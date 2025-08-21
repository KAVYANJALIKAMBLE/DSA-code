# include<stdio.h>
//Func to calculate to the total trapped water
int trap(int*height, int heightSize){
  if (heightSize<3)return 0;
// Less than 3 bars can not trap water
  int left = 0;
  int right = heightSize-1;
  int left_max = 0,right_max =0;
  int trapped_water=0;

  while (left<right){
    if(height[left]<height[right]){
      if ( height[left]>=height[right]){
          left_max=height[left];
      } else{
          trapped_water+=left_max-height[left];
      }
      left++;
    } else{
        if (height[right]>=right_max){
            right_max=height[right];
        } else{
            trapped_water+=right_max-height[right];
        }
        right--;
    }
  }
  return trapped_water;
}
int main() {
  //Test cases
  int hight1[]={0,1,0,2,1,0,1,3,2,1,2,1};
  int hight2[]={4,2,0,3,2,5};
  int hight3[]={1,1,1};
  int hight4[]={5};
  int hight5[]={2,0,2};

  printf("Trapped water for hight1:%d\n",trap(hight1,sizeof(hight1)/sizeof(hight1[0]))); //6
  printf("Trapped water for hight1:%d\n",trap(hight2,sizeof(hight2)/sizeof(hight1[0]))); //9
  printf("Trapped water for hight1:%d\n",trap(hight3,sizeof(hight3)/sizeof(hight1[0]))); //0
  printf("Trapped water for hight1:%d\n",trap(hight4,sizeof(hight4)/sizeof(hight1[0]))); //0
  printf("Trapped water for hight1:%d\n",trap(hight5,sizeof(hight5)/sizeof(hight1[0]))); //2

  return 0;
}
