#pragma once
#include "resource.h"
#include <afxwin.h>
// CDlgPane �Ի���

class CDlgPane : public CDialog
{
	DECLARE_DYNAMIC(CDlgPane)

public:
	CDlgPane(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgPane();

// �Ի�������
	enum { IDD = IDD_PANEL };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
