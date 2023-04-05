

#include <stdio.h>
#include <string.h>

int main () {
    char string[20], aux;
    int  i, str_tamanho=0;;

        printf (" Por favor digite uma palavras \n");
        scanf  ("%s", string);

        str_tamanho = strlen (string);
    
    for (i=0; i<str_tamanho/2; i++){

            aux = string[i];
            string[i] = string[str_tamanho - 1 - i];
            string[str_tamanho - 1 - i] = aux;
        
    }

        printf ("\n %s \n", string);
    return 0;
}

