#pragma once

class IState
{
public:
	virtual void UpdateState() {};
	virtual void OnEnter() {};
	virtual void OnExit() {};
};