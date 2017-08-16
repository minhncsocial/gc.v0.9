// deepnet.cpp : implementation file
//

#include "stdafx.h"
#include "deep.h"
#include "deepnet.h"
#include "afxdialogex.h"


// deepnet dialog

IMPLEMENT_DYNAMIC(deepnet, CDialogEx)

deepnet::deepnet(CWnd* pParent /*=NULL*/)
	: CDialogEx(deepnet::IDD, pParent)
{

}

deepnet::~deepnet()
{
}

void deepnet::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(deepnet, CDialogEx)
END_MESSAGE_MAP()


// deepnet message handlers
