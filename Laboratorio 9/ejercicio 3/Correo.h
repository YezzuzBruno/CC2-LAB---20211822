#ifndef CORREO_H
#define CORREO_H
template<typename tipo1,typename tipo2>
class Correo
{
	public:
		Correo(tipo1,tipo2);
		void generarCorreo();
		~Correo();
	private:
		tipo1 letra;
		tipo2 apellido;
};

#endif