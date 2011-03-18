#include "simplectest/tests.h"
#include "revisao_1_atleta.c"

int vectors(float vector1[], float vector2[], int size)
{
    int i;
    float diff;
    for (i = 0; i < size; i++){
        diff = vector1[i] - vector2[i];
        if ((diff < 0.0005) && (diff > -0.0005)){
            return false;
        }
    }
    return true;
}

START_TESTS()

START_TEST("Testar Medias")
    
    TEST("Media de 4.0, 4.0, 4.0, 4.0, 4.0, 4.0 deve retornar 4.0");
    {    
        float notas[6] = {4.0, 4.0, 4.0, 4.0, 4.0, 4.0};
        ASSERT_EQUALS_FLOAT(media(notas, sizeof(notas)/sizeof(float)), 4.0);
    }

    TEST("Media de 5.0, 5.0, 5.0, 5.0, 5.0, 5.0 deve retornar 5.0");
    {    
        float notas[6] = {5.0, 5.0, 5.0, 5.0, 5.0, 5.0};
        ASSERT_EQUALS_FLOAT(media(notas, sizeof(notas)/sizeof(float)), 5.0);
    }

    TEST("Media de 1.0, 1.0, 4.0, 4.0, 7.0, 7.0 deve retornar 4.0");
    {    
        float notas[6] = {1.0, 1.0, 4.0, 4.0, 7.0, 7.0};
        ASSERT_EQUALS_FLOAT(media(notas, sizeof(notas)/sizeof(float)), 4.0);
    }

END_TEST()

START_TEST("Remover extremos")

    
    TEST("Media de 1.0, 1.0, 4.0, 4.0, 7.0, 7.0 deve retornar 1.0, 4.0, 4.0, 7.0");
    {    
        float notas[6] = {1.0, 1.0, 4.0, 4.0, 7.0, 7.0};
        float retorno[4] = {1.0, 4.0, 4.0, 7.0};
        ASSERT(vectors(remove_extremos(notas, 6), retorno, 4));
    }

END_TEST()

END_TESTS()
