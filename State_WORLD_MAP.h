#pragma once
#include "IState.h"

class CState_WORLD_MAP:public IState
{
public:
	virtual void UpdateState();
	virtual void OnEnter();
	virtual void OnExit();
};

