#include <GDE/Core.hpp>
#include "SceneMain.hpp"

int main(int argc, char** argv)
{
	// Creamos un codigo de salida
	int anExitCode;
	
	// Creamos una instancia de la aplicación
	GDE::App* anApp = GDE::App::instance();
	
	// Creamos una Scene y la establecemos como inicial
	anApp->setFirstScene(new SceneMain("Main"));
	
	// Ejecutamos la aplicación
	anExitCode = anApp->run();
	
	// Devolvemos el código de salida de la aplicación
	return anExitCode;
}