#include "../include/utils.h"
void ToggleBuzzer(void** object)
{
    struct MenuEntry* entry = *object;
    
    struct DataSource* source = entry->dataSource;
    
    if(source->buzzer->isEnabled)
    {
        entry->firstLineContent = toggleMetronomeOnText;
        source->buzzer->isEnabled = 0;
    }
    else
    {
        entry->firstLineContent = toggleMetronomeOffText;
        source->buzzer->isEnabled = 1;
    }
}