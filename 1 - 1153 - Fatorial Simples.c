#include <stdio.h>

int main()
{
   int num;
   int res = 1;
   scanf("%d", &num);
   num++;
   while (num--)
      if (num != 0)
         res *= num;
   printf("%d\n", res);
   return 0;
}
/*
int main() {
    int num;
    scanf("%d",&num);
    switch(num){
        case 1:
            puts("1");
            break;
        case 2:
            puts("2");
            break;
        case 3:
            puts("6");
            break;
        case 4:
            puts("24");
            break;
        case 5:
            puts("120");
            break;
        case 6:
            puts("720");
            break;
        case 7:
            puts("5040");
            break;
        case 8:
            puts("40320");
            break;
        case 9:
            puts("362880");
            break;
        case 10:
            puts("3628800");
            break;
        case 11:
            puts("39916800");
            break;
        case 12:
            puts("479001600");
            break;
        deafault:
            break;
    }
    return 0;
}*/