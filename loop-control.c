/* 
 * 题目：数字迷宫遍历
 * 要求：
 * 1. 遍历1-50的数字
 * 2. 遇到能被3整除的数时跳过不输出（continue）
 * 3. 遇到能被7整除的数时，输出"通道开启：X"（X为该数字）
 * 4. 遇到同时能被3和5整除的数时，输出"发现宝藏：X"并立即结束循环（break）
 * 5. 其他数字正常输出
 * 
 * 预期学习点：continue、break、条件判断的综合运用
 */

#include <stdio.h>

int main() {
    int i;
    
    for(i = 1; i <= 50; i++) {
        // 你的代码从这里开始写
		if(i % 3 == 0 && i % 5 == 0){
			printf("发现宝藏：%d\n", i);
			break;
		
		}
		else if(i % 3 == 0){
			continue;
		}
		else if(i % 7 == 0){
			printf("通道开启：%d\n", i);
			continue;
		}
        printf("%d\n", i);
    }
    
    return 0;
}