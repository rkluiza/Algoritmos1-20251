/*

Faça um programa que leia a nota do Grau A e do Grau B do aluno e calcule a média final conforme
as regras da Unisinos. Imprima a média final na tela e diga se o aluno passou por média ou se ficou
em recuperação (grau C). Se o aluno ficou em recuperação, pergunte se ele quer substituir o Grau
A ou o Grau B (ele deve digitar ‘a’ ou ‘b’). Leia a nota do Grau C, recalcule a média de acordo com o
grau substituído e imprima na tela o resultado, informando se ele foi aprovado ou reprovado.

*/

#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

	float grauA, grauB, grauC, nota, nota2;
	int rec;
	grauA=11;
    grauB=11;
    grauC=11;
    rec = 3;

	while(grauA>10 || grauA<0) {
		printf("Por favor, digite a sua nota do Grau A: ");
		scanf("%f", &grauA);
	}
    while(grauB>10 || grauB<0) {
	    printf("Agora, digite a sua nota do Grau B: ");
	    scanf("%f", &grauB);
    }
    
	nota = (grauA/3)+(grauB/3 *2);

	printf("Sua nota foi %.2f \n", nota);
	if(nota>=6) {
		printf("Você foi aprovado!");
	} else {
	    
	    while(rec != 1 && rec != 2){
		    printf("Você foi reprovado, deseja substituir a nota do Grau A ou do Grau B?  \n");
		    printf("1 - Grau A  2 - Grau B\n");
	    	scanf("%i", &rec);
	    }
	    
		while(grauC>10 || grauC<0) {
		    printf("Digite agora, a sua nota do Grau C: ");
		    scanf("%f", &grauC);
		}
		
		if (rec==1) {
			nota2 = (grauC/3)+(grauB/3 *2);
			printf("Sua nota foi %.2f", nota2);
		} else if (rec==2) {
			nota2 = (grauA/3)+(grauC/3 *2);
			printf("Sua nota foi %.2f", nota2);
		}

		if(nota2>=6) {
			printf("VocC* foi aprovado!");
		} else {
			printf("VocC* foi reprovado");
		}

	}

	return 0;
}
