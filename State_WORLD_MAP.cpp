#include "pch.h"
#include "State_WORLD_MAP.h"

// Update
void CState_WORLD_MAP::UpdateState()
{
	printf("State_WORLD_MAP\n");
}
// 상태초기화
void CState_WORLD_MAP::OnEnter()
{
	std::cout << "[" << " " << __FUNCTION__ << "]" << std::endl;
}
// 상태해제
void CState_WORLD_MAP::OnExit()
{
	std::cout << "[" << " " << __FUNCTION__ << "]" << std::endl;
}
