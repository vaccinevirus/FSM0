#pragma once
#include "IState.h"

class CState_COMBAT:public IState
{
private:
	virtual void UpdateState();
	virtual void OnEnter();
	virtual void OnExit();

};

