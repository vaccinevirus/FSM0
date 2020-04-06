#include "pch.h"
#include "State_LOCAL_MAP.h"


// Update
void CState_LOCAL_MAP::UpdateState()
{
	printf("State_LOCAL_MAP\n");
}

// 상태초기화
void CState_LOCAL_MAP::OnEnter()
{
	std::cout << "[" << " " << __FUNCTION__ << "]" << std::endl;
}

// 상태해제
void CState_LOCAL_MAP::OnExit()
{
	std::cout << "[" << " " << __FUNCTION__ << "]" << std::endl;
}
