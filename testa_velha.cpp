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
    REQUIRE(VerificaVelha(teste4) == 2);
}
TEST_CASE("Testa velha O Linha", "[single-file]") {
    int teste5[3][3]= {   { 1, 0, 1},
                          { 2, 2, 2},
                          { 1, 0, 0}
                    };
    REQUIRE(VerificaVelha(teste5) == 2);
}
TEST_CASE("Testa velha O Diagonal", "[single-file]") {
    int teste6[3][3]= {   { 0, 1, 2},
                          { 1, 2, 0},
                          { 2, 1, 0}
                    };
    REQUIRE(VerificaVelha(teste6) == 2);
}
TEST_CASE("Testa Empate", "[single-file]") {
    int teste7[3][3]= {   { 1, 2, 2},
                          { 2, 1, 1},
                          { 2, 1, 2}
                    };
    REQUIRE(VerificaVelha(teste7) == 0);
}
TEST_CASE("Testa Indefinido", "[single-file]") {
    int teste8[3][3]= {   { 2, 1, 2},
                          { 1, 0, 1},
                          { 2, 1, 2}
                    };
    REQUIRE(VerificaVelha(teste8) == -1);
}
TEST_CASE("Testa Impossivel", "[single-file]") {
    int teste9[3][3]= {   { 1, 1, 1},
                          { 1, 1, 1},
                          { 1, 1, 1}
                    };
    REQUIRE(VerificaVelha(teste9) == -2);
}

