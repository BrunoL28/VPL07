#include "intruso.hpp"
#include <iterator>

void Intruso::set_senha_vazada(std::string vazou){

    std::string receive_int; 
    std::string receive_char;

    for(int i = 0; i <= 18; i += 2){
        receive_int += vazou[i]; 
    }                            

    this->_numbers.push_back(receive_int); 

    for(int i = 20; i <= 30; i += 2){
        receive_char += vazou[i]; 
    }                             

    this->_letters.push_back(receive_char); 

}

std::string Intruso::crack_senha(){
    
    std::vector<std::string> receive_vector;
    std::string receive_string;
    std::string decode;
    bool deu_match;

    for(int j = 0; j < 6; j++){
        for(int i = 0; i < _numbers.size(); i++){
            switch(_letters[i][j]){
            case 'A':
                receive_string += _numbers[i][0];
                receive_string += _numbers[i][1];
                receive_vector.push_back(receive_string);
                break;
            case 'B':
                receive_string += _numbers[i][2];
                receive_string += _numbers[i][3];
                receive_vector.push_back(receive_string);
                break;
            case 'C':
                receive_string += _numbers[i][4];
                receive_string += _numbers[i][5];
                receive_vector.push_back(receive_string);
                break;
            case 'D':
                receive_string += _numbers[i][6];
                receive_string += _numbers[i][7];
                receive_vector.push_back(receive_string);
                break;
            case 'E':
                receive_string += _numbers[i][8];
                receive_string += _numbers[i][9];
                receive_vector.push_back(receive_string);
                break;
            default:
                break;
            }
            receive_string.erase(receive_string.begin(), receive_string.end());
        }

        deu_match = true;

        for(int i = 1; i < receive_vector.size(); i++){
            if(receive_vector[0][0] != receive_vector[i][0] && receive_vector[0][0] != receive_vector[i][1])
                deu_match = false;
        }

        if(deu_match == true){
            decode += receive_vector[0][0];
        }else{
            deu_match = true;
            for(int i = 1; i < receive_vector.size(); i++){
                if(receive_vector[0][1] != receive_vector[i][0] && receive_vector[0][1] != receive_vector[i][1])
                    deu_match = false;
            }
            if(deu_match == true){
                decode += receive_vector[0][1];
            }
        }
        decode += " ";
        receive_vector.erase(receive_vector.begin(), receive_vector.end());
    }
    return decode;
}