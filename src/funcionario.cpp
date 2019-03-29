#include <ostream>
#include <vector>

#include "data.h"
#include "funcionario.h"

using namespace std;

Funcionario::Funcionario(string n, float s, Data d): nome(n), salario(s), dataAdmissao(d){}

void Empresa::addFuncionario(Funcionario &f){
	listaFuncionarios.push_back(f);
}

string getNome(){
	return nome;
}

string getSalario(){
	return salario;
}

Data getDataAdmissao(){
	return dataAdmissao;
}

ostream& operator<<(ostream &o, const Funcionario f){
	o << "Nome: " << f.getNome << "\nSalário: " << f.getSalario << "\nData de Admissão: " << f.getDataAdmissao << "\n-----------------------\n";
}
