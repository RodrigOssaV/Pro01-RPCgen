#include "struct.h"

program AGENDA {
    version AGENDA_VER{
        double exchange_virtual(struct exchange_service) = 1;
        char virtual_notebook(struct virtual_service) = 2;
        char calendary_virtual(struct calendary_service) = 3;
        char postit_virtual(struct postit_service) = 4;
    } = 1;
} = 1;

