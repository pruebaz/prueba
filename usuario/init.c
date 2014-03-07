/*
 * usuario/init.c
 *
 *  Minikernel. Versi�n 1.0
 *
 *  Fernando P�rez Costoya
 *
 */

/* Programa inicial que arranca el S.O. S�lo se ejecutar�n los programas
   que se incluyan aqu�, que, evidentemente, pueden ejecutar otros
   programas...
*/

#include "servicios.h"

int main(){

	printf("init: comienza\n");

	if (crear_proceso("simplon")<0)
                printf("Error creando simplon\n");
	
	get_pid();
	


	printf("init: termina\n");
	return 0; 
}
