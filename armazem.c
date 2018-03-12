#include "armazem.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * funcoes do armazem
 */
/* alinea b) */
armazem* armazem_novo(int comprimento, int altura)
{
	armazem *new_arm = malloc(sizeof(*new_arm));

	if(new_arm == NULL)
		return NULL;
	
	new_arm->altura = altura;
	new_arm->comprimento = comprimento;
	new_arm->contentores = NULL;

	return new_arm;
}

/* alinea c) */
int armazem_vazio(armazem* armz)
{	
	/* Comfirma se a altura e comprimento do armazem é igual a zero ( armazem tá vazio ) */
	if(armz->altura == 0 && armz->comprimento == 0)  /* <--- acho que isto esta mal*/
	{
		return 1;
	}

	else
		return 0;
}

/* alinea d) */
int armazem_cheio(armazem* armz)
{	

	/* devolve nao cheio */
	return 0;
}

/* alinea e) */
int armazenar_contentor(armazem* armz, contentor* contr)
{
	/* devolve nao ha' espaco */
	return 0;
}

/* alinea f) */
contentor* expedir_contentor(armazem* armz)
{
	return NULL;
}
