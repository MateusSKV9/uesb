#include <stdio.h>
#include <math.h>

int main () {
	float pr1, pr2, media, mediaT, mediaR;
	
	printf("Digite a pr1: ");
	scanf(" %f", &pr1);
	printf("Digite a pr2: ");
	scanf(" %f", &pr2);
	
	media = (pr1+pr2)/2;
	mediaT = (int)((media-0.5)+0.001);
	mediaR = (int)(media+0.001);
	
	printf("Media truncada: %.2f \n", mediaT);
	printf("Media arredondada: %.2f", mediaR);
}
