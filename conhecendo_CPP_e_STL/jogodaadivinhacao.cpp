#include<iostream>
using namespace std;

int main (){
	cout <<"**********************************"<< endl;
	cout <<"*Bem-vidos ao jogo de adivinhação*"<< endl;
	cout <<"**********************************"<< endl;

	int numero_secreto = 42;
	// Operador de insercao
	// cout << "O número secreto é " <<numero_secreto<<", nao conte para ninguém!" << endl;

	int chute;
	cout << "Qual seu chute? ";
	cin >> chute;
	cout << "O valor do seu chute é: " << chute << endl;

	if(chute == numero_secreto){
		cout << "Parabéns, você acertou o número secreto!" << endl;
	}
	else if(chute >  numero_secreto){
		cout << "Seu chute foi maior que o numero secreto!" << endl;
	}
	else{
		cout << "Seu chute foi menor que o número secreto!" << endl;
	};

}
