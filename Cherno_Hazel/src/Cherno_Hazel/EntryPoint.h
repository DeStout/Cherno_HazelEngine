#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Cherno_Hazel::Application* Cherno_Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Cherno_Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	HZ_CORE_INFO("Hello there.");


	auto app = Cherno_Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
