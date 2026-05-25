#pragma once
#include "../libs/TermColour.h"
#include "../libs/Timercpp.h"

using namespace std;

int getUserChoice()
{
    Timer messageTimer = Timer();
    bool loop = true;
    int userNumber;

    messageTimer.setTimeout([&]() {
        cout << termcolor::bright_magenta << "Please choose from following menu" << endl;
    }, 1000);

    messageTimer.setTimeout([&]() {
        cout << termcolor::italic << termcolor::yellow << R"(
    1. Register
    2. Unregister
    3. Login
    4. Logout
    5. Exit
)" << endl;
   }, 1800);

    messageTimer.setTimeout([&]() {
        cout << "Please make your choice: ";
        cin >> userNumber;
        messageTimer.stop();
        loop = false;

      }, 2400);


    // can't leave function until timeouts are done
    while(loop == true);

    // is answer bad, if so recurse
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Please try again!" << endl;
        userNumber = getUserChoice();
    }

    return userNumber;
}