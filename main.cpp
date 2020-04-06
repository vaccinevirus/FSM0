#include "pch.h"
#include "FSM.h"

int main()
{
	CFSM fsm;

	// esc키 입력시 상태변환
	printf("Change State : esc\n");
	while (1)
	{
		if (_kbhit())
		{
			int ch = _getch();
			if (ch == 27) // ESC
			{
				fsm.ChangeState(static_cast<State>((fsm.m_state + 1) % (State_NUM)));
			}
		}
		fsm.UpdateState();
		Sleep(1000);
	}
}