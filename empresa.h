#ifndef Empresa_H
#define Empresa_H

#include"time.h"

class Empresa
{
public:
	Empresa();
	
	void Consultar(string Nome);
	void Lista();
	void RelatorioFinanceiro();

	void addTime();


	vector<Time> Times;

private:
	
};



#endif // !Empresa_H

