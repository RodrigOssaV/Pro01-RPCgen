#include "main.h"
#include <stdio.h>

double *
exchange_virtual_1_svc(struct exchange_service *argp, struct svc_req *rqstp)
{
	static double  result;

	int option_menu;
	double exchange_coin;

	option_menu = argp->option_menu;
	exchange_coin = argp->exchange_coin;

	switch (option_menu)
	{
	case 1:
		result = exchange_coin*(0.0013);
	break;

	case 2:
		result = exchange_coin*(0.0011);
	break;

	case 3:
		result = exchange_coin*(0.013);
	break;

	case 4:
		result = exchange_coin*(0.00097);
	break;

	case 5:
		result = exchange_coin*(0.0072);
	break;
	
	default:
		result = exchange_coin*(0.0099);
	break;
	}

	return &result;
}

char *
virtual_notebook_1_svc(struct virtual_service *argp, struct svc_req *rqstp)
{
	static char  result;

	int option_menu;
	char name[40];
	char lastname[40];

	FILE* fichero;

	option_menu = argp->option_menu;
	name[40] = argp->name[40];
	lastname[40] = argp->lastname[40];

	switch (option_menu)
	{
	case 1:
		/* --- agregar un contacto --- */
		fichero = fopen("agendavirtual.txt", "wt");
		fputs(name,fichero);
		fputs(lastname,fichero);
		fclose(fichero);
	break;
	
	case 2:
		/* --- Modificar un contacto --- */
	break;

	case 3:
		/* --- Buscar un contacto --- */
	break;

	case 4:
		/* --- eliminar un contacto --- */
	break;
	}

	return &result;
}

char *
calendary_virtual_1_svc(struct calendary_service *argp, struct svc_req *rqstp)
{
	static char  result;

	/*
	 * insert server code here
	 */

	return &result;
}

char *
postit_virtual_1_svc(struct postit_service *argp, struct svc_req *rqstp)
{
	static char  result;

	/*
	 * insert server code here
	 */

	return &result;
}
