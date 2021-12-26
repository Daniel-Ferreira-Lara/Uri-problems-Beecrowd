#include <stdio.h>
int main()
{
   unsigned int x, i;
   int aux;
   for (i = 0; i < 10; i++)
   {
      scanf("%d", &aux);
      if (aux > 0)
         printf("X[%d] = %d\n", i, aux);
      else
         printf("X[%d] = 1\n", i);
   }
   return 0;
}
/*#include <stdio.h>
int main()
{
   unsigned int x[10]={0},i;
   int aux;
   for(i=0;i<10;i++){
      scanf("%d",&aux);
      if(aux>0)
         x[i]=aux;
      else
         x[i]=1;
   }
   for(i=0;i<10;i++)
      printf("X[%d] = %d\n",i,x[i]);
   return 0;
}*/