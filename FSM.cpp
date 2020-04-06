#include "pch.h"
#include "FSM.h"

CFSM::CFSM()
{
	m_state = State_COMBAT;

	m_CurrentState = new CState_COMBAT();
}


CFSM::~CFSM()
{
}

// Update
void CFSM::UpdateState()
{
	if (m_CurrentState != nullptr)
	{
		m_CurrentState->UpdateState();
	}
}

// 상태 변경
void CFSM::ChangeState(State _state)
{
	m_CurrentState->OnExit();

	m_state = _state;
	delete m_CurrentState;
	switch (_state)
	{
	case State_COMBAT:
		m_CurrentState = new CState_COMBAT();
		break;
	case State_LOCAL_MAP:
		m_CurrentState = new CState_LOCAL_MAP();
		break;
	case State_WORLD_MAP:
		m_CurrentState = new CState_WORLD_MAP();
		break;
	default:
		break;
	}

	m_CurrentState->OnEnter();
}
