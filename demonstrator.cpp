char* g_IllegalWarning = {};

//004117c0
create_Window(void *this,undefined4 CmdLine,int ShowCmd,LPCSTR WindowName,HICON Icon,HICON IconSm,int width,int height)
{
	ATOM atomWin;
	int iVar1;
	uint uVar2;
	int *extraout_ECX;
	int *piVar3;
	CHAR local_4b0 [1024];
	undefined4 local_b0;
	int **local_ac;
	undefined4 local_a8 [16];
	tagMSG local_68;
	undefined *local_4c;
	WNDCLASSEXA winClass;
	int *local_18;
	int *local_14;
	void *vExceptionList;
	undefined *puStack_c;
	undefined4 local_8;
	
	//...
	
	winClass.cbSize = 0x30;
	winClass.style = 3;
	winClass.lpfnWndProc = (WNDPROC)&LAB_00411590;
	winClass.cbClsExtra = 0;
	winClass.cbWndExtra = 0;
	winClass.hInstance = mainHInstance;
	winClass.hIcon = Icon;
	winClass.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
	winClass.hbrBackground = (HBRUSH)0x0;
	winClass.lpszMenuName = (LPCSTR)0x0;
	winClass.lpszClassName = (LPCSTR)&lpClassName_004667b4;
	winClass.hIconSm = IconSm;
	atomWin = RegisterClassExA(&winClass);
	if (atomWin != 0) {
		mainHWND = CreateWindowExA(0,(LPCSTR)&lpClassName_004667b4,WindowName,0xc00000,-0x80000000,-0x80000000,width,height,(HWND)0x0,(HMENU)0x0,mainHInstance,(LPVOID)0x0);
		if (mainHWND != (HWND)0x0) {
			ShowWindow(mainHWND,ShowCmd);
			UpdateWindow(mainHWND);
			//...
		}
		DestroyWindow(mainHWND);
	}
	
}

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