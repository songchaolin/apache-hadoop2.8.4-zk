

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Nov 07 11:01:35 2019
 */
/* Compiler settings for hadoopwinutilsvc.idl:
    Oicf, W2, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, app_config, c_ext, robust
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
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "hadoopwinutilsvc_h.h"

#define TYPE_FORMAT_STRING_SIZE   285                               
#define PROC_FORMAT_STRING_SIZE   351                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _hadoopwinutilsvc_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } hadoopwinutilsvc_MIDL_TYPE_FORMAT_STRING;

typedef struct _hadoopwinutilsvc_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } hadoopwinutilsvc_MIDL_PROC_FORMAT_STRING;

typedef struct _hadoopwinutilsvc_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } hadoopwinutilsvc_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const hadoopwinutilsvc_MIDL_TYPE_FORMAT_STRING hadoopwinutilsvc__MIDL_TypeFormatString;
extern const hadoopwinutilsvc_MIDL_PROC_FORMAT_STRING hadoopwinutilsvc__MIDL_ProcFormatString;
extern const hadoopwinutilsvc_MIDL_EXPR_FORMAT_STRING hadoopwinutilsvc__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: HadoopWinutilSvc, ver. 1.0,
   GUID={0x0492311C,0x1718,0x4F53,{0xA6,0xEB,0x86,0xAD,0x70,0x39,0x98,0x8D}} */


static const RPC_PROTSEQ_ENDPOINT __RpcProtseqEndpoint[] = 
    {
    {(unsigned char *) "ncalrpc", (unsigned char *) "hadoopwinutilsvc"}
    };


static const RPC_CLIENT_INTERFACE HadoopWinutilSvc___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x0492311C,0x1718,0x4F53,{0xA6,0xEB,0x86,0xAD,0x70,0x39,0x98,0x8D}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    1,
    (RPC_PROTSEQ_ENDPOINT *)__RpcProtseqEndpoint,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE HadoopWinutilSvc_v1_0_c_ifspec = (RPC_IF_HANDLE)& HadoopWinutilSvc___RpcClientInterface;

extern const MIDL_STUB_DESC HadoopWinutilSvc_StubDesc;

static RPC_BINDING_HANDLE HadoopWinutilSvc__MIDL_AutoBindHandle;


error_status_t WinutilsKillTask( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ KILLTASK_REQUEST *request)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&HadoopWinutilSvc_StubDesc,
                  (PFORMAT_STRING) &hadoopwinutilsvc__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&IDL_handle);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t WinutilsMkDir( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ MKDIR_REQUEST *request)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&HadoopWinutilSvc_StubDesc,
                  (PFORMAT_STRING) &hadoopwinutilsvc__MIDL_ProcFormatString.Format[40],
                  ( unsigned char * )&IDL_handle);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t WinutilsMoveFile( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ MOVEFILE_REQUEST *request)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&HadoopWinutilSvc_StubDesc,
                  (PFORMAT_STRING) &hadoopwinutilsvc__MIDL_ProcFormatString.Format[80],
                  ( unsigned char * )&IDL_handle);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t WinutilsChown( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ CHOWN_REQUEST *request)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&HadoopWinutilSvc_StubDesc,
                  (PFORMAT_STRING) &hadoopwinutilsvc__MIDL_ProcFormatString.Format[120],
                  ( unsigned char * )&IDL_handle);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t WinutilsChmod( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ CHMOD_REQUEST *request)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&HadoopWinutilSvc_StubDesc,
                  (PFORMAT_STRING) &hadoopwinutilsvc__MIDL_ProcFormatString.Format[160],
                  ( unsigned char * )&IDL_handle);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t WinutilsCreateFile( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ int nmPid,
    /* [in] */ CREATEFILE_REQUEST *request,
    /* [out] */ CREATEFILE_RESPONSE **response)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&HadoopWinutilSvc_StubDesc,
                  (PFORMAT_STRING) &hadoopwinutilsvc__MIDL_ProcFormatString.Format[200],
                  ( unsigned char * )&IDL_handle);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t WinutilsDeletePath( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DELETEPATH_REQUEST *request,
    /* [out] */ DELETEPATH_RESPONSE **response)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&HadoopWinutilSvc_StubDesc,
                  (PFORMAT_STRING) &hadoopwinutilsvc__MIDL_ProcFormatString.Format[252],
                  ( unsigned char * )&IDL_handle);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t WinutilsCreateProcessAsUser( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ int nmPid,
    /* [in] */ CREATE_PROCESS_REQUEST *request,
    /* [out] */ CREATE_PROCESS_RESPONSE **response)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&HadoopWinutilSvc_StubDesc,
                  (PFORMAT_STRING) &hadoopwinutilsvc__MIDL_ProcFormatString.Format[298],
                  ( unsigned char * )&IDL_handle);
    return ( error_status_t  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const hadoopwinutilsvc_MIDL_PROC_FORMAT_STRING hadoopwinutilsvc__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure WinutilsKillTask */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 20 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter IDL_handle */

/* 28 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 30 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 32 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter request */

/* 34 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 36 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 38 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure WinutilsMkDir */


	/* Return value */

/* 40 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 42 */	NdrFcLong( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0x1 ),	/* 1 */
/* 48 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 50 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 52 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 60 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter IDL_handle */

/* 68 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 70 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 72 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter request */

/* 74 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 76 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 78 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure WinutilsMoveFile */


	/* Return value */

/* 80 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 82 */	NdrFcLong( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x2 ),	/* 2 */
/* 88 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 90 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x8 ),	/* 8 */
/* 98 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter IDL_handle */

/* 108 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 112 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Parameter request */

/* 114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 116 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 118 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure WinutilsChown */


	/* Return value */

/* 120 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x3 ),	/* 3 */
/* 128 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 130 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 132 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 138 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 140 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter IDL_handle */

/* 148 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 150 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 152 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter request */

/* 154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 156 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 158 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure WinutilsChmod */


	/* Return value */

/* 160 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x4 ),	/* 4 */
/* 168 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 170 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 178 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 180 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter IDL_handle */

/* 188 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 192 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Parameter request */

/* 194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 196 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 198 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure WinutilsCreateFile */


	/* Return value */

/* 200 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x5 ),	/* 5 */
/* 208 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 210 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 216 */	NdrFcShort( 0x44 ),	/* 68 */
/* 218 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 220 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter IDL_handle */

/* 228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nmPid */

/* 234 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 236 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 238 */	NdrFcShort( 0x7e ),	/* Type Offset=126 */

	/* Parameter request */

/* 240 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 242 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 244 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter response */

/* 246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 248 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 250 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure WinutilsDeletePath */


	/* Return value */

/* 252 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x6 ),	/* 6 */
/* 260 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 262 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 264 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x41 ),	/* 65 */
/* 270 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 272 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter IDL_handle */

/* 280 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 282 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 284 */	NdrFcShort( 0xa8 ),	/* Type Offset=168 */

	/* Parameter request */

/* 286 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 288 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 290 */	NdrFcShort( 0xb8 ),	/* Type Offset=184 */

	/* Parameter response */

/* 292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 294 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 296 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure WinutilsCreateProcessAsUser */


	/* Return value */

/* 298 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x7 ),	/* 7 */
/* 306 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 308 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 310 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 314 */	NdrFcShort( 0x54 ),	/* 84 */
/* 316 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 318 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter IDL_handle */

/* 326 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nmPid */

/* 332 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 334 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 336 */	NdrFcShort( 0xca ),	/* Type Offset=202 */

	/* Parameter request */

/* 338 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 340 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 342 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter response */

/* 344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 346 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 348 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

			0x0
        }
    };

static const hadoopwinutilsvc_MIDL_TYPE_FORMAT_STRING hadoopwinutilsvc__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x0,	/* FC_RP */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/*  8 */	NdrFcShort( 0x4 ),	/* 4 */
/* 10 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 12 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 20 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 22 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 24 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 26 */	
			0x11, 0x0,	/* FC_RP */
/* 28 */	NdrFcShort( 0x2 ),	/* Offset= 2 (30) */
/* 30 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 32 */	NdrFcShort( 0x10 ),	/* 16 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x8 ),	/* Offset= 8 (44) */
/* 38 */	0xd,		/* FC_ENUM16 */
			0x36,		/* FC_POINTER */
/* 40 */	0x36,		/* FC_POINTER */
			0x3,		/* FC_SMALL */
/* 42 */	0x3f,		/* FC_STRUCTPAD3 */
			0x5b,		/* FC_END */
/* 44 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 46 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 48 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 50 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 52 */	
			0x11, 0x0,	/* FC_RP */
/* 54 */	NdrFcShort( 0x2 ),	/* Offset= 2 (56) */
/* 56 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 58 */	NdrFcShort( 0xc ),	/* 12 */
/* 60 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 62 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 70 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 72 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 74 */	NdrFcShort( 0x4 ),	/* 4 */
/* 76 */	NdrFcShort( 0x4 ),	/* 4 */
/* 78 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 80 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 82 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 84 */	NdrFcShort( 0x8 ),	/* 8 */
/* 86 */	NdrFcShort( 0x8 ),	/* 8 */
/* 88 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 90 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 92 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 94 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 96 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 98 */	
			0x11, 0x0,	/* FC_RP */
/* 100 */	NdrFcShort( 0x2 ),	/* Offset= 2 (102) */
/* 102 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 106 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 108 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 114 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 116 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 118 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 120 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 122 */	
			0x11, 0x0,	/* FC_RP */
/* 124 */	NdrFcShort( 0x2 ),	/* Offset= 2 (126) */
/* 126 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 128 */	NdrFcShort( 0x14 ),	/* 20 */
/* 130 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 132 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 140 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 142 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 144 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 146 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 148 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 150 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 152 */	NdrFcShort( 0x2 ),	/* Offset= 2 (154) */
/* 154 */	
			0x12, 0x0,	/* FC_UP */
/* 156 */	NdrFcShort( 0x2 ),	/* Offset= 2 (158) */
/* 158 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 160 */	NdrFcShort( 0x4 ),	/* 4 */
/* 162 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 164 */	
			0x11, 0x0,	/* FC_RP */
/* 166 */	NdrFcShort( 0x2 ),	/* Offset= 2 (168) */
/* 168 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x6 ),	/* Offset= 6 (180) */
/* 176 */	0xd,		/* FC_ENUM16 */
			0x36,		/* FC_POINTER */
/* 178 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 180 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 182 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 184 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 186 */	NdrFcShort( 0x2 ),	/* Offset= 2 (188) */
/* 188 */	
			0x12, 0x0,	/* FC_UP */
/* 190 */	NdrFcShort( 0x2 ),	/* Offset= 2 (192) */
/* 192 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 194 */	NdrFcShort( 0x1 ),	/* 1 */
/* 196 */	0x3,		/* FC_SMALL */
			0x5b,		/* FC_END */
/* 198 */	
			0x11, 0x0,	/* FC_RP */
/* 200 */	NdrFcShort( 0x2 ),	/* Offset= 2 (202) */
/* 202 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 204 */	NdrFcShort( 0x14 ),	/* 20 */
/* 206 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 208 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 216 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 218 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 220 */	NdrFcShort( 0x4 ),	/* 4 */
/* 222 */	NdrFcShort( 0x4 ),	/* 4 */
/* 224 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 226 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 228 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 234 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 236 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 238 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 240 */	NdrFcShort( 0xc ),	/* 12 */
/* 242 */	NdrFcShort( 0xc ),	/* 12 */
/* 244 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 246 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 248 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 250 */	NdrFcShort( 0x10 ),	/* 16 */
/* 252 */	NdrFcShort( 0x10 ),	/* 16 */
/* 254 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 256 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 258 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 260 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 262 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 264 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 266 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 268 */	NdrFcShort( 0x2 ),	/* Offset= 2 (270) */
/* 270 */	
			0x12, 0x0,	/* FC_UP */
/* 272 */	NdrFcShort( 0x2 ),	/* Offset= 2 (274) */
/* 274 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 276 */	NdrFcShort( 0x14 ),	/* 20 */
/* 278 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 280 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 282 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short HadoopWinutilSvc_FormatStringOffsetTable[] =
    {
    0,
    40,
    80,
    120,
    160,
    200,
    252,
    298
    };


static const MIDL_STUB_DESC HadoopWinutilSvc_StubDesc = 
    {
    (void *)& HadoopWinutilSvc___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &HadoopWinutilSvc__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    hadoopwinutilsvc__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

