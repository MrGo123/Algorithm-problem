#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%.3lf\n",(double)(a+b+c)/3);
	return 0;
}
