/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "main.h"

bool_t
xdr_exchange_service (XDR *xdrs, exchange_service *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->option_menu))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->exchange_coin))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_virtual_service (XDR *xdrs, virtual_service *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->option_menu))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->phone_user))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->name, 40,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->lastname, 40,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->address, 40,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->mail, 40,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_calendary_service (XDR *xdrs, calendary_service *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->year))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->month))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_postit_service (XDR *xdrs, postit_service *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->option_menu))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->post_it, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}
