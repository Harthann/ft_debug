#ifndef DBG_H
# define DBG_H

/*===================*/
/*=		INCLUDES	=*/
/*===================*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*================*/
/*=		MASK	=*/
/*================*/

#define DBG_INT	0b00000001

/*=======================*/
/*=		PROTOTYPE		=*/
/*=======================*/

int		get_dlvl(void);

/*
 *	Comment for ... well documentation
 */
void		dbg_dump_bytes(const void *data, size_t size);



#endif
