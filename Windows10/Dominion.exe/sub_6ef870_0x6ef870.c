// 函数: sub_6ef870
// 地址: 0x6ef870
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

HWND hWnd = GetDlgItem(data_147d470, 0x8c)
LRESULT eax = sub_6ee740()

if (eax != 0 && *(sub_6dd320(&data_8cc5f8, eax) + 0x10) == 0xa)
    ShowWindow(hWnd, SW_SHOW)
    LRESULT eax_2 = sub_6ee740()
    int32_t var_14_2
    char const* const ecx
    
    if (eax_2 == 0)
    label_6ef931:
        char const* const var_10_2 = "EditorGetSelectedBool"
        var_14_2 = 0x1ea
        ecx = "EditorHasSelectedBoolParam()"
    else
        eax_2 = sub_6dd320(&data_8cc5f8, eax_2)
        
        if (*(eax_2 + 0x10) != 0xa)
            goto label_6ef931
        
        LRESULT eax_3 = sub_6ee740()
        eax_2 = sub_6ee6b0()
        
        if (eax_2 != 0)
            if (sub_6dcff0(eax_2, eax_2, &data_8cc5f8, eax_3) == 0)
                return SendMessageA(hWnd, 0x186, 1, 0)
            
            return SendMessageA(hWnd, 0x186, 0, 0)
        
        char const* const var_10 = "EditorGetSelectedBool"
        var_14_2 = 0x1ee
        ecx = "pEmitter"
    
    sub_63b870(eax_2, &data_801800, ecx, "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", var_14_2, 
        "EditorGetSelectedBool")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

return ShowWindow(hWnd, SW_HIDE)
