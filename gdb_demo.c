#include <stdio.h>

void fun(int a, int b) {
	a=a+3;
	b=b+8;
}

int main() {

	int i=0;
	int j=i+1;
        int k=j+10;
        k++;
        j+=5;
        fun(j,k);
	return 0;
}
