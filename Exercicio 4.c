
#include <stdio.h>

int main () {
    float SP=67836.43, RJ=36678.66, MG=29229.88, ES= 27165.48, OUTROS=19849.53, V_Total=0;

        V_Total = (SP + RJ + MG + ES + OUTROS);

        SP     = (SP/ V_Total) * 100;
        RJ     = (RJ/ V_Total) * 100;
        MG     = (MG/ V_Total) * 100;
        ES     = (ES/ V_Total) * 100;
        OUTROS = (OUTROS/ V_Total) * 100;

        printf (" Segue o percentual mensal de cada estado : \n SP = %.2f%% \n RJ = %.2f%% \n MG = %.2f%% \n ES = %.2f%% \n OUTROS = %.2f%% \n", SP, RJ, MG, ES, OUTROS);
    
    return 0;
}
