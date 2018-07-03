#include "StdAfx.h"
#include "mainUI.h"
#include "resource.h"


mainUI::mainUI(void)
{
}


mainUI::~mainUI(void)
{
}

CDuiString mainUI::GetSkinFolder()
{
	return _T("");
}

CDuiString mainUI::GetSkinFile()
{
	return _T("mainUI.xml");
}

LPCTSTR mainUI::GetWindowClassName(void) const
{
	return _T("mainUI");
}

UILIB_RESOURCETYPE mainUI::GetResourceType() const
{
	return UILIB_ZIPRESOURCE;
}

LPCTSTR mainUI::GetResourceID() const
{
	return MAKEINTRESOURCE(IDR_ZIPRES1);
}