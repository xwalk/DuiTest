
// sqlite3Demo.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Csqlite3DemoApp:
// �йش����ʵ�֣������ sqlite3Demo.cpp
//

class Csqlite3DemoApp : public CWinApp
{
public:
	Csqlite3DemoApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Csqlite3DemoApp theApp;