#pragma once
#include "Core.h"

namespace Ember
{

	class EMBER_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//Defined in the client application
	Application* CreateApplication();
}

