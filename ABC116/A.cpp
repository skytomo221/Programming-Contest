#include <stdio.h>
#include <math.h>

int main() {
	int a,b,c;
	double S, s;
	scanf("%d %d %d",&a,&b,&c);
	s = (a+b+c)/2;
	printf("%d\n",(int)sqrt(s*(s-a)*(s-b)*(s-c)));
	return 0;
}
