#pragma once


// deepnet dialog

class deepnet : public CDialogEx
{
	DECLARE_DYNAMIC(deepnet)

public:
	deepnet(CWnd* pParent = NULL);   // standard constructor
	virtual ~deepnet();

// Dialog Data
	enum { IDD = IDD_DN };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
