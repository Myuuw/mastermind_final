#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void saisir(char tableau2[4]){
int i;    
      for (int i=0; i<4; i++)  {
printf("Veuillez saisir 1 lettre parmi(P-B-M-O-Y-G-A)\n");
        scanf(" %c", &tableau2[i]);}

}




void affichage2(char tableau2[4]){
for (int i = 0; i < 4; i++) {
    switch(tableau2[i]) {
        case 'P':
            printf("0");
            tableau2[i]=0;
            break;
        case 'B':
            printf("1");
            tableau2[i]=1;

            break;
        case 'M':
            printf("2");
            tableau2[i]=2;

            break;
        case 'O':
            printf("3");
            tableau2[i]=3;

            break;
        case 'Y':
            printf("4");
            tableau2[i]=4;

            break;
        case 'G':
            printf("5");
            tableau2[i]=5;

            break;
        case 'A':
            printf("6");
            tableau2[i]=6;

            break;}}}
    


    


void affichage(int tab[4]){

   for (int i=0; i<4; i++)  {
   
   switch(tab[i]){
    
    case 0:
    printf("P");
    break;
    case 1:
    printf("B");
    break;
    case 2:
    printf("M");
    break;
    case 3:
    printf("Y");
    break;
    case 4:
    printf("O");
    break;
    case 5:
    printf("G");
    break;
    case 6:
    printf("A");
    break;
    
    }
   }
}








int check(int tab[4], char tableau2[4]){
    int w = 0;
    int r = 0;
    int count = 0;
    int stop = 0;
    int tableau3[4];
    
    for (int i=0; i<4; i++) {
        if (tab[i] == tableau2[i]) {
            r++;
        } else {
            for (int j=0; j<4; j++) {
                if (tab[i] == tableau2[j]) {
                    w++;
                    break;
                }
            }
        }
    }
    
    if (r == 4) {
        printf("Win\n");
        stop = 1;
    }

    for(int i = 0; i < r; i++) {
        printf("\n--------------------------\n");
        printf("R");
        count++;
    }
    
    for(int i = 0; i < w; i++) {
        printf("\n--------------------------\n");
        printf("W");
        count++;
    }
    
    int test = 4 - r - w;
    for(int i = 0; i < test; i++) {
        printf("\n--------------------------\n");
        printf("0");
    }
    
    return stop;
}






int main(){
    char tableau2[4];
    int tab[4];
    int i;
    int tableau3[4];
    int w,r ;
    int test = 0;
    int stop ;
    srand(time(NULL));
 for (int i=0; i<4; i++)  {
            tab[i] = rand()%7;
            printf("%d\n", tab[i]);
        } 
    for (int n=0; n<10; n++) {
        printf("\nTentative %d :\n", n+1 );
       
        saisir(tableau2);
        affichage2(tableau2);
        stop = check(tab, tableau2);      
        if (stop == 1) {
        break;}
    }

    return 0;
}
