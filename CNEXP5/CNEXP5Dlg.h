
// CNEXP5Dlg.h : header file
//
#include "pcap.h"
#include <stdlib.h>
#include <string.h>


#pragma once


// CCNEXP5Dlg dialog
class CCNEXP5Dlg : public CDialogEx
{
// Construction
public:
	CCNEXP5Dlg(CWnd* pParent = NULL);	// standard constructor

	CListBox  Logger;
	CListBox  m_RouteTable;
	CIPAddressCtrl  m_Destination;
	CIPAddressCtrl  m_NextHop;
	CIPAddressCtrl  m_Mask;
// Dialog Data
	enum { IDD = IDD_CNEXP5_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnStartClickedButton();
	afx_msg void OnExitClickedButton();
	afx_msg void OnAddRouterButton();
	afx_msg void OnDeleteRouterButton();
	afx_msg void OnDestroy();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
