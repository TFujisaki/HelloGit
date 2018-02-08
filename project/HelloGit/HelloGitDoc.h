// HelloGitDoc.h : CHelloGitDoc クラスの宣言およびインターフェイスの定義をします。
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_HELLOGITDOC_H__49EED5BB_3003_49F0_A106_8B45218BC32A__INCLUDED_)
#define AFX_HELLOGITDOC_H__49EED5BB_3003_49F0_A106_8B45218BC32A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CHelloGitDoc : public CDocument
{
protected: // シリアライズ機能のみから作成します。
	CHelloGitDoc();
	DECLARE_DYNCREATE(CHelloGitDoc)

// アトリビュート
public:

// オペレーション
public:

//オーバーライド
	// ClassWizard は仮想関数のオーバーライドを生成します。
	//{{AFX_VIRTUAL(CHelloGitDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// インプリメンテーション
public:
	virtual ~CHelloGitDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成されたメッセージ マップ関数
protected:
	//{{AFX_MSG(CHelloGitDoc)
		// メモ - ClassWizard はこの位置にメンバ関数を追加または削除します。
		//        この位置に生成されるコードを編集しないでください。
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_HELLOGITDOC_H__49EED5BB_3003_49F0_A106_8B45218BC32A__INCLUDED_)
