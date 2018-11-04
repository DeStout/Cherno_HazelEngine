#pragma once

#include "Core.h"

namespace Cherno_Hazel
{
	class CHERNO_HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in a CLIENT
	Application* CreateApplication();
}

