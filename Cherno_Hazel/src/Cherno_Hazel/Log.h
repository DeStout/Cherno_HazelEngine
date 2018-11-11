#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Cherno_Hazel
{
	class CHERNO_HAZEL_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core log macros
#define HZ_CORE_TRACE(...)     ::Cherno_Hazel::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...)      ::Cherno_Hazel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)      ::Cherno_Hazel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...)     ::Cherno_Hazel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_FATAL(...)     ::Cherno_Hazel::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define HZ_CORE_TRACE(...)     ::Cherno_Hazel::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...)      ::Cherno_Hazel::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)      ::Cherno_Hazel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...)     ::Cherno_Hazel::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_CORE_FATAL(...)     ::Cherno_Hazel::Log::GetClientLogger()->fatal(__VA_ARGS__)