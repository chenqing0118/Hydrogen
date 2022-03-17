#pragma once
#ifdef HY_PLATFORM_WINDOWS
extern Hydrogen::Application* Hydrogen::createApplication();
int main(int argc, char** argv) {
	auto app = Hydrogen::createApplication();
	app->run();
	delete app;
}
#endif