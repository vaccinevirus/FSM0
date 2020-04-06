#ifndef PCH_H
#define PCH_H

// TODO: 여기에 미리 컴파일하려는 헤더 추가
#include <iostream>
#include <windows.h>
#include <conio.h>

#define enumstr(a) #a
enum State { State_COMBAT, State_LOCAL_MAP, State_WORLD_MAP,State_NUM };
inline const char* ToString(State v)
{
	switch (v)
	{
	case State_COMBAT:   return "State_COMBAT";
	case State_LOCAL_MAP:   return "State_LOCAL_MAP";
	case State_WORLD_MAP: return "State_WORLD_MAP";
	}
}

#endif //PCH_H
