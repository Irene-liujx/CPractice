#include <stdio.h>
#include<stdlib.h>
int main() {
	int n;
	for (n = 1000; n <= 2000; n++) {
		if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
			printf("%d  ", n);
		}
	}
	system("pause");
	return 0;
}