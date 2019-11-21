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
    int qtd, pos;
    qtd=0;
    pos=texto.find (palavra, 0);
    while(pos!=-1)
    {
        qtd++;
        pos=texto.find (palavra, pos+1);
    }
    return qtd;
}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
void substituirPalavras(string palavra1, string palavra2, string texto)
{
    int pos, qtd;
    qtd=palavra1.length();
    pos = texto.find (palavra1, 0);
    while(pos!=-1)
    {
        texto.replace (pos, qtd, palavra2);
        pos=texto.find (palavra1, pos+1);
    }
    cout<< texto;

}


int main(){

	cout << "Entre com o texto para fazer o teste:";




	return 0;
}

