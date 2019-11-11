

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __hadoopwinutilsvc_h_h__
#define __hadoopwinutilsvc_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __HadoopWinutilSvc_INTERFACE_DEFINED__
#define __HadoopWinutilSvc_INTERFACE_DEFINED__

/* interface HadoopWinutilSvc */
/* [endpoint][unique][version][uuid] */ 

typedef /* [public][public] */ struct __MIDL_HadoopWinutilSvc_0001
    {
    /* [string] */ const wchar_t *cwd;
    /* [string] */ const wchar_t *jobName;
    /* [string] */ const wchar_t *user;
    /* [string] */ const wchar_t *pidFile;
    /* [string] */ const wchar_t *cmdLine;
    } 	CREATE_PROCESS_REQUEST;

typedef /* [public][public] */ struct __MIDL_HadoopWinutilSvc_0002
    {
    LONG_PTR hProcess;
    LONG_PTR hThread;
    LONG_PTR hStdIn;
    LONG_PTR hStdOut;
    LONG_PTR hStdErr;
    } 	CREATE_PROCESS_RESPONSE;

typedef /* [public][public] */ struct __MIDL_HadoopWinutilSvc_0003
    {
    /* [string] */ const wchar_t *filePath;
    /* [string] */ const wchar_t *ownerName;
    /* [string] */ const wchar_t *groupName;
    } 	CHOWN_REQUEST;

typedef /* [public][public] */ struct __MIDL_HadoopWinutilSvc_0004
    {
    /* [string] */ const wchar_t *filePath;
    int mode;
    } 	CHMOD_REQUEST;

typedef /* [public][public] */ struct __MIDL_HadoopWinutilSvc_0005
    {
    /* [string] */ const wchar_t *filePath;
    } 	MKDIR_REQUEST;

typedef /* [public][public][public] */ 
enum __MIDL_HadoopWinutilSvc_0006
    {
        MOVE_FILE	= 1,
        COPY_FILE	= 2
    } 	MOVE_COPY_OPERATION;

typedef /* [public][public] */ struct __MIDL_HadoopWinutilSvc_0007
    {
    MOVE_COPY_OPERATION operation;
    /* [string] */ const wchar_t *sourcePath;
    /* [string] */ const wchar_t *destinationPath;
    boolean replaceExisting;
    } 	MOVEFILE_REQUEST;

typedef /* [public][public] */ struct __MIDL_HadoopWinutilSvc_0008
    {
    /* [string] */ const wchar_t *path;
    int desiredAccess;
    int shareMode;
    int creationDisposition;
    int flags;
    } 	CREATEFILE_REQUEST;

typedef /* [public][public] */ struct __MIDL_HadoopWinutilSvc_0009
    {
    LONG_PTR hFile;
    } 	CREATEFILE_RESPONSE;

typedef /* [public][public][public] */ 
enum __MIDL_HadoopWinutilSvc_0010
    {
        PATH_IS_DIR	= 1,
        PATH_IS_FILE	= 2
    } 	DELETEPATH_TYPE;

typedef /* [public][public] */ struct __MIDL_HadoopWinutilSvc_0011
    {
    DELETEPATH_TYPE type;
    /* [string] */ const wchar_t *path;
    } 	DELETEPATH_REQUEST;

typedef /* [public][public] */ struct __MIDL_HadoopWinutilSvc_0012
    {
    boolean deleted;
    } 	DELETEPATH_RESPONSE;

typedef /* [public][public] */ struct __MIDL_HadoopWinutilSvc_0013
    {
    /* [string] */ const wchar_t *taskName;
    } 	KILLTASK_REQUEST;

error_status_t WinutilsKillTask( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ KILLTASK_REQUEST *request);

error_status_t WinutilsMkDir( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ MKDIR_REQUEST *request);

error_status_t WinutilsMoveFile( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ MOVEFILE_REQUEST *request);

error_status_t WinutilsChown( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ CHOWN_REQUEST *request);

error_status_t WinutilsChmod( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ CHMOD_REQUEST *request);

error_status_t WinutilsCreateFile( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ int nmPid,
    /* [in] */ CREATEFILE_REQUEST *request,
    /* [out] */ CREATEFILE_RESPONSE **response);

error_status_t WinutilsDeletePath( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DELETEPATH_REQUEST *request,
    /* [out] */ DELETEPATH_RESPONSE **response);

error_status_t WinutilsCreateProcessAsUser( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ int nmPid,
    /* [in] */ CREATE_PROCESS_REQUEST *request,
    /* [out] */ CREATE_PROCESS_RESPONSE **response);



extern RPC_IF_HANDLE HadoopWinutilSvc_v1_0_c_ifspec;
extern RPC_IF_HANDLE HadoopWinutilSvc_v1_0_s_ifspec;
#endif /* __HadoopWinutilSvc_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


