#include <iostream>
using namespace std;

/*Faça um programa que mostre os números pares entre 1 e 100, inclusive.

Entrada
Neste problema extremamente simples de repetição não há entrada.

Saída
Imprima todos os números pares entre 1 e 100, inclusive se for o caso, um em cada linha.*/

//ultilizando o comando while dentro da função while declara variavel iniciando em 2 i=2; i=menor ou igual a 100;
// incremento i com soma 2

int main(){
    
    int i=2;

    while (i <=100) {
       cout << i << endl;
       i+=2;
    }
    
    return 0;
}
