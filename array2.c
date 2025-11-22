# include <stdio.h>
# define MAX 10
int main(){
	int n = 0;
	int matrix[MAX][MAX];
	int i,j = 0;
	int top, bottom, left, right;
	scanf("%d", &n);
	printf("----------\n");

	// 初始化边界
	top = 0;
	left = 0;
	bottom = n-1;
	right = n-1;

	// 填充数组
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%d", &matrix[i][j]);
		}
	}

	while(left <= right && top <= bottom){
		// 从左到右（上边界）
		for(i = left; i <= right; i++)
		printf("%d ", matrix[top][i]);
		top++;
		// 从上到下（右边界）
		for(i = top; i <= bottom; i++)
		printf("%d ", matrix[i][right]);
		right--;
		//从右到左（下边界）
		for(i=right; i >= left; i--)
		printf("%d ", matrix[bottom][i]);
		bottom--;
		// 从下到上（左边界）
		for(i=bottom; i >= top; i--)
		printf("%d ", matrix[i][left]);
		left++;
		
	}

	return 0;
}        