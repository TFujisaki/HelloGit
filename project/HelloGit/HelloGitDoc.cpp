// HelloGitDoc.cpp : CHelloGitDoc �N���X�̓���̒�`���s���܂��B
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
		// ���� - ClassWizard �͂��̈ʒu�Ƀ}�b�s���O�p�̃}�N����ǉ��܂��͍폜���܂��B
		//        ���̈ʒu�ɐ��������R�[�h��ҏW���Ȃ��ł��������B
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHelloGitDoc �N���X�̍\�z/����

CHelloGitDoc::CHelloGitDoc()
{
	// TODO: ���̈ʒu�ɂP�x�����Ă΂��\�z�p�̃R�[�h��ǉ����Ă��������B

}

CHelloGitDoc::~CHelloGitDoc()
{
}

BOOL CHelloGitDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���̈ʒu�ɍď�����������ǉ����Ă��������B
	// (SDI �h�L�������g�͂��̃h�L�������g���ė��p���܂��B)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CHelloGitDoc �V���A���C�[�[�V����

void CHelloGitDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: ���̈ʒu�ɕۑ��p�̃R�[�h��ǉ����Ă��������B
	}
	else
	{
		// TODO: ���̈ʒu�ɓǂݍ��ݗp�̃R�[�h��ǉ����Ă��������B
	}
}

/////////////////////////////////////////////////////////////////////////////
// CHelloGitDoc �N���X�̐f�f

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
// CHelloGitDoc �R�}���h
