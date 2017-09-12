
// MFCtextView.cpp : CMFCtextView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFCtextView 构造/析构

CMFCtextView::CMFCtextView()
{
	// TODO: 在此处添加构造代码

}

CMFCtextView::~CMFCtextView()
{
}

BOOL CMFCtextView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCtextView 绘制

void CMFCtextView::OnDraw(CDC* /*pDC*/)
{
	CMFCtextDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCtextView 打印

BOOL CMFCtextView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCtextView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMFCtextView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMFCtextView 诊断

#ifdef _DEBUG
void CMFCtextView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCtextView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCtextDoc* CMFCtextView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCtextDoc)));
	return (CMFCtextDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCtextView 消息处理程序
