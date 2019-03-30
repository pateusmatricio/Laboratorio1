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

		Funcionario(string n, float s, Data d);
		string getNome();
		float getSalario();
		void setSalario(float s);
		void aumentaSalario(float x);
		Data getDataAdmissao();

		bool operator==(Funcionario f);
		friend ostream& operator<<(ostream &o, const Funcionario f);

};

#endif