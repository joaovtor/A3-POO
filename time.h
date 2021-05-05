#ifndef time_h
#define time_h

#include<iostream>
#include<vector>
#include"jogador.h"
using namespace std;

class Time
{
public:
	Time(string Nome);
	
	void setNome(int N);
	void setID();
	void setCategoria(int C);

	string getNome();
	int getIDTime();
	string getCategoria();

	void RelatorioGeral();
	void RelatorioFinanceiro();
	
	void addJogador(Jogador);

	void DetalhesTime();

	void AcharJogador(string Nome);

	void SalarioTotal();
	
	vector<Jogador> JogadoresNoTime;
private:
	string Nome;
	int IDTime;
	string Categoria;

	float SalarioJogador;
	float ImpostoJogador;
	float INSSJogador;

	int static NovoIDTime;
	int GeraID();
};




#endif // !time_h

