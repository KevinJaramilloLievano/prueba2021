#include <iostream>
using namespace std;

class Cohete
{
	private:
		int pasajeros;
		string material;
		float combustible;
		string color;
		string propietario;
	
	public:
		Cohete();
		Cohete(string prop);
		Cohete(string mat, string col);
		~Cohete();
		
		int getPasajeros();
		void setPasajeros (int p);
		string getMaterial ( );
		void setMaterial (string m);
		float getCombustible ( );
		void setCombustible (float com);
		string getColor ();
		void setColor (string col);
		string getPropietario ();
		void setPropietario (string prop);
		
		void volar ();
		bool despegar ();
		void abordar (int p);
};
