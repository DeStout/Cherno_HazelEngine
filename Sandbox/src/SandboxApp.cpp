#include <Cherno_Hazel.h>

class Sandbox : public Cherno_Hazel::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Cherno_Hazel::Application* Cherno_Hazel::CreateApplication()
{
	return new Sandbox();
}