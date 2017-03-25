#include "../include/init.h"

void EntriesInit(struct SystemStatus* status)
{
    status->entries[0].rightNeighbor = &status->entries[1];
    status->entries[0].firstLineContent = toggleMetronomeOnText;
    
    status->entries[1].leftNeighbor = &status->entries[0];
    status->entries[1].rightNeighbor = &status->entries[2];
    status->entries[1].firstLineContent = metrumText;
    
    status->entries[2].leftNeighbor = &status->entries[1];
    status->entries[2].rightNeighbor = &status->entries[3];
    status->entries[2].firstLineContent = tempoText;
    
    status->entries[3].leftNeighbor = &status->entries[2];
    status->entries[3].rightNeighbor = &status->entries[4];
    status->entries[3].firstLineContent = brightnessText;
}
