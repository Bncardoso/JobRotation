
/*Escreva um programa que inverta os caracteres de um string.
IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;

b) Evite usar funções prontas, como, por exemplo, reverse;
*/

#include<stdio.h>
#include<string.h>

void InverteString (char *Palavra ){
	int tam = strlen(Palavra);
	int i; char temp;
	for (int i = 0; i < tam / 2; i++) {
        char temp = Palavra[i];
        Palavra[i] = Palavra[tam - 1 - i];
        Palavra[tam - 1 - i] = temp;
    }
}

int main() {
    char Palavra[] = "Testando a funcao";
    printf("String original: %s\n", Palavra);
    InverteString(Palavra);
    printf("String invertida: %s\n", Palavra);
    return 0;
}
