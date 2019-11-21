#include <iostream>
#include <string>
using namespace std;





int contaLetras(char letra, string texto)
{
    int qtd, iguais, cont;
    iguais=0;
    qtd=texto.length();
    for(cont=0; cont<qtd; cont++)
    {
        if(texto[cont]==letra)
            iguais++;
    }
    return iguais;
}


void substituirLetra(char letra1,char letra2, string texto)
{
    int qtd, cont;
    qtd=texto.length();
    for(cont=0; cont<qtd; cont++)
    {
        if(texto[cont]==letra1)
            texto[cont]=letra2;
    }
    cout<<texto;
}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
}
/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
void substituirPalavras(string palavra1, string palavra2, string texto)
{
}

int main(){

	cout << "Entre com o texto para fazer o teste:";




	return 0;
}

