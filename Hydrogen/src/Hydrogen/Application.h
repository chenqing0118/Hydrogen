#pragma once
#include"Core.h"
namespace Hydrogen {
	class HYDROGEN_API Application {
	public:
		Application();
		virtual ~Application();
		void run();
	};
    //�ڿͻ����ж���
	Application* createApplication();
}

