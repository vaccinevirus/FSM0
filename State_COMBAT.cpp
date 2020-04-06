#include "pch.h"
#include "State_COMBAT.h"

// Update
void CState_COMBAT::UpdateState()
{
	printf("State_COMBAT\n");
}
// 상태초기화
void CState_COMBAT::OnEnter()
{
	std::cout << "[" << " " << __FUNCTION__ << "]" << std::endl;
}
// 상태해제
void CState_COMBAT::OnExit()
{
	std::cout << "[" << " " << __FUNCTION__ << "]" << std::endl;
}
