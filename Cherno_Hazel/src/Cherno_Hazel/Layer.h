#pragma once

#include "Cherno_Hazel/Core.h"
#include "Cherno_Hazel/Events/Event.h"

namespace Cherno_Hazel {
	
	class CHERNO_HAZEL_API Layer
	{
	public:
		Layer(const std::string& name = "Layer");
		virtual ~Layer();

		virtual void OnAttach() {}
		virtual void OnDetach() {}
		virtual void OnUpdate() {}
		virtual void OnEvent(Event& event) {}

		inline const std::string& GetName() const { return m_DebugName; }
	protected:
		std::string m_DebugName;
	};
}