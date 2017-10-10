/*
 * DataSource.h
 *
 *  Created on: 2017��10��9��
 *      Author: zjm09
 */

#ifndef LIB_INC_DATASOURCE_H_
#define LIB_INC_DATASOURCE_H_

#include "tags.h"

typedef struct{
	tag *tags;
	int num_of_tags;
}DataSource;

DataSource *DataSourceCreate(GUID DsType,int numOfChannelDefs);
void DataSourceFree(DataSource *ds);
tag *OneChannelDef(int MeasuredId,int PhaseId,GUID QuanityTypeID,int numOfSeries);
tag *OneSeriesDef(int QuantityUnitsID,GUID ValueTypeID,GUID QuantityCharacteristicID,int StorageMethodID);
void OneSeriesAttached(tag *OneChannel,tag *OneSeries,int index);
void OneChannelAttached(DataSource *ds,tag *OneChannelDef,int index);

#endif /* LIB_INC_DATASOURCE_H_ */
