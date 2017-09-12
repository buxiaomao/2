
// MFCtextView.h : CMFCtextView ��Ľӿ�
//

#pragma once


class CMFCtextView : public CView
{
protected: // �������л�����
	CMFCtextView();
	DECLARE_DYNCREATE(CMFCtextView)

// ����
public:
	CMFCtextDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMFCtextView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCtextView.cpp �еĵ��԰汾
inline CMFCtextDoc* CMFCtextView::GetDocument() const
   { return reinterpret_cast<CMFCtextDoc*>(m_pDocument); }
#endif

