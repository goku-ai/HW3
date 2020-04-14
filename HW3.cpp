//Fabian Hernandez
#include <iostream>
#include <cstdlib>
#include "hw3functions.h"
using namespace std;
int main(){
    char choice= '\0';
    while(true){
     showMenu();
     cin >> choice;
if( (choice== 'A') || (choice == 'a')){
    add();
}
else if((choice == 'S')|| (choice == 's')){
    subtract();
}
else {
    break;
}
    }
return 0;
}
