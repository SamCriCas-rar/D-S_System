#include <iostream>
#include <string>

void menu();
void system();

int main(){

    system();

    return 0;
}

// MENSAJES
void menu(){
    std::cout << "\n\t=======================" << std::endl
            << "\t|    D&S's System     |" << std::endl
            << "\t=======================\n" << std::endl;
    
    std::cout << "\t1. Show Stock" << std::endl
            << "\t2. Stock Options" << std::endl
            << "\t3. Stadistics" << std::endl
            <<"\n\t=======================" << std::endl;

}

void system(){
    menu();
    int option;

    do{
        std::cout << "Insert an option: "; std::cin >> option;
        if(option <= 0 || option > 3){
            std::cout << "\nError: Invalid option" << std::endl;
        }    
    }while(option <= 0 || option > 3);

    switch(option){
        case 1:
            std::cout << "SHOWING STOCK" << std::endl;
            break;
        case 2:
            std::cout << "STOCK OPTIONS" << std::endl;
            break;
        case 3:
            std::cout << "STADISTICS" << std::endl;
            break;
        default:
            std::cout << "Invalid option" << std::endl;
    }

}