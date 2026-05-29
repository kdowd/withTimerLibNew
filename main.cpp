#include <iostream>
#include "headers/UserMenuFunctions.h"
#include "headers/Utilities.h"


using namespace std;


int main()

{
    int uc = getUserChoice();
    clearScreen();

    cout << "user DID chose something: " << termcolor::bright_red << uc << endl;


    while(true){};
    return 0;
}
