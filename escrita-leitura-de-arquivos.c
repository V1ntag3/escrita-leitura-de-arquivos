#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *dados;
	char frase[1000];
	dados = fopen("arquivo.txt", "a");//chama o arquivo atravez de um ponteiro
	fprintf(dados, "pao"); //bota a string no arquivo
	fclose(dados); //fecha o arquivo
	fgets(frase, 100, file); // file pode ser stin para entrada pelo teclado

	fscanf(dados, "%d %d %d", &x, &y, &z); //pega dados do arquivo caso eles estejam organizados assim
	fputs(frase, dados);// entrega frase para o arquivo dados ou de um arquivo para outro
	struct accunt
	{
		char nome[233];
		int conta;
	};

	struct accunt p1;
	p1.nome;

	fwrite();
	return;
}
