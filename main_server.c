#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	int option_agenda;
	char name[40];
	char lastname[40];
    char address[40];
    char mail[40];
	double phone_number;

	option_agenda = argp->option_menu;
	phone_number = argp->phone_user;
	strcpy(argp->name, name);
	strcpy(argp->lastname, lastname);
	strcpy(argp->address, address);
	strcpy(argp->mail, mail);

	FILE *fichero;
	
	switch (option_agenda)
	{
	case 1:
		/* --- agregar un contacto --- */
		fichero = fopen("agendavirtual.txt","w");
		fputs(name,fichero);
		fputs(lastname,fichero);
		fputs(address,fichero);
		fputs(mail,fichero);
		fprintf(fichero,"%lf",phone_number);
		fclose(fichero);
		result = *name;
		return (&result);
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

	int year, month;
	year = argp->year;
	month = argp->month;


	return &result;
}

char *
postit_virtual_1_svc(struct postit_service *argp, struct svc_req *rqstp)
{
	static char  result;

	int option_menu;
	option_menu = argp->option_menu;
	char post_it[50];

	strcpy(argp->post_it, post_it);

	FILE *ficheroPostit;


	switch (option_menu)
	{
	case 1:
		/* Agregar post-it */
		ficheroPostit = fopen("agenda_postit.txt","w");
		fputs(post_it, ficheroPostit);
		fclose(ficheroPostit);
		result = *post_it;
		return (&result);
	break;
	
	case 2:
		/* Mostrar post-it */
		ficheroPostit = fopen("agenda_postit.txt","r");
		fgets(argp->post_it,50,ficheroPostit);
		fclose(ficheroPostit);
		result = *post_it;
		return(&result);
	break;
	}

	return &result;
}
