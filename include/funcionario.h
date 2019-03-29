#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "data.h"

using namespace std;

class Funcionario{
	private:
		string nome;
		float salario;
		Data dataAdmissao;

	public:

		friend ostream& operator<<(ostream &o, const Funcionario f);

};

#endif