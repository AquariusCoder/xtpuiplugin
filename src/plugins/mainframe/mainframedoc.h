#pragma once
#include <afxwin.h>

class CMainframeDoc : public CDocument
{
protected: // �������л�����
	CMainframeDoc();
	DECLARE_DYNCREATE(CMainframeDoc)

public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~CMainframeDoc();

protected:
	DECLARE_MESSAGE_MAP()
};
