#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main (){
	cout <<"**********************************"<< endl;
	cout <<"*Bem-vidos ao jogo de adivinhação*"<< endl;
	cout <<"**********************************"<< endl;

	cout << "Escolha seu nivel de dificuldade: " << endl;

	cout << "Fácil (F), Médio (M), Difícil (D)" << endl;

	char dificuldade;
	cin >> dificuldade;

	int numero_de_tentativas;

	if(dificuldade == 'F') {
		numero_de_tentativas = 15;
	}
	else if(dificuldade == 'M') {
		numero_de_tentativas = 10;
	}
	else {
		numero_de_tentativas = 5;
	}

	srand(time(NULL)); //seed
	// constantes em caps lock
	const int NUMERO_SECRETO = rand() % 100;
	// Operador de insercao
	// cout << "O número secreto é " <<numero_secreto<<", nao conte para ninguém!" << endl;

	bool nao_acertou = true; // enquanto nao acertar o laco de repeticao nao para
	int tentativas = 0;

	// numero real
	double pontos = 1000.0;


	// laco de repetição, enquanto
	for(tentativas = 1; tentativas <= numero_de_tentativas; tentativas++){
		int chute;
		cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
		cout << "Tentativa: " << tentativas << endl;
		cout << "Qual seu chute? "; // print
		cin >> chute; // input

		double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
		pontos = pontos - pontos_perdidos;

		cout << "O valor do seu chute é: " << chute << endl;
		bool acertou = chute == NUMERO_SECRETO;
		bool maior = chute > NUMERO_SECRETO;
		cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
		if(acertou){
			cout << "Parabéns, você acertou o número secreto!" << endl;
			nao_acertou = false; // quando acerta o chute encerra o laco
			break;
		}
		else if(maior){
			cout << "Seu chute foi maior que o numero secreto!" << endl;
		}
		else{
			cout << "Seu chute foi menor que o número secreto!" << endl;
		};
	}
	cout << "Fim de jogo!" << endl;
	if(nao_acertou){
		cout << "Você perdeu! Tente novamente!" << endl; 
	}
	else{
		cout << "Você acertou o número secreto em " << tentativas << " tentativa(s)!" << endl;
		cout.precision(2);
		cout << fixed; // setar o numeri de casas decimais com precision e fixed para nao sair em notacao cientifica
		cout << "Sua pontuação foi de " << pontos << " pontos." << endl;
	}
}
