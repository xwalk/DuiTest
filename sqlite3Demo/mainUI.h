#pragma once

#include "../DuiLib/UIlib.h"
using namespace DuiLib;

class mainUI : public WindowImplBase
{
public:
	mainUI(void);
	~mainUI(void);
protected:
	virtual CDuiString GetSkinFolder();
	virtual CDuiString GetSkinFile();
	virtual LPCTSTR GetWindowClassName(void) const;
	virtual UILIB_RESOURCETYPE GetResourceType() const;
	virtual LPCTSTR GetResourceID() const;
};

