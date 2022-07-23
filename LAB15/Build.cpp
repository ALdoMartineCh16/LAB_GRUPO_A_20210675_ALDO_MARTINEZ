#include "iostream"
#include "vector"

using namespace std;

struct Parte{
	string nombre;
	string color;
};
class Producto1 {
public:
	vector<Parte> componentes;
	void ListaComp()const {
		std::cout << "\t\nPiezas del Carro: "<<endl;
		for (size_t i = 0; i < componentes.size(); i++) {
			std::cout <<" - " <<componentes[i].nombre << " de color "<<componentes[i].color<<endl;
		}
		std::cout << "\n***********Automovil Terminado***********\n\n";
	}
};

class IBuilder {
public:
	virtual ~IBuilder() {}
	virtual void ProducirPuertas() = 0;
	virtual void ProducirLlantas() = 0;
	virtual void ProducirAsientos() = 0;
	virtual void ProducirMotor() = 0;	
	virtual void ProducirEspejos() = 0;
	virtual void ProducirVidrios() = 0;
	virtual void ProducirChasis() = 0;
	virtual void ProducirLuces() = 0;
	virtual void ProducirTecho() = 0;
	virtual void ProducirTimon() = 0;
};

class BuilderEspecifico : public IBuilder {
private:
	Producto1* product;
	string colour;
public:

	BuilderEspecifico() {
		this->Reset();
	}
	~BuilderEspecifico() {
		delete product;
	}
	void Reset() {
		this->product = new Producto1();
	}
	void color(string _pieza, string _color){
		Parte *pieza = new Parte();
		pieza->nombre = _pieza;
		pieza->color = _color;
		this->product->componentes.push_back(*pieza);
	}
	void ProducirPuertas() override {
		string colour;
		cout<<"Color de las Puertas: ";getline(cin,colour);
		Parte *pieza = new Parte();
		color("Puertas",colour);
	}
	void ProducirLlantas() override {
		string colour;
		cout<<"Color de las Llantas: ";getline(cin,colour);
		color("Llantas",colour);
	}
	void ProducirAsientos() override {
		string colour;
		cout<<"Color de los Asientos: ";getline(cin,colour);
		color("Asientos",colour);
	}
	void ProducirMotor() override {
		string colour;
		cout<<"Color del Motor: ";getline(cin,colour);
		color("Motor",colour);
	}
	void ProducirEspejos() override {
		string colour;
		cout<<"Color de los Espejos: ";getline(cin,colour);
		color("Espejos",colour);
	}
	void ProducirVidrios() override {
		string colour;
		cout<<"Color de los Vidrios: ";getline(cin,colour);
		color("Vidrios",colour);
	}
	void ProducirChasis() override {
		string colour;
		cout<<"Color del Chasis: ";getline(cin,colour);
		color("Chasis",colour);
	}
	void ProducirLuces() override {
		string colour;
		cout<<"Color de las Luces: ";getline(cin,colour);
		color("Luces",colour);
	}
	void ProducirTecho() override {
		string colour;
		cout<<"Color del Techo: ";getline(cin,colour);
		color("Techo",colour);
	}
	void ProducirTimon() override {
		string colour;
		cout<<"Color del Timon: ";getline(cin,colour);
		color("Timon",colour);
	}
	Producto1* GetProducto() {
		Producto1* resultado = this->product;
		this->Reset();
		return resultado;
	}
};

class Director {
private:
	IBuilder* builder;
public:
	void set_builder(IBuilder* builder) {
		this->builder = builder;
	}
	void BuildProductoMin() {
		cin.ignore();
		this->builder->ProducirLlantas();
		this->builder->ProducirAsientos();
		this->builder->ProducirTimon();
		this->builder->ProducirMotor();
	}
	void BuildProductoCompleto() {
		cin.ignore();
		this->builder->ProducirLlantas();
		this->builder->ProducirAsientos();
		this->builder->ProducirTimon();
		this->builder->ProducirMotor();
		this->builder->ProducirPuertas();
		this->builder->ProducirTecho();
		this->builder->ProducirLuces();
		this->builder->ProducirChasis();
		this->builder->ProducirVidrios();
		this->builder->ProducirEspejos();
	}
};
void ClienteCode(Director& director)
{
	int opc;
	BuilderEspecifico* builder = new BuilderEspecifico();
	director.set_builder(builder);
	Producto1* p = builder->GetProducto();
	do{
		cout<<"\t****MENU****"<<endl;
		cout<<"1. Producir un automovil basico(Piezas: LLantas,Asientos,Timon,Motor)"<<endl;
		cout<<"2. Producir un automovil completo(Piezas: LLantas,Asientos,Timon,Motor,Puertas,Techo,Luces,Chasis,Vidrios,Espejos)"<<endl;
		cout<<"3. Producir un automovil Personalizado(Eliges las piezas)\n4. Salir\nOpcion: ";cin>>opc;
		if(opc==1){
			director.BuildProductoMin();
			p = builder->GetProducto();
			p->ListaComp();
			delete p;
		}else if(opc==2){
			director.BuildProductoCompleto();
			p = builder->GetProducto();
			p->ListaComp();
			delete p;
		}else if(opc==3){
			int opc1;
			do{
				cout<<"\n1.Producir LLantas\n";
				cout<<"\n2.Producir Asientos\n";
				cout<<"\n3.Producir Timon\n";
				cout<<"\n4.Producir Motor\n";
				cout<<"\n5.Producir Puertas\n";
				cout<<"\n6.Producir Techo\n";
				cout<<"\n7.Producir Luces\n";
				cout<<"\n8.Producir Chasis\n";
				cout<<"\n9.Producir Vidrios\n";
				cout<<"\n10.Producir Espejos\n\n11.Terminado\n\nOpcion: ";cin>>opc1;
				cin.ignore();
				if(opc1 == 1)builder->ProducirLlantas();
				else if(opc1 == 2) builder->ProducirAsientos();
				else if(opc1== 3) builder->ProducirTimon();
				else if(opc1== 4) builder->ProducirMotor();
				else if(opc1== 5) builder->ProducirPuertas();
				else if(opc1== 6) builder->ProducirTecho();
				else if(opc1== 7) builder->ProducirLuces();
				else if(opc1== 8) builder->ProducirChasis();
				else if(opc1== 9) builder->ProducirVidrios();
				else if(opc1== 10) builder->ProducirEspejos();
				else if(opc1== 11) cout<<"Terminando..."<<endl;
				else cout<<"\nPieza no encontrada.\n";
				
			}while(opc1!=11);
			p = builder->GetProducto();
			p->ListaComp();
			delete p;
		}else if(opc==4){
			cout<<"\nSaliendo.....\n";
		}else{
			cout<<"\nOpcion incorrecta...\n";
		}
	}while(opc!=4);
	delete builder;
}

int main() {
	Director* director = new Director();
	ClienteCode(*director);
	delete director;
	return 0;
}
