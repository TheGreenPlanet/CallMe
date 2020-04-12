#ifndef CALLME_H
#define CALLME_H
// dependencies
#include <Windows.h>

#ifdef _WIN32
#define ADDR				DWORD
#else
#define ADDR				DWORD64
#endif

// macros
#define CALLCONV			__cdecl
#define FORCEINLINE			__forceinline

// options
#define INLINE				FALSE
#define NAMESPACE			FALSE
#define NAMESPACENAME		Memory

#if NAMESPACE
namespace NAMESPACENAME {
#endif


template<typename returntype, typename... params>
#if INLINE
FORCEINLINE
#endif
returntype 
CallMe(const ADDR addr, params... parameters)
{
	// declare
	returntype(CALLCONV*func)(params...);

	// define
	func = (returntype(CALLCONV*)(params...))addr;

	// call
	return func(parameters...);
}


#if NAMESPACE
};
#endif
#endif