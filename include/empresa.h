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
		
		Empresa(string n);
		string getNome();
		void setNome();
		void addFuncionario();
		void listarFuncionarios();
		void aumentoSalario();
};

#endif