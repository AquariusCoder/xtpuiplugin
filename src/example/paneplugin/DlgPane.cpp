// DlgPane.cpp : ʵ���ļ�
//

//#include "stdafx.h"
//#include "paneplugin.h"
#include "DlgPane.h"
#include "afxdialogex.h"
// CDlgPane �Ի���

IMPLEMENT_DYNAMIC(CDlgPane, CDialog)

CDlgPane::CDlgPane(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgPane::IDD, pParent)
{

}

CDlgPane::~CDlgPane()
{
}

void CDlgPane::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgPane, CDialog)
END_MESSAGE_MAP()


// CDlgPane ��Ϣ�������
