#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "modelo.h"
#include "calculodm.h"

#define PI 3.14159

float calculodm(int a){

        float dAB, dAC, dBC;
        float dABx, dABy;
        float dab, dac, dbc;
        float dAcx, dAcy;
        float dBcx, dBcy;
        float dAbx, dAby;
        float dAb, dAc, dBc;
        float DAB, DAC, DBC;
        float dBCx, dBCy;
        float dACx, dACy;

    int d, dm;
  
    switch (a) {

        case 1:
        case 2:
            printf("Digite a distancia de A para B:");
            scanf("%d", &dAB);
            printf("Digite a distancia de A para C:");
            scanf("%d", &dAC);
            printf("Digite a distancia de B para C:");
            scanf("%d", &dBC);
            dm = cbrt(dAB*dAC*dBC);
            
        break; 

        case 3:
        case 4:
        case 5:
        case 6:

            printf("A distancia fornecida entre A e B, A e C ou B e C é diagonal (1) ou reta (2)? \n");
            scanf("%d", &d);
                if(d == 1){
                    printf("Digite a distancia de A para B:");
                    scanf("%d", &dAB);
                    printf("Digite a distancia de A para C:");
                    scanf("%d", &dAC);
                    printf("Digite a distancia de B para C:");
                    scanf("%d", &dBC);
                    dm = cbrt(dAB*dAC*dBC);
                }

                if (d == 2){

                    printf("Digite a distancia em x de A para B:");
                    scanf("%d", &dABx);
                    printf("Digite a distancia em y de A para B:");
                    scanf("%d", &dABy);

                    dab = sqrt((dABx*dABx)+(dABy*dABy));

                    printf("Digite a distancia em x de A para C:");
                    scanf("%d", &dACx);
                    printf("Digite a distancia em y de A para C:");
                    scanf("%d", &dACy);

                    dac = sqrt((dACx*dACx)+(dACy*dACy));

                    printf("Digite a distancia em x de B para C:");
                    scanf("%d", &dABx);
                    printf("Digite a distancia em y de B para C:");
                    scanf("%d", &dABy);

                    dbc = sqrt((dBCx*dBCx)+(dBCy*dBCy));
                    dm = cbrt(dAB*dAC*dBC);
                }
        break;

        case 7:

            printf("Digite a distancia de A para B:");
                scanf("%d", &dAB);
            printf("Digite a distancia de a para b:");
                scanf("%d", &dab);
            printf("Digite a distancia em x de A para b:");
                scanf("%d", &dAbx);
            printf("Digite a distancia em y de A para b:");
                scanf("%d", &dAby);
            
            dAb = sqrt((dAbx*dAbx)+(dAby*dAby)); 
            
            DAB = sqrt(sqrt((dAb*dAb*dAb*dAb))); 

            printf("Digite a distancia de A para C:");
                scanf("%d", &dAC);
            printf("Digite a distancia de a para c:");
                scanf("%d", &dac);
            printf("Digite a distancia em x de A para c:");
                scanf("%d", &dAcx);
            printf("Digite a distancia em y de A para c:");
                scanf("%d", &dAcy);

            dAc = sqrt((dAcx*dAcx)+(dAcy*dAcy));  
            
            DAC = sqrt(sqrt((dAC*dAC*dAc*dAc)));

            printf("Digite a distancia de B para C:");
                scanf("%d", &dBC); 
            printf("Digite a distancia de b para c:");
                scanf("%d", &dbc);

            printf("Digite a distancia em x de B para c:");
                scanf("%d", &dBcx);
            printf("Digite a distancia em y de B para c:");
                scanf("%d", &dBcy); 

            dBc = sqrt((dBcx*dBcx)+(dBcy*dBcy));

            DBC = sqrt(sqrt((dBC*dBC*dBc*dBc)));
            dm = cbrt(DAB*DAC*DBC);
         
        break;

        case 8:

        break;
        
        case 9:
            printf("Digite a distancia de A para B:");
                scanf("%d", &dAB);
            printf("Digite a distancia de a para b:");
                scanf("%d", &dab);
            printf("Digite a distancia em x de A para b:");
                scanf("%d", &dAbx);
            printf("Digite a distancia em y de A para b:");
                scanf("%d", &dAby);
            
            dAb = sqrt((dAbx*dAbx)+(dAby*dAby)); 
            
            DAB = sqrt(sqrt((dAb*dAb*dAb*dAb))); 

            printf("Digite a distancia de A para C:");
                scanf("%d", &dAC);
            printf("Digite a distancia de a para c:");
                scanf("%d", &dac);
            printf("Digite a distancia em x de A para c:");
                scanf("%d", &dAcx);
            printf("Digite a distancia em y de A para c:");
                scanf("%d", &dAcy);

            dAc = sqrt((dAcx*dAcx)+(dAcy*dAcy));  
            
            DAC = sqrt(sqrt((dAC*dAC*dAc*dAc)));

            printf("Digite a distancia de B para C:");
                scanf("%d", &dBC); 
            printf("Digite a distancia de b para c:");
                scanf("%d", &dbc);

            printf("Digite a distancia em x de B para c:");
                scanf("%d", &dBcx);
            printf("Digite a distancia em y de B para c:");
                scanf("%d", &dBcy); 

            dBc = sqrt((dBcx*dBcx)+(dBcy*dBcy));

            DBC = sqrt(sqrt((dBC*dBC*dBc*dBc)));
            dm = cbrt(DAB*DAC*DBC);

        break;

        case 10:

        break;

        case 11:
 
        break;

        case 12:
     
        break;

        case 13:
     
        break;

        case 14:
        
        break;

    default:
        printf("Opcao invalida\n");
    } // fim switch

    return dm;

}