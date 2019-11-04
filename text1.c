#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void swap(int* x,int* y) {
	int tmp = *x;
	     *x = *y;
	     *y = tmp;
}
int main( ){
	int a;
	int b;
	printf("请输入两个数字：\n");
	scanf("%d,%d", &a,&b);
	swap(&a,&b);
	printf("交换后:a= %d ， b= %d\n", a,b);
   system("pause");
   return 0;
 }