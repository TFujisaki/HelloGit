// HelloGitDoc.cpp : CHelloGitDoc クラスの動作の定義を行います。
//

#include "stdafx.h"
#include "HelloGit.h"

#include "HelloGitDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CHelloGitDoc

IMPLEMENT_DYNCREATE(CHelloGitDoc, CDocument)

BEGIN_MESSAGE_MAP(CHelloGitDoc, CDocument)
	//{{AFX_MSG_MAP(CHelloGitDoc)
		// メモ - ClassWizard はこの位置にマッピング用のマクロを追加または削除します。
		//        この位置に生成されるコードを編集しないでください。
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHelloGitDoc クラスの構築/消滅

CHelloGitDoc::CHelloGitDoc()
{
	// TODO: この位置に１度だけ呼ばれる構築用のコードを追加してください。

}

CHelloGitDoc::~CHelloGitDoc()
{
}

BOOL CHelloGitDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: この位置に再初期化処理を追加してください。
	// (SDI ドキュメントはこのドキュメントを再利用します。)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CHelloGitDoc シリアライゼーション

void CHelloGitDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: この位置に保存用のコードを追加してください。
	}
	else
	{
		// TODO: この位置に読み込み用のコードを追加してください。
	}
}

/////////////////////////////////////////////////////////////////////////////
// CHelloGitDoc クラスの診断

#ifdef _DEBUG
void CHelloGitDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CHelloGitDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CHelloGitDoc コマンド
