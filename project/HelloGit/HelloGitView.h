// HelloGitView.h : CHelloGitView �N���X�̐錾����уC���^�[�t�F�C�X�̒�`�����܂��B
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_HELLOGITVIEW_H__1AF66679_2FBB_4D9F_BAD5_04E3AD302CE1__INCLUDED_)
#define AFX_HELLOGITVIEW_H__1AF66679_2FBB_4D9F_BAD5_04E3AD302CE1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CHelloGitView : public CView
{
protected: // �V���A���C�Y�@�\�݂̂���쐬���܂��B
	CHelloGitView();
	DECLARE_DYNCREATE(CHelloGitView)

// �A�g���r���[�g
public:
	CHelloGitDoc* GetDocument();

// �I�y���[�V����
public:

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL(CHelloGitView)
	public:
	virtual void OnDraw(CDC* pDC);  // ���̃r���[��`�悷��ۂɃI�[�o�[���C�h����܂��B
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
public:
	virtual ~CHelloGitView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// �������ꂽ���b�Z�[�W �}�b�v�֐�
protected:
	//{{AFX_MSG(CHelloGitView)
		// ���� -  ClassWizard �͂��̈ʒu�Ƀ����o�֐���ǉ��܂��͍폜���܂��B
		//         ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // HelloGitView.cpp �t�@�C�����f�o�b�O���̎��g�p����܂��B
inline CHelloGitDoc* CHelloGitView::GetDocument()
   { return (CHelloGitDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_HELLOGITVIEW_H__1AF66679_2FBB_4D9F_BAD5_04E3AD302CE1__INCLUDED_)
