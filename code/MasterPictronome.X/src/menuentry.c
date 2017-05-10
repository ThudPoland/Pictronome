#include "../include/menuentry.h"

bool ExecuteFirstAction(struct MenuEntry** entry)
{
    if((*entry)->firstMenuAction != 0)
    {
        (*entry)->firstMenuAction(entry);
        return true;
    }
    return false;
}
bool ExecuteSecondAction(struct MenuEntry** entry)
{
    if((*entry)->secondMenuAction != 0)
    {
        (*entry)->secondMenuAction(entry);
        return true;
    }
    return false;
}
bool ExecuteThirdAction(struct MenuEntry** entry)
{
    if((*entry)->thirdMenuAction != 0)
    {
        (*entry)->thirdMenuAction(entry);
        return true;
    }
    return false;
}
bool ExecuteFourthAction(struct MenuEntry** entry)
{
    if((*entry)->fourthMenuAction != 0)
    {
        (*entry)->fourthMenuAction(entry);
        return true;
    }
    return false;
}