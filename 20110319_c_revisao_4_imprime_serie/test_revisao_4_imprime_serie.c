#include "simplectest/tests.h"
#include "revisao_4_imprime_serie.c"
#include "string.h"


START_TESTS()

START_TEST("Testar Revisao_4_imprime_serie")

    TEST("Imprime Serie de 1 até 1 com passo 1 deve retornar ''");
    {
        char saida[80] = "";
        char resultado[80] = "";
        imprime_serie(1, 1, 1, saida);
        ASSERT(strcmp(saida, resultado) == 0);
    }

    TEST("Imprime Serie de 1 até 2 com passo 1 deve retornar ''");
    {
        char saida[80] = "";
        char resultado[80] = "2";
        imprime_serie(2, 2, 1, saida);
        ASSERT(strcmp(saida, resultado) == 0);
    }

    TEST("Imprime Serie de 1 até 3 com passo 1 deve retornar '2'");
    {
        char saida[80] = "";
        char resultado[80] = "2";
        imprime_serie(1, 3, 1, saida);
        ASSERT(strcmp(saida, resultado) == 0);
    }

    TEST("Imprime Serie de 2 até 4 com passo 1 deve retornar '2 3 4'");
    {
        char saida[80] = "";
        char resultado[80] = "2 3 4";
        imprime_serie(2, 4, 1, saida);
        ASSERT(strcmp(saida, resultado) == 0);
    }

    TEST("Imprime Serie de 2 até 4 com passo 2 deve retornar '2 4'");
    {
        char saida[80] = "";
        char resultado[80] = "2 4";
        imprime_serie(2, 4, 2, saida);
        ASSERT(strcmp(saida, resultado) == 0);
    }

    TEST("Imprime Serie de 1 até 10 com passo 3 deve retornar '1 4 7 10'");
    {
        char saida[80] = "";
        char resultado[80] = "1 4 7 10";
        imprime_serie(1, 10, 3, saida);
        ASSERT(strcmp(saida, resultado) == 0);
    }

    TEST("Imprime Serie de 1 até 10 com passo 3 NÃO deve retornar '1 4 7 10 11'");
    {
        char saida[80] = "";
        char resultado[80] = "1 4 7 10 11";
        imprime_serie(1, 10, 3, saida);
        ASSERT(strcmp(saida, resultado) != 0);
    }

    TEST("Imprime Serie de 4 até 2 com passo -1 deve retornar '4 3 2'");
    {
        char saida[80] = "";
        char resultado[80] = "4 3 2";
        imprime_serie(4, 2, -1, saida);
        ASSERT(strcmp(saida, resultado) == 0);
    }

    TEST("Imprime Serie de 4 até 2 com passo -2 deve retornar '4 2'");
    {
        char saida[80] = "";
        char resultado[80] = "4 2";
        imprime_serie(4, 2, -2, saida);
        ASSERT(strcmp(saida, resultado) == 0);
    }

END_TEST()


END_TESTS()
