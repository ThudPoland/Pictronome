#include "../include/data.h"

void InitDataSource(struct DataSource* localDataSource, struct SystemStatus *localInterruptStatus)
{
    localDataSource->buzzer = &(localInterruptStatus->buzzerData);
}
