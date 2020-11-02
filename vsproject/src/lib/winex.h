﻿#if !defined winex_h
#define winex_h
/************************************************************************************************************ 
** windows exception
**           __                                    __   __              
** .--.--.--|__|-----.-----.--.--.----.-----.-----|  |_|__|-----.-----.
** |  |  |  |  |     |  -__|_   _|  __|  -__|  _  |   _|  |  _  |     |
** |________|__|__|__|_____|__.__|____|_____|   __|____|__|_____|__|__|
**                                          |__|                                      instant-eyedropper.com
************************************************************************************************************/

#include <windows.h>

/***********************************************************************************************************/

class winexception
{
public:
    winexception(char * msg) 
    :   _msg    (msg),
        _err    (GetLastError())
    {}

    char const * getmessage() const { return _msg; }
    DWORD        geterror()   const { return _err; }

private:
    char *  _msg;
    DWORD   _err;
};

/***********************************************************************************************************/
#endif