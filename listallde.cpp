#include "listallde.h"
namespace edu
{

ListaLLDE::ListaLLDE():inicio(0),quantidadeElemento(0),fim(0)
{}

int ListaLLDE::getQuantidadeElemento() const
{
    return quantidadeElemento;
}

void ListaLLDE::inserirInicio(int dado)
{
    try
    {
        No *novoNo = new No(dado);
        if(estaVazia())
        {
            inicio=fim=novoNo;
            quantidadeElemento++;
            return;
        }
        novoNo->setProximo(inicio);
        inicio->setAnterior(novoNo);
        inicio = novoNo;
        quantidadeElemento++;

    }catch(std::bad_alloc &erro)
    {
        throw QString ("O novo no nao pode ser criados");
    }
    //se a lista esta vazia->QElemento++,inicio=fim=novo no,return
    //novo no atribuir ao proximo = incio
    // inicio atribuir ao anterior = novo No
    //incio=novo
    //QE++
}

void ListaLLDE::retirarInicio()
{
    if(estaVazia())
    {
        throw QString ("A lista esta vazia");
    }
    if(quantidadeElemento==1)
    {
        delete inicio;
        quantidadeElemento=0;
        inicio=fim=0;
        return;
    }
    inicio=inicio->getProximo();
    delete inicio->getAnterior();
    inicio->setAnterior(0);
    quantidadeElemento--;


    //se a lista esta vazia -LE
    //se a lista tem somente um elemento
    //apagar o No via inicio
    //QE =0,incio=0,fim=0
    //retunr
    //inicio=incio->getProximo
    //apagar inicio getAnterior()
    //incluir 0 no inicio->setAnterior()0
    //QE--

}

int ListaLLDE::acessarInicio() const
{
    if (estaVazia())
    {
        throw QString("Lista esta vazia");
    }
    return inicio->getDado();
    //retorne o dado do ponteiro inicio
}

bool ListaLLDE::estaVazia() const
{
    return(quantidadeElemento == 0);
}

QString ListaLLDE::toSTringIniciofim() const
{
    if (estaVazia())
        throw QString("A lista esta vazia");
    QString saida = "Dados da lista =>";
    edu::No *pAux = inicio;
    for (int pos=0;pos< quantidadeElemento ;pos ++)
    {
        saida += pAux->toString();
        pAux=pAux->getProximo();
    }
    return saida;
}

QString ListaLLDE::toStirngfimInicio() const
{
    if (estaVazia())
        throw QString("A lista esta vazia");
    QString saida = "Dados da lista =>";
    edu::No *pAux = fim;
    for (int pos=0;pos< quantidadeElemento ;pos ++)
    {
        saida += pAux->toString();
        pAux=pAux->getAnterior();
    }
    return saida;
}

int ListaLLDE::acessarFim() const
{
    if (estaVazia())
        throw QString("A lista esta vazia");
    return fim->getDado();
    //se a lista esta vazia ->LE
    //retorne a dado ao ponteiro fim=fim->getDado();

}

void ListaLLDE::retirarFim()
{
    if(estaVazia())
        throw QString ("A lista esta vazia");
    if(quantidadeElemento==1)
    {
        delete fim;
        quantidadeElemento=0;
        inicio=fim=0;
        return;
    }
    fim=fim->getAnterior();
    delete fim->getProximo();
    fim->setProximo(0);
    quantidadeElemento--;
    //se a lista esta vazia->LE
    //se a lista tem somente um elemento
    //apagar fim
    //fim=inicio=0;
    //QE=0;
    //return
    //fim<-fim->getAnterior()
    //apagar fim -> get proximo()
    //QE--
    //fim.setProximo(0)
}

void ListaLLDE::inserirFim(int dado)
{
    try
    {
        No *pNovoNo = new No(dado);
        if(estaVazia())
        {
            inicio = fim =pNovoNo;
            quantidadeElemento++;
            return;
        }
        pNovoNo->setAnterior(fim);
        fim->setProximo(pNovoNo);
        fim=pNovoNo;
        quantidadeElemento++;
    }catch(std::bad_alloc &erro)
    {
        throw QString ("O novo no nao pode ser criado");
    }
    //criar um novo No -pNovoNO
    //se a lista esta vazia
    //QE++
    //inicio = fim =pNovoNo
    //return
    //pNovoNo->setAnterior(fim)
    //fim->setProximo(pNovoNo)
    //fim<-pNovoNo
    //QE++
}
}
