#include "pch.h"
#include "State_WORLD_MAP.h"

// Update
void CState_WORLD_MAP::UpdateState()
{
	printf("State_WORLD_MAP\n");
}
// �����ʱ�ȭ
void CState_WORLD_MAP::OnEnter()
{
	std::cout << "[" << " " << __FUNCTION__ << "]" << std::endl;
}
// ��������
void CState_WORLD_MAP::OnExit()
{
	std::cout << "[" << " " << __FUNCTION__ << "]" << std::endl;
}
