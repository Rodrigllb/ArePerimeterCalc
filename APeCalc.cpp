#include <iostream>
using namespace std;

double perimetrocalc(double, double); //protótipos com argumentos
void perimetro(void); // protótipos
void perimetrocalcIncomum();
void area(void);
double areacalcP(double, double);

//Perimetro de figuras irregulares, protótipos;
double TriânguloIrregular(double, double, double);
double QuadradoIrregular(double, double, double, double);
double PentágonoIrregular(double, double, double, double, double);

int main(void)
{
	system("chcp 1252 > nul");
	system("cls");
	cout << "**************************************\n"; // Interface inicial do executável
	cout << "cm - AreAndPerimeterCalc. v. 1.0 alpha\n";
	cout << "project developed by rodrigo.\n";
	cout << "**************************************\n\n";

	int option; // váriavel inteira para armazenar um valor específico
	cout << "Calcule: \n";
	cout << "1. Perimetro de figura plana.\n";
	cout << "2. Área de figura plana.\n";
	cin >> option;

	switch (option) // ramificações, semelhante a condições!
	{
	case 1:
		system("cls");
		perimetro(); // chamada de funções.
	case 2:
		system("cls");
		area(); //chamada da função area para o respectivo calculo

	default:
		cout << "Erro de comando\n"; //Isso assemelha-se com um laço de repetição, pois ao dar um comando intero errado, irá voltar novamente ao "main".
		main(); //Chamada da função main.

	}
}
void perimetro(void)
{
	double ladosDaFigura;
	double valorDosLados;
	system("cls"); // Limpeza de texto do prompt
	
	cout << "Perimetro de figura plana(Regulares e irregulares)\n";
	int OpçãoDeLadosIncomuns;
	cout << "Os valores variam na determinada figura plana?\n";
	cout << "1. Sim\n" << "2. Não\n";
	cin >> OpçãoDeLadosIncomuns;

	switch (OpçãoDeLadosIncomuns)
	{
	case 1:
		perimetrocalcIncomum();
	case 2:
		cout << "Continuando..\n";
		break;
	default:
		cout << "\n";
		perimetro();
	}

	cout << "Perimetro de figura plana (Polignos regulares)\n";
	cout << "Quantos lados a sua figura?\n";
	cin >> ladosDaFigura;
	cout << "Valor dos lados\n";
	cin >> valorDosLados;

	cout << "Resultado do perimetro será: " << perimetrocalc(ladosDaFigura, valorDosLados); //Exibe o valor de retorno, como resultado pós calculo.
	cout << endl;

	//****Condições dos valores dos lados de uma figura comum, sem variação de valores atribuidos***//
	if (ladosDaFigura == 3)
		cout << "Tipo de figura: triângulo\n"; // Condição que apresenta o nome da figura após o valor especificado pelo usuário.
	if (ladosDaFigura == 4)
		cout << "Tipo de figura: quadrado\n"; //Além do mais, ainda tenho muitas dúvidas acerca do "if" e o "switch" kk, será que o switch é melhor nessas situações?
	if (ladosDaFigura == 5)
		cout << "Tipo de figura: pentágono\n";
	if (ladosDaFigura == 6)
		cout << "Tipo de figura: hexágono\n";
	if (ladosDaFigura == 7)
		cout << "Tipo de figura: heptágono\n";
	if (ladosDaFigura == 8)
		cout << "Tipo de figura: octógono\n";
	if (ladosDaFigura == 9)
		cout << "Tipo de figura: eneágono\n";
	if (ladosDaFigura == 10)
		cout << "Tipo de figura: decágono\n";
	if (ladosDaFigura == 11)
		cout << "Tipo de figura: undecágono\n";
	if (ladosDaFigura == 12)
		cout << "Tipo de figura: dodecágono\n";
	if (ladosDaFigura == 13)
		cout << "Tipo de figura: tridecágono\n";
	if (ladosDaFigura == 14)
		cout << "Tipo de figura: tetradecágono\n";
	if (ladosDaFigura == 15)
		cout << "Tipo de figura: pentadecágono\n";
	if (ladosDaFigura == 16)
		cout << "Tipo de figura: hexadecágono\n";
	if (ladosDaFigura == 17)
		cout << "Tipo de figura: heptadecágono\n";
	if (ladosDaFigura == 18)
		cout << "Tipo de figura: octadecágono\n";
	if (ladosDaFigura == 19)
		cout << "Tipo de figura: eneadecágono\n";
	if (ladosDaFigura == 20)
		cout << "Tipo de figura: icoságono\n";
	if (ladosDaFigura > 20)
		cout << "É sério que existe poligno com até mil lados!!??\n";

	cout << endl;

	int OpçãoDeLadosComuns;
	cout << "Deseja realizar a operação novamente?\n" << "1. Sim\n" << "2. Não\n";
	cin >> OpçãoDeLadosComuns;
	switch (OpçãoDeLadosComuns) // Ramificações, semelhante ao 'if'.
	{
	case 1:
		perimetro();
	case 2:
		cout << "voltando ao menu anterior..\n";
		system("pause");
		main();
	default:
		cout << "erro de comando\n";
		system("cls");
		perimetro();

	}

}
double perimetrocalc(double QuantidadeDelados, double ladosComValor)
{
	double resultadoPerimetro;
	return resultadoPerimetro = QuantidadeDelados * ladosComValor; //Calculando o perimetro e retornando o valor;


}
void perimetrocalcIncomum()
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
			perimetrocalcIncomum();
		if (OpçãoDeEscolha == 2)
			main();
		

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
			perimetrocalcIncomum();
		if (OpçãoDeEscolha == 2)
			main();


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
			perimetrocalcIncomum();
		if(OpçãoDeEscolha == 2)
			main();

	default:
		cout << "(1 e 2 lados são inexistentes) Error, no momento só é suportado até um poligono de 5 lados, tente novamente.\n";
		system("pause > nul"); //Pausa para que o usuário leia 
		perimetrocalcIncomum();
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
void area(void)
{
	system("cls");
	cout << "Área de figuras planas\n";
	int opção;
	cout << "Qual figura deseja escolher para iniciar o calculo?\n"; //Inicialmente o calculo se iniciará pelo triângulo.
	cout << "1. Triângulo\n" << "2. Sair\n";
	cin >> opção;

	switch (opção)
	{
	case 1:
		cout << endl;
		double base, altura;
		cout << "Qual a base da figura?\n";
		cin >> base;
		cout << "Qual a altura?\n";
		cin >> altura;

		areacalcP(base, altura);
		cout << "O resultado da área é: " << areacalcP(base, altura) << endl << endl;
		system("pause > nul");
		cout << "Reiniciando...\n";
		system("pause > nul");

		area();

	case 2:
		system("cls");
		main();


	default:
		cout << "erro de comando..\n";
		area();
	}
}
double areacalcP(double valorDaBase, double valorDaAltura)
{
	double AreaResultado;
	return AreaResultado = valorDaBase * valorDaAltura / 2; // a = b*h/2 Calculando a area de um triangulo.
}
