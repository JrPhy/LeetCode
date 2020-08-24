#include <stdio.h>
#include <stdlib.h>

int removeDuplicatesII(int* nums, int numsSize){
    if(numsSize <= 2) return numsSize;
    int i, n; //for loop
    int j = nums[0];
    int count = 1;  //幾組重複出現兩次以下個組數
    int m = 1;//同一個數字重複幾次
    int k = 1;//記錄下重複出現第三次的位置
    for(i = 1; i < numsSize; i++)
    {
        if (j != nums[i])
        {
            nums[count] = nums[i];
            count++;
            j = nums[i];
            k++;
            m = 1;
        }
        else
        {
            m++;
            if (m == 2)
            {
                nums[count] = nums[i];
                count++;
            }
            else if(m == 3&& i+1 < numsSize)
            {
                nums[i] = nums[i+1];
            }
        }
    }
    return count;
}

int main(){
    int nums[] = {1,1,1,2,3,3}, numsSize = 6;
    int i, k;
    int an, an1, an2;
    k = removeDuplicates(nums, numsSize);
    printf("%d\n",k);
    for(i=0; i<k; i++)
    {
        printf("%d  ",nums[i]);
    }
}
