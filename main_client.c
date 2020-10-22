#include "main.h"
#include <stdio.h>
#include <stdint.h>

/* --- declaración de variables --- */

int resp_menu; /* --> Variable para entrar a los servicios */
int option_divisa; /* --> Variable para entrar a los servicios del primer servicio */
double exchange_coin; /* --> Variable para almacenar moneda a cambiar */
double result_divisa; /* --> Variable para obtener resultado del servidor */

void
agenda_1(char *host)
{
	CLIENT *clnt;
	double  *result_1;
	struct exchange_service  exchange_virtual_1_arg;
	char  *result_2;
	struct virtual_service  virtual_notebook_1_arg;
	char  *result_3;
	struct calendary_service  calendary_virtual_1_arg;
	char  *result_4;
	struct postit_service  postit_virtual_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, AGENDA, AGENDA_VER, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	switch (resp_menu)
	{
	case 1:
		/* --- asignamos las variables de entrada --- */
		exchange_virtual_1_arg.option_menu = option_divisa;
		exchange_virtual_1_arg.exchange_coin = exchange_coin;

		result_1 = exchange_virtual_1(&exchange_virtual_1_arg, clnt);
		if (result_1 == (double *) NULL) {
			clnt_perror (clnt, "call failed");
		}

		/* --- obtenemos el resultado --- */
		result_divisa = *result_1;

	break;

	case 2:
		result_2 = virtual_notebook_1(&virtual_notebook_1_arg, clnt);
		if (result_2 == (char *) NULL) {
			clnt_perror (clnt, "call failed");
		}
	break;

	case 3:
		result_3 = calendary_virtual_1(&calendary_virtual_1_arg, clnt);
		if (result_3 == (char *) NULL) {
			clnt_perror (clnt, "call failed");
		}
	break;

	default:
		result_4 = postit_virtual_1(&postit_virtual_1_arg, clnt);
		if (result_4 == (char *) NULL) {
			clnt_perror (clnt, "call failed");
		}
	break;
	}
	
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];

	// --- Interfaz para usuario ---
	do
	{
		printf("--- PriorityThings ---\n");
		printf("--- Agenda Electrónica ---\n");
		printf("--- Menu principal ---\n");
		printf("(1) --> Convertidor de divisas\n");
		printf("(2) --> Agenda electrónica\n");
		printf("(3) --> Calendario\n");
		printf("(4) --> Post-it\n");
		printf("(5) --> Salir\n");

		do
		{
			printf("\nIngrese su respuesta: ");
			scanf("%i",&resp_menu);
		} while (resp_menu < 1 || resp_menu > 5);
				
		switch (resp_menu)
		{
		case 1:
		/* --- PRIMER SERVICIO --- */
			do
			{
				fflush(stdin);
				system("clear");
				printf("--- Menu divisas ---\n");
				printf("(1) --> CLP to USD\n");
				printf("(2) --> CLP to EUR\n");
				printf("(3) --> CLP to YEN\n");
				printf("(4) --> CLP to LIB\n");
				printf("(5) --> CLP to REAL\n");
				printf("(6) --> CLP to ARS\n");
				printf("(7) --> Volver al menu principal\n");

				do
				{
					printf("Ingrese su opción: ");
					scanf("%i", &option_divisa);
					agenda_1(host);
				} while (option_divisa < 1 || option_divisa > 7);
				
				switch (option_divisa)
				{
				case 1:
					/* -- pesos chilenos a dolar */
					fflush(stdin);
					system("clear");
					printf("-- CLP to USD--\n");
					printf("Cantidad ($): ");
					scanf("%lf", &exchange_coin);
					agenda_1(host);
					printf("El resultado es: %lf", result_divisa);
					printf("\n");
					printf("Oprima enter para salir\n");
					getchar();
					getchar();
				break;
				
				case 2:
					/* -- pesos chilenos a euro */
					fflush(stdin);
					system("clear");
					printf("-- CLP to EUR --\n");
					printf("Cantidad ($): ");
					scanf("%lf", &exchange_coin);
					agenda_1(host);
					printf("El resultado es: %lf", result_divisa);
					printf("\n");
					printf("Oprima enter para salir\n");
					getchar();
					getchar();
				break;

				case 3:
					/* -- pesos chilenos a yen */
					fflush(stdin);
					system("clear");
					printf("-- CLP to YEN --\n");
					printf("Cantidad ($): ");
					scanf("%lf", &exchange_coin);
					agenda_1(host);
					printf("El resultado es: %lf", result_divisa);
					printf("\n");
					printf("Oprima enter para salir\n");
					getchar();
					getchar();
				break;

				case 4:
					/* -- pesos chilenos a libra */
					fflush(stdin);
					system("clear");
					printf("-- CLP to LIB --\n");
					printf("Cantidad ($): ");
					scanf("%lf", &exchange_coin);
					agenda_1(host);
					printf("El resultado es: %lf", result_divisa);
					printf("\n");
					printf("Oprima enter para salir\n");
					getchar();
					getchar();
				break;

				case 5:
					/* -- pesos chilenos a real */
					fflush(stdin);
					system("clear");
					printf("-- CLP to REAL --\n");
					printf("Cantidad ($): ");
					scanf("%lf", &exchange_coin);
					agenda_1(host);
					printf("El resultado es: %lf", result_divisa);
					printf("\n");
					printf("Oprima enter para salir\n");
					getchar();
					getchar();
				break;

				default:
					/* -- pesos chilenos a peso argentino */
					fflush(stdin);
					system("clear");
					printf("-- CLP to ARG --\n");
					printf("Cantidad ($): ");
					scanf("%lf", &exchange_coin);
					agenda_1(host);
					printf("El resultado es: %lf", result_divisa);
					printf("\n");
					printf("Oprima enter para salir\n");
					getchar();
					getchar();
				break;
				}
				
			} while (option_divisa != 7);
		break;
		
		case 2:
		/* --- SEGUNDO SERVICIO --- */
		break;

		case 3:
		/* --- TERCER SERVICIO --- */
		break;

		default:
		/* --- CUARTO SERVICIO --- */
			break;
		}
	} while (resp_menu != 5);

	printf("\n");
	printf("Hasta luego, vuelva pronto!\n");
	printf("\n");

exit (0);
}
