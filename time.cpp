#include"time.h"

int Time::NovoIDTime = 0;

Time::Time(string Nome)
{
	this->Nome = Nome;
	IDTime = GeraID();
}

void Time::setNome(int N)
{
	Nome = N;
}

void Time::setID()
{
}

void Time::setCategoria(int C)
{
	Categoria = C;
}

string Time::getNome()
{
	return Nome;
}

int Time::getIDTime()
{
	return IDTime;
}

string Time::getCategoria()
{
	return Categoria;
}

void Time::RelatorioGeral()
{
	cout << "\nNome do time: " << Nome;

	for (int i = 0; i < JogadoresNoTime.size(); i++) {
		cout << "\nJogador " << i + 1 << ": ";
		JogadoresNoTime[i].Detalhes();
	}
}

void Time::RelatorioFinanceiro()
{
	cout << "\nNome do time: " << Nome;

	for (int i = 0; i < JogadoresNoTime.size(); i++) {
		cout << "\nSalario Bruto e Liquido do Jogador " << JogadoresNoTime[i].getNome() << ": ";
		cout<<"\n"<<JogadoresNoTime[i].getSalarioB()<<"\n"<< JogadoresNoTime[i].SalarioL();
	
	}
}

void Time::addJogador(Jogador)
{
	//JogadoresNoTime.push_back();
}

int Time::GeraID()
{
	NovoIDTime++;
	return NovoIDTime;
}

void Time::DetalhesTime() {
	for (int i = 0; i < JogadoresNoTime.size(); i++)
	{
		cout << "\nNome do jogador " << i + 1 <<": "<< JogadoresNoTime[i].getNome();
	}
}

void Time::AcharJogador(string Nome) {
	for (int i = 0; i < JogadoresNoTime.size(); i++)
	{
		if (JogadoresNoTime[i].getNome() == Nome) {
			JogadoresNoTime[i].Detalhes();
		}
	}
}

void Time::SalarioTotal()
{
	for (int i = 0; i < JogadoresNoTime.size(); i++)
	{
		SalarioJogador += JogadoresNoTime[i].getSalarioB();
		ImpostoJogador += JogadoresNoTime[i].CalculoImposto();
		INSSJogador    += JogadoresNoTime[i].CalculoINSS();
		
	}

	cout << "Nome do time: " << Nome
		 << "\nSalario total: " << SalarioJogador
		 << "\nImposto retido dos salarios: " << ImpostoJogador
		 << "\nINSS dos salarios: "<<INSSJogador
		 << "\n";

	
}



