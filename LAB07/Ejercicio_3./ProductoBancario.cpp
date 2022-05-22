#include "ProductoBancario.h"

ProductoBancario::ProductoBancario(string _cliente,double _saldo,int _numProductos) {
	cliente = _cliente;
	saldo = _saldo;
	numProductos = _numProductos;
}

ProductoBancario::~ProductoBancario(){}

void ProductoBancario::imprimir(){
	cout<<"\nCliente: "<<cliente<<"\nSaldo: "<<saldo<<"\nNumero productos: "<<numProductos;
}
