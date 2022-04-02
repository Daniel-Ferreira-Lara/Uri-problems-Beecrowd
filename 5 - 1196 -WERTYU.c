#include <stdio.h>
#include <string.h>
int main()
{
   int I, J;
   char text[1000], teclado[49] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
   while (fgets(text, 1000, stdin))
   {
      if (text == NULL)
         break;
      for (I = 0; I < strlen(text); I++)
         for (J = 0; J < 48; J++)
            if (text[I] == teclado[J])
            {
               printf("%c", teclado[J - 1]);
               break;
            }
            else if (text[I] == ' ')
            {
               printf(" ");
               break;
            }
            else if (text[I] == '\n')
            {
               puts("");
               break;
            }
   }
   return 0;
}
/*#include <stdio.h>
#include <string.h>
int main()
{
   int I, J;
   char text[1000];
   while (fgets(text, 1000, stdin))
   {
      if (text == NULL)
         break;
      for (I = 0; I < strlen(text); I++)
         switch (text[I])
         {
         case ' ':
            printf(" ");
            break;
         case '\n':
            printf("\n");
            break;
         case '1':
            printf("`");
            break;
         case '2':
            printf("1");
            break;
         case '3':
            printf("2");
            break;
         case '4':
            printf("3");
            break;
         case '5':
            printf("4");
            break;
         case '6':
            printf("5");
            break;
         case '7':
            printf("6");
            break;
         case '8':
            printf("7");
            break;
         case '9':
            printf("8");
            break;
         case '0':
            printf("9");
            break;
         case '-':
            printf("0");
            break;
         case '=':
            printf("-");
            break;

            //

            //
         case 'W':
            printf("Q");
            break;
         case 'E':
            printf("W");
            break;
         case 'R':
            printf("E");
            break;
         case 'T':
            printf("R");
            break;
         case 'Y':
            printf("T");
            break;
         case 'U':
            printf("Y");
            break;
         case 'I':
            printf("U");
            break;
         case 'O':
            printf("I");
            break;
         case 'P':
            printf("O");
            break;
         case '[':
            printf("P");
            break;
         case ']':
            printf("[");
            break;
         case '\\':
            printf("]");
            break;

         case 'S':
            printf("A");
            break;
         case 'D':
            printf("S");
            break;
         case 'F':
            printf("D");
            break;
         case 'G':
            printf("F");
            break;
         case 'H':
            printf("G");
            break;
         case 'J':
            printf("H");
            break;
         case 'K':
            printf("J");
            break;
         case 'L':
            printf("K");
            break;
         case ';':
            printf("L");
            break;
            //case '''':
            //printf(";");
            //break;

         case 'X':
            printf("Z");
            break;
         case 'C':
            printf("X");
            break;
         case 'V':
            printf("C");
            break;
         case 'B':
            printf("V");
            break;
         case 'M':
            printf("N");
            break;
         case ',':
            printf("M");
            break;
         case '.':
            printf(",");
            break;
         case '/':
            printf(".");
            break;
         default:
            break;
         }

      return 0;
   }
}
*/