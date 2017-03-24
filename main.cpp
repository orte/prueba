#include <iostream>
using namespace std;

class alumno{

private:
	int dni;
	int nota;
public:

	alumno(int dni, int nota){
		this->dni = dni;
		this->nota = nota;
	}
	void imprimir(){
		cout << "El dni es "<< dni <<"y la nota es "<< nota << endl; 
	}
	void setDni(int dni){
		this->dni = dni;
	}
	void setNota(int nota){
		this->nota = nota;
	}
	
};

int main(void)
{
	alumno a(10, 100);
	
	a.imprimir();
	return 0;
}
