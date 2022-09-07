/**
 * @author: Kenton
 * @description ${description}
 * @date: 2022/9/7 21:44
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void){

   /* int a = 10;
    printf("%p",&a);*/

    int arr[] = {3,4,6,7,8,22,99,43,0,56};

    // 计算数组元素个数
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp = 0;

   /* size_t 是一些C/C++标准在stddef.h中定义的
    size_t 类型表示C中任何对象所能达到的最大长度，它是无符号整数。
    size_t在32位系统上定义为 unsigned int，也就是32位无符号整型。
    在64位系统上定义为 unsigned long ，也就是64位无符号整形。
    size_t 的目的是提供一种可移植的方法来声明与系统中可寻址的内存区域一致的长度。*/

   // 冒泡排序 时间复杂度为O(n^2) 将N个数进行N-1轮排序
   // i从数组起始下标到终点下标
   // TODO 从小到大排序
    for(size_t i = 0;i < n - 1;i++){
        // 冒泡排序一次遍历就能找到最大或最小的数字 所以最后面的不用比较 也就是n-1-i的原因
        for(size_t j = 0;j < n - 1 - i;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(size_t i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    int tempTwo = 0;
    // TODO 从大到小排序
    for(size_t i = n - 1;i > 0;i--){
        for(size_t j = n - 1;j > 0;j--){
            if(arr[j] > arr[j-1]){
                tempTwo = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tempTwo;
            }
        }
    }
    for(size_t i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }
}

