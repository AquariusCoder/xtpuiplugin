
// uimain.h : uimain Ӧ�ó������ͷ�ļ�
//
#pragma once
#include <objptr.h>
#include <mainframe\IMainFrame.h>

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

class CUimainApp : public CWinApp
{
public:
	CUimainApp();

private:
	 x3::Object<IMainFrame> m_mainFramePtr;

	 void LoadCorePlugins();

public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

protected:
	DECLARE_MESSAGE_MAP()
};

extern CUimainApp theApp;
