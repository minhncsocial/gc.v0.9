#pragma once


// prep dialog

class prep : public CDialogEx
{
	DECLARE_DYNAMIC(prep)

public:
	prep(CWnd* pParent = NULL);   // standard constructor
	virtual ~prep();

// Dialog Data
	enum { IDD = IDD_prep };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
