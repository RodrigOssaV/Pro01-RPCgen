/* ----- Primer servicio, convertidor de divisas */

struct exchange_service
{
    int option_menu; /* --> Variable para ingresar al sub-menu divisas */
    double exchange_coin; /* --> Variable ingreso cliente */
};

/* ----- Segundo servicio, agenda electrónica */

struct virtual_service
{
    int option_menu; /* --> Variable para ingresar al sub-menu agenda electrónica */
    double phone_user; /* --> Variable ingreso teléfono cliente */
    char name[40]; /* --> Variable ingreso nombre cliente */
    char lastname[40]; /* --> Variable ingreso apellido cliente */
    char address[40]; /* --> Variable ingreso dirección cliente */
    char mail[40]; /* --> Variable ingreso mail cliente */
};

/* ----- Tercer servicio, calendario */

struct calendary_service
{
    int year; /* --> Variable ingreso año cliente */
    int month; /* --> Variable ingreso mes cliente */
};

/* ----- Cuarto servicio, post-it */

struct postit_service
{
    int option_menu; /* --> Variable para ingresar al sub-menu post-it */
    char post_it[50]; /* --> Variable ingreso recordatorio cliente */
};



