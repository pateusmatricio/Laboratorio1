#include <ostream>
#include <vector>

#include "data.h"
#include "funcionario.h"

using namespace std;

Funcionario::Funcionario(string n, float s, Data d): nome(n), salario(s), dataAdmissao(d){}

string Funcionario::getNome(){
	return nome;
}

float Funcionario::getSalario(){
	return salario;
}

void Funcionario::aumentaSalario(float x){
	salario *= (x/100)+1;
}

Data Funcionario::getDataAdmissao(){
	return dataAdmissao;
}

bool Funcionario::operator==(Funcionario f){
	if(nome == f.nome && salario == f.salario && dataAdmissao == f.dataAdmissao)
		return true;
	return false;
}

ostream& operator<<(ostream &o, const Funcionario f){
	o << "Nome: " << f.nome << "\nSalário: " << f.salario << "\nData de Admissão: " << f.dataAdmissao << "\n-----------------------\n";
}
