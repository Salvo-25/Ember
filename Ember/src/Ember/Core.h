#pragma once

#ifdef  EM_PLATFORM_WINDOWS
	#ifdef EM_BUILD_DLL
		#define EMBER_API __declspec(dllexport)
	#else
		#define EMBER_API __declspec(dllimport)	
			
	#endif
#else
	#error Ember support only windows platform

#endif //  EM_PLATFORM_WINDOWS
