#pragma once
#include <afxwin.h>

class CViewPluginTestDoc : public CDocument
{
protected: // �������л�����
	CViewPluginTestDoc();
	DECLARE_DYNCREATE(CViewPluginTestDoc)

public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~CViewPluginTestDoc();

protected:
	DECLARE_MESSAGE_MAP()
};
