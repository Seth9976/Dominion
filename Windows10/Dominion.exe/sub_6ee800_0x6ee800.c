// 函数: sub_6ee800
// 地址: 0x6ee800
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_11 = data_147ded0

if (eax_11 != 0)
    int32_t* eax = *(eax_11 + 4)
    int32_t var_c_3
    char const* const var_8
    char* ecx_1
    
    if (eax == 0x19)
        HWND hWnd = GetDlgItem(data_147d470, 0x7b)
        LRESULT wParam = SendMessageA(hWnd, 0x188, 0, 0)
        
        if (wParam != 0xffffffff)
            LRESULT eax_1 = SendMessageA(hWnd, 0x199, wParam, 0)
            eax = sub_6ee6b0()
            char const* const var_10
            
            if (eax == 0)
                var_8 = "EditorGetSelectedTrack"
                var_c_3 = 0x23d
                ecx_1 = "pEmitter"
            label_6ee949:
                var_10 = "C:\x\ax2017\Engine\Windows\EditorWindow.cpp"
            label_6ee953:
                sub_63b870(eax, &data_801800, ecx_1, var_10, var_c_3, var_8)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            if (eax_1 s< 0 || eax_1 s>= data_8cc608)
                var_8 = "AttribTagGetField"
                var_c_3 = 0x8b
                var_10 = "C:\x\ax2017\Engine\AttribMap.cpp"
                ecx_1 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
                goto label_6ee953
            
            int32_t ecx_2 = data_1777598
            void* eax_3 = *(data_8cc604 + (eax_1 << 2))
            
            if (*(eax_3 + 0xc) == ecx_2)
                return sub_6dd1e0(eax_3, eax, &data_8cc5f8, ecx_2, eax_1)
    else if (eax != 0x1e && eax != 0x20 && eax != 0x12)
        if (eax != 0x1b)
            var_8 = "EditorGetSelectedTrack"
            var_c_3 = 0x25f
            ecx_1 = "Halt"
            goto label_6ee949
        
        LRESULT eax_6 = SendMessageA(GetDlgItem(data_147d470, 0x76), 0x188, 0, 0)
        
        if (eax_6 != 0xffffffff)
            int32_t* ecx_3 = data_147ded0
            
            if (ecx_3 == 0 || ecx_3[1] != 0x1b)
                eax = nullptr
            else
                eax = sub_5af880(ecx_3)
            
            if (eax_6 s>= 0 && eax_6 s< eax[2])
                return *eax + eax_6 * 0x18
            
            var_8 = "EditorGetSelectedTrack"
            var_c_3 = 0x25a
            ecx_1 = "currentSelection >= 0 && currentSelection < graphDef->mTrackCount"
            goto label_6ee949

return 0
