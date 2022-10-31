#include <iostream>
#include "intruso.hpp"

int main(){
    int num_entradas, i;
    std::string senha;
    Intruso intruso;
    
    std::cin >> num_entradas;

    for(i=0; i < num_entradas; i++){
        std::cin.ignore();
        std::getline(std::cin, senha);
        intruso.set_senha_vazada(senha);
    }
    std::cout << intruso.crack_senha() <<std::endl;
    
    return 0;
}