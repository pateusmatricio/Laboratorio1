#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>
#include <vector>

#include "funcionario.h"

using namespace std;

class Empresa{
	private:
		string nome;
		string cnpj;
		vector<Funcionario> listaFuncionarios;

	public:
		
		Empresa(string n, string c);
		~Empresa();
		string getNome();
		void addFuncionario(Funcionario f);
		void listarFuncionarios();
		void listarFuncionariosExperiencia(Data atual);
		void aumentoSalarios(float x);

		friend ostream& operator<<(ostream &o, const Empresa &e);
};

#endif