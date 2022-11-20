#pragma once
#include "core.h"

namespace OE{

	class OE_API_ Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();

	};
	//在client处定义
	Application* CreateApplication();

	
}