#include <Hydrogen.h>
class Sandbox :public Hydrogen::Application {
public:
	Sandbox(){

	}
	~Sandbox() {

	}
};


Hydrogen::Application* Hydrogen::createApplication() {
	return new Sandbox();
};
