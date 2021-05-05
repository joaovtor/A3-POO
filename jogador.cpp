#include "jogador.h"

int Jogador::NovoID = 0;

Jogador::Jogador(string Nome, float Salario, int Data)
{
	this->Nome = Nome;
	ID = GeraID();
	DataNasc = Data;
	SalarioB = Salario;

}

void Jogador::setNome(string N)
{
	Nome = N;
}

void Jogador::setID(int I)
{
	ID = I;
}

void Jogador::setDataNasc(int D)
{
	DataNasc = D;
}

void Jogador::setNacionalidade(string ND)
{
	Nacionalidade = ND;
}

void Jogador::setCategoria(string C)
{
	Categoria = C;
}

void Jogador::setSalarioB(float SB)
{
	SalarioB = SB;
}

string Jogador::getNome()
{
	return Nome;
}

int Jogador::getID()
{
	return ID;
}

int Jogador::getDataNasc()
{
	return DataNasc;
}

string Jogador::getNacionalidade()
{
	return Nacionalidade;
}

string Jogador::getCategoria()
{
	return Categoria;
}

float Jogador::getSalarioB()
{
	return SalarioB;
}

int Jogador::CalcIdade()
{
	int Idade;
	Idade = 2021 - DataNasc;
	return Idade;
}

void Jogador::Aposentar()
{

	if (CalcIdade() > 65) {
		cout << "\nJa pode se aposentar\n\n";
	}
	else
	{
		cout << "\nFaltam: " << 65 - CalcIdade() << " anos para o jogador se aposentar\n\n";
	}
	}
	

float Jogador::SalarioL()
{
	float SalarioL;

	float INSS, Imposto;


	if (SalarioB <= 1100.0) {
		INSS = SalarioB * 0.075;
		SalarioL = SalarioB - INSS;

	
	}
	else if (SalarioB <= 2000.0) {
		INSS = SalarioB * 0.09;
		Imposto = SalarioB * 0.075;
		SalarioL = SalarioB - INSS - Imposto;

		
	}
	else if (SalarioB<=3100.0) {
		INSS = SalarioB * 0.12;
		Imposto = SalarioB * 0.15;

		SalarioL = SalarioB - INSS - Imposto;

	}
	else if (SalarioB<=4100.0) {
		INSS = SalarioB * 0.14;
		Imposto = SalarioB * 0.22;

		SalarioL = SalarioB - INSS - Imposto;

		
	}
	else {
		INSS = SalarioB * 0.14;
		Imposto = SalarioB * 0.27;

		SalarioL = SalarioB - INSS - Imposto;

	}

	return SalarioL;
}



float Jogador::CalculoINSS()
{
	float INSS;

	if (SalarioB <= 1100.0) {
		INSS = SalarioB * 0.075;
	}
	else if (SalarioB <= 2000.0) {
		INSS = SalarioB * 0.09;
	}
	else if (SalarioB <= 3100.0) {
		INSS = SalarioB * 0.12;
	}
	else if (SalarioB <= 4100.0) {
		INSS = SalarioB * 0.14;
	}
	else {
		INSS = SalarioB * 0.14;
	}

	return INSS;
}

float Jogador::CalculoImposto()
{

	float Imposto;

	if (SalarioB <= 1100.0) {
		return NULL;
	}
	else if (SalarioB <= 2000.0) {
		Imposto = SalarioB * 0.075;
	}
	else if (SalarioB <= 3100.0) {
		Imposto = SalarioB * 0.15;
	}
	else if (SalarioB <= 4100.0) {
		Imposto = SalarioB * 0.22;
	}
	else {
		Imposto = SalarioB * 0.27;
	}

	return Imposto;
}


void Jogador::Detalhes()
{
	cout << "\nNome: " << getNome()
		<< "\nSalario Bruto: " << getSalarioB()
		<< "\nSalario liquido: " << SalarioL()
		<< "\nID: " << ID
		<< "\nIdade: " << CalcIdade();
		Aposentar();
}

int Jogador::GeraID()
{
	NovoID++;
	return NovoID;
}
