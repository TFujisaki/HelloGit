// HelloGitView.h : CHelloGitView クラスの宣言およびインターフェイスの定義をします。
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_HELLOGITVIEW_H__1AF66679_2FBB_4D9F_BAD5_04E3AD302CE1__INCLUDED_)
#define AFX_HELLOGITVIEW_H__1AF66679_2FBB_4D9F_BAD5_04E3AD302CE1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CHelloGitView : public CView
{
protected: // シリアライズ機能のみから作成します。
	CHelloGitView();
	DECLARE_DYNCREATE(CHelloGitView)

// アトリビュート
public:
	CHelloGitDoc* GetDocument();

// オペレーション
public:

// オーバーライド
	// ClassWizard は仮想関数のオーバーライドを生成します。
	//{{AFX_VIRTUAL(CHelloGitView)
	public:
	virtual void OnDraw(CDC* pDC);  // このビューを描画する際にオーバーライドされます。
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// インプリメンテーション
public:
	virtual ~CHelloGitView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成されたメッセージ マップ関数
protected:
	//{{AFX_MSG(CHelloGitView)
		// メモ -  ClassWizard はこの位置にメンバ関数を追加または削除します。
		//         この位置に生成されるコードを編集しないでください。
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // HelloGitView.cpp ファイルがデバッグ環境の時使用されます。
inline CHelloGitDoc* CHelloGitView::GetDocument()
   { return (CHelloGitDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ は前行の直前に追加の宣言を挿入します。

#endif // !defined(AFX_HELLOGITVIEW_H__1AF66679_2FBB_4D9F_BAD5_04E3AD302CE1__INCLUDED_)
