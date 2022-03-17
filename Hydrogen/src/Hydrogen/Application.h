#pragma once
#include"Core.h"
namespace Hydrogen {
	class HYDROGEN_API Application {
	public:
		Application();
		virtual ~Application();
		void run();
	};
    //在客户端中定义
	Application* createApplication();
}

