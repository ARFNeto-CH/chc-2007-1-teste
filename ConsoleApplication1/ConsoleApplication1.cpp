#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    char vetor[6] = { 'V','M','V','M','V','M' };
    for (int i = 0; i < n; i++) {
        if (vetor[i] == 'V') { //se o elemento for igual a V, por exemplo, mas poderia ser qualquer letra, ou até mesmo um número

            printf("\033[31m%c", vetor[i]);//Atribui uma cor ao elemento na posição n, mas não imprime ainda

        }
        else if (vetor[i] == 'M') {
            printf("\033[32m%c", vetor[i]);
            //Atribui outra cor ao alemento na posição n, mas não imprime ainda
        }
    }
    return 0;
}