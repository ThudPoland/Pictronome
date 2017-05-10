#include "../include/init.h"

void EntriesInit(struct SystemUI* status)
{    
    status->entries[0].rightNeighbor = &status->entries[1];
    status->entries[0].firstLineContent = toggleMetronomeOnText;
    status->entries[0].firstMenuAction = NavigateLeft;
    status->entries[0].secondMenuAction = NavigateRight;
    
    status->entries[1].leftNeighbor = &status->entries[0];
    status->entries[1].rightNeighbor = &status->entries[2];
    status->entries[1].firstLineContent = metrumText;
    status->entries[1].firstMenuAction = NavigateLeft;
    status->entries[1].secondMenuAction = NavigateRight;
    
    status->entries[2].leftNeighbor = &status->entries[1];
    status->entries[2].rightNeighbor = &status->entries[3];
    status->entries[2].firstLineContent = tempoText;
    status->entries[2].firstMenuAction = NavigateLeft;
    status->entries[2].secondMenuAction = NavigateRight;
    
    status->entries[3].leftNeighbor = &status->entries[2];
    status->entries[3].firstLineContent = brightnessText;
    status->entries[3].firstMenuAction = NavigateLeft;
    status->entries[3].secondMenuAction = NavigateRight;
}

void NavigateLeft(void** object, void* parameter)
{
    struct SystemUI* status = (struct SystemUI*)parameter;
    struct MenuEntry* entry = *object;
    
    if(entry->leftNeighbor != 0) (*object) = entry->leftNeighbor;
}

void NavigateRight(void** object, void* parameter)
{
    struct SystemUI* status = (struct SystemUI*)parameter;
    struct MenuEntry* entry = *object;
    
    if(entry->rightNeighbor != 0) (*object) = entry->rightNeighbor;
}

void NavigateDown(void** object, void* parameter)
{
    struct SystemUI* status = (struct SystemUI*)parameter;
    struct MenuEntry* entry = *object;
    
    if(entry->parent != 0) (*object) = entry->parent;
}