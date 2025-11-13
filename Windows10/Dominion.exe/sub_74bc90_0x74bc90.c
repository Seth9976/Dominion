// 函数: sub_74bc90
// 地址: 0x74bc90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

data_19e2778 = GetPropA(GetParent(GetParent(arg1)), "lpInsData")

if (arg2 == 2)
    SetWindowLongA(arg1, 0xfffffffc, GetPropA(arg1, "Wprc"))
    RemovePropA(arg1, "Wprc")
    return 0

if (arg2 == 8)
    ShowWindow(arg1, SW_HIDE)
    void* eax_5 = data_19e2778
    int32_t ecx_1
    
    if (arg3 == 0 || (*(eax_5 + 0x14) != arg3 && *(eax_5 + 0x1c) != arg3 && *(eax_5 + 0x20) != arg3
            && *(eax_5 + 0x10) != arg3 && *(eax_5 + 0xc) != arg3))
        ecx_1 = 0
    else
        ecx_1 = 1
    
    *(eax_5 + 0x38) = ecx_1
    void* eax_6 = data_19e2778
    
    if (*(eax_6 + 0x38) == 0)
        RedrawWindow(*(eax_6 + 0x14), nullptr, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
else if (arg2 != 0x20a)
    if (arg2 == 0x87)
        return 4
    
    if (arg2 != 0x101)
        if (arg2 == 0x100)
            if (arg3 == 9)
                if (GetKeyState(0x10) s< 0)
                    SendMessageA(arg1, 0x100, 0x1b, 0)
                    return 0
                
                ShowWindow(arg1, SW_HIDE)
                SetFocus(*(data_19e2778 + 8))
                return 0
            
            if (arg3 == 0xd)
                SendMessageA(arg1, 0x100, 0x20, 0)
                return 1
            
            if (arg3 == 0x1b)
                ShowWindow(arg1, SW_HIDE)
                SetFocus(*(data_19e2778 + 0x14))
                return 0
    else if (arg3 == 0xd)
        SendMessageA(arg1, arg2, 0x20, 0)
        return arg3 - 0xc
else
    SendMessageA(arg1, 0x100, 0x1b, 0)

return CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
