#include "pch.h"
#include "State_LOCAL_MAP.h"


// Update
void CState_LOCAL_MAP::UpdateState()
{
	printf("State_LOCAL_MAP\n");
}

// �����ʱ�ȭ
void CState_LOCAL_MAP::OnEnter()
{
	std::cout << "[" << " " << __FUNCTION__ << "]" << std::endl;
}

// ��������
void CState_LOCAL_MAP::OnExit()
{
	std::cout << "[" << " " << __FUNCTION__ << "]" << std::endl;
}
