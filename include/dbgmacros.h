#ifndef DBGMACROS_H
# define DBGMACROS_H

/*===================*/
/*=		INCLUDES	=*/
/*===================*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


/*===================*/
/*=		MACROS		=*/
/*===================*/

#if defined(DEBUG)
	#define DPRINT(fmt, args...) fprintf(stderr, "DEBUG: %s:%d:%s(): " fmt, \
		__FILE__, __LINE__, __func__, ##args)
	#define DBG_STRUCT(stype) dbg_dump_bytes(stype, syzeof(stype))
#else
	#define DPRINT(fmt, args...)
	#define DBG_STRUCT(stype)
#endif


#endif
