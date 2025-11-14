// YH+, better version of Yanghui triangle(a.k.a. pascar triangle)
// use only 1 array, to store the current line
// 终极优化——只用一个数组，从后往前更新
#include <stdio.h>
int main() {
    int n = 5;
    int row[100] = {1};  // 初始化第一行
    int i = 0;
	int j = 0;
    for(i = 0; i < n; i++) {
		// update back to front, to prevent the cover of updated value
        // 从后往前更新，避免覆盖
        for(j = i; j > 0; j--) {
            row[j] = row[j] + row[j-1];
        }
        row[i] = 1;  // 每行最后一个元素
        
        // 打印当前行
        for(j = 0; j <= i; j++) {
            printf("%d ", row[j]);
        }
        printf("\n");
    }
}