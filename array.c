# include <stdio.h>
int matrix[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
int main(){
	int i, j, k, found = 0;
    int max_val, col_index, is_min;
	for (i=0; i<3; i++){
		
		// 1.找每行的最大值，记录其列位置col_index
		int max_val = matrix[i][0];
		int col_index = 0;
		for (j=1; j<3; j++){
			if(matrix[i][j] > max_val){
				max_val = matrix[i][j];
				col_index = j;
			}				
		}
	
		// 2.检查它是否是所在列的最小值	
			
		// 在找到行最大值后，检查所有等于最大值的列
		for (j=0; j<3; j++){
			if(matrix[i][j] == max_val){
				is_min = 1;
			// 对每个最大值位置都检查是否为列最小
				for(k=0; k<3; k++){
					if(matrix[k][j] < max_val){
						is_min = 0;
						break;
					}
				}
			}
			// 3.输出结果
			if(is_min){
				found = 1;
				printf("spot=%d, (%d, %d)\n", max_val, i, j);
			}
		}
		
				
		if(!found){
			printf("-1");
		}

	}
	return 0;
}