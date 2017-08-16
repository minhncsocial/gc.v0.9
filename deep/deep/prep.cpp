// prep.cpp : implementation file
//

#include "stdafx.h"
#include "deep.h"
#include "prep.h"
#include "afxdialogex.h"


// prep dialog

IMPLEMENT_DYNAMIC(prep, CDialogEx)

prep::prep(CWnd* pParent /*=NULL*/)
	: CDialogEx(prep::IDD, pParent)
{

}

prep::~prep()
{
}

void prep::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(prep, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &prep::OnBnClickedButton1)
END_MESSAGE_MAP()


// prep message handlers


void prep::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
}
