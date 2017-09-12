
// MFCtextView.cpp : CMFCtextView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCtext.h"
#endif

#include "MFCtextDoc.h"
#include "MFCtextView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCtextView

IMPLEMENT_DYNCREATE(CMFCtextView, CView)

BEGIN_MESSAGE_MAP(CMFCtextView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFCtextView ����/����

CMFCtextView::CMFCtextView()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCtextView::~CMFCtextView()
{
}

BOOL CMFCtextView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCtextView ����

void CMFCtextView::OnDraw(CDC* /*pDC*/)
{
	CMFCtextDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCtextView ��ӡ

BOOL CMFCtextView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCtextView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCtextView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCtextView ���

#ifdef _DEBUG
void CMFCtextView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCtextView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCtextDoc* CMFCtextView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCtextDoc)));
	return (CMFCtextDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCtextView ��Ϣ�������
