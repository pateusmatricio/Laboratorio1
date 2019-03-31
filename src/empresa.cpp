/**
 * @file empresa.cpp
 * @brief Implementação de Empresa.
 * @author Mateus Patricio
 * @date 31/03/2019
 */

#include <iostream>
#include <vector>

#include "empresa.h"
#include "funcionario.h"

using namespace std;

/// @brief Construtor parametrizado com valores do tipo string para nome e cnpj e criação da lista de funcionários;
Empresa::Empresa(string n, string c): nome(n), cnpj(c){
	vector<Funcionario> listaFuncionarios;
}

string Empresa::getNome(){
	return nome;
}

/// @brief Método que verifica se o funcinário recebido como parâmetro já está na lista de funcionários e o adiciona caso ele não esteja;
void Empresa::addFuncionario(Funcionario f){
	int tamanho = listaFuncionarios.size();
	for (int i = 0; i < tamanho; i++){
		if(f == listaFuncionarios[i]){
			cout << "Funcionário já consta nessa empresa" << endl;
			return;
		}
	}
	listaFuncionarios.push_back(f);
}

/// @brief Método que mostra os funcionários guardados na lista de funcionários;
void Empresa::listarFuncionarios(){
	int tamanho = listaFuncionarios.size();

	for (int i = 0; i < tamanho; i++){
		cout << listaFuncionarios[i] << endl;
	}
}

/// @brief Método que mostra os funcionários guardados na lista de funcionários em que entre sua data de admissão e a data atual fazem menos de 90 dias;
void Empresa::listarFuncionariosExperiencia(Data atual){
	int tamanho = listaFuncionarios.size();

	for (int i = 0; i < tamanho; i++){
		if(listaFuncionarios[i].getDataAdmissao().diferencaDeDias(atual) < 90)
			cout << "Dias de experiencia: " <<listaFuncionarios[i].getDataAdmissao().diferencaDeDias(atual) << endl << listaFuncionarios[i] << endl ;
	}
}

/// @brief Método que aumenta o salário de todos os funcionários na lista percentualmente pelo valor recebido como parâmetor;
void Empresa::aumentoSalarios(float x){
	int tamanho = listaFuncionarios.size();
	
	for (int i = 0; i < tamanho; i++){
		listaFuncionarios[i].aumentaSalario(x);
	}	
}

/// @brief Sobrecarga do operador << para mostrar empresas;
ostream& operator<<(ostream &o, const Empresa &e){
	o << "Empresa: " << e.nome << "\nCNPJ: " << e.cnpj << "\nNúmero de funcionários: " << e.listaFuncionarios.size() << "\n-----------------------\n";
}

Empresa::~Empresa(){

}
