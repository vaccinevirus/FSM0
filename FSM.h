#pragma once
#include "IState.h"
#include "State_COMBAT.h"
#include "State_WORLD_MAP.h"
#include "State_LOCAL_MAP.h"

class CFSM
{
public: 
	CFSM();
	~CFSM();
public:
	State m_state;

	IState* m_CurrentState = new IState();

	void UpdateState();
	void ChangeState(State _state);

};

