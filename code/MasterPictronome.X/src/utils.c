#include "../include/utils.h"

void ToggleBuzzer(void** object)
{
    struct MenuEntry* entry = *object;
    
    struct DataSource* source = entry->dataSource;
    
    if(source->buzzer->isEnabled)
    {
        entry->firstLineContent = toggleMetronomeOffText;
        source->buzzer->isEnabled = 0;
    }
    else
    {
        entry->firstLineContent = toggleMetronomeOnText;
        source->buzzer->isEnabled = 1;
    }
}

void RedrawProgressBar(struct DataSource* source, uint8_t value) 
{
    if(value > 10) return;
    
    InitBar(source->bar);
    for(int counter = 0; counter < value; counter++)
    {
        source->bar[PROGRESS_OFFSET + counter] = '-';
    }
}

void IncreaseDisplayBrightness(void** object)
{   
    struct MenuEntry* entry = *object;
    
    struct DataSource* source = entry->dataSource;
    
    if(source->brightness > 90)
    {
        source->brightness = 100;
    }
    else
    {
        source->brightness += 10;
    }
    
    RedrawProgressBar(source, source->brightness / 10);
    entry->secondLineContent = source->bar;   
}

void DecreaseDisplayBrightness(void** object)
{
    struct MenuEntry* entry = *object;
    
    struct DataSource* source = entry->dataSource;
    
    if(source->brightness < 10)
    {
        source->brightness = 0;
    }
    else
    {
        source->brightness -= 10;
    }
    
    RedrawProgressBar(source, source->brightness / 10);
    entry->secondLineContent = source->bar;  
}

void IncreaseTempo(void** object)
{   
    struct MenuEntry* entry = *object;
    
    struct DataSource* source = entry->dataSource;
    
    if(source->tempo < 999) source->tempo++;
    else source->tempo = 0;
    
    NumberToString(source->tempo, TEMPO_TEXT_OFFSET, 16, source->tempoText);
    entry->secondLineContent = source->tempoText;   
}

void DecreaseTempo(void** object)
{
    struct MenuEntry* entry = *object;
    
    struct DataSource* source = entry->dataSource;
    
    if(source->tempo > 0) source->tempo--;
    else source->tempo = 999;
    
    NumberToString(source->tempo, TEMPO_TEXT_OFFSET, 16, source->tempoText);
    entry->secondLineContent = source->tempoText;   
}
