/*
 * pqlib.h
 *
 *  Created on: 2017��10��9��
 *      Author: zjm09
 */

#ifndef LIB_INC_PQLIB_H_
#define LIB_INC_PQLIB_H_

#include "container.h"
#include "DataSource.h"
#include "tags.h"
#include "name_id.h"

typedef struct{
	Record *Container;
	Record *DataSource;
}pqdif;

#endif /* LIB_INC_PQLIB_H_ */
