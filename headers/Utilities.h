#pragma once

void clearScreen()
{
    //cross platform clear terminal
    #ifdef WINDOWS
        std::system("cls");
    #else
        std::system ("clear");
    #endif
}