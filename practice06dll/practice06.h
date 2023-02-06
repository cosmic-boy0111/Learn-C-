#pragma once

#if defined(PRACTICE06DLL_EXPORTS)
#define EXPIMP _declspec(dllexport)
#else
#define EXPIMP _declspec(dllimport)
#endif