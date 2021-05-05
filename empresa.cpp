#include"empresa.h"

Empresa::Empresa() {

}

void Empresa::Consultar(string Nome) {
	for (int i = 0; i < Times.size(); i++)
	{
		Times[i].AcharJogador(Nome);
	}
}

void Empresa::Lista() {

	for (int i = 0; i < Times.size(); i++)
	{
		cout << "\nTime: " << Times[i].getNome();
		Times[i].DetalhesTime();
	}
}

void Empresa::RelatorioFinanceiro() {
	for (int i = 0; i < Times.size(); i++)
	{
		Times[i].SalarioTotal();
	}
}

void Empresa::addTime() {
	//Times.push_back();

}


