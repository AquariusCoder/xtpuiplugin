#pragma once
#include <afxwin.h>

class C{{project_name}}Doc : public CDocument
{
protected: // �������л�����
	C{{project_name}}Doc();
	DECLARE_DYNCREATE(C{{project_name}}Doc)

public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~C{{project_name}}Doc();

protected:
	DECLARE_MESSAGE_MAP()
};
