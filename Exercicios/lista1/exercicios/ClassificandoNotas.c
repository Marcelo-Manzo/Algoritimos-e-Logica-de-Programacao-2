#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	double nota;
	scanf("%lf",&nota);
	if(nota>7)
	{
	    printf("bolinha verde");
	}
	else if(nota>=5)
	{
	    printf("bolinha amarela");
	}
	else{
	    printf("bolinha vermelha");
	}
	return 0;
}