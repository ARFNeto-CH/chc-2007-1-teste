#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    char vetor[6] = { 'V','M','V','M','V','M' };
    for (int i = 0; i < n; i++) {
        if (vetor[i] == 'V') { //se o elemento for igual a V, por exemplo, mas poderia ser qualquer letra, ou at� mesmo um n�mero

            printf("\033[31m%c", vetor[i]);//Atribui uma cor ao elemento na posi��o n, mas n�o imprime ainda

        }
        else if (vetor[i] == 'M') {
            printf("\033[32m%c", vetor[i]);
            //Atribui outra cor ao alemento na posi��o n, mas n�o imprime ainda
        }
    }
    return 0;
}