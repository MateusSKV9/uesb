#include <stdio.h>

int main () {
	int horasI, minI, horasF, minF, totalH, totalM;
	
	printf("Digite as horas de inicio: ");
	scanf(" %d", &horasI);
	printf("Digite os minutos de inicio: ");
	scanf(" %d", &minI);
	
	printf("Digite as horas de termino: ");
	scanf(" %d", &horasF);
	printf("Digite os minutos de termino: ");
	scanf(" %d", &minF);
	
	if(totalM>=60) {
		totalH+=totalM/60;
		totalM-=60*totalM;
	}
	
	if((horasI >= horasF) && (minI>=minF)) {
		totalM = (60-minI)+minF;
		
		if(horasI==horasF) {
			totalH = (24-horasI)+horasF-1;
		} else {
			totalH = (24-horasI)+horasF-1;
		}
		
		if(((60-minI)+minF)==60) {
			totalH++;
			totalM=0;
		}
	} else {
		totalH = horasF - horasI;
		totalM = minF-minI;
	}
	
	printf("Duracao: %d:%d\n", totalH, totalM);	
	
	system("PAUSE");
	return 0;
}
