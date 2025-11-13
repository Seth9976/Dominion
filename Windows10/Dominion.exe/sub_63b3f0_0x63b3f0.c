// 函数: sub_63b3f0
// 地址: 0x63b3f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (data_cc8d6e == 0)
    data_cc8d6e = 1
    sub_63b6f0("\nUnhandled Exception\n")
    sub_63b2a0(arg1)
    void* eax_2 = data_cf65b8
    char const* const lpCaption_1 = "Unhandled Exception"
    char const* const lpCaption = "Unhandled Exception"
    
    if (eax_2 != 0)
        lpCaption_1 = *(eax_2 + 0xc)
        lpCaption = lpCaption_1
    
    sub_63b6f0("Generating steam mini dump\n")
    SteamAPI_SetMiniDumpComment(lpCaption_1)
    SteamAPI_WriteMiniDump(**arg1, arg1, 0)
    sub_63b6f0("\nStack:\n")
    void* ContextRecord = arg1[1]
    int32_t esi_1 = 0
    int32_t var_dc = 0
    uint32_t var_b0 = GetCurrentProcess()
    HANDLE hThread = GetCurrentThread()
    struct STACKFRAME StackFrame
    memset(&StackFrame, 0, 0xa4)
    int32_t i = 1
    StackFrame.AddrFrame.Offset = *(ContextRecord + 0xb4)
    StackFrame.AddrPC.Offset = *(ContextRecord + 0xb8)
    StackFrame.AddrPC.Mode = 3
    StackFrame.AddrFrame.Mode = 3
    StackFrame.AddrStack.Offset = *(ContextRecord + 0xc4)
    StackFrame.AddrStack.Mode = 3
    
    do
        if (StackWalk(0x14c, var_b0, hThread, &StackFrame, ContextRecord, nullptr, 
                SymFunctionTableAccess, SymGetModuleBase, nullptr) == 0)
            break
        
        if (i s>= 0)
            int32_t var_d8[0x8]
            var_d8[esi_1] = StackFrame.AddrPC.Offset
            esi_1 = var_dc + 1
            var_dc = esi_1
        
        i += 1
    while (i s< 8)
    
    sub_6c6270(&var_dc)
    FILE* _Stream = data_cf64ac
    
    if (_Stream != 0)
        fclose(_Stream)
    
    HWND hWnd = GetForegroundWindow()
    GetWindowThreadProcessId(hWnd, &var_b0)
    uint32_t eax_10 = GetCurrentProcessId()
    
    if (var_b0 != eax_10)
        hWnd = nullptr
    
    MessageBoxA(hWnd, 
        "Oh no! There was an Unhandled Exception!\n\nThe log.txt file has more information.", 
        lpCaption, MB_OK)
    data_cc8d6e = 0
else
    sub_63b6f0("Exception during exception processing.\n")

CookieCheckFunction(1)
return 1
