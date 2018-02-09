// HelloGitView.cpp : CHelloGitView クラスの動作の定義を行います。
//

#include "stdafx.h"
#include "HelloGit.h"

#include "HelloGitDoc.h"
#include "HelloGitView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CHelloGitView

IMPLEMENT_DYNCREATE(CHelloGitView, CView)

BEGIN_MESSAGE_MAP(CHelloGitView, CView)
	//{{AFX_MSG_MAP(CHelloGitView)
		// メモ - ClassWizard はこの位置にマッピング用のマクロを追加または削除します。
		//    この位置に生成されるコードを編集しないでください。
	//}}AFX_MSG_MAP
	// 標準印刷コマンド
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHelloGitView クラスの構築/消滅

CHelloGitView::CHelloGitView()
{
	// TODO: この場所に構築用のコードを追加してください。

}

CHelloGitView::~CHelloGitView()
{
}

BOOL CHelloGitView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: この位置で CREATESTRUCT cs を修正して Window クラスまたはスタイルを
	//  修正してください。

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CHelloGitView クラスの描画

void CHelloGitView::OnDraw(CDC* pDC)
{
	CHelloGitDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: この場所にネイティブ データ用の描画コードを追加します。


	// フォントオブジェクトを作成
	CFont font1;
	LOGFONT logFont1;
	logFont1.lfHeight = 32;
	logFont1.lfWidth  = 20;
	logFont1.lfEscapement = 0;
	logFont1.lfOrientation = 0;
	logFont1.lfWeight = FW_DONTCARE;
	logFont1.lfItalic = TRUE;
	logFont1.lfUnderline = FALSE;
	logFont1.lfStrikeOut = FALSE;
	logFont1.lfCharSet = DEFAULT_CHARSET;
	logFont1.lfOutPrecision = OUT_DEFAULT_PRECIS;
	logFont1.lfClipPrecision = CLIP_DEFAULT_PRECIS;
	logFont1.lfQuality = DEFAULT_QUALITY;
	logFont1.lfPitchAndFamily = FF_DONTCARE;
	lstrcpy(logFont1.lfFaceName, "ＭＳ 明朝");
	font1.CreateFontIndirect(&logFont1);
	// フォントオブジェクトを画面(DC)に設定する
	CFont* font2 = pDC->SelectObject(&font1);
	// テキストを画面に描画する
	pDC->TextOut(20, 20, "Hello Git World. Test git checkout. again.");
	pDC->TextOut(80, 80, "Push from local repository.");

	// フォントを元に戻しておく
	pDC->SelectObject(font2);
}

/////////////////////////////////////////////////////////////////////////////
// CHelloGitView クラスの印刷

BOOL CHelloGitView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// デフォルトの印刷準備
	return DoPreparePrinting(pInfo);
}

void CHelloGitView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 印刷前の特別な初期化処理を追加してください。
}

void CHelloGitView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 印刷後の後処理を追加してください。
}

/////////////////////////////////////////////////////////////////////////////
// CHelloGitView クラスの診断

#ifdef _DEBUG
void CHelloGitView::AssertValid() const
{
	CView::AssertValid();
}

void CHelloGitView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHelloGitDoc* CHelloGitView::GetDocument() // 非デバッグ バージョンはインラインです。
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHelloGitDoc)));
	return (CHelloGitDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CHelloGitView クラスのメッセージ ハンドラ
