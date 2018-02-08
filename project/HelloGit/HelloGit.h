// HelloGit.h : HELLOGIT アプリケーションのメイン ヘッダー ファイル
//

#if !defined(AFX_HELLOGIT_H__B43F95FB_E3EE_4729_88C7_038873D7F884__INCLUDED_)
#define AFX_HELLOGIT_H__B43F95FB_E3EE_4729_88C7_038873D7F884__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // メイン シンボル

/////////////////////////////////////////////////////////////////////////////
// CHelloGitApp:
// このクラスの動作の定義に関しては HelloGit.cpp ファイルを参照してください。
//

class CHelloGitApp : public CWinApp
{
public:
	CHelloGitApp();

// オーバーライド
	// ClassWizard は仮想関数のオーバーライドを生成します。
	//{{AFX_VIRTUAL(CHelloGitApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// インプリメンテーション
	//{{AFX_MSG(CHelloGitApp)
	afx_msg void OnAppAbout();
		// メモ - ClassWizard はこの位置にメンバ関数を追加または削除します。
		//        この位置に生成されるコードを編集しないでください。
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_HELLOGIT_H__B43F95FB_E3EE_4729_88C7_038873D7F884__INCLUDED_)
