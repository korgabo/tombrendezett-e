
#include <stdio.h>
#include <stdbool.h>

int rendezett_tomb(int n, const int tomb[]){
    for (int i = 0; i < n; ++i){
        if(!(tomb[i] > tomb[i+1])){
            return 1;
        } 
        else if(tomb[i] > tomb[i+1]){
            return 0;
            
        }
        else{
            return 1;
            }
    }
    }


int main()
{
   
    int tomb[5];
    int meret = 5;
    int szam;
    printf("Adjon meg 5 számot! \n");
    for (int i = 0; i < meret; ++i) {
        printf("%d. szám: ",i+1);
        scanf("%d\n",&szam);
        tomb[i] = szam;
    }
    
    int rendezett = rendezett_tomb(meret, tomb);
    if (rendezett == 1){
        printf("Rendezett");
    }
    else{
        printf("Nem rendezett");
    }
    return 0;
}
