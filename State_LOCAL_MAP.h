#pragma once

#include "IState.h"

class CState_LOCAL_MAP:public IState
{
public:
	virtual void UpdateState();
	virtual void OnEnter();
	virtual void OnExit();
};

