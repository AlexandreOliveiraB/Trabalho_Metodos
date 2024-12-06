/**
*"Copyright 2024 <Alexandre>" 
*/
/**
 * \file  velha.cpp
 */

#include "velha.hpp"
#include "catch.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

int VerificaVelha(int velha[3][3]) {
    for (int j = 0; j < 3; j++) {
        if ((velha[0][j] == 1) && (velha[1][j] == 1) && (velha[2][j] == 1)) {
           return 1;
        }
    }
    for (int i = 0; i < 3; i++) {
        if ((velha[i][0] == 1) && (velha[i][1] == 1) && (velha[i][2] == 1)) {
            return 1;
        }
    }
    if ((velha[0][0] == 1) && (velha[1][1] == 1) && (velha[2][2] == 1))
        return 1;
    if ((velha[0][2] == 1) && (velha[1][1] == 1) && (velha[2][0] == 1))
        return 1;
    for (int j = 0; j < 3; j++) {
        if ((velha[0][j] == 2) && (velha[1][j] == 2) && (velha[2][j] == 2))
            return 0;
    }
    return 15; /*!< retorna zero para teste */
}
