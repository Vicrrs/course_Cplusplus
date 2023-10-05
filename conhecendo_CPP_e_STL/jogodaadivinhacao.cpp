#include<iostream>
using namespace std;

int main (){
	cout <<"**********************************"<< endl;
	cout <<"*Bem-vidos ao jogo de adivinhação*"<< endl;
	cout <<"**********************************"<< endl;

	// constantes em caps lock
	const int NUMERO_SECRETO = 42;
	// Operador de insercao
	// cout << "O número secreto é " <<numero_secreto<<", nao conte para ninguém!" << endl;

	bool nao_acertou = true; // enquanto nao acertar o laco de repeticao nao para
	int tentativas = 0;

	// laco de repetição, enquanto
	while(nao_acertou){
		tentativas++;
		int chute;
		cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
		cout << "Tentativa: " << tentativas << endl;
		cout << "Qual seu chute? "; // print
		cin >> chute; // input
		cout << "O valor do seu chute é: " << chute << endl;

		bool acertou = chute == NUMERO_SECRETO;
		bool maior = chute > NUMERO_SECRETO;

		if(acertou){
			cout << "Parabéns, você acertou o número secreto!" << endl;
			nao_acertou = false; // quando acerta o chute encerra o laco
		}
		else if(maior){
			cout << "Seu chute foi maior que o numero secreto!" << endl;
		}
		else{
			cout << "Seu chute foi menor que o número secreto!" << endl;
		};
	}
	cout << "Fim de jogo!" << endl;
}
