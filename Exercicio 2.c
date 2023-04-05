
#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, Fib_A=0, Fib_B=1, Valor, Fib_Soma=0;

                printf (" Informe um valor inteiro \n");
                scanf  ("%d", &Valor);

    if (Valor == 1 || Valor == 0){
                printf (" O valor digitado pertence a seguencia de fibonacci \n");

    }else {

        for (i=1; i<=Valor; i++){

                Fib_Soma = Fib_A + Fib_B;

            
            if (Fib_Soma == Valor){
                printf (" O valor digitado pertence a seguencia de fibonacci \n");
                break;
            }
                Fib_A = Fib_B;
                Fib_B = Fib_Soma;

        }if (Fib_Soma != Valor){
                printf (" O valor  digitado não pertence a seguencia de fibonacci \n");


        }


    }

    
    return 0;
}
