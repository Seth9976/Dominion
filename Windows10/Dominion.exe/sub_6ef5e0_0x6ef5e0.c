// 函数: sub_6ef5e0
// 地址: 0x6ef5e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

LRESULT eax = sub_6ee740()

if (eax != 0 && *(sub_6dd320(&data_8cc5f8, eax) + 0x10) == 8)
    ShowWindow(GetDlgItem(data_147d470, 0x93), SW_SHOW)
    LRESULT eax_3 = sub_6ee740()
    int32_t var_c_1
    char const* const ecx
    
    if (eax_3 == 0)
    label_6ef696:
        char const* const var_8_3 = "EditorGetSelectedString"
        var_c_1 = 0x201
        ecx = "EditorHasSelectedStringParam()"
    else
        eax_3 = sub_6dd320(&data_8cc5f8, eax_3)
        
        if (*(eax_3 + 0x10) != 8)
            goto label_6ef696
        
        LRESULT eax_4 = sub_6ee740()
        eax_3 = sub_6ee6b0()
        
        if (eax_3 != 0)
            PSTR lpString = sub_6dd140(eax_3, eax_3, &data_8cc5f8, eax_4)
            return SetDlgItemTextA(data_147d470, 0x93, lpString)
        
        char const* const var_8 = "EditorGetSelectedString"
        var_c_1 = 0x205
        ecx = "pEmitter"
    
    sub_63b870(eax_3, &data_801800, ecx, "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", var_c_1, 
        "EditorGetSelectedString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

return ShowWindow(GetDlgItem(data_147d470, 0x93), SW_HIDE)
