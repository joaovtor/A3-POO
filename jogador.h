#ifndef jogador_h
#define jogador_h


#include<iostream>
using namespace std;

class Jogador
{
public:
	Jogador(string Nome, float Salario, int Data);
	
	void setNome(string N);
	void setID(int I);
	void setDataNasc(int D);
	void setNacionalidade(string ND);
	void setCategoria(string C);
	void setSalarioB(float SB);

	string getNome();
	int getID();
	int getDataNasc();
	string getNacionalidade();
	string getCategoria();
	float getSalarioB();

	int CalcIdade();
	void Aposentar();
	float SalarioL();

	void Detalhes();

	float CalculoINSS();
	float CalculoImposto();
	
private:
	string Nome;
	int ID;
	int DataNasc;
	float SalarioB;
	string Nacionalidade;
	string Categoria;
	
	

	int static NovoID;
	int GeraID();


};


#endif //!jogador_h