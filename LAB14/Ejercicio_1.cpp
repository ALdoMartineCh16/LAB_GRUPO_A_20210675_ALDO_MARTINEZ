#include <iostream>
using namespace std;

class Productos{
private:
	int codigo;
	int stock;
	string nombre;
	float precio;
	Productos *sig;
public:
	Productos(){}
	void Imprimir_(Productos &produc){
		Productos *aux = &produc;
		Productos *aux2 = aux->sig;
		while(aux2 != NULL){
			cout<<"\nCodigo: " << aux2->codigo << endl;
			cout<<"Nombre: " << aux2->nombre << endl;
			cout<<"Precio: " << aux2->precio << endl;
			cout<<"Stock: " << aux2->stock << endl;
			aux2 = aux2->sig;
		}
	}
		
		void Modificar_(string name_, int codigo_, float precio_, int stock_, Productos &produc){
			Productos *aux = &produc;
			Productos **aux2 = &aux;
			while(*aux2 != NULL){
				if((*aux2)->codigo == codigo_){
					(*aux2)->nombre = name_;
					(*aux2)->precio = precio_;
					(*aux2)->stock = stock_;
					break;
				}
				aux2 = &((*aux2)->sig);
			}
			
		}
			
			
			void New_(string nombre, int codigo, float precio, int stock, Productos &produc){
				Productos *aux = new Productos;
				Productos *aux2 = new Productos;
				aux->nombre = nombre;
				aux->codigo = codigo;
				aux->precio = precio;
				aux->stock = stock;
				aux->sig = NULL;
				if(produc.sig == NULL){
					produc.sig = aux;
				}else{
					aux2 = produc.sig;
					while(aux2->sig != NULL){
						aux2 = aux2->sig;
					}
					aux2->sig = aux;
				}
			}
				
				void DarDeBaja(int codigoeliminar, Productos &produc){
					Productos *aux = &produc;
					Productos **aux2 = &aux;
					while(aux != NULL){
						if(aux->codigo == codigoeliminar){
							aux->codigo = codigoeliminar;
							aux->precio = 0;
							aux->stock = 0;
						}
						aux = aux->sig;
					}
				}
					
					void buscarproductocode(int codebuscar, Productos &produc){
						Productos *aux = &produc;
						while(aux != NULL){
							if(aux->codigo == codebuscar){
								cout<<"Producto " << aux->nombre << " fue encontrado." << endl;
								break;
							}
							aux = aux->sig;
						}
					}
						
						void buscarproductonombre(string nombrebuscar, Productos &produc){
							Productos *aux = &produc;
							while(aux != NULL){
								if(aux->nombre == nombrebuscar){
									cout<<"Producto " << aux->nombre << " fue encontrado." << endl;
									break;
								}
								aux = aux->sig;
							}
						}
};

int main(){
	int opc=0, codigo_, stock_, _Name;
	string name_;
	float precio_;
	Productos *productos = new Productos();
	do{
		cout<<"-------Menu-------"<<endl;
		cout<<"1. Dar de alta un producto nuevo."<<endl;
		cout<<"2. Dar de baja a un producto. (No hay stock)."<<endl;
		cout<<"3. Buscar un producto por su nombre o código."<<endl;
		cout<<"4. Imprimir datos"<<endl;
		cout<<"5. Modificar el nombre, precio o cantidad de un producto dado."<<endl;
		cout<<"6. Salir\nOpcion: ";cin>>opc;
		
		if(opc==1){
			cout<<"Codigo del producto: "; cin>>codigo_;
			cout<<"Stock del producto: "; cin>>stock_;
			cout<<"Nombre del producto: "; cin>>name_;
			cout<<"Precio del producto: "; cin>>precio_;
			productos->New_(name_, codigo_, precio_, stock_, *productos);
		}else if(opc==2){
			cout<<"Codigo del producto a darlo de baja: ";
			cin>>codigo_;
			productos->DarDeBaja(codigo_, *productos);
		}else if(opc==3){
			cout << "Opciones de busqueda: " << endl;
			cout << "1. Codigo" << endl;
			cout << "2. Nombre" << endl; cin >> _Name;
			if(_Name == 1){
				cout << "Codigo del producto: ";
				cin >> codigo_;
				productos->buscarproductocode(codigo_, *productos);
			}else{
				cout << "Nombre del producto: ";
				cin >> name_;
				productos->buscarproductonombre(name_, *productos);
			}
		}else if(opc==4){
			cout << "Productos: " << endl;
			productos->Imprimir_(*productos);
		}else if(opc==5){
			
			cout<<"Codigo del producto: ";cin>>codigo_;
			cout<<"Nuevo del producto: "; cin>>name_;
			cout<<"Precio nuevo del producto: ";cin>>precio_;
			cout<<"Stock nuevo del producto: ";cin>>stock_;
			productos->Modificar_(name_, codigo_, precio_, stock_, *productos);
			
		}else if(opc==6){
			break;
		}else{
			cout<<"Opcion no valida" << endl;
		}
	}while(true);
	
	return 0;
}
