// HelloGitView.cpp : CHelloGitView �N���X�̓���̒�`���s���܂��B
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
		// ���� - ClassWizard �͂��̈ʒu�Ƀ}�b�s���O�p�̃}�N����ǉ��܂��͍폜���܂��B
		//    ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
	//}}AFX_MSG_MAP
	// �W������R�}���h
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHelloGitView �N���X�̍\�z/����

CHelloGitView::CHelloGitView()
{
	// TODO: ���̏ꏊ�ɍ\�z�p�̃R�[�h��ǉ����Ă��������B

}

CHelloGitView::~CHelloGitView()
{
}

BOOL CHelloGitView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: ���̈ʒu�� CREATESTRUCT cs ���C������ Window �N���X�܂��̓X�^�C����
	//  �C�����Ă��������B

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CHelloGitView �N���X�̕`��

void CHelloGitView::OnDraw(CDC* pDC)
{
	CHelloGitDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: ���̏ꏊ�Ƀl�C�e�B�u �f�[�^�p�̕`��R�[�h��ǉ����܂��B


	// �t�H���g�I�u�W�F�N�g���쐬
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
	lstrcpy(logFont1.lfFaceName, "�l�r ����");
	font1.CreateFontIndirect(&logFont1);
	// �t�H���g�I�u�W�F�N�g�����(DC)�ɐݒ肷��
	CFont* font2 = pDC->SelectObject(&font1);
	// �e�L�X�g����ʂɕ`�悷��
	pDC->TextOut(20, 20, "Hello Git World. Test git checkout. again.");
	pDC->TextOut(80, 80, "Push from local repository.");

	// �t�H���g�����ɖ߂��Ă���
	pDC->SelectObject(font2);
}

/////////////////////////////////////////////////////////////////////////////
// CHelloGitView �N���X�̈��

BOOL CHelloGitView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �f�t�H���g�̈������
	return DoPreparePrinting(pInfo);
}

void CHelloGitView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ����O�̓��ʂȏ�����������ǉ����Ă��������B
}

void CHelloGitView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �����̌㏈����ǉ����Ă��������B
}

/////////////////////////////////////////////////////////////////////////////
// CHelloGitView �N���X�̐f�f

#ifdef _DEBUG
void CHelloGitView::AssertValid() const
{
	CView::AssertValid();
}

void CHelloGitView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHelloGitDoc* CHelloGitView::GetDocument() // ��f�o�b�O �o�[�W�����̓C�����C���ł��B
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHelloGitDoc)));
	return (CHelloGitDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CHelloGitView �N���X�̃��b�Z�[�W �n���h��
