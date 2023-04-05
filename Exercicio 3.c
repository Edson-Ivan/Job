#include <stdio.h>
#include <stdlib.h>

void Maior_Faturamento(float dados[]); //   Função para realizar os devidos calculos;

int main () {

    float dados[30];
    int i=0;
    FILE *file;

        file = fopen ("json.txt", "r");

    if (file == NULL){

        printf (" O arquivo não pode ser aberto \n");
        exit(1);
    }
     for(i=0; i<30; i++){

        fscanf(file, "%f", &dados[i]);
     }

     fclose(file); // ln 10 a ln 24, manipulação do arquivo;

     Maior_Faturamento (dados);
        
    
    return 0;
}


void Maior_Faturamento(float dados[]){
    int i, j, cont=0;
    float aux, media=0;

        for (i=0; i<30 - 1; i++){
            /* Ordenação do vetor, para encontrar o maior numero e o menor numero. 
               Foi utilizado 2 comandos de repetição somente com o intuito de falicitar a organização, caso contrario poderia se utilizado somente 1 for */

            for (j=i+1; j<30 ; j++){

                if (dados[i]>dados[j] && dados[i]){

                    aux = dados[i];
                    dados[i] = dados[j];
                    dados[j] = aux;
                }

            
            }
        }

        for (i=0; i<30; i++){  
        // Para realizar o calculo da media;

            if (dados[i] != 0.0){
                media += dados[i];
                cont++;
            }
               }       media = media/cont;

            printf (" Maior rendimento diario : %.4f\n Menor rendimento diario : %.4f\n Media mensal : %.4f\n -- %d --", dados[0], dados[29], media, cont);
        
}

