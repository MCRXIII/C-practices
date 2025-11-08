#include <stdio.h>

#define ROWS 10

int main(){
	int i, j;
	int YHtri[ROWS][ROWS];

	// 初始化数组
    for(i = 0; i < ROWS; i++) {       //行数i，遍历0 ~ ROWS-1，共ROWS行
        for(j = 0; j < ROWS; j++) {   //列数j，遍历0 ~ ROWS-1，共ROWS列
            YHtri[i][j] = 0;
        }
    }

	//填充杨辉三角
	for (i = 0; i < ROWS; i++){
		for (j = 0; j < ROWS; j++){
			if (j == 0 || j == i){
				YHtri[i][j] = 1;
			}
			else{
				YHtri[i][j] = YHtri[i-1][j-1] + YHtri[i-1][j];
			}
		}
	}

	//打印杨辉三角		
	for (i = 0; i < ROWS; i++){                    //行数i，遍历0 ~ ROWS-1，共ROWS行
		for (j = 0; j <= (ROWS- i - 1); j++){  
			//打印前导空格（ROWS-当前列的列数）
			printf("  ");
		}

		for (j = 0; j <= i; j++){                  //列数j，遍历0 ~ i，共i+1列
			printf("%4d ", YHtri[i][j]);
		}
		printf("\n");
	}
}

/*限制：在行数较大时无法实现完全居中对齐。*/