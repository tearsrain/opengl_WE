#pragma once

#ifdef OE_PLATFORM_WIN
	#ifdef OE_DLL_BUILD
		#define OE_API_ _declspec(dllexport)
	#else
		#define OE_API_ _declspec(dllimport)
	#endif // OE_DLL_BUILD
#else
	#error only in windows
#endif // !OE_PLATFORM_WIN

