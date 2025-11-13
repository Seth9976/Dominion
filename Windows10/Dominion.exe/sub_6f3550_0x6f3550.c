// 函数: sub_6f3550
// 地址: 0x6f3550
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* ecx = data_147ded0

if (ecx != 0)
    if (ecx[1] != 0x19)
        goto label_6f359d
    
    if (sub_5af880(ecx) != 0)
    label_6f35bc:
        int32_t ecx_1 = data_147d4a0
        HWND (__stdcall* const eax_6)(HWND hDlg, int32_t nIDDlgItem) = GetDlgItem
        int32_t var_118_1
        char const* const var_114_1
        char* ecx_2
        int32_t* ecx_4
        
        if (ecx_1 == 0 || arg2 != ecx_1)
            ecx_4 = arg4
        label_6f38eb:
            int32_t* hWnd_1
            int32_t var_ec
            
            if (arg2 u<= 0x200)
                if (arg2 == 0x200)
                    bool cond:1 = data_147d47d == 0
                    int32_t edi_15 = sx.d((ecx_4 u>> 0x10).w)
                    int32_t hWnd_7 = sx.d(ecx_4.w)
                    hWnd_1 = hWnd_7
                    
                    if (cond:1)
                        sub_6f0bd0(hWnd_7, hWnd_7, &hWnd_1, edi_15)
                        int32_t* hWnd_9 = hWnd_1
                        
                        if (hWnd_9 == 1)
                            data_147d478 = var_ec
                            data_147d47c = 0
                        else if (hWnd_9 != 2)
                            data_147d478 = 0xffffffff
                        else
                            data_147d478 = var_ec
                            data_147d47c = 1
                    else
                        sub_6f1370(hWnd_7, edi_15)
                        int32_t* eax_134 = sub_6ee800()
                        
                        if (eax_134 == 0)
                        label_6f4dac:
                            sub_63b870(eax_134, &data_801800, "pNode", 
                                "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 0x747, 
                                "EditorMoveNode")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        int32_t esi_28 = data_147d474
                        
                        if (esi_28 s< 0 || esi_28 s>= eax_134[2])
                            goto label_6f4dac
                        
                        int32_t esi_29 = esi_28 << 4
                        int32_t* esi_30 = esi_29 + *eax_134
                        
                        if (esi_29 == neg.d(*eax_134))
                            goto label_6f4dac
                        
                        int32_t hWnd_8
                        float edx_33
                        hWnd_8, edx_33 = sub_6eee20(hWnd_1, edi_15)
                        bool cond:3_1 = data_147d47c != 0
                        float xmm0_1 = edx_33
                        hWnd_1 = hWnd_8
                        
                        if (not(cond:3_1))
                            float xmm1_2 = esi_30[1] f- *esi_30
                            *esi_30 = xmm0_1
                            xmm0_1 = xmm0_1 + xmm1_2
                        
                        esi_30[1] = xmm0_1
                        esi_30[2] = hWnd_1
                        sub_6f1540()
                        sub_6ee530(sub_6ef970())
                    
                    GetWindowRect(GetDlgItem(data_147d470, 0x80), &hWnd_1)
                    ScreenToClient(data_147d470, &hWnd_1)
                    POINT point[0x2]
                    ScreenToClient(data_147d470, &point)
                    int128_t xmm0_3 = hWnd_1.o
                    RECT rect
                    rect.left = xmm0_3.d
                    rect.top = xmm0_3:4.d
                    rect.right = xmm0_3:8.d
                    rect.bottom = xmm0_3:0xc.d
                    InvalidateRect(data_147d470, &rect, 0)
                    CookieCheckFunction(0)
                    return 0
                
                if (arg2 == 0x110)
                    eax_6 = MakeDragList(GetDlgItem(arg1, 0x76))
                    
                    if (eax_6 != 0)
                        data_147d4a0 = RegisterWindowMessageA("commctrl_DragListMsg")
                        CookieCheckFunction(0)
                        return 0
                    
                    var_114_1 = "ParamsDialogWndProc"
                    var_118_1 = 0xc8b
                    ecx_2 = "result"
                    goto label_6f4ddc
                
                void var_b8
                
                if (arg2 == 0xf)
                    sub_6f1800(BeginPaint(arg1, &var_b8))
                    EndPaint(arg1, &var_b8)
                    CookieCheckFunction(0)
                    return 0
                
                if (arg2 == 0x7b)
                    HWND eax_12 = GetDlgItem(data_147d470, 0x76)
                    
                    if (arg3 == eax_12)
                        int32_t ecx_19 = sx.d(arg4.w)
                        int32_t y = sx.d((arg4 u>> 0x10).w)
                        int32_t y_1 = y
                        HMENU hMenu = CreatePopupMenu()
                        int32_t hWnd_2 = LBItemFromPt(eax_12, ecx_19, 0)
                        hWnd_1 = hWnd_2
                        
                        if (hWnd_2 == 0xffffffff)
                            SendMessageA(eax_12, 0x186, 0xffffffff, 0)
                            SendMessageA(GetDlgItem(data_147d470, 0x7b), 0x184, 0, 0)
                            sub_6ef970()
                            sub_6ef470()
                            sub_6ef5e0()
                            sub_6ef6d0()
                            sub_6ef870()
                            InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa0, "Add Root")
                        else
                            void* eax_16 = data_147ded0
                            
                            if (eax_16 != 0)
                                int32_t eax_17 = *(eax_16 + 4)
                                
                                if (eax_17 == 0x19)
                                    sub_6f0170(hWnd_2, 0xffffffff)
                                else if (eax_17 == 0x1b)
                                    sub_6f0970(hWnd_2)
                            
                            int32_t eax_18 = sub_6eef80(hWnd_2)
                            int32_t esi_7 = hWnd_2 - 1
                            int32_t var_fc_3 = esi_7
                            
                            if (hWnd_2 - 1 s< 0)
                            label_6f39c9:
                                var_fc_3 = 0xffffffff
                            else
                                while (true)
                                    int32_t eax_19 = sub_6eef80(esi_7)
                                    
                                    if (eax_19 s< eax_18)
                                        goto label_6f39c9
                                    
                                    if (eax_19 == eax_18)
                                        break
                                    
                                    int32_t temp7_1 = esi_7
                                    esi_7 -= 1
                                    var_fc_3 = esi_7
                                    
                                    if (temp7_1 - 1 s< 0)
                                        goto label_6f39c9
                            
                            int32_t eax_20 = sub_6ef110(hWnd_1)
                            InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa0, "Add Child")
                            InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa1, "Add Sibling")
                            int32_t eax_21
                            eax_21.b = var_fc_3 == 0xffffffff
                            InsertMenuA(hMenu, 0xffffffff, eax_21 + 0x400, 0xa3, "Sibling Order Up")
                            int32_t eax_23
                            eax_23.b = eax_20 == 0xffffffff
                            InsertMenuA(hMenu, 0xffffffff, eax_23 + 0x400, 0xa4, 
                                "Sibling Order Down")
                            InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa5, "Delete")
                            InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa6, "Duplicate")
                            InsertMenuA(hMenu, 0xffffffff, 0xc00, 0, &data_801800)
                            InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa7, "Hide")
                            InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa8, "Show")
                        
                        TrackPopupMenu(hMenu, TPM_LEFTBUTTON, ecx_19, y, 0, arg1, nullptr)
                        CookieCheckFunction(0)
                        return 0
                
                if (arg2 == 0x111)
                    uint32_t nIDDlgItem = zx.d(arg3.w)
                    uint32_t edi_3 = arg3 u>> 0x10
                    
                    if (edi_3 == 1 && (nIDDlgItem == 0x76 || nIDDlgItem == 0x7b))
                        void* eax_29 = data_147ded0
                        
                        if (eax_29 != 0)
                            int32_t eax_30 = *(eax_29 + 4)
                            
                            if (eax_30 == 0x19)
                                sub_6f0170(0xffffffff, 0xffffffff)
                                data_147d474 = 0
                                CookieCheckFunction(0)
                                return 0
                            
                            if (eax_30 == 0x1b)
                                sub_6f0970(0xffffffff)
                        
                        data_147d474 = 0
                        CookieCheckFunction(0)
                        return 0
                    
                    if (nIDDlgItem == 0x81 || nIDDlgItem == 0x82 || nIDDlgItem == 0x83
                            || nIDDlgItem == 0x96)
                        if (edi_3 == 0x300)
                            ecx_4 = sub_6f18f0()
                        else if (edi_3 == 0x200)
                            void* eax_31 = data_147ded0
                            
                            if (eax_31 != 0)
                                int32_t eax_32 = *(eax_31 + 4)
                                
                                if (eax_32 == 0x19)
                                    ecx_4 = sub_6f0170(0xffffffff, 0xffffffff)
                                else if (eax_32 == 0x1b)
                                    ecx_4 = sub_6f0970(0xffffffff)
                    
                    if ((nIDDlgItem == 0x90 || nIDDlgItem == 0x91) && edi_3 == 1)
                        ecx_4 = sub_6f18f0()
                    
                    if (nIDDlgItem != 0x97 && nIDDlgItem != 0x98)
                        if (edi_3 == 0)
                            goto label_6f3d56
                        
                        goto label_6f3cf2
                    
                    char* ecx_48
                    void* ecx_82
                    void* edi_9
                    
                    if (edi_3 != 0)
                    label_6f3cf2:
                        
                        if (edi_3 != 2)
                            if (edi_3 == 0)
                            label_6f444e:
                                
                                if (nIDDlgItem != 0x8e)
                                    if (nIDDlgItem != 0x8f)
                                        goto label_6f463f
                                    
                                    sub_6fa410(ecx_4)
                                    CookieCheckFunction(0)
                                    return 0
                                
                                sub_6f9e80(ecx_4)
                                CookieCheckFunction(0)
                                return 0
                            
                            int32_t var_114_13
                            int32_t* hWnd_3
                            HWND (__stdcall* const esi_21)(HWND hDlg, int32_t nIDDlgItem)
                            LRESULT edi_10
                            
                            if (edi_3 == 1)
                                if (nIDDlgItem != 0x8c)
                                    goto label_6f463f
                                
                                edi_10 = sub_6ee740()
                                eax_6 = sub_6ee6b0()
                                esi_21 = eax_6
                                
                                if (esi_21 != 0)
                                    if (SendMessageA(GetDlgItem(data_147d470, 0x8c), 0x188, 0, 0)
                                            != 0)
                                        hWnd_1.q = 0
                                        hWnd_3 = hWnd_1
                                        var_114_13 = var_ec
                                    else
                                        hWnd_3 = 1
                                        var_114_13 = 0
                                    
                                    goto label_6f461a
                                
                                var_114_1 = "EditorSetBool"
                                var_118_1 = 0xa80
                                ecx_2 = "pEmitter"
                                goto label_6f4ddc
                            
                            if (edi_3 != 0x300)
                                goto label_6f463f
                            
                            if (nIDDlgItem == 0x93)
                                void* eax_90 = sub_6ee740()
                                int32_t* eax_91 = sub_6ee6b0()
                                
                                if (eax_91 == 0)
                                    sub_63b870(eax_91, &data_801800, "pEmitter", 
                                        "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 0xa94, 
                                        "EditorSetString")
                                    
                                    if (sub_63bc30() != 0)
                                        breakpoint
                                    
                                    sub_63bb00()
                                    noreturn
                                
                                uint8_t string[0x54]
                                char* eax_93 = sub_6dd140(
                                    GetDlgItemTextA(data_147d470, nIDDlgItem, &string, 0x50), 
                                    eax_91, &data_8cc5f8, eax_90)
                                ecx_4 = &string
                                int32_t eax_95
                                
                                while (true)
                                    char edx_21 = *eax_93
                                    char temp8_1 = *ecx_4
                                    bool c_1 = edx_21 u< temp8_1
                                    
                                    if (edx_21 == temp8_1)
                                        if (edx_21 == 0)
                                            eax_95 = 0
                                            break
                                        
                                        edx_21 = eax_93[1]
                                        char temp9_1 = *(ecx_4 + 1)
                                        c_1 = edx_21 u< temp9_1
                                        
                                        if (edx_21 == temp9_1)
                                            eax_93 = &eax_93[2]
                                            ecx_4 += 2
                                            
                                            if (edx_21 != 0)
                                                continue
                                            
                                            eax_95 = 0
                                            break
                                    
                                    eax_95 = sbb.d(eax_93, eax_93, c_1) | 1
                                    break
                                
                                if (eax_95 != 0)
                                    int32_t* eax_96
                                    int32_t edx_22
                                    edx_22:eax_96 = &string
                                    sub_6ee530(sub_6dcc50(eax_96, eax_91, &data_8cc5f8, eax_90, 
                                        eax_96, edx_22))
                            
                            if (nIDDlgItem != 0x94)
                                goto label_6f463f
                            
                            edi_10 = sub_6ee740()
                            HWND (__stdcall* eax_98)(HWND hDlg, int32_t nIDDlgItem) = sub_6ee6b0()
                            esi_21 = eax_98
                            
                            if (esi_21 == 0)
                                sub_63b870(eax_98, &data_801800, "pEmitter", 
                                    "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 0xaa7, 
                                    "EditorSetInt")
                                
                                if (sub_63bc30() != 0)
                                    breakpoint
                                
                                sub_63bb00()
                                noreturn
                            
                            GetDlgItemTextA(data_147d470, 0x94, &var_b8, 0x50)
                            int32_t edx_24
                            edx_24:hWnd_3 = sx.q(atoi(&var_b8))
                            var_114_13 = edx_24
                        label_6f461a:
                            ecx_48 =
                                sub_6dcc50(hWnd_3, esi_21, &data_8cc5f8, edi_10, hWnd_3, var_114_13)
                        label_6f4622:
                            sub_6ee530(ecx_48)
                            CookieCheckFunction(0)
                            return 0
                        
                        if (nIDDlgItem != 0x7b)
                        label_6f463f:
                            
                            if (nIDDlgItem == 0xa0)
                                ecx_4.b = 1
                                sub_6f2e50(ecx_4.b)
                                CookieCheckFunction(0)
                                return 0
                            
                            if (nIDDlgItem == 0xa1)
                                ecx_4.b = 0
                                sub_6f2e50(ecx_4.b)
                                CookieCheckFunction(0)
                                return 0
                            
                            if (nIDDlgItem == 0xa3)
                                int32_t* ecx_108 = data_147ded0
                                
                                if (ecx_108 != 0 && ecx_108[1] == 0x19)
                                    int32_t* eax_100 = sub_5af880(ecx_108)
                                    
                                    if (eax_100 != 0)
                                        LRESULT eax_102 = SendMessageA(
                                            GetDlgItem(data_147d470, 0x76), 0x188, 0, 0)
                                        
                                        if (eax_102 != 0xffffffff)
                                            edi_9 = eax_102 - 1
                                            hWnd_1 = sub_6eef80(eax_102)
                                            
                                            if (edi_9 s>= 0)
                                                while (true)
                                                    int32_t eax_104 = sub_6eef80(edi_9)
                                                    int32_t* hWnd_10 = hWnd_1
                                                    
                                                    if (eax_104 s< hWnd_10)
                                                        goto label_6f4d28
                                                    
                                                    if (eax_104 == hWnd_10)
                                                        break
                                                    
                                                    void* temp11_1 = edi_9
                                                    edi_9 -= 1
                                                    
                                                    if (temp11_1 - 1 s< 0)
                                                        CookieCheckFunction(0)
                                                        return 0
                                                
                                                if (edi_9 != 0xffffffff)
                                                    int32_t eax_105
                                                    eax_105, ecx_82 = sub_6ef080(eax_102)
                                                    int32_t i_3 = eax_105 + 1
                                                    
                                                    if (eax_105 + 1 s> 0)
                                                        LRESULT edi_12 = eax_102
                                                        int32_t* hWnd_4 = edi_9 - eax_102
                                                        hWnd_1 = hWnd_4
                                                        int32_t i
                                                        
                                                        do
                                                            void* esi_23 = hWnd_4 + edi_12
                                                            int32_t* eax_108 =
                                                                sub_69dd00(data_177750c, 0)
                                                            sub_6fb950(eax_108, eax_108, eax_100, 
                                                                edi_12, esi_23)
                                                            ecx_82 = sub_6f2680(edi_12, esi_23)
                                                            hWnd_4 = hWnd_1
                                                            edi_12 += 1
                                                            i = i_3
                                                            i_3 -= 1
                                                        while (i != 1)
                                                    
                                                    goto label_6f42c1
                            else if (nIDDlgItem == 0xa4)
                                int32_t* ecx_117 = data_147ded0
                                
                                if (ecx_117 != 0 && ecx_117[1] == 0x19)
                                    int32_t* eax_109 = sub_5af880(ecx_117)
                                    
                                    if (eax_109 != 0)
                                        LRESULT eax_111 = SendMessageA(
                                            GetDlgItem(data_147d470, 0x76), 0x188, 0, 0)
                                        
                                        if (eax_111 != 0xffffffff)
                                            int32_t* hWnd_5 = sub_6ef110(eax_111)
                                            hWnd_1 = hWnd_5
                                            
                                            if (hWnd_5 != 0xffffffff)
                                                void* esi_25 = sub_6ef080(hWnd_5) + hWnd_1
                                                void* eax_113
                                                eax_113, ecx_82 = sub_6ef080(eax_111)
                                                int32_t* eax_114 = eax_113 + 1
                                                hWnd_1 = eax_114
                                                
                                                if (eax_114 s> 0)
                                                    int32_t* i_4 = eax_114
                                                    int32_t* i_1
                                                    
                                                    do
                                                        int32_t* eax_115 =
                                                            sub_69dd00(data_177750c, 0)
                                                        sub_6fb950(eax_115, eax_115, eax_109, 
                                                            eax_111, esi_25)
                                                        ecx_82 = sub_6f2680(eax_111, esi_25)
                                                        i_1 = i_4
                                                        i_4 -= 1
                                                    while (i_1 != 1)
                                                    eax_114 = hWnd_1
                                                
                                                void* esi_26 = esi_25 - eax_114
                                                void* eax_116 = data_147ded0
                                                
                                                if (eax_116 == 0)
                                                    goto label_6f499c
                                                
                                                int32_t eax_117 = *(eax_116 + 4)
                                                
                                                if (eax_117 == 0x19)
                                                    ecx_82 = esi_26 + 1
                                                label_6f42e0:
                                                    sub_6ee530(sub_6f0170(ecx_82, 0xffffffff))
                                                    sub_73d740()
                                                    sub_73d5c0()
                                                    CookieCheckFunction(0)
                                                    return 0
                                                
                                                if (eax_117 != 0x1b)
                                                    goto label_6f499c
                                                
                                                ecx_82 = esi_26 + 1
                                            label_6f4997:
                                                ecx_82 = sub_6f0970(ecx_82)
                                            label_6f499c:
                                                sub_6ee530(ecx_82)
                                                sub_73d740()
                                                sub_73d5c0()
                                                CookieCheckFunction(0)
                                                return 0
                            else if (nIDDlgItem != 0xa5)
                                if (nIDDlgItem == 0xa6)
                                    sub_6f31b0()
                                    CookieCheckFunction(0)
                                    return 0
                                
                                if (nIDDlgItem == 0xa7)
                                    ecx_4.b = 1
                                    sub_6f34c0(ecx_4)
                                    CookieCheckFunction(0)
                                    return 0
                                
                                if (nIDDlgItem == 0xa8)
                                    ecx_4.b = 0
                                    sub_6f34c0(ecx_4)
                                    CookieCheckFunction(0)
                                    return 0
                            else
                                int32_t* ecx_124 = data_147ded0
                                
                                if (ecx_124 != 0 && ecx_124[1] == 0x19)
                                    void* eax_118 = sub_5af880(ecx_124)
                                    
                                    if (eax_118 != 0)
                                        LRESULT eax_120 = SendMessageA(
                                            GetDlgItem(data_147d470, 0x76), 0x188, 0, 0)
                                        
                                        if (eax_120 != 0xffffffff)
                                            int32_t* hWnd_6 = sub_6ef080(eax_120) + 1
                                            int32_t edi_14 = 0
                                            hWnd_1 = hWnd_6
                                            
                                            if (hWnd_6 s> 0)
                                                do
                                                    int32_t* eax_123 = sub_69dd00(data_177750c, 0)
                                                    eax_6 = sub_6fb870(eax_123, eax_123, eax_118, 
                                                        eax_120, nullptr)
                                                    
                                                    if (eax_120 u> 0xff)
                                                        goto label_6f4226
                                                    
                                                    if (0xff - eax_120 s> 0)
                                                        memmove((eax_120 << 3) + &data_147d4b4, 
                                                            (eax_120 << 3) + &data_147d4bc, 
                                                            (0xff - eax_120) << 3)
                                                    
                                                    edi_14 += 1
                                                while (edi_14 s< hWnd_1)
                                            
                                            ecx_82 = 0xffffffff
                                            int32_t eax_129 = *(eax_118 + 8)
                                            
                                            if (eax_120 == eax_129 && eax_129 s> 0)
                                                ecx_82 = eax_120 - 1
                                            
                                            void* eax_130 = data_147ded0
                                            
                                            if (eax_130 == 0)
                                                goto label_6f499c
                                            
                                            int32_t eax_131 = *(eax_130 + 4)
                                            
                                            if (eax_131 == 0x19)
                                                goto label_6f42e0
                                            
                                            if (eax_131 != 0x1b)
                                                goto label_6f499c
                                            
                                            goto label_6f4997
                        else
                            LRESULT eax_33 = sub_6ee740()
                            
                            if (eax_33 == 5 || eax_33 == 0x4a || eax_33 == 8 || eax_33 == 9
                                || eax_33 == 0xa || eax_33 == 0xb || eax_33 == 0x4c)
                            label_6f3d30:
                                sub_6f29a0()
                                CookieCheckFunction(0)
                                return 0
                    else
                        ecx_4 = sub_6f18f0()
                    label_6f3d56:
                        
                        if (nIDDlgItem == 0x7c)
                            DialogBoxParamA(GetModuleHandleA(nullptr), 0x84, data_147d46c, 
                                sub_6f1d30, 0)
                            CookieCheckFunction(0)
                            return 0
                        
                        if (nIDDlgItem == 0x7d)
                            HWND hWnd = GetDlgItem(data_147d470, 0x7b)
                            hWnd_1 = hWnd
                            LRESULT wParam = SendMessageA(hWnd, 0x188, 0, 0)
                            
                            if (wParam != 0xffffffff)
                                int32_t* eax_35 = sub_6ee6b0()
                                LRESULT eax_36 = SendMessageA(hWnd_1, 0x199, wParam, 0)
                                char* ecx_40 = sub_6dcec0(eax_36, eax_35, &data_8cc5f8, eax_36)
                                int32_t eax_37 = *eax_35
                                LRESULT edx_5 = 0xffffffff
                                
                                if (wParam == eax_37 && eax_37 s> 0)
                                    edx_5 = wParam - 1
                                
                                void* eax_38 = data_147ded0
                                
                                if (eax_38 != 0)
                                    int32_t eax_39 = *(eax_38 + 4)
                                    
                                    if (eax_39 == 0x19)
                                        char* ecx_41 = sub_6f0170(0xffffffff, edx_5)
                                        data_147d474 = 0
                                        sub_6ee530(ecx_41)
                                        CookieCheckFunction(0)
                                        return 0
                                    
                                    if (eax_39 == 0x1b)
                                        ecx_40 = sub_6f0970(0xffffffff)
                                
                                data_147d474 = 0
                                sub_6ee530(ecx_40)
                                CookieCheckFunction(0)
                                return 0
                        else
                            int32_t eax_46
                            
                            if (nIDDlgItem == 0x7e)
                                LRESULT eax_41 =
                                    SendMessageA(GetDlgItem(data_147d470, 0x7b), 0x188, 0, 0)
                                
                                if (eax_41 != 0xffffffff && eax_41 != 0)
                                    int32_t* eax_42 = sub_6ee6b0()
                                    int32_t* eax_44 = sub_69dd00(data_1777544, 8)
                                    ecx_48 = sub_6fb950(eax_44, eax_44, eax_42, eax_41, eax_41 - 1)
                                    void* eax_45 = data_147ded0
                                    
                                    if (eax_45 == 0)
                                        goto label_6f4622
                                    
                                    eax_46 = *(eax_45 + 4)
                                    
                                    if (eax_46 == 0x19)
                                        sub_6ee530(sub_6f0170(0xffffffff, eax_41 - 1))
                                        CookieCheckFunction(0)
                                        return 0
                                    
                                label_6f3fbf:
                                    
                                    if (eax_46 != 0x1b)
                                        goto label_6f4622
                                    
                                    sub_6ee530(sub_6f0970(0xffffffff))
                                    CookieCheckFunction(0)
                                    return 0
                            else if (nIDDlgItem != 0x7f)
                                if (nIDDlgItem == 0x77)
                                    sub_6f2740()
                                    CookieCheckFunction(0)
                                    return 0
                                
                                LRESULT ecx_70
                                
                                if (nIDDlgItem == 0x8d)
                                    LRESULT eax_54 =
                                        SendMessageA(GetDlgItem(data_147d470, 0x76), 0x188, 0, 0)
                                    
                                    if (eax_54 != 0xffffffff)
                                        int32_t* ecx_64 = data_147ded0
                                        LRESULT esi_16 = eax_54 + 1
                                        int32_t* var_fc_4
                                        
                                        if (ecx_64 == 0 || ecx_64[1] != 0x19)
                                            var_fc_4 = nullptr
                                        else
                                            int32_t* eax_55
                                            eax_55, ecx_64 = sub_5af880(ecx_64)
                                            var_fc_4 = eax_55
                                        
                                        int32_t* var_118_17 = ecx_64
                                        int32_t* eax_56 = sub_69dd00(data_177750c, 0)
                                        sub_6fb630(eax_56, eax_56, var_fc_4, esi_16)
                                        sub_6f2600(esi_16)
                                        int32_t eax_57 = *var_fc_4
                                        int32_t i_2 = 0
                                        hWnd_1 = esi_16 * 0x168 + eax_57
                                        ecx_70 = eax_54 * 0x168 + eax_57
                                        LRESULT var_f8_2 = ecx_70
                                        
                                        if (*ecx_70 s> 0)
                                            int32_t esi_17 = 0
                                            
                                            do
                                                void** ecx_71 = *(ecx_70 + 8)
                                                int32_t* eax_59
                                                int32_t edx_13
                                                edx_13:eax_59 = sx.q(*(ecx_71 + esi_17 + 8))
                                                sub_6dcc50(eax_59, hWnd_1, &data_8cc5f8, 
                                                    *(ecx_71 + esi_17), eax_59, edx_13)
                                                ecx_70 = var_f8_2
                                                esi_17 += 0x10
                                                i_2 += 1
                                            while (i_2 s< *ecx_70)
                                        
                                        void* eax_60 = data_147ded0
                                        
                                        if (eax_60 == 0)
                                            goto label_6f41f5
                                        
                                        int32_t eax_61 = *(eax_60 + 4)
                                        
                                        if (eax_61 != 0x19)
                                            if (eax_61 != 0x1b)
                                                goto label_6f41f5
                                            
                                            ecx_70 = sub_6f0970(esi_16)
                                            goto label_6f41f5
                                        
                                        ecx_70 = sub_6f0170(esi_16, 0xffffffff)
                                    label_6f41f5:
                                        data_147d474 = 0
                                        sub_6ee530(ecx_70)
                                        sub_73d740()
                                        sub_73d5c0()
                                        CookieCheckFunction(0)
                                        return 0
                                else if (nIDDlgItem == 0x78)
                                    LRESULT eax_63 =
                                        SendMessageA(GetDlgItem(data_147d470, 0x76), 0x188, 0, 0)
                                    
                                    if (eax_63 != 0xffffffff)
                                        int32_t* ecx_73 = data_147ded0
                                        void* const edi_8
                                        
                                        if (ecx_73 == 0 || ecx_73[1] != 0x19)
                                            edi_8 = nullptr
                                        else
                                            edi_8 = sub_5af880(ecx_73)
                                        
                                        int32_t* eax_65 = sub_69dd00(data_177750c, 0)
                                        eax_6 = sub_6fb870(eax_65, eax_65, edi_8, eax_63, nullptr)
                                        
                                        if (eax_63 u> 0xff)
                                        label_6f4226:
                                            var_114_1 = "ToolDataDeleteItem"
                                            var_118_1 = 0x952
                                            ecx_2 =
                                                "emitterIndex >= 0 && emitterIndex < MAX_EMITTERS"
                                            goto label_6f4ddc
                                        
                                        if (0xff - eax_63 s> 0)
                                            memmove((eax_63 << 3) + &data_147d4b4, 
                                                (eax_63 << 3) + &data_147d4bc, (0xff - eax_63) << 3)
                                        
                                        int32_t eax_70 = *(edi_8 + 8)
                                        ecx_70 = 0xffffffff
                                        
                                        if (eax_63 == eax_70 && eax_70 s> 0)
                                            ecx_70 = eax_63 - 1
                                        
                                        void* eax_71 = data_147ded0
                                        
                                        if (eax_71 == 0)
                                            goto label_6f41f5
                                        
                                        int32_t eax_72 = *(eax_71 + 4)
                                        
                                        if (eax_72 == 0x19)
                                            ecx_70 = sub_6f0170(ecx_70, 0xffffffff)
                                            goto label_6f41f5
                                        
                                        if (eax_72 != 0x1b)
                                            goto label_6f41f5
                                        
                                        ecx_70 = sub_6f0970(ecx_70)
                                        goto label_6f41f5
                                else
                                    int32_t eax_78
                                    
                                    if (nIDDlgItem != 0x79)
                                        if (nIDDlgItem != 0x7a)
                                            if (nIDDlgItem != 0x88)
                                                goto label_6f444e
                                            
                                            LRESULT eax_86 = sub_6ee740()
                                            
                                            if (eax_86 == 5 || eax_86 == 8 || eax_86 == 0x4a
                                                    || eax_86 == 9 || eax_86 == 0xa
                                                    || eax_86 == 0xb || eax_86 == 0x4c)
                                                goto label_6f3d30
                                            
                                            CookieCheckFunction(0)
                                            return 0
                                        
                                        LRESULT eax_80 = SendMessageA(
                                            GetDlgItem(data_147d470, 0x76), 0x188, 0, 0)
                                        int32_t* ecx_86 = data_147ded0
                                        int32_t* eax_81
                                        
                                        if (ecx_86 == 0 || ecx_86[1] != 0x19)
                                            eax_81 = nullptr
                                        else
                                            eax_81 = sub_5af880(ecx_86)
                                        
                                        if (eax_80 != 0xffffffff && eax_80 != eax_81[2] - 1)
                                            edi_9 = eax_80 + 1
                                            int32_t* eax_84 = sub_69dd00(data_177750c, 0)
                                            sub_6fb950(eax_84, eax_84, eax_81, eax_80, edi_9)
                                            ecx_82 = sub_6f2680(eax_80, edi_9)
                                            void* eax_85 = data_147ded0
                                            
                                            if (eax_85 == 0)
                                                goto label_6f499c
                                            
                                            eax_78 = *(eax_85 + 4)
                                            
                                            if (eax_78 != 0x19)
                                                goto label_6f4307
                                            
                                            sub_6ee530(sub_6f0170(edi_9, 0xffffffff))
                                            sub_73d740()
                                            sub_73d5c0()
                                            CookieCheckFunction(0)
                                            return 0
                                    else
                                        LRESULT eax_74 = SendMessageA(
                                            GetDlgItem(data_147d470, 0x76), 0x188, 0, 0)
                                        int32_t* ecx_78 = data_147ded0
                                        int32_t* var_f8_3
                                        
                                        if (ecx_78 == 0 || ecx_78[1] != 0x19)
                                            var_f8_3 = nullptr
                                        else
                                            var_f8_3 = sub_5af880(ecx_78)
                                        
                                        if (eax_74 != 0xffffffff && eax_74 != 0)
                                            edi_9 = eax_74 - 1
                                            int32_t* eax_76 = sub_69dd00(data_177750c, 0)
                                            sub_6fb950(eax_76, eax_76, var_f8_3, eax_74, edi_9)
                                            ecx_82 = sub_6f2680(eax_74, edi_9)
                                        label_6f42c1:
                                            void* eax_77 = data_147ded0
                                            
                                            if (eax_77 == 0)
                                                goto label_6f499c
                                            
                                            eax_78 = *(eax_77 + 4)
                                            
                                            if (eax_78 == 0x19)
                                                ecx_82 = edi_9
                                                goto label_6f42e0
                                            
                                        label_6f4307:
                                            
                                            if (eax_78 != 0x1b)
                                                goto label_6f499c
                                            
                                            ecx_82 = edi_9
                                            goto label_6f4997
                            else
                                LRESULT eax_48 =
                                    SendMessageA(GetDlgItem(data_147d470, 0x7b), 0x188, 0, 0)
                                int32_t* eax_49 = sub_6ee6b0()
                                
                                if (eax_48 != 0xffffffff && eax_48 != *eax_49 - 1)
                                    int32_t* eax_51 = sub_69dd00(data_1777544, 8)
                                    ecx_48 = sub_6fb950(eax_51, eax_51, eax_49, eax_48, eax_48 + 1)
                                    void* eax_52 = data_147ded0
                                    
                                    if (eax_52 == 0)
                                        goto label_6f4622
                                    
                                    eax_46 = *(eax_52 + 4)
                                    
                                    if (eax_46 != 0x19)
                                        goto label_6f3fbf
                                    
                                    sub_6ee530(sub_6f0170(0xffffffff, eax_48 + 1))
                                    CookieCheckFunction(0)
                                    return 0
            else if (arg2 == 0x201)
                sub_6f1650(sx.d(ecx_4.w), sx.d((ecx_4 u>> 0x10).w))
            else
                if (arg2 == 0x202)
                    if (data_147d47d != 0)
                        data_147d47d = 0
                        sub_6ee970(&data_147d484, &data_147d480)
                        void* eax_146 = data_147ded0
                        
                        if (eax_146 != 0)
                            int32_t eax_147 = *(eax_146 + 4)
                            
                            if (eax_147 == 0x19)
                                sub_6f0170(0xffffffff, 0xffffffff)
                                ReleaseCapture()
                                CookieCheckFunction(0)
                                return 0
                            
                            if (eax_147 == 0x1b)
                                sub_6f0970(0xffffffff)
                    
                    ReleaseCapture()
                    CookieCheckFunction(0)
                    return 0
                
                if (arg2 == 0x204)
                    int32_t eax_140 = sx.d((ecx_4 u>> 0x10).w)
                    sub_6f0bd0(eax_140, sx.d(ecx_4.w), &hWnd_1, eax_140)
                    
                    if (hWnd_1 == 1)
                        eax_6 = sub_6ee800()
                        
                        if (eax_6 == 0)
                            var_114_1 = "EditorRightButtonDown"
                            var_118_1 = 0x72e
                            ecx_2 = "pTrack"
                            goto label_6f4ddc
                        
                        if (*(eax_6 + 8) != 1)
                            int32_t* eax_141 = sub_69dd00(data_1777598, 0)
                            char* ecx_145 =
                                sub_6fb870(eax_141, eax_141, eax_6, var_ec, arg2 - 0x204)
                            int32_t eax_142 = data_147d474
                            
                            if (eax_142 s> var_ec)
                                data_147d474 = eax_142 - 1
                            
                            void* eax_144 = data_147ded0
                            
                            if (eax_144 != 0)
                                int32_t eax_145 = *(eax_144 + 4)
                                
                                if (eax_145 == 0x19)
                                    sub_6ee530(sub_6f0170(0xffffffff, 0xffffffff))
                                    CookieCheckFunction(0)
                                    return 0
                                
                                if (eax_145 == 0x1b)
                                    ecx_145 = sub_6f0970(0xffffffff)
                            
                            sub_6ee530(ecx_145)
                            CookieCheckFunction(0)
                            return 0
        else
            if (arg3 != 0x76)
                var_114_1 = "ParamsDialogWndProc"
                var_118_1 = 0xc52
                ecx_2 = "wParam == IDC_EMITTER_LIST"
            label_6f4ddc:
                sub_63b870(eax_6, &data_801800, ecx_2, 
                    "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", var_118_1, var_114_1)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            HWND hLB = GetDlgItem(data_147d470, 0x76)
            int32_t var_118_3 = arg4[3]
            int32_t eax_7 = LBItemFromPt(hLB, arg4[2], 1)
            ecx_4 = arg4
            int32_t edx_1 = *ecx_4
            
            if (edx_1 != 0x485)
                if (edx_1 == 0x486)
                    if (data_147d4a4 != 0 && eax_7 != 0xffffffff)
                        int32_t eax_8 = sub_6ef080(data_147d4a8)
                        int32_t ecx_10 = data_147d4a8
                        
                        if (eax_7 s< ecx_10 || eax_7 s> eax_8 + ecx_10)
                            if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135
                                    && arg2 != 0x136 && arg2 != 0x137 && arg2 != 0x138
                                    && arg2 != 0x39 && arg2 != 0x2e && arg2 != 0x2f && arg2 != 0x37
                                    && arg2 != 0x110)
                                SetWindowLongA(arg1, 0, 2)
                            
                            CookieCheckFunction(2)
                            return 2
                    
                    goto label_6f36f0
                
                if (edx_1 != 0x487)
                    if (edx_1 != 0x488)
                        goto label_6f38eb
                    
                    data_147d4a4 = 0
                    CookieCheckFunction(1)
                    return 1
                
                if (data_147d4a4 != 0 && eax_7 != 0xffffffff)
                    void* eax_10 = sub_6ef080(data_147d4a8)
                    char* ecx_14 = data_147d4a8
                    
                    if (eax_7 s< ecx_14 || eax_7 s> eax_10 + ecx_14)
                        sub_6f3030(ecx_14, eax_7)
                
                CookieCheckFunction(1)
                return 1
            
            if (eax_7 != 0xffffffff)
                data_147d4a4 = 1
                data_147d4a8 = eax_7
            label_6f36f0:
                
                if (arg2 == 0x132)
                    CookieCheckFunction(1)
                    return 1
                
                if (arg2 == 0x133 || arg2 == 0x134 || arg2 == 0x135 || arg2 == 0x136
                        || arg2 == 0x137 || arg2 == 0x138 || arg2 == 0x39 || arg2 == 0x2e
                        || arg2 == 0x2f || arg2 == 0x37 || arg2 == 0x110)
                    CookieCheckFunction(1)
                    return 1
                
                SetWindowLongA(arg1, 0, 1)
                CookieCheckFunction(1)
                return 1
            
            data_147d4a4 = 0
            
            if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135 && arg2 != 0x136
                    && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39 && arg2 != 0x2e
                    && arg2 != 0x2f && arg2 != 0x37 && arg2 != 0x110)
                SetWindowLongA(arg1, 0, 0)
                CookieCheckFunction(0)
                return 0
    else
        ecx = data_147ded0
    label_6f359d:
        
        if (ecx != 0 && ecx[1] == 0x1b && sub_5af880(ecx) != 0)
            goto label_6f35bc

label_6f4d28:
CookieCheckFunction(0)
return 0
