
// CNEXP5.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CCNEXP5App:
// See CNEXP5.cpp for the implementation of this class
//

class CCNEXP5App : public CWinApp
{
public:
	CCNEXP5App();

// Overrides
public:
	virtual BOOL InitInstance();
// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CCNEXP5App theApp;