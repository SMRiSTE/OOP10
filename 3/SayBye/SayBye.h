#pragma once
#include<string>
#ifdef DYNLIB_EXPORTS
#define DYNLIB_API __declspec(dllexport)
#else
#define DYNLIB_API __declspec(dllimport)
#endif

namespace SayBye {
	class Leaver {
	public:
		DYNLIB_API std::string leave(std::string  name);
	};
}