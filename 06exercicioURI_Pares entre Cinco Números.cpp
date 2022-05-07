#include <iostream>
using namespace std;


int main(){

int valor,valor2,valor3,valor4,valor5;
int QTD = 0;

cin >> valor >> valor2 >> valor3 >> valor4 >> valor5;

if(valor % 2==0){
	QTD++;
}
if(valor2 % 2==0){
	QTD++;
}
if(valor3 % 2==0){
	QTD++;
}
if(valor4 % 2==0){
	QTD++;
}
if(valor5 % 2==0){
	QTD++;
}

cout << QTD << " valores pares" << endl;

	return 0;
}
