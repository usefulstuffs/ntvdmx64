// This file has been generated by codegen, do not modify. Instead modify codegen/codegen.c !

BYTE ThreadProcx64[] = {
// 46   : {
/* 00000 */	0x40, 0x53,                     // push	 rbx
/* 00002 */	0x48, 0x83, 0xec, 0x20,         // sub	 rsp, 32			; 00000020H
// 47   : 	data->fnLdrLoadDll(data->DllPath, data->Flags, &data->UnicodeString, &data->ModuleHandle);
/* 00006 */	0x8b, 0x91, 0x30, 0x02, 0x00, 
/*       */	0x00,                           // mov	 edx, DWORD PTR [rcx+560]
/* 0000c */	0x4c, 0x8d, 0x89, 0x48, 0x02, 
/*       */	0x00, 0x00,                     // lea	 r9, QWORD PTR [rcx+584]
/* 00013 */	0x48, 0x8b, 0xd9,               // mov	 rbx, rcx
/* 00016 */	0x4c, 0x8d, 0x41, 0x10,         // lea	 r8, QWORD PTR [rcx+16]
/* 0001a */	0x48, 0x8b, 0x89, 0x28, 0x02, 
/*       */	0x00, 0x00,                     // mov	 rcx, QWORD PTR [rcx+552]
/* 00021 */	0xff, 0x13,                     // call	 QWORD PTR [rbx]
// 48   : 	data->fnNtTerminateThread(NtCurrentThread(), 0);
/* 00023 */	0x33, 0xd2,                     // xor	 edx, edx
/* 00025 */	0x48, 0x8d, 0x4a, 0xfe,         // lea	 rcx, QWORD PTR [rdx-2]
/* 00029 */	0x48, 0x8b, 0x43, 0x08,         // mov	 rax, QWORD PTR [rbx+8]
// 49   : }
/* 0002d */	0x48, 0x83, 0xc4, 0x20,         // add	 rsp, 32			; 00000020H
/* 00031 */	0x5b,                           // pop	 rbx
// 48   : 	data->fnNtTerminateThread(NtCurrentThread(), 0);
/* 00032 */	0x48, 0xff, 0xe0                // rex_jmp rax

};
const unsigned int ThreadProcx64Size = sizeof(ThreadProcx64);

BYTE APCProcx64[] = {
// 52   : {
/* 00000 */	0x48, 0x89, 0x5c, 0x24, 0x08,   // mov	 QWORD PTR [rsp+8], rbx
/* 00005 */	0x57,                           // push	 rdi
/* 00006 */	0x48, 0x83, 0xec, 0x20,         // sub	 rsp, 32			; 00000020H
// 53   : 	data->fnLdrLoadDll(data->DllPath, data->Flags, &data->UnicodeString, &data->ModuleHandle);
/* 0000a */	0x8b, 0x91, 0x30, 0x02, 0x00, 
/*       */	0x00,                           // mov	 edx, DWORD PTR [rcx+560]
/* 00010 */	0x4c, 0x8d, 0x41, 0x10,         // lea	 r8, QWORD PTR [rcx+16]
/* 00014 */	0x48, 0x8b, 0xd9,               // mov	 rbx, rcx
/* 00017 */	0x4c, 0x8d, 0x89, 0x48, 0x02, 
/*       */	0x00, 0x00,                     // lea	 r9, QWORD PTR [rcx+584]
/* 0001e */	0x48, 0x8b, 0x89, 0x28, 0x02, 
/*       */	0x00, 0x00,                     // mov	 rcx, QWORD PTR [rcx+552]
/* 00025 */	0xff, 0x13,                     // call	 QWORD PTR [rbx]
// 54   : 	if (data->OrigEIP) return (HANDLE)data->OrigEIP(data->EIPParams);
/* 00027 */	0x48, 0x8b, 0x83, 0x38, 0x02, 
/*       */	0x00, 0x00,                     // mov	 rax, QWORD PTR [rbx+568]
/* 0002e */	0x48, 0x85, 0xc0,               // test	 rax, rax
/* 00031 */	0x74, 0x16,                     // je	 SHORT $LN2@APCProc
/* 00033 */	0x48, 0x8b, 0x8b, 0x40, 0x02, 
/*       */	0x00, 0x00,                     // mov	 rcx, QWORD PTR [rbx+576]
/* 0003a */	0xff, 0xd0,                     // call	 rax
/* 0003c */	0x8b, 0xc0,                     // mov	 eax, eax
// 56   : }
/* 0003e */	0x48, 0x8b, 0x5c, 0x24, 0x30,   // mov	 rbx, QWORD PTR [rsp+48]
/* 00043 */	0x48, 0x83, 0xc4, 0x20,         // add	 rsp, 32			; 00000020H
/* 00047 */	0x5f,                           // pop	 rdi
/* 00048 */	0xc3,                           // ret	 0
/*LN2@APCProc:
 */	
// 55   : 	return data->ModuleHandle;
/* 00049 */	0x48, 0x8b, 0x83, 0x48, 0x02, 
/*       */	0x00, 0x00,                     // mov	 rax, QWORD PTR [rbx+584]
// 56   : }
/* 00050 */	0x48, 0x8b, 0x5c, 0x24, 0x30,   // mov	 rbx, QWORD PTR [rsp+48]
/* 00055 */	0x48, 0x83, 0xc4, 0x20,         // add	 rsp, 32			; 00000020H
/* 00059 */	0x5f,                           // pop	 rdi
/* 0005a */	0xc3                            // ret	 0

};
const unsigned int APCProcx64Size = sizeof(APCProcx64);

BYTE PostProcProcx64[] = {
// 59   : {
/* 00000 */	0x40, 0x53,                     // push	 rbx
/* 00002 */	0x48, 0x83, 0xec, 0x20,         // sub	 rsp, 32			; 00000020H
// 60   : 	// Workaround for compiler to not generate absolute addresses
// 61   : 	register PTHREAD_DATA pdata = (PTHREAD_DATA)((ULONG_PTR)1 << (sizeof(ULONG_PTR) * 8 - 1));
// 62   : 	PTHREAD_DATA data = (PTHREAD_DATA)pdata->fnLdrLoadDll;
/* 00006 */	0x48, 0xbb, 0x00, 0x00, 0x00, 
/*       */	0x00, 0x00, 0x00, 0x00, 0x80,   // mov	 rbx, -9223372036854775808 ; 8000000000000000H
/* 00010 */	0x48, 0x8b, 0x1b,               // mov	 rbx, QWORD PTR [rbx]
// 63   : 
// 64   : 	data->fnLdrLoadDll(data->DllPath, data->Flags, &data->UnicodeString, &data->ModuleHandle);
/* 00013 */	0x8b, 0x93, 0x30, 0x02, 0x00, 
/*       */	0x00,                           // mov	 edx, DWORD PTR [rbx+560]
/* 00019 */	0x4c, 0x8d, 0x8b, 0x48, 0x02, 
/*       */	0x00, 0x00,                     // lea	 r9, QWORD PTR [rbx+584]
/* 00020 */	0x48, 0x8b, 0x8b, 0x28, 0x02, 
/*       */	0x00, 0x00,                     // mov	 rcx, QWORD PTR [rbx+552]
/* 00027 */	0x4c, 0x8d, 0x43, 0x10,         // lea	 r8, QWORD PTR [rbx+16]
/* 0002b */	0xff, 0x13,                     // call	 QWORD PTR [rbx]
// 65   : 	if (data->fnOrigPostProcessInit) data->fnOrigPostProcessInit();
/* 0002d */	0x48, 0x8b, 0x43, 0x08,         // mov	 rax, QWORD PTR [rbx+8]
/* 00031 */	0x48, 0x85, 0xc0,               // test	 rax, rax
/* 00034 */	0x74, 0x08,                     // je	 SHORT $LN2@PostProcPr
// 66   : }
/* 00036 */	0x48, 0x83, 0xc4, 0x20,         // add	 rsp, 32			; 00000020H
/* 0003a */	0x5b,                           // pop	 rbx
// 65   : 	if (data->fnOrigPostProcessInit) data->fnOrigPostProcessInit();
/* 0003b */	0x48, 0xff, 0xe0,               // rex_jmp rax
/*LN2@PostProcPr:
 */	
// 66   : }
/* 0003e */	0x48, 0x83, 0xc4, 0x20,         // add	 rsp, 32			; 00000020H
/* 00042 */	0x5b,                           // pop	 rbx
/* 00043 */	0xc3                            // ret	 0

};
const unsigned int PostProcProcx64Size = sizeof(PostProcProcx64);

BYTE LdrpInitializeProcessProcx64[] = {
// 69   : {
/* 00000 */	0x48, 0x89, 0x5c, 0x24, 0x08,   // mov	 QWORD PTR [rsp+8], rbx
/* 00005 */	0x57,                           // push	 rdi
/* 00006 */	0x48, 0x83, 0xec, 0x20,         // sub	 rsp, 32			; 00000020H
// 70   : 	NTSTATUS Status;
// 71   : 	// Workaround for compiler to not generate absolute addresses
// 72   : 	register PTHREAD_DATA pdata = (PTHREAD_DATA)((ULONG_PTR)1 << (sizeof(ULONG_PTR) * 8 - 1));
// 73   : 	PTHREAD_DATA data = (PTHREAD_DATA)pdata->fnLdrLoadDll;
/* 0000a */	0x48, 0xbb, 0x00, 0x00, 0x00, 
/*       */	0x00, 0x00, 0x00, 0x00, 0x80,   // mov	 rbx, -9223372036854775808 ; 8000000000000000H
/* 00014 */	0x48, 0x8b, 0x1b,               // mov	 rbx, QWORD PTR [rbx]
// 74   : 
// 75   : 	Status = data->fnLdrpInitializeProcess(Context, SystemDllBase);
/* 00017 */	0xff, 0x53, 0x08,               // call	 QWORD PTR [rbx+8]
/* 0001a */	0x8b, 0xf8,                     // mov	 edi, eax
// 76   : 	if (NT_SUCCESS(Status))
/* 0001c */	0x85, 0xc0,                     // test	 eax, eax
/* 0001e */	0x78, 0x1c,                     // js	 SHORT $LN2@LdrpInitia
// 77   : 		data->fnLdrLoadDll(data->DllPath, data->Flags, &data->UnicodeString, &data->ModuleHandle);
/* 00020 */	0x8b, 0x93, 0x30, 0x02, 0x00, 
/*       */	0x00,                           // mov	 edx, DWORD PTR [rbx+560]
/* 00026 */	0x4c, 0x8d, 0x8b, 0x48, 0x02, 
/*       */	0x00, 0x00,                     // lea	 r9, QWORD PTR [rbx+584]
/* 0002d */	0x48, 0x8b, 0x8b, 0x28, 0x02, 
/*       */	0x00, 0x00,                     // mov	 rcx, QWORD PTR [rbx+552]
/* 00034 */	0x4c, 0x8d, 0x43, 0x10,         // lea	 r8, QWORD PTR [rbx+16]
/* 00038 */	0xff, 0x13,                     // call	 QWORD PTR [rbx]
// 78   : 	return Status;
/* 0003a */	0x8b, 0xc7,                     // mov	 eax, edi
/*LN2@LdrpInitia:
 */	
// 79   : }
/* 0003c */	0x48, 0x8b, 0x5c, 0x24, 0x30,   // mov	 rbx, QWORD PTR [rsp+48]
/* 00041 */	0x48, 0x83, 0xc4, 0x20,         // add	 rsp, 32			; 00000020H
/* 00045 */	0x5f,                           // pop	 rdi
/* 00046 */	0xc3                            // ret	 0

};
const unsigned int LdrpInitializeProcessProcx64Size = sizeof(LdrpInitializeProcessProcx64);
