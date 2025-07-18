#include <stdio.h>

int main () {
	float diagMenor, diagMaior, area;
	
	printf("Digite a diagonal menor: ");
	scanf(" %f", &diagMenor);
	printf("Digite a diagonal maior: ");
	scanf(" %f", &diagMaior);
	
	area = (diagMenor*diagMaior)/2;
	
	printf("Area do losango: %.2f", area);
}
