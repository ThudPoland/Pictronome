#include "../include/navigation.h"

bool Navigate(struct MenuEntry **entry, ButtonFlags* flags)
{
    if(flags->button1Flag)
    {
        flags->button1Flag = 0;
        return ExecuteFirstAction(entry);
    }
    else if(flags->button2Flag)
    {
        flags->button2Flag = 0;
        return ExecuteSecondAction(entry);
    }
    else if(flags->button3Flag)
    {
        flags->button3Flag = 0;
        return ExecuteThirdAction(entry);
    }
    else if(flags->button4Flag)
    {
        flags->button4Flag = 0;
        return ExecuteFourthAction(entry);
    }
    else if(flags->button5Flag)
    {
        flags->button5Flag = 0;
        //return ExecuteFifthAction(entry);
    }
    
    return false;
}

void DisplayMenu(struct MenuEntry *entry, struct SystemStatus *system)
{
    ClearDisplay(&(system->communicationProcess));
    SendText(entry->firstLineContent, CONTENT_LENGTH, &(system->communicationProcess));
    SetSecondLine(&(system->communicationProcess));
    SendText(entry->secondLineContent, CONTENT_LENGTH, &(system->communicationProcess));
}