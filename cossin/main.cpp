#include <iostream>
#include <math.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define PI 3.1415926
int main(int argc, char *argv[]) {
	unsigned int n;
	scanf("%d",&n);
	if(n<360){
		double cosx,sinx;
		double x=n/180*PI;
		cosx=cos(x);
		sinx=sin(x);
		printf("%lf %lf\n",cosx,sinx);
	}
  	return 0;
}
