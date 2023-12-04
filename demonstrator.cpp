char* g_IllegalWarning = {};

//004016f0
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	char cVar1;
	char *m_warnTextPtr;
	undefined4 *puVar2;
	undefined *puVar3;
	LPCSTR pCVar4;
	HICON IconSm;
	HICON Icon;
	char m_warnText;
	uint uVar6;
	undefined4 *puVar7;
	int *local_24;
	undefined local_20 [4];
	int local_1c;
	undefined4 local_18;
	undefined4 local_14;
	undefined local_10 [4];
	int local_c;
	undefined4 local_8;
	undefined4 local_4;
	int Height;
	int Width;
	
	m_warnTextPtr = &g_illegalWarning;
	m_warnText = g_illegalWarning;
	if (g_illegalWarning != 0) {
		do {
		*m_warnText = ~m_warnText & 0x7f;
		m_warnText = m_warnTextPtr[1];
		m_warnTextPtr = m_warnTextPtr + 1;
		} while (m_warnText != 0);
	}
	/*FUN_0040ef30(&local_24);
	if (local_24 != (int *)0x0) {
		(**(code **)(*local_24 + 8))(); function pointer?
	}*/
	//...
	
	Height = 600;
	Width = 800;
	IconSm = LoadIconA(hInstance,(LPCSTR)0x65);
	Icon = LoadIconA(hInstance,(LPCSTR)0x65);
	//create_Window(hInstance,lpCmdLine,nShowCmd,s_Frontier_Dogs_Demonstrator_00466488,Icon,IconSm,Width,Height);
	//FUN_0040ef50();
	return 0;
}