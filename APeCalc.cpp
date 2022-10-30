#include <iostream>
using namespace std;

//Calculando os perimetros regulares.
double Calculando_Perimetro_Regular(double, double); 
void Inicio_Perimetro(); 

// Calculando a area, protótipos.
void Inicio_area();
double Calculo_Da_Area(double, double);

//Perimetro de figuras irregulares, protótipos;
void Perimetro_Calculo_Irregular();
double TriânguloIrregular(double, double, double);
double QuadradoIrregular(double, double, double, double);
double PentágonoIrregular(double, double, double, double, double);

int main()
{
	system("chcp 1252 > nul");
	system("cls");
	cout << "**************************************\n"; // Interface inicial do executável
	cout << "cm - AreAndPerimeterCalc. v. 1.0 alpha\n";
	cout << "project developed by rodrigo.\n";
	cout << "**************************************\n\n";

	int OpçãoDeEscolhaInicial; // váriavel inteira para armazenar um valor específico
	cout << "Calcule: \n" << "1. Perimetro de figura plana.\n" << "2. Área de figura plana.\n";
	cin >> OpçãoDeEscolhaInicial;

	switch (OpçãoDeEscolhaInicial) // ramificações, semelhante a condições!
	{
	case 1:
		system("cls");
		Inicio_Perimetro(); // chamada de funções.
		break;
	case 2:
		system("cls");
		Inicio_area(); //chamada da função area para o respectivo calculo
		break;
	default:
		cout << "Erro de comando\n";
		break;

	}
}
void Inicio_Perimetro()
{
	double LadosDaFigura, ValorDosLados;
	system("cls"); // Limpeza de texto do prompt
	int OpçãoDeLadosIrregulares;
	
	cout << "Perimetro de figura plana(Regulares e irregulares)\n" 
		 << "Você deseja calcular figuras regulares ou irregulares?\n" 
		 << "1. Figuras Regulares\n" << "2. Figuras Irregulares\n";
	cin >> OpçãoDeLadosIrregulares;

	switch (OpçãoDeLadosIrregulares)
	{
	case 1:
		cout << "Continuando..\n";
		break;
	case 2:
		Perimetro_Calculo_Irregular();
		break;
	default:
		cout << "erro de comando\n";
		break;
	}

	cout << "Perimetro de figura plana (Figuras regulares)\n" << "Quantos lados têm a sua figura?\n";
	cin >> LadosDaFigura;
	cout << "Valor dos lados\n";
	cin >> ValorDosLados;

	cout << "Resultado do perimetro será: " << Calculando_Perimetro_Regular(LadosDaFigura, ValorDosLados); //Exibe o valor de retorno, como resultado pós calculo.
	cout << endl;

	int Opção_DeLadosRegulares;
	cout << "Deseja realizar a operação novamente?\n" << "1. Sim\n" << "2. Não\n";
	cin >> Opção_DeLadosRegulares;

}
double Calculando_Perimetro_Regular(double QuantidadeDelados, double LadosComValor)
{
	double Resultado_Do_Perimetro;
	return Resultado_Do_Perimetro = QuantidadeDelados * LadosComValor; //Calculando o perimetro e retornando o valor;
}
void Perimetro_Calculo_Irregular()
{
	system("cls");
	cout << "Calculo de figuras planas (Polignos irregulares).\n";
	int QuantidadeDeLados, OpçãoDeEscolha;
	double	ValoresDosLados1, ValoresDosLados2, ValoresDosLados3, ValoresDosLados4, ValoresDosLados5;
	cout << "Quantos lados possue a figura plana que você deseja calcular?\n";
	cin >> QuantidadeDeLados;

	switch (QuantidadeDeLados)
	{
	case 3:
		cout << "Ok, um triângulo irregular. Quais são os valores dos lados?\n"; //Abaixo realiza-se o inicio das operações.
		cout << "Primeiro lado:\n";
		cin >> ValoresDosLados1;
		cout << "Segundo lado:\n";
		cin >> ValoresDosLados2;
		cout << "Terceiro lado:\n";
		cin >> ValoresDosLados3;

		cout << "O resultado do perimetro da figura é " << TriânguloIrregular(ValoresDosLados1, ValoresDosLados2, ValoresDosLados3);
		cout << endl;
		
		system("pause > nul");
		cout << "Deseja realizar outra operação?\n";
		cout << "1. Sim 2.Não, desejo retornar ao menu inicial.\n";
		cin >> OpçãoDeEscolha;


		if (OpçãoDeEscolha == 1)
		{
			Perimetro_Calculo_Irregular();
		}
		else if (OpçãoDeEscolha == 2)
		{
			main();
		}

	case 4:
		cout << "Ok, um quadrado irregular. Quais são os valores dos lados?\n";
		cout << "Primeiro lado:\n";
		cin >> ValoresDosLados1;
		cout << "Segundo lado:\n";
		cin >> ValoresDosLados2;
		cout << "Terceiro lado:\n";
		cin >> ValoresDosLados3;
		cout << "Quarto lado:\n";
		cin >> ValoresDosLados4;

		cout << "O resultado do perimetro da figura é " << QuadradoIrregular(ValoresDosLados1, ValoresDosLados2, ValoresDosLados3, ValoresDosLados4);
		cout << endl;

		system("pause > nul");
		cout << "Deseja realizar outra operação?\n";
		cout << "1. Sim 2.Não, desejo retornar ao menu inicial.\n";
		cin >> OpçãoDeEscolha;

		if (OpçãoDeEscolha == 1)
		{
			Perimetro_Calculo_Irregular();
		} else if (OpçãoDeEscolha == 2)
		{
			main();
		}

	case 5:
		cout << "Ok, um pentágono irregular. Quais são os valores dos lados?\n";
		cout << "Primeiro lado:\n";
		cin >> ValoresDosLados1;
		cout << "Segundo lado:\n";
		cin >> ValoresDosLados2;
		cout << "Terceiro lado:\n";
		cin >> ValoresDosLados3;
		cout << "Quarto lado:\n";
		cin >> ValoresDosLados4;
		cout << "Quinto lado:\n";
		cin >> ValoresDosLados5;

		cout << "O resultado do perimetro da figura é " << PentágonoIrregular(ValoresDosLados1, ValoresDosLados2, ValoresDosLados3, ValoresDosLados4, ValoresDosLados5);
		cout << endl;

		system("pause > nul");
		cout << "Deseja realizar outra operação?\n";
		cout << "1. Sim 2.Não, desejo retornar ao menu inicial.\n";
		cin >> OpçãoDeEscolha;


		if (OpçãoDeEscolha == 1)
		{
			Perimetro_Calculo_Irregular();
		}
		else if (OpçãoDeEscolha == 2)
		{
			main();
		}

	default:
		cout << "Erro, no momento só é suportado até um poligono de 5 lados, tente novamente.\n";
		system("pause > nul"); //Pausa para que o usuário leia 
		Perimetro_Calculo_Irregular();
	}
	

}
double TriânguloIrregular(double lado1, double lado2, double lado3) //Calculo do triângulo irregular.
{
	double ResultadoDoPerimetroIrregular_Triangular; //Nomeclatura redundante para melhor compreensão.

	return ResultadoDoPerimetroIrregular_Triangular = lado1 + lado2 + lado3;
}
double QuadradoIrregular(double lado1, double lado2, double lado3, double lado4) //Calculo do quadrado irregular.
{
	double ResultadoDoPerimetroIrregular_Quadrancular;  //Nomeclatura redundante para melhor compreensão.

	return ResultadoDoPerimetroIrregular_Quadrancular = lado1 + lado2 + lado3 + lado4;
}
double PentágonoIrregular(double lado1, double lado2, double lado3, double lado4, double lado5) //Calculo do pentágono irregular.
{
	double ResultadoDoPerimetroIrregular_Pentagonal;  //Nomeclatura redundante para melhor compreensão.
	return ResultadoDoPerimetroIrregular_Pentagonal = lado1 + lado2 + lado3 + lado4 + lado5;
}
void Inicio_area()
{
	system("cls");
	cout << "Área de figuras planas\n";
	int Opção_Para_Escolha;
	cout << "Qual figura deseja escolher para iniciar o calculo?\n"; //Inicialmente o calculo se iniciará pelo triângulo.
	cout << "1. Triângulo\n" << "2. Sair\n";
	cin >> Opção_Para_Escolha;

	switch (Opção_Para_Escolha)
	{
	case 1:
		cout << endl;
		double base, altura;
		cout << "Qual a base da figura?\n";
		cin >> base;
		cout << "Qual a altura?\n";
		cin >> altura;

		Calculo_Da_Area(base, altura);
		cout << "O resultado da área é: " << Calculo_Da_Area(base, altura) << endl << endl;
		system("pause > nul");
		cout << "Reiniciando...\n";
		system("pause > nul");

		Inicio_area();

	case 2:
		system("cls");
		main();


	default:
		cout << "erro de comando..\n";
		Inicio_area();
	}
}
double Calculo_Da_Area(double ValorDaBase, double ValorDaAltura)
{
	double AreaResultado;
	return AreaResultado = ValorDaBase * ValorDaAltura / 2; // a = b*h/2 Calculando a area de um triangulo.
}
