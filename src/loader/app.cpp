
// uimain.cpp : ����Ӧ�ó��������Ϊ��
//
#include <module/plugininc.h>
#include <nonplugin/useplugins.h>
#include <nonplugin/scanplugins.h>
#include "stdafx.h"
#include "afxwinappex.h"
#include "afxdialogex.h"
#include "app.h"

BEGIN_MESSAGE_MAP(CUimainApp, CWinApp)
	ON_COMMAND(ID_FILE_NEW, CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, CWinApp::OnFileOpen)
END_MESSAGE_MAP()

CUimainApp::CUimainApp()
{
	// ֧����������������
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_ALL_ASPECTS;

	SetAppID(_T("loader.AppID.NoVersion"));
}

CUimainApp theApp;

void CUimainApp::LoadCorePlugins()
{
	const char* plugins[] = { 
		"x3manager.pln", 
		"mainframe.pln", 
		"paneplugintest.pln",
		"viewplugintest.pln",
		NULL };

	x3::loadPlugins(plugins, "plugins");
	x3::loadScanPlugins("plugins");
}

BOOL CUimainApp::InitInstance()
{
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();

	if (!AfxOleInit())
		return FALSE;

	AfxEnableControlContainer();
	EnableTaskbarInteraction(FALSE);
	SetRegistryKey(_T("www.aquariushome.duapp.com"));
	LoadStdProfileSettings(4);

	// ���ز��
	LoadCorePlugins();

	// ������ܲ��
	if (!m_mainFramePtr.create(clsidMainFrame))
		return FALSE;

	if(!m_mainFramePtr->CreateFrame(L""))
		return FALSE;

	m_mainFramePtr->ShowWindow();
	return TRUE;
}

int CUimainApp::ExitInstance()
{
	if (m_mainFramePtr)
		m_mainFramePtr.release();

	x3::unloadScanPlugins();
	x3::unloadPlugins();

	AfxOleTerm(FALSE);
	return CWinApp::ExitInstance();
}




