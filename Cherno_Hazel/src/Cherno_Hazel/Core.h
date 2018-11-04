#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define CHERNO_HAZEL_API __declspec(dllexport)
	#else
		#define CHERNO_HAZEL_API __declspec(dllimport)
	#endif
#else
	#error Cherno_Hazel only supports Windows.
#endif
