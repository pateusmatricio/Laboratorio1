#ifndef EMPRESA_H
#define EMPRESA_H

#include "funcionario.h"

using namespace std;

class Empresa{
	private:
		string nome;
		string cnpj;
		vector<Funcionario> listaFuncionarios;

	public:
		
		Empresa(string n, string c);
		void setNome();
		void addFuncionario(Funcionario &f);
		void listarFuncionarios();
		void aumentoSalario();
};

#endif