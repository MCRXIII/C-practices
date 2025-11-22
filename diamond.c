#include <stdio.h>
int main(){
	int i=0, j=0, k=0;
	int n=0;
	printf("Input n:");
	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		//打印前导空格
		for(j = n-i; j > 0; j--){
			printf(" ");
		}
		//输出上半正三角
		for(j = 1; j <= 2*i-1; j++){			   // 总宽度为2*i-1
			if(j == 1 || j == 2*i-1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}

	for(i = n-1; i >= 1; i--){
		//打印前导空格
		for(j = 0; j < n-i; j++){
			printf(" ");
		}
		//输出下半倒三角
		for(j = 2*i-1; j >= 1; j--){
			if(j == 1 || j == 2*i-1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}


	return 0;
}