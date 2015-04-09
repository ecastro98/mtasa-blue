/*****************************************************************************
*
*  PROJECT:     Multi Theft Auto v1.0
*  LICENSE:     See LICENSE in the top level directory
*  FILE:        sdk/gui/CGUIWebBrowser.h
*  PURPOSE:     Web browser widget interface
*
*  Multi Theft Auto is available from http://www.multitheftauto.com/
*
*****************************************************************************/
#ifndef __CGUIWEBBROWSER_H
#define __CGUIWEBBROWSER_H

#include "CGUIElement.h"
#include "CGUITexture.h"

class CGUIWebBrowser : public CGUIElement
{
public:
    virtual                             ~CGUIWebBrowser         () {};

    virtual void                        LoadFromWebView         ( class CWebViewInterface* pWebView ) = 0;

    virtual void                        Clear                   () = 0;
    virtual bool                        GetNativeSize           ( CVector2D &vecSize ) = 0;

    virtual void                        SetFrameEnabled         ( bool bFrameEnabled ) = 0;
    virtual bool                        IsFrameEnabled          () = 0;

    virtual void                        Render                  () = 0;
};

#endif
