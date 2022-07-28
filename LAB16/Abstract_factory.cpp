 #include <iostream>
using namespace std;

class winFactory{
public:
	virtual ~winFactory(){}
	virtual string Draw() const = 0;
	
};
class WinCheckBox : public winFactory{
	string Draw() const override{
		return "CheckBox Windows.";
	}
};

class WinButton : public winFactory{
public:
	string Draw() const override{
		return "Button Windows.";
	}
};
class MacFactory{
public:
	virtual ~MacFactory(){};
	virtual string Draw() const = 0;
	virtual string draw(const winFactory& colaborador) const =0;
};
class MacButton : public MacFactory{
public:
	string Draw() const override{
		return "Dibujando Button Mac.";
	}
	string draw(const winFactory& colaborador) const override{
		const string resul = colaborador.Draw();
		return "Dibujando "+resul;
	}
};
class MacCheckBox : public MacFactory{
public:	
	string Draw() const override{
		return "Dibujando CheckBox Mac.";
	}
	string draw(const winFactory& colaborador) const override{
		const string resul = colaborador.Draw();
		return "Dibujando "+resul;
	}
};



class GUIFactory{
public:
	virtual winFactory *CrearControlW() const = 0;
	virtual MacFactory *CrearControlM() const = 0;
};

class Button : public GUIFactory{
	winFactory *CrearControlW() const override{
		return new WinButton();
	}
	MacFactory *CrearControlM() const override{
		return new MacButton();
	}
};

class CheckBox : public GUIFactory{
	winFactory *CrearControlW() const override{
		return new WinCheckBox();
	}
	MacFactory *CrearControlM() const override{
		return new MacCheckBox();
	}
};

void Aplication(const GUIFactory& f, int os){
	const winFactory* windows = f.CrearControlW();
	const MacFactory* mac = f.CrearControlM();
	
	if(os == 1){
		cout<<"\n";
		cout<<mac->draw(*windows)<<endl;
	}else if(os == 2){
		cout<<"\n";
		cout<<mac->Draw()<<endl;
	}
	delete windows;
	delete mac;
}

int main() {
	cout<<"Cliente: Windows ";
	Button* f1 = new Button();
	Aplication(*f1, 1);
	delete f1;
	
	cout<<"Cliente: Mac ";
	Button* f2 = new Button();
	Aplication(*f2, 2);
	delete f2;
	
	return 0;
}
