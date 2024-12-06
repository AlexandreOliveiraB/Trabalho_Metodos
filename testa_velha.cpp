/**
*"Copyright 2024 <Alexandre>" 
*/
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#include "catch.hpp"



TEST_CASE("Testa velha X Coluna", "[single-file]") {
    int teste1[3][3]= {   { 2, 0, 1 },
                          { 2, 0, 1 },
                          { 0, 2, 1 }
                    };
    REQUIRE(VerificaVelha(teste1) == 1);
}
TEST_CASE("Testa velha X Linha", "[single-file]") {
    int teste2[3][3]= {   { 1, 1, 1 },
                          { 0, 2, 2 },
                          { 2, 0, 0 }
                    };
    REQUIRE(VerificaVelha(teste2) == 1);
}
TEST_CASE("Testa velha X Diagonal", "[single-file]") {
    int teste3[3][3]= {   { 1, 0, 2 },
                          { 2, 1, 0 },
                          { 0, 2, 1 }
                    };
    REQUIRE(VerificaVelha(teste3) == 1);
}
TEST_CASE("Testa velha O Coluna", "[single-file]") {
    int teste4[3][3]= {   { 2, 0, 1},
                          { 2, 1, 0},
                          { 2, 1, 0}
                    };
    REQUIRE(VerificaVelha(teste4) == 0);
}

