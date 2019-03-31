/**
 * @file funcionario.cpp
 * @brief Implementação de Funcionario.
 * @author Mateus Patricio
 * @date 31/03/2019
 */

#include <ostream>
#include <vector>

#include "data.h"
#include "funcionario.h"

using namespace std;

/// @brief Construtor parametrizado;
Funcionario::Funcionario(string n, float s, Data d): nome(n), salario(s), dataAdmissao(d){}

string Funcionario::getNome(){
	return nome;
}

float Funcionario::getSalario(){
	return salario;
}

/// @brief Método que aumenta o salário do funcionário percentualmente pelo valor recebido como parâmetor;
void Funcionario::aumentaSalario(float x){
	salario *= (x/100)+1;
}

Data Funcionario::getDataAdmissao(){
	return dataAdmissao;
}


/// @brief Sobrecarga do operador == para compração entre Funcionarios;
bool Funcionario::operator==(Funcionario f){
	if(nome == f.nome && salario == f.salario && dataAdmissao == f.dataAdmissao)
		return true;
	return false;
}

/// @brief Sobrecarga do operador << para mostrar Funcionarios na tela;
ostream& operator<<(ostream &o, const Funcionario &f){
	o << "Nome: " << f.nome << "\nSalário: " << f.salario << "\nData de Admissão: " << f.dataAdmissao << "\n-----------------------\n";
}
