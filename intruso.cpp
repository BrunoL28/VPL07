#include "intruso.hpp"
#include <iterator>

void Intruso::set_senha_vazada(std::string vazou){

    std::string receive_int; /*Criamos duas strings auxiliares que irão armazenar a sequência vazada, uma para letras e outra para numeros*/
    std::string receive_char;

    for(int i = 0; i <= 18; i += 2){
        receive_int += vazou[i]; /*Aqui, iteramos de dois em dois (um numero, um espaco) sobre os numeros, que ocupam 20 posicoes, fazendo com que a string auxiliar*/
    }                            /*receba os numeros vazados*/

    _numbers.push_back(receive_int); /*Aqui, guardamos a string de numeros vazados no vetor (privado) _numbers*/

    for(int i = 20; i <= 30; i += 2){
        receive_char += vazou[i]; /*Aqui, iteramos de dois em dois (uma letra, um espaco) sobre as letras, que ocupam 10 posicoes, fazendo com que a string auxiliar*/
    }                             /*receba as letras vazados*/

    _letters.push_back(receive_char); /*Aqui, guardamos a string de letras vazadas no vetor (privado) _letters*/
}
