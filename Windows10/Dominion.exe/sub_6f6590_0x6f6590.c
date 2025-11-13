// 函数: sub_6f6590
// 地址: 0x6f6590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x104c)
__security_cookie
int32_t eax_2 = data_147d4a0
WPARAM ecx = arg3

if (eax_2 == 0 || arg2 != eax_2)
label_6f682e:
    
    if (arg2 == 0xf)
        int32_t __saved_ebp
        sub_6f1800(BeginPaint(arg1, &__saved_ebp))
        EndPaint(arg1, &__saved_ebp)
    else if (arg2 != 0x4e)
        if (arg2 != 0x111)
            LRESULT result = DefWindowProcA(arg1, arg2, ecx, arg4)
            CookieCheckFunction(result)
            return result
        
        if (ecx u>> 0x10 == 1 && ecx.w == 0xab)
            HWND hWnd = GetDlgItem(arg1, 0xab)
            LRESULT esi_1 = SendMessageA(hWnd, 0x190, 0, 0)
            
            if (esi_1 s> 0)
                void lParam
                SendMessageA(hWnd, 0x191, 0x400, &lParam)
                
                if (esi_1 s> 0x400)
                    esi_1 = 0x400
                
                sub_74abd0(&lParam, esi_1)
            else if (data_1513460.b == 0 && data_1513462 == 0)
                data_151345c = 0
                sub_74ac70()
            
            sub_6f7f40()
            SetFocus(data_147b084)
    else if (ecx == 0xac && arg4[2] == 0x42a)
        sub_6f5b80(*arg4, arg4)
else
    if (ecx != 0xab)
        sub_63b870(eax_2, &data_801800, "wParam == IDC_UIELEMENT_LIST", 
            "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 0x117c, "UiEditorDialogWndProc")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    HWND hLB = GetDlgItem(data_147d470, ecx)
    int32_t var_1c_2 = arg4[3]
    int32_t eax_3 = LBItemFromPt(hLB, arg4[2], 1)
    int32_t ecx_1 = *arg4
    
    if (ecx_1 != 0x485)
        if (ecx_1 == 0x486)
            if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135 && arg2 != 0x136
                    && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39 && arg2 != 0x2e
                    && arg2 != 0x2f && arg2 != 0x37 && arg2 != 0x110)
                SetWindowLongA(arg1, 0, 2)
            
            CookieCheckFunction(2)
            return 2
        
        if (ecx_1 == 0x487)
            sub_74ae80(eax_3)
            char* ecx_7
            ecx_7.b = 1
            sub_744ce0(ecx_7)
            sub_6f6e30(data_1512450)
            sub_74ac70()
            CookieCheckFunction(1)
            return 1
        
        if (ecx_1 != 0x488)
            ecx = arg3
            goto label_6f682e
        
        data_147d4a4 = 0
        CookieCheckFunction(1)
        return 1
    
    if (eax_3 != 0xffffffff)
        data_147d4a4 = 1
        data_147d4a8 = eax_3
        
        if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135 && arg2 != 0x136
                && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39 && arg2 != 0x2e && arg2 != 0x2f
                && arg2 != 0x37 && arg2 != 0x110)
            SetWindowLongA(arg1, 0, 1)
        
        CookieCheckFunction(1)
        return 1
    
    data_147d4a4 = 0
    
    if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135 && arg2 != 0x136
            && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39 && arg2 != 0x2e && arg2 != 0x2f
            && arg2 != 0x37 && arg2 != 0x110)
        SetWindowLongA(arg1, 0, 0)

CookieCheckFunction(0)
return 0
