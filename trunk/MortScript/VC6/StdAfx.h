// stdafx.h : Include-Datei f�r Standard-System-Include-Dateien,
//  oder projektspezifische Include-Dateien, die h�ufig benutzt, aber
//      in unregelm��igen Abst�nden ge�ndert werden.
//

#if !defined(AFX_STDAFX_H__ADAA1E9E_5F45_4E1A_A1FD_3C6E59E9CD50__INCLUDED_)
#define AFX_STDAFX_H__ADAA1E9E_5F45_4E1A_A1FD_3C6E59E9CD50__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Selten verwendete Teile der Windows-Header nicht einbinden
#ifndef TH32CS_SNAPNOHEAPS
#define TH32CS_SNAPNOHEAPS  0
#endif

#include <afxwin.h>         // MFC-Kern- und -Standardkomponenten
#include <afxext.h>         // MFC-Erweiterungen
#include <afxdtctl.h>		// MFC-Unterst�tzung f�r allgemeine Steuerelemente von Internet Explorer 4
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC-Unterst�tzung f�r g�ngige Windows-Steuerelemente
#include <Mmsystem.h>
#endif // _AFX_NO_AFXCMN_SUPPORT

#ifdef DESKTOP
#define REG_ACCESS_READ  KEY_READ
#define REG_ACCESS_WRITE KEY_ALL_ACCESS
#else
#define REG_ACCESS_READ  0
#define REG_ACCESS_WRITE 0
#endif

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // !defined(AFX_STDAFX_H__ADAA1E9E_5F45_4E1A_A1FD_3C6E59E9CD50__INCLUDED_)
