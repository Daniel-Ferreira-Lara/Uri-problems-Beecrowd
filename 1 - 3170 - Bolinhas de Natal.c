#include <stdio.h>
int main()
{
    int galho,bola;
    scanf("%d%d",&bola,&galho);
    if(galho/2-bola>0) printf("Faltam %d bolinha(s)\n",galho/2-bola);
    else puts("Amelia tem todas bolinhas!");
    return 0;
}