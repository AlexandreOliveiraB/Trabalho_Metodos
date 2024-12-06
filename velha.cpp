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
    return 15; /*!< retorna zero para teste */
}
