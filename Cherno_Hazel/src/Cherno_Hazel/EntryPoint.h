#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Cherno_Hazel::Application* Cherno_Hazel::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Cherno_Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
