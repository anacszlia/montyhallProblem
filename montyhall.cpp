#include <ctime>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define TOTAL 100
using namespace std;
main(){
setlocale(LC_ALL,"portuguese");
time_t timestamp;
time(&timestamp);
cout << ctime(&timestamp)<<endl;
srand(time(NULL));
int porta,escolha,revelada,vitoria=0,jogadas;
for(jogadas=0;jogadas <TOTAL;jogadas++){
    porta=rand() % 3;
    escolha=rand() %3;
    printf("Escolheu %i e era %i.",escolha,porta);
    if(porta==escolha){
        printf("Ganhou!\n");
        vitoria++;
    }
    else{
        printf("Perdeu!\n");

    }
}
printf("Ganhou %i e perdeu %i.Porcentagem de acerto %i%%",vitoria,TOTAL-vitoria,vitoria *100/TOTAL);


}
