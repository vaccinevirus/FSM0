#include "pch.h"
#include "State_COMBAT.h"

// Update
void CState_COMBAT::UpdateState()
{
	printf("State_COMBAT\n");
}
// �����ʱ�ȭ
void CState_COMBAT::OnEnter()
{
	std::cout << "[" << " " << __FUNCTION__ << "]" << std::endl;
}
// ��������
void CState_COMBAT::OnExit()
{
	std::cout << "[" << " " << __FUNCTION__ << "]" << std::endl;
}
