#include "../include/data.h"

void InitDataSource(struct DataSource* localDataSource, struct SystemStatus *localInterruptStatus)
{
    localDataSource->buzzer = &(localInterruptStatus->buzzerData);
    localDataSource->brightness = 0;
    localDataSource->tempo = 100;
}
