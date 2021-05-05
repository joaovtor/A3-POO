#include"jogador.h"
#include"time.h"
#include"empresa.h"


int main() {
	Jogador J1("Joao", 2500.0, 1950);
	Jogador J2("Carlito", 4500.0, 1980);
	Jogador J3("Marcelinho", 3800.0, 1993);

	J1.Detalhes();
	J2.Detalhes();
	J3.Detalhes();

	Time T1("Inter");
	Time T2("Gremio");

	T1.JogadoresNoTime.push_back(J1);
	T1.JogadoresNoTime.push_back(J2);

	T2.JogadoresNoTime.push_back(J3);

	T1.RelatorioGeral();

	T2.RelatorioGeral();

	T1.RelatorioFinanceiro();
	T2.RelatorioFinanceiro();

	T1.DetalhesTime();
	T2.DetalhesTime();

	Empresa E1;

	E1.Times.push_back(T1);
	E1.Times.push_back(T2);

	E1.Lista();

	E1.Consultar("Marcelinho");

	E1.RelatorioFinanceiro();

	

	}