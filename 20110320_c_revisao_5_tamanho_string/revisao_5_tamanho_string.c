int tamanhoString(char text[], int cont)
{
    if (text[cont] != '\0'){
        cont = tamanhoString(text, (++cont));
    }
    return cont;
}

int tamanho_string(char *string)
{

    return tamanhoString(string, 0);
//    if (*string == '\0')
//        return 0;
//    else
//        return 1+tamanho_string(string+1);
}


