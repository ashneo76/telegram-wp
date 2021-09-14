

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Sep 14 15:43:57 2021
 */
/* Compiler settings for C:\Users\juanp\AppData\Local\Temp\PhoneVoIPApp.BackEnd.idl-e4f3c02b:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "PhoneVoIPApp.BackEnd.h"

#define TYPE_FORMAT_STRING_SIZE   575                               
#define PROC_FORMAT_STRING_SIZE   3655                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _PhoneVoIPApp2EBackEnd_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } PhoneVoIPApp2EBackEnd_MIDL_TYPE_FORMAT_STRING;

typedef struct _PhoneVoIPApp2EBackEnd_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } PhoneVoIPApp2EBackEnd_MIDL_PROC_FORMAT_STRING;

typedef struct _PhoneVoIPApp2EBackEnd_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } PhoneVoIPApp2EBackEnd_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const PhoneVoIPApp2EBackEnd_MIDL_TYPE_FORMAT_STRING PhoneVoIPApp2EBackEnd__MIDL_TypeFormatString;
extern const PhoneVoIPApp2EBackEnd_MIDL_PROC_FORMAT_STRING PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString;
extern const PhoneVoIPApp2EBackEnd_MIDL_EXPR_FORMAT_STRING PhoneVoIPApp2EBackEnd__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandler_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandler_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandler_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandler_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const PhoneVoIPApp2EBackEnd_MIDL_PROC_FORMAT_STRING PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Invoke */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 10 */	NdrFcShort( 0x20 ),	/* 32 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pBuffer */

/* 24 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter hnsPresentationTime */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter hnsSampleDuration */

/* 36 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 38 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 40 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Invoke */

/* 48 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x3 ),	/* 3 */
/* 56 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 58 */	NdrFcShort( 0x8 ),	/* 8 */
/* 60 */	NdrFcShort( 0x8 ),	/* 8 */
/* 62 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 64 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __param0 */

/* 72 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Invoke */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x3 ),	/* 3 */
/* 92 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 94 */	NdrFcShort( 0x25 ),	/* 37 */
/* 96 */	NdrFcShort( 0x8 ),	/* 8 */
/* 98 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter callId */

/* 108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 112 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter callAccessHash */

/* 114 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 116 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 118 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter rejected */

/* 120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 122 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 124 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 128 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteAudio */

/* 132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x6 ),	/* 6 */
/* 140 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 144 */	NdrFcShort( 0x21 ),	/* 33 */
/* 146 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bytes */

/* 156 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 160 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter byteCount */

/* 162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteVideo */

/* 174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x7 ),	/* 7 */
/* 182 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 184 */	NdrFcShort( 0x28 ),	/* 40 */
/* 186 */	NdrFcShort( 0x21 ),	/* 33 */
/* 188 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 190 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bytes */

/* 198 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 202 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter byteCount */

/* 204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 206 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hnsPresentationTime */

/* 210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 212 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 214 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter hnsSampleDuration */

/* 216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 218 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 220 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 224 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_AudioMessageReceived */

/* 228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 236 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x34 ),	/* 52 */
/* 242 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 244 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __param0 */

/* 252 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 256 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter __returnValue */

/* 258 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 262 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 266 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure remove_AudioMessageReceived */

/* 270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x9 ),	/* 9 */
/* 278 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 280 */	NdrFcShort( 0x18 ),	/* 24 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 286 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __param0 */

/* 294 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 298 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 300 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 302 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_VideoMessageReceived */

/* 306 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0xa ),	/* 10 */
/* 314 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x34 ),	/* 52 */
/* 320 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 322 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __param0 */

/* 330 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 332 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 334 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter __returnValue */

/* 336 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 340 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 344 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure remove_CameraLocationChanged */


	/* Procedure remove_VideoMessageReceived */

/* 348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0xb ),	/* 11 */
/* 356 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 358 */	NdrFcShort( 0x18 ),	/* 24 */
/* 360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 362 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 364 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __param0 */


	/* Parameter __param0 */

/* 372 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 374 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 376 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_id */

/* 384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x6 ),	/* 6 */
/* 392 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x2c ),	/* 44 */
/* 398 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 400 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 408 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 412 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 414 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_id */

/* 420 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x7 ),	/* 7 */
/* 428 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 430 */	NdrFcShort( 0x10 ),	/* 16 */
/* 432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 434 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 436 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __set_formal */

/* 444 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 446 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 448 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_port */

/* 456 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 464 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x22 ),	/* 34 */
/* 470 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 472 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 480 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 482 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 484 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 488 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_port */

/* 492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x9 ),	/* 9 */
/* 500 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 502 */	NdrFcShort( 0x6 ),	/* 6 */
/* 504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 506 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 508 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __set_formal */

/* 516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 518 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 520 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 524 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ipv4 */

/* 528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0xa ),	/* 10 */
/* 536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 542 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 544 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 546 */	NdrFcShort( 0x1 ),	/* 1 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 552 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 556 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ipv4 */

/* 564 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0xb ),	/* 11 */
/* 572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 578 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 580 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x1 ),	/* 1 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __set_formal */

/* 588 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 590 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 592 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Return value */

/* 594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 596 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ipv6 */

/* 600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0xc ),	/* 12 */
/* 608 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 614 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 616 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 618 */	NdrFcShort( 0x1 ),	/* 1 */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 624 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 626 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 628 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 632 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ipv6 */

/* 636 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0xd ),	/* 13 */
/* 644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x8 ),	/* 8 */
/* 650 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 652 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x1 ),	/* 1 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __set_formal */

/* 660 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 662 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 664 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Return value */

/* 666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 668 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_peerTag */

/* 672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0xe ),	/* 14 */
/* 680 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x24 ),	/* 36 */
/* 686 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 688 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ____returnValueSize */

/* 696 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 698 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 702 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 704 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 706 */	NdrFcShort( 0x76 ),	/* Type Offset=118 */

	/* Return value */

/* 708 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 710 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_peerTag */

/* 714 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0xf ),	/* 15 */
/* 722 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 728 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 730 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x1 ),	/* 1 */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ____set_formalSize */

/* 738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 740 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __set_formal */

/* 744 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 746 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 748 */	NdrFcShort( 0x8e ),	/* Type Offset=142 */

	/* Return value */

/* 750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 752 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnSignalBarsChanged */

/* 756 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x6 ),	/* 6 */
/* 764 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 766 */	NdrFcShort( 0x8 ),	/* 8 */
/* 768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 770 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 772 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newSignal */

/* 780 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 782 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */


	/* Procedure OnCallStateChanged */

/* 792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x7 ),	/* 7 */
/* 800 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 806 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 808 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cameraLocation */


	/* Parameter newState */

/* 816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 820 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnCallStatusChanged */

/* 828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 836 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 842 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 844 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newStatus */

/* 852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 854 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 856 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 860 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnCallAudioRouteChanged */

/* 864 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x9 ),	/* 9 */
/* 872 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 874 */	NdrFcShort( 0x8 ),	/* 8 */
/* 876 */	NdrFcShort( 0x8 ),	/* 8 */
/* 878 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 880 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newRoute */

/* 888 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 890 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 892 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 896 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnMediaOperationsChanged */

/* 900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0xa ),	/* 10 */
/* 908 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 914 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 916 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newOperations */

/* 924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 928 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnCameraLocationChanged */

/* 936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0xb ),	/* 11 */
/* 944 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 950 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 952 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newCameraLocation */

/* 960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 964 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 968 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetTransport */

/* 972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x6 ),	/* 6 */
/* 980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 986 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 988 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter transport */

/* 996 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 998 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1000 */	NdrFcShort( 0x9a ),	/* Type Offset=154 */

	/* Return value */

/* 1002 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1004 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StopMTProtoUpdater */


	/* Procedure Stop */

/* 1008 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1010 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1022 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1024 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 1032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1034 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateVoIPControllerWrapper */


	/* Procedure ToggleCamera */

/* 1038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1046 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1052 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1054 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 1062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_CameraLocationChanged */

/* 1068 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0xa ),	/* 10 */
/* 1076 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1082 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1084 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __param0 */

/* 1092 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1094 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1096 */	NdrFcShort( 0xac ),	/* Type Offset=172 */

	/* Parameter __returnValue */

/* 1098 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 1100 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1102 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 1104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1106 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_InitTimeout */

/* 1110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1116 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1122 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1124 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1126 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1134 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1136 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1138 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_InitTimeout */

/* 1146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1154 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1156 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1160 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1162 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __set_formal */

/* 1170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1174 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1178 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RecvTimeout */

/* 1182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1190 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1196 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1198 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1206 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1208 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1210 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1214 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RecvTimeout */

/* 1218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1226 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1228 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1232 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1234 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __set_formal */

/* 1242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1244 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1246 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 1248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1250 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */


	/* Procedure HandleUpdatePhoneCall */

/* 1254 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1260 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1262 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1268 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1270 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1276 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 1278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1280 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoPeriodicKeepAlive */


	/* Procedure Stop */


	/* Procedure Stop */


	/* Procedure StartMTProtoUpdater */

/* 1284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1292 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1298 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1300 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteVoIPControllerWrapper */

/* 1314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1320 */	NdrFcShort( 0xa ),	/* 10 */
/* 1322 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1328 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1330 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1340 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetConfig */

/* 1344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0xb ),	/* 11 */
/* 1352 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1358 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1360 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter config */

/* 1368 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1372 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */

	/* Return value */

/* 1374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1376 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetEncryptionKey */

/* 1380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0xc ),	/* 12 */
/* 1388 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1390 */	NdrFcShort( 0xd ),	/* 13 */
/* 1392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1394 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1396 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __keySize */

/* 1404 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter key */

/* 1410 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1414 */	NdrFcShort( 0x8e ),	/* Type Offset=142 */

	/* Parameter isOutgoing */

/* 1416 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1418 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1420 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1424 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPublicEndpoints */

/* 1428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0xd ),	/* 13 */
/* 1436 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1438 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1442 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1444 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1448 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __endpointsSize */

/* 1452 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1454 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endpoints */

/* 1458 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1460 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1462 */	NdrFcShort( 0xf6 ),	/* Type Offset=246 */

	/* Parameter allowP2P */

/* 1464 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1466 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1468 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter connectionMaxLayer */

/* 1470 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1472 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1478 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetProxy */

/* 1482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0xe ),	/* 14 */
/* 1490 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1496 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1498 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1502 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter proxy */

/* 1506 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1510 */	NdrFcShort( 0x10c ),	/* Type Offset=268 */

	/* Return value */

/* 1512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1514 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */

/* 1518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0xf ),	/* 15 */
/* 1526 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1532 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1534 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Connect */

/* 1548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1554 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1562 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1564 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1572 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1574 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMicMute */

/* 1578 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1584 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1586 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1588 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1590 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1592 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1594 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1600 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mute */

/* 1602 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1604 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1606 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1608 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1610 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SwitchSpeaker */

/* 1614 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1620 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1622 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1624 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1628 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1630 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1636 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter external */

/* 1638 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1640 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1642 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1646 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UpdateServerConfig */

/* 1650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1656 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1658 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1664 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1666 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1670 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter json */

/* 1674 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1676 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1678 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Return value */

/* 1680 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1682 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPreferredRelayID */

/* 1686 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1692 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1694 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1700 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1702 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1710 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1712 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1714 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1718 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLastError */

/* 1722 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1730 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1734 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1736 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1738 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1746 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1748 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1750 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 1752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1754 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDebugLog */

/* 1758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1764 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1766 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1772 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1774 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1782 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1784 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1786 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 1788 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1790 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDebugString */

/* 1794 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1800 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1802 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1808 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1810 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1812 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1818 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1820 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1822 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 1824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1826 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetVersion */

/* 1830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1836 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1838 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1844 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1846 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1848 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1854 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1856 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1858 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 1860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1862 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSignalBarsCount */

/* 1866 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1874 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1878 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1880 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1882 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 1890 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1892 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1898 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetStatusCallback */

/* 1902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1908 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1910 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1916 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1918 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter statusListener */

/* 1926 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1928 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1930 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Return value */

/* 1932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1934 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitiateOutgoingCall2 */

/* 1938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1944 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1946 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1948 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1950 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1952 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1954 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1960 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter recepientName */

/* 1962 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1964 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1966 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter recepientId */

/* 1968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1970 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1972 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter callId */

/* 1974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1976 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1978 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter callAccessHash */

/* 1980 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1982 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1984 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1986 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1988 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1990 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1994 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 1996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitiateOutgoingCall1 */

/* 1998 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2004 */	NdrFcShort( 0x1c ),	/* 28 */
/* 2006 */	NdrFcShort( 0x80 ),	/* x86 Stack size/offset = 128 */
/* 2008 */	NdrFcShort( 0x5a ),	/* 90 */
/* 2010 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2012 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x11,		/* 17 */
/* 2014 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2018 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2020 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter recepientName */

/* 2022 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2024 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2026 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter recepientId */

/* 2028 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2030 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2032 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter callId */

/* 2034 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2036 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2038 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter callAccessHash */

/* 2040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2042 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2044 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter config */

/* 2046 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2048 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2050 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */

	/* Parameter __keySize */

/* 2052 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2054 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 2056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter key */

/* 2058 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2060 */	NdrFcShort( 0x44 ),	/* x86 Stack size/offset = 68 */
/* 2062 */	NdrFcShort( 0x142 ),	/* Type Offset=322 */

	/* Parameter outgoing */

/* 2064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2066 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 2068 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __emojisSize */

/* 2070 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2072 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 2074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter emojis */

/* 2076 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2078 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 2080 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Parameter __endpointsSize */

/* 2082 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2084 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 2086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endpoints */

/* 2088 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2090 */	NdrFcShort( 0x58 ),	/* x86 Stack size/offset = 88 */
/* 2092 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter allowP2P */

/* 2094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2096 */	NdrFcShort( 0x5c ),	/* x86 Stack size/offset = 92 */
/* 2098 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter connectionMaxLayer */

/* 2100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2102 */	NdrFcShort( 0x60 ),	/* x86 Stack size/offset = 96 */
/* 2104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter proxy */

/* 2106 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2108 */	NdrFcShort( 0x64 ),	/* x86 Stack size/offset = 100 */
/* 2110 */	NdrFcShort( 0x10c ),	/* Type Offset=268 */

	/* Parameter __returnValue */

/* 2112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2114 */	NdrFcShort( 0x78 ),	/* x86 Stack size/offset = 120 */
/* 2116 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2120 */	NdrFcShort( 0x7c ),	/* x86 Stack size/offset = 124 */
/* 2122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnIncomingCallReceived */

/* 2124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2130 */	NdrFcShort( 0x1d ),	/* 29 */
/* 2132 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2134 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2136 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2138 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2140 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter contactName */

/* 2148 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2152 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter contactId */

/* 2154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2156 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2158 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter contactImage */

/* 2160 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2162 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2164 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter callId */

/* 2166 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2168 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2170 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter callAccessHash */

/* 2172 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2174 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2176 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter incomingCallDialogDismissedCallback */

/* 2178 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2180 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 2182 */	NdrFcShort( 0x182 ),	/* Type Offset=386 */

	/* Parameter __returnValue */

/* 2184 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2186 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2188 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2192 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 2194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HoldCall */

/* 2196 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2202 */	NdrFcShort( 0x1e ),	/* 30 */
/* 2204 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2208 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2210 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2212 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2220 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2222 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2224 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2228 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ResumeCall */

/* 2232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x1f ),	/* 31 */
/* 2240 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2244 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2246 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2248 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2256 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2258 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2260 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2264 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EndCall */

/* 2268 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2274 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2276 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2280 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2282 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2284 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2292 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2294 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2296 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2300 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ToggleCamera */

/* 2304 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2310 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2312 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2316 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2318 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2320 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2326 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2328 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2330 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2332 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2336 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CallStatus */

/* 2340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2346 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2348 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2352 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2354 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2356 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2364 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2366 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2368 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 2370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2372 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MediaOperations */

/* 2376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2382 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2384 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2388 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2390 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2392 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2400 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2402 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2404 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 2406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2408 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsShowingVideo */

/* 2412 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2418 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2420 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2426 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2428 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2434 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2436 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2438 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2440 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2444 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IsShowingVideo */

/* 2448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2454 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2456 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2458 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2462 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2464 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2470 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2472 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2474 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2476 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2480 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IsRenderingVideo */

/* 2484 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2490 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2492 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2496 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2498 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2500 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2508 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2510 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2512 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2516 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IsRenderingVideo */

/* 2520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2526 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2528 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2530 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2534 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2536 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2544 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2546 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2548 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2552 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CameraLocation */

/* 2556 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2562 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2564 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2568 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2570 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2572 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2580 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2582 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2584 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 2586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2588 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AvailableAudioRoutes */

/* 2592 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2598 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2600 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2604 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2606 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2608 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2616 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2618 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2620 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 2622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2624 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AudioRoute */

/* 2628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2634 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2636 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2642 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2644 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2652 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2654 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2656 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 2658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2660 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AudioRoute */

/* 2664 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2670 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2672 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2678 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2680 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newRoute */

/* 2688 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2690 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2692 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 2694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2696 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_OtherPartyName */

/* 2700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2706 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2708 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2714 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2716 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2718 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2724 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2726 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2728 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 2730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2732 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_OtherPartyId */

/* 2736 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2744 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2748 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2750 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2752 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2758 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2760 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2762 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2764 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 2766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2768 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CallStartTime */

/* 2772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2778 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2780 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2784 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2786 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2788 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2796 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 2798 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2800 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 2802 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2804 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CallId */

/* 2808 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2810 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2814 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2816 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2820 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2822 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2824 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2830 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2832 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2834 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2836 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 2838 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2840 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CallAccessHash */

/* 2844 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2850 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2852 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2856 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2858 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2860 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2866 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2868 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2870 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2872 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 2874 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2876 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AcceptedCallId */

/* 2880 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2886 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2888 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2892 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2894 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2896 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 2904 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2906 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2908 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 2910 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2912 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AcceptedCallId */

/* 2916 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2922 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2924 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2926 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2930 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2932 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2938 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 2940 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2942 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2944 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 2946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2948 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Key */

/* 2952 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2960 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2964 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2966 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2968 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 2970 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2974 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ____returnValueSize */

/* 2976 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2978 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2982 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2984 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2986 */	NdrFcShort( 0x76 ),	/* Type Offset=118 */

	/* Return value */

/* 2988 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2990 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Outgoing */

/* 2994 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3000 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3002 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3006 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3008 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3010 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3016 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3018 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3020 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3022 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3024 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3026 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3028 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Emojis */

/* 3030 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3032 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3036 */	NdrFcShort( 0x35 ),	/* 53 */
/* 3038 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3042 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3044 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3046 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3048 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ____returnValueSize */

/* 3054 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3056 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3060 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3062 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3064 */	NdrFcShort( 0x194 ),	/* Type Offset=404 */

	/* Return value */

/* 3066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3068 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */

/* 3072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3078 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3080 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3082 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3086 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3088 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pts */

/* 3096 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3098 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter date */

/* 3102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter qts */

/* 3108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3110 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3116 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DiscardCall */

/* 3120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3128 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3130 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3134 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3136 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter id */

/* 3144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3146 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3148 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter accessHash */

/* 3150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3152 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3154 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3158 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReceivedCall */

/* 3162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3168 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3170 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3172 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3176 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3178 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter id */

/* 3186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3190 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter accessHash */

/* 3192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3194 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3196 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 3198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3200 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartServer */

/* 3204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3210 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3212 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3218 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3220 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __outOfProcServerClassNamesSize */

/* 3228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outOfProcServerClassNames */

/* 3234 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3236 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3238 */	NdrFcShort( 0x1b6 ),	/* Type Offset=438 */

	/* Return value */

/* 3240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3242 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CallController */

/* 3246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3254 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3260 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3262 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3270 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3272 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3274 */	NdrFcShort( 0x1cc ),	/* Type Offset=460 */

	/* Return value */

/* 3276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3278 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VideoRenderer */

/* 3282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3288 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3290 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3296 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3298 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3306 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3308 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3310 */	NdrFcShort( 0x1e2 ),	/* Type Offset=482 */

	/* Return value */

/* 3312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_VideoRenderer */

/* 3318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3324 */	NdrFcShort( 0xa ),	/* 10 */
/* 3326 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3332 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3334 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 3342 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3344 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3346 */	NdrFcShort( 0x1e6 ),	/* Type Offset=486 */

	/* Return value */

/* 3348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_MTProtoUpdater */

/* 3354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3360 */	NdrFcShort( 0xb ),	/* 11 */
/* 3362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3368 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3370 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3378 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3382 */	NdrFcShort( 0x1f8 ),	/* Type Offset=504 */

	/* Return value */

/* 3384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MTProtoUpdater */

/* 3390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3396 */	NdrFcShort( 0xc ),	/* 12 */
/* 3398 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3404 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3406 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 3414 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3418 */	NdrFcShort( 0x1fc ),	/* Type Offset=508 */

	/* Return value */

/* 3420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CaptureController */

/* 3426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3432 */	NdrFcShort( 0xd ),	/* 13 */
/* 3434 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3440 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3442 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3450 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3452 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3454 */	NdrFcShort( 0x20e ),	/* Type Offset=526 */

	/* Return value */

/* 3456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3458 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TransportController */

/* 3462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3468 */	NdrFcShort( 0xe ),	/* 14 */
/* 3470 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3476 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3478 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3486 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3490 */	NdrFcShort( 0x224 ),	/* Type Offset=548 */

	/* Return value */

/* 3492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCurrentProcessId */

/* 3498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3504 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3506 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3510 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3512 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3514 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3522 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetUiDisconnectedEventName */

/* 3534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3540 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3542 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3548 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3550 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3552 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter backgroundProcessId */

/* 3558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3560 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3564 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3566 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3568 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 3570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3572 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBackgroundProcessReadyEventName */

/* 3576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3584 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3590 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3592 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3594 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter backgroundProcessId */

/* 3600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3606 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3610 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 3612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3614 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Instance */

/* 3618 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3624 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3626 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3632 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3634 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __returnValue */

/* 3642 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3644 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3646 */	NdrFcShort( 0x228 ),	/* Type Offset=552 */

	/* Return value */

/* 3648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3650 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const PhoneVoIPApp2EBackEnd_MIDL_TYPE_FORMAT_STRING PhoneVoIPApp2EBackEnd__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  4 */	NdrFcLong( 0x905a0fe0 ),	/* -1873145888 */
/*  8 */	NdrFcShort( 0xbc53 ),	/* -17325 */
/* 10 */	NdrFcShort( 0x11df ),	/* 4575 */
/* 12 */	0x8c,		/* 140 */
			0x49,		/* 73 */
/* 14 */	0x0,		/* 0 */
			0x1e,		/* 30 */
/* 16 */	0x4f,		/* 79 */
			0xc6,		/* 198 */
/* 18 */	0x86,		/* 134 */
			0xda,		/* 218 */
/* 20 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 22 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 24 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 26 */	NdrFcLong( 0xf2035e6a ),	/* -234660246 */
/* 30 */	NdrFcShort( 0x8067 ),	/* -32665 */
/* 32 */	NdrFcShort( 0x3abb ),	/* 15035 */
/* 34 */	0xa7,		/* 167 */
			0x95,		/* 149 */
/* 36 */	0x7b,		/* 123 */
			0x33,		/* 51 */
/* 38 */	0x4c,		/* 76 */
			0x67,		/* 103 */
/* 40 */	0xa2,		/* 162 */
			0xed,		/* 237 */
/* 42 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 44 */	NdrFcShort( 0x2 ),	/* Offset= 2 (46) */
/* 46 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 52 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 54 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 56 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 58 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 60 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 62 */	NdrFcShort( 0x1c ),	/* Offset= 28 (90) */
/* 64 */	
			0x13, 0x0,	/* FC_OP */
/* 66 */	NdrFcShort( 0xe ),	/* Offset= 14 (80) */
/* 68 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 70 */	NdrFcShort( 0x2 ),	/* 2 */
/* 72 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 74 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 76 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 78 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 80 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 82 */	NdrFcShort( 0x8 ),	/* 8 */
/* 84 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (68) */
/* 86 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 88 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 90 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x4 ),	/* 4 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0xffde ),	/* Offset= -34 (64) */
/* 100 */	
			0x12, 0x0,	/* FC_UP */
/* 102 */	NdrFcShort( 0xffea ),	/* Offset= -22 (80) */
/* 104 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x4 ),	/* 4 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (100) */
/* 114 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 116 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 118 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 120 */	NdrFcShort( 0x2 ),	/* Offset= 2 (122) */
/* 122 */	
			0x13, 0x0,	/* FC_OP */
/* 124 */	NdrFcShort( 0x2 ),	/* Offset= 2 (126) */
/* 126 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 128 */	NdrFcShort( 0x1 ),	/* 1 */
/* 130 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 132 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 134 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 136 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 138 */	
			0x11, 0x0,	/* FC_RP */
/* 140 */	NdrFcShort( 0x2 ),	/* Offset= 2 (142) */
/* 142 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 144 */	NdrFcShort( 0x1 ),	/* 1 */
/* 146 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 148 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 150 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 152 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 154 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 156 */	NdrFcLong( 0xf5a3c2ae ),	/* -173817170 */
/* 160 */	NdrFcShort( 0xef7b ),	/* -4229 */
/* 162 */	NdrFcShort( 0x3de2 ),	/* 15842 */
/* 164 */	0x8b,		/* 139 */
			0xe,		/* 14 */
/* 166 */	0x8e,		/* 142 */
			0x8b,		/* 139 */
/* 168 */	0x3c,		/* 60 */
			0xd2,		/* 210 */
/* 170 */	0xd,		/* 13 */
			0x9d,		/* 157 */
/* 172 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 174 */	NdrFcLong( 0x1698b961 ),	/* 379107681 */
/* 178 */	NdrFcShort( 0xf90e ),	/* -1778 */
/* 180 */	NdrFcShort( 0x30d0 ),	/* 12496 */
/* 182 */	0x80,		/* 128 */
			0xff,		/* 255 */
/* 184 */	0x22,		/* 34 */
			0xe9,		/* 233 */
/* 186 */	0x4c,		/* 76 */
			0xf6,		/* 246 */
/* 188 */	0x6d,		/* 109 */
			0x7b,		/* 123 */
/* 190 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 192 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 194 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 196 */	NdrFcShort( 0x20 ),	/* 32 */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x0 ),	/* Offset= 0 (200) */
/* 202 */	0xc,		/* FC_DOUBLE */
			0xc,		/* FC_DOUBLE */
/* 204 */	0xe,		/* FC_ENUM32 */
			0x3,		/* FC_SMALL */
/* 206 */	0x3,		/* FC_SMALL */
			0x3,		/* FC_SMALL */
/* 208 */	0x3d,		/* FC_STRUCTPAD1 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 210 */	0x0,		/* 0 */
			NdrFcShort( 0xff95 ),	/* Offset= -107 (104) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 214 */	0x0,		/* 0 */
			NdrFcShort( 0xff91 ),	/* Offset= -111 (104) */
			0x5b,		/* FC_END */
/* 218 */	
			0x11, 0x0,	/* FC_RP */
/* 220 */	NdrFcShort( 0x1a ),	/* Offset= 26 (246) */
/* 222 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 224 */	NdrFcShort( 0x18 ),	/* 24 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x0 ),	/* Offset= 0 (228) */
/* 230 */	0xb,		/* FC_HYPER */
			0x6,		/* FC_SHORT */
/* 232 */	0x3e,		/* FC_STRUCTPAD2 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 234 */	0x0,		/* 0 */
			NdrFcShort( 0xff7d ),	/* Offset= -131 (104) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 238 */	0x0,		/* 0 */
			NdrFcShort( 0xff79 ),	/* Offset= -135 (104) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 242 */	0x0,		/* 0 */
			NdrFcShort( 0xff75 ),	/* Offset= -139 (104) */
			0x5b,		/* FC_END */
/* 246 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 252 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 254 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 256 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 260 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 262 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 264 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (222) */
/* 266 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 268 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 270 */	NdrFcShort( 0x14 ),	/* 20 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x0 ),	/* Offset= 0 (274) */
/* 276 */	0xe,		/* FC_ENUM32 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 278 */	0x0,		/* 0 */
			NdrFcShort( 0xff51 ),	/* Offset= -175 (104) */
			0x6,		/* FC_SHORT */
/* 282 */	0x3e,		/* FC_STRUCTPAD2 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 284 */	0x0,		/* 0 */
			NdrFcShort( 0xff4b ),	/* Offset= -181 (104) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 288 */	0x0,		/* 0 */
			NdrFcShort( 0xff47 ),	/* Offset= -185 (104) */
			0x5b,		/* FC_END */
/* 292 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 294 */	0xe,		/* FC_ENUM32 */
			0x5c,		/* FC_PAD */
/* 296 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 298 */	NdrFcLong( 0x39126060 ),	/* 957505632 */
/* 302 */	NdrFcShort( 0x292 ),	/* 658 */
/* 304 */	NdrFcShort( 0x36d6 ),	/* 14038 */
/* 306 */	0xb3,		/* 179 */
			0xf8,		/* 248 */
/* 308 */	0x9a,		/* 154 */
			0xc4,		/* 196 */
/* 310 */	0x15,		/* 21 */
			0x6c,		/* 108 */
/* 312 */	0x65,		/* 101 */
			0x1d,		/* 29 */
/* 314 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 316 */	0x3,		/* FC_SMALL */
			0x5c,		/* FC_PAD */
/* 318 */	
			0x11, 0x0,	/* FC_RP */
/* 320 */	NdrFcShort( 0x2 ),	/* Offset= 2 (322) */
/* 322 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 324 */	NdrFcShort( 0x1 ),	/* 1 */
/* 326 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 328 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 330 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 332 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 334 */	
			0x11, 0x0,	/* FC_RP */
/* 336 */	NdrFcShort( 0x2 ),	/* Offset= 2 (338) */
/* 338 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 342 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 344 */	NdrFcShort( 0x4c ),	/* x86 Stack size/offset = 76 */
/* 346 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 348 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 352 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 354 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 356 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (104) */
/* 358 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 360 */	
			0x11, 0x0,	/* FC_RP */
/* 362 */	NdrFcShort( 0x2 ),	/* Offset= 2 (364) */
/* 364 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 370 */	NdrFcShort( 0x54 ),	/* x86 Stack size/offset = 84 */
/* 372 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 374 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 378 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 380 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 382 */	NdrFcShort( 0xff60 ),	/* Offset= -160 (222) */
/* 384 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 386 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 388 */	NdrFcLong( 0x91ddee70 ),	/* -1847726480 */
/* 392 */	NdrFcShort( 0xaa90 ),	/* -21872 */
/* 394 */	NdrFcShort( 0x38e7 ),	/* 14567 */
/* 396 */	0xb4,		/* 180 */
			0xe5,		/* 229 */
/* 398 */	0xf7,		/* 247 */
			0x95,		/* 149 */
/* 400 */	0x95,		/* 149 */
			0x69,		/* 105 */
/* 402 */	0xcb,		/* 203 */
			0x5c,		/* 92 */
/* 404 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 406 */	NdrFcShort( 0x2 ),	/* Offset= 2 (408) */
/* 408 */	
			0x13, 0x0,	/* FC_OP */
/* 410 */	NdrFcShort( 0x2 ),	/* Offset= 2 (412) */
/* 412 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 418 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 420 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 422 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 426 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 428 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 430 */	NdrFcShort( 0xfeac ),	/* Offset= -340 (90) */
/* 432 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 434 */	
			0x11, 0x0,	/* FC_RP */
/* 436 */	NdrFcShort( 0x2 ),	/* Offset= 2 (438) */
/* 438 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 444 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 446 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 448 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 452 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 454 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 456 */	NdrFcShort( 0xfea0 ),	/* Offset= -352 (104) */
/* 458 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 460 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 462 */	NdrFcShort( 0x2 ),	/* Offset= 2 (464) */
/* 464 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 466 */	NdrFcLong( 0x6b50718 ),	/* 112527128 */
/* 470 */	NdrFcShort( 0x3528 ),	/* 13608 */
/* 472 */	NdrFcShort( 0x3b66 ),	/* 15206 */
/* 474 */	0xbe,		/* 190 */
			0x76,		/* 118 */
/* 476 */	0xe1,		/* 225 */
			0x83,		/* 131 */
/* 478 */	0xaa,		/* 170 */
			0x80,		/* 128 */
/* 480 */	0xd4,		/* 212 */
			0xa5,		/* 165 */
/* 482 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 484 */	NdrFcShort( 0x2 ),	/* Offset= 2 (486) */
/* 486 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 488 */	NdrFcLong( 0x6928ca7b ),	/* 1764280955 */
/* 492 */	NdrFcShort( 0x166d ),	/* 5741 */
/* 494 */	NdrFcShort( 0x3b37 ),	/* 15159 */
/* 496 */	0x90,		/* 144 */
			0x10,		/* 16 */
/* 498 */	0xfb,		/* 251 */
			0xab,		/* 171 */
/* 500 */	0x2c,		/* 44 */
			0x7e,		/* 126 */
/* 502 */	0x92,		/* 146 */
			0xb0,		/* 176 */
/* 504 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 506 */	NdrFcShort( 0x2 ),	/* Offset= 2 (508) */
/* 508 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 510 */	NdrFcLong( 0x4fa5f2c4 ),	/* 1336275652 */
/* 514 */	NdrFcShort( 0x8612 ),	/* -31214 */
/* 516 */	NdrFcShort( 0x35c9 ),	/* 13769 */
/* 518 */	0xbf,		/* 191 */
			0xaa,		/* 170 */
/* 520 */	0x96,		/* 150 */
			0x7c,		/* 124 */
/* 522 */	0x2c,		/* 44 */
			0x81,		/* 129 */
/* 524 */	0x9f,		/* 159 */
			0xa7,		/* 167 */
/* 526 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 528 */	NdrFcShort( 0x2 ),	/* Offset= 2 (530) */
/* 530 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 532 */	NdrFcLong( 0x8313dbea ),	/* -2095850518 */
/* 536 */	NdrFcShort( 0xfd3b ),	/* -709 */
/* 538 */	NdrFcShort( 0x3071 ),	/* 12401 */
/* 540 */	0x80,		/* 128 */
			0x35,		/* 53 */
/* 542 */	0x7b,		/* 123 */
			0x61,		/* 97 */
/* 544 */	0x16,		/* 22 */
			0x58,		/* 88 */
/* 546 */	0xda,		/* 218 */
			0xd8,		/* 216 */
/* 548 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 550 */	NdrFcShort( 0xfe74 ),	/* Offset= -396 (154) */
/* 552 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 554 */	NdrFcShort( 0x2 ),	/* Offset= 2 (556) */
/* 556 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 558 */	NdrFcLong( 0xc8afe1a8 ),	/* -927997528 */
/* 562 */	NdrFcShort( 0x92fc ),	/* -27908 */
/* 564 */	NdrFcShort( 0x3783 ),	/* 14211 */
/* 566 */	0x95,		/* 149 */
			0x20,		/* 32 */
/* 568 */	0xd6,		/* 214 */
			0xbb,		/* 187 */
/* 570 */	0xc5,		/* 197 */
			0x7,		/* 7 */
/* 572 */	0xb2,		/* 178 */
			0x4a,		/* 74 */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            HSTRING_UserSize
            ,HSTRING_UserMarshal
            ,HSTRING_UserUnmarshal
            ,HSTRING_UserFree
            }

        };



/* Standard interface: __MIDL_itf_PhoneVoIPApp2EBackEnd_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: __x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandler, ver. 0.0,
   GUID={0xF2035E6A,0x8067,0x3ABB,{0xA7,0x95,0x7B,0x33,0x4C,0x67,0xA2,0xED}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandler_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandler_ProxyInfo =
    {
    &Object_StubDesc,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandler_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandler_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandler_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) ___x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandlerProxyVtbl = 
{
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandler_ProxyInfo,
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandler,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandler::Invoke */
};

const CInterfaceStubVtbl ___x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandlerStubVtbl =
{
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandler,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandler_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: __x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandler, ver. 0.0,
   GUID={0x1698B961,0xF90E,0x30D0,{0x80,0xFF,0x22,0xE9,0x4C,0xF6,0x6D,0x7B}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandler_FormatStringOffsetTable[] =
    {
    48
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandler_ProxyInfo =
    {
    &Object_StubDesc,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandler_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandler_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandler_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) ___x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandlerProxyVtbl = 
{
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandler_ProxyInfo,
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandler,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandler::Invoke */
};

const CInterfaceStubVtbl ___x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandlerStubVtbl =
{
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandler,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandler_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: __x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallback, ver. 0.0,
   GUID={0x91DDEE70,0xAA90,0x38E7,{0xB4,0xE5,0xF7,0x95,0x95,0x69,0xCB,0x5C}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallback_FormatStringOffsetTable[] =
    {
    84
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallback_ProxyInfo =
    {
    &Object_StubDesc,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) ___x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallbackProxyVtbl = 
{
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallback_ProxyInfo,
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallback::Invoke */
};

const CInterfaceStubVtbl ___x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallbackStubVtbl =
{
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallback,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallback_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_PhoneVoIPApp2EBackEnd_0000_0003, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IInspectable, ver. 0.0,
   GUID={0xAF86E2E0,0xB12D,0x4c6a,{0x9C,0x5A,0xD7,0xAA,0x65,0x10,0x1E,0x90}} */


/* Object interface: __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals, ver. 0.0,
   GUID={0xF5A3C2AE,0xEF7B,0x3DE2,{0x8B,0x0E,0x8E,0x8B,0x3C,0xD2,0x0D,0x9D}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    132,
    174,
    228,
    270,
    306,
    348
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) ___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals::WriteAudio */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals::WriteVideo */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals::add_AudioMessageReceived */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals::remove_AudioMessageReceived */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals::add_VideoMessageReceived */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals::remove_VideoMessageReceived */
};


static const PRPC_STUB_FUNCTION __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals_ServerInfo,
    12,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_PhoneVoIPApp2EBackEnd_0000_0004, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtuals, ver. 0.0,
   GUID={0x044DEA28,0x0E8D,0x3A16,{0xA2,0xC1,0xBE,0x95,0xC0,0xBE,0xD5,0xE5}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtualsStubVtbl =
{
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtuals,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtuals_ServerInfo,
    6,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_PhoneVoIPApp2EBackEnd_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals, ver. 0.0,
   GUID={0x0CC88A54,0x89AF,0x3CC6,{0x9B,0x95,0xF8,0xF2,0x24,0x28,0xAB,0xED}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    384,
    420,
    456,
    492,
    528,
    564,
    600,
    636,
    672,
    714
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(16) ___x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals::get_id */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals::put_id */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals::get_port */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals::put_port */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals::get_ipv4 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals::put_ipv4 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals::get_ipv6 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals::put_ipv6 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals::get_peerTag */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals::put_peerTag */
};


static const PRPC_STUB_FUNCTION __x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals_ServerInfo,
    16,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_PhoneVoIPApp2EBackEnd_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener, ver. 0.0,
   GUID={0x39126060,0x0292,0x36D6,{0xB3,0xF8,0x9A,0xC4,0x15,0x6C,0x65,0x1D}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    756,
    792,
    828,
    864,
    900,
    936
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener_ProxyInfo =
    {
    &Object_StubDesc,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) ___x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListenerProxyVtbl = 
{
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener_ProxyInfo,
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener::OnSignalBarsChanged */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener::OnCallStateChanged */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener::OnCallStatusChanged */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener::OnCallAudioRouteChanged */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener::OnMediaOperationsChanged */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener::OnCameraLocationChanged */
};


static const PRPC_STUB_FUNCTION __x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListenerStubVtbl =
{
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener_ServerInfo,
    12,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_PhoneVoIPApp2EBackEnd_0000_0007, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals, ver. 0.0,
   GUID={0x8313DBEA,0xFD3B,0x3071,{0x80,0x35,0x7B,0x61,0x16,0x58,0xDA,0xD8}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    972,
    792,
    1008,
    1038,
    1068,
    348
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) ___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals::SetTransport */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals::Start */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals::Stop */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals::ToggleCamera */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals::add_CameraLocationChanged */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals::remove_CameraLocationChanged */
};


static const PRPC_STUB_FUNCTION __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals_ServerInfo,
    12,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_PhoneVoIPApp2EBackEnd_0000_0008, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtuals, ver. 0.0,
   GUID={0x64B31D5B,0x1A27,0x37A8,{0xBC,0xBC,0xC0,0xBB,0xD5,0x31,0x4C,0x79}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtualsStubVtbl =
{
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtuals,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtuals_ServerInfo,
    6,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_PhoneVoIPApp2EBackEnd_0000_0009, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig, ver. 0.0,
   GUID={0xA9F22E31,0xD4E1,0x3940,{0xBA,0x20,0xDC,0xB2,0x09,0x73,0xB0,0x9F}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1110,
    1146,
    1182,
    1218
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig_ProxyInfo =
    {
    &Object_StubDesc,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) ___x_ABI_CPhoneVoIPApp_CBackEnd_CIConfigProxyVtbl = 
{
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig_ProxyInfo,
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig::get_InitTimeout */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig::put_InitTimeout */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig::get_RecvTimeout */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig::put_RecvTimeout */
};


static const PRPC_STUB_FUNCTION __x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_CPhoneVoIPApp_CBackEnd_CIConfigStubVtbl =
{
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig_ServerInfo,
    10,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_PhoneVoIPApp2EBackEnd_0000_0010, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals, ver. 0.0,
   GUID={0x06B50718,0x3528,0x3B66,{0xBE,0x76,0xE1,0x83,0xAA,0x80,0xD4,0xA5}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1254,
    1284,
    1008,
    1038,
    1314,
    1344,
    1380,
    1428,
    1482,
    1518,
    1548,
    1578,
    1614,
    1650,
    1686,
    1722,
    1758,
    1794,
    1830,
    1866,
    1902,
    1938,
    1998,
    2124,
    2196,
    2232,
    2268,
    2304,
    2340,
    2376,
    2412,
    2448,
    2484,
    2520,
    2556,
    2592,
    2628,
    2664,
    2700,
    2736,
    2772,
    2808,
    2844,
    2880,
    2916,
    2952,
    2994,
    3030
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(54) ___x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::HandleUpdatePhoneCall */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::StartMTProtoUpdater */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::StopMTProtoUpdater */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::CreateVoIPControllerWrapper */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::DeleteVoIPControllerWrapper */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::SetConfig */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::SetEncryptionKey */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::SetPublicEndpoints */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::SetProxy */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::Start */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::Connect */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::SetMicMute */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::SwitchSpeaker */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::UpdateServerConfig */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::GetPreferredRelayID */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::GetLastError */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::GetDebugLog */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::GetDebugString */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::GetVersion */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::GetSignalBarsCount */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::SetStatusCallback */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::InitiateOutgoingCall2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::InitiateOutgoingCall1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::OnIncomingCallReceived */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::HoldCall */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::ResumeCall */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::EndCall */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::ToggleCamera */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::get_CallStatus */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::get_MediaOperations */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::get_IsShowingVideo */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::put_IsShowingVideo */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::get_IsRenderingVideo */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::put_IsRenderingVideo */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::get_CameraLocation */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::get_AvailableAudioRoutes */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::get_AudioRoute */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::put_AudioRoute */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::get_OtherPartyName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::get_OtherPartyId */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::get_CallStartTime */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::get_CallId */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::get_CallAccessHash */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::get_AcceptedCallId */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::put_AcceptedCallId */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::get_Key */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::get_Outgoing */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals::get_Emojis */
};


static const PRPC_STUB_FUNCTION __x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals_ServerInfo,
    54,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_PhoneVoIPApp2EBackEnd_0000_0011, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer, ver. 0.0,
   GUID={0x6928CA7B,0x166D,0x3B37,{0x90,0x10,0xFB,0xAB,0x2C,0x7E,0x92,0xB0}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1254,
    1284
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer_ProxyInfo =
    {
    &Object_StubDesc,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) ___x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRendererProxyVtbl = 
{
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer_ProxyInfo,
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer::Start */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer::Stop */
};


static const PRPC_STUB_FUNCTION __x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRendererStubVtbl =
{
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer_ServerInfo,
    8,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_PhoneVoIPApp2EBackEnd_0000_0012, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater, ver. 0.0,
   GUID={0x4FA5F2C4,0x8612,0x35C9,{0xBF,0xAA,0x96,0x7C,0x2C,0x81,0x9F,0xA7}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3072,
    1284,
    3120,
    3162
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater_ProxyInfo =
    {
    &Object_StubDesc,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) ___x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdaterProxyVtbl = 
{
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater_ProxyInfo,
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater::Start */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater::Stop */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater::DiscardCall */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater::ReceivedCall */
};


static const PRPC_STUB_FUNCTION __x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdaterStubVtbl =
{
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater_ServerInfo,
    10,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_PhoneVoIPApp2EBackEnd_0000_0013, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals, ver. 0.0,
   GUID={0xC8AFE1A8,0x92FC,0x3783,{0x95,0x20,0xD6,0xBB,0xC5,0x07,0xB2,0x4A}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3204,
    1284,
    3246,
    3282,
    3318,
    3354,
    3390,
    3426,
    3462
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) ___x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals::StartServer */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals::DoPeriodicKeepAlive */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals::get_CallController */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals::get_VideoRenderer */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals::put_VideoRenderer */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals::get_MTProtoUpdater */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals::put_MTProtoUpdater */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals::get_CaptureController */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals::get_TransportController */
};


static const PRPC_STUB_FUNCTION __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals_ServerInfo,
    15,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_PhoneVoIPApp2EBackEnd_0000_0014, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics, ver. 0.0,
   GUID={0x2C1E9C37,0x6827,0x38F7,{0x85,0x7C,0x02,0x16,0x42,0xCA,0x42,0x8B}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3498,
    3534,
    3576,
    3618
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics_ProxyInfo =
    {
    &Object_StubDesc,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    PhoneVoIPApp2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) ___x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStaticsProxyVtbl = 
{
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics_ProxyInfo,
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics::GetCurrentProcessId */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics::GetUiDisconnectedEventName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics::GetBackgroundProcessReadyEventName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics::get_Instance */
};


static const PRPC_STUB_FUNCTION __x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStaticsStubVtbl =
{
    &IID___x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics_ServerInfo,
    10,
    &__x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_PhoneVoIPApp2EBackEnd_0000_0015, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    PhoneVoIPApp2EBackEnd__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _PhoneVoIPApp2EBackEnd_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_CIConfigProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStaticsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListenerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandlerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandlerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRendererProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdaterProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtualsProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _PhoneVoIPApp2EBackEnd_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_CIConfigStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStaticsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListenerStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandlerStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandlerStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRendererStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdaterStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtualsStubVtbl,
    0
};

PCInterfaceName const _PhoneVoIPApp2EBackEnd_InterfaceNamesList[] = 
{
    "__x_ABI_CPhoneVoIPApp_CBackEnd_C____ICallControllerPublicNonVirtuals",
    "__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportProtectedNonVirtuals",
    "__x_ABI_CPhoneVoIPApp_CBackEnd_CIConfig",
    "__x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsStatics",
    "__x_ABI_CPhoneVoIPApp_CBackEnd_C____IEndpointPublicNonVirtuals",
    "__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCaptureProtectedNonVirtuals",
    "__x_ABI_CPhoneVoIPApp_CBackEnd_CICallControllerStatusListener",
    "__x_ABI_CPhoneVoIPApp_CBackEnd_CICameraLocationChangedEventHandler",
    "__x_ABI_CPhoneVoIPApp_CBackEnd_CIMessageReceivedEventHandler",
    "__x_ABI_CPhoneVoIPApp_CBackEnd_CIIncomingCallDialogDismissedCallback",
    "__x_ABI_CPhoneVoIPApp_CBackEnd_CIVideoRenderer",
    "__x_ABI_CPhoneVoIPApp_CBackEnd_C____IGlobalsPublicNonVirtuals",
    "__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndTransportPublicNonVirtuals",
    "__x_ABI_CPhoneVoIPApp_CBackEnd_CIMTProtoUpdater",
    "__x_ABI_CPhoneVoIPApp_CBackEnd_C____IBackEndCapturePublicNonVirtuals",
    0
};

const IID *  const _PhoneVoIPApp2EBackEnd_BaseIIDList[] = 
{
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    0,
    0,
    0,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    0
};


#define _PhoneVoIPApp2EBackEnd_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _PhoneVoIPApp2EBackEnd, pIID, n)

int __stdcall _PhoneVoIPApp2EBackEnd_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _PhoneVoIPApp2EBackEnd, 15, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _PhoneVoIPApp2EBackEnd, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _PhoneVoIPApp2EBackEnd, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _PhoneVoIPApp2EBackEnd, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _PhoneVoIPApp2EBackEnd, 15, *pIndex )
    
}

const ExtendedProxyFileInfo PhoneVoIPApp2EBackEnd_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _PhoneVoIPApp2EBackEnd_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _PhoneVoIPApp2EBackEnd_StubVtblList,
    (const PCInterfaceName * ) & _PhoneVoIPApp2EBackEnd_InterfaceNamesList,
    (const IID ** ) & _PhoneVoIPApp2EBackEnd_BaseIIDList,
    & _PhoneVoIPApp2EBackEnd_IID_Lookup, 
    15,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

