// HelloGit.h : HELLOGIT �A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C��
//

#if !defined(AFX_HELLOGIT_H__B43F95FB_E3EE_4729_88C7_038873D7F884__INCLUDED_)
#define AFX_HELLOGIT_H__B43F95FB_E3EE_4729_88C7_038873D7F884__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // ���C�� �V���{��

/////////////////////////////////////////////////////////////////////////////
// CHelloGitApp:
// ���̃N���X�̓���̒�`�Ɋւ��Ă� HelloGit.cpp �t�@�C�����Q�Ƃ��Ă��������B
//

class CHelloGitApp : public CWinApp
{
public:
	CHelloGitApp();

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL(CHelloGitApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
	//{{AFX_MSG(CHelloGitApp)
	afx_msg void OnAppAbout();
		// ���� - ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ��܂��͍폜���܂��B
		//        ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_HELLOGIT_H__B43F95FB_E3EE_4729_88C7_038873D7F884__INCLUDED_)
