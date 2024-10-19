#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	for (int num = 0; num<=200; num++){
		if (num % 2 != 0){
			printf("\nNumeros impares: %i", num);
		}
	}
}
