// 函数: sub_4bbdb0
// 地址: 0x4bbdb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx_7 = data_8dbf38

if (ecx_7 == 0)
    return sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x10

int32_t ecx_3

if (ecx_7 != 1)
    if (ecx_7 == 3)
        return &sub_4b9480()[2]
    
    void* eax_7 = data_cc8d5c
    char const* const var_10
    int32_t var_c
    char const* const var_8
    char* ecx_4
    
    if (eax_7 == 0)
        var_8 = "GetClient"
        var_c = 0x7b
        var_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        ecx_4 = "gClient"
    label_4bbe8d:
        sub_63b870(eax_7, &data_801800, ecx_4, var_10, var_c, var_8)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t edx_1 = data_8dbf48
    int32_t* esi_1 = eax_7 + 0x507c
    
    if (edx_1 == 0)
        ecx_3 = *(data_cc8dc8 + 0x1e1a4)
    else
        uint32_t eax_8 = zx.d(edx_1.w)
        
        if (eax_8 u>= esi_1[1])
            ecx_3 = *(data_cc8dc8 + 0x1e1a4)
        else
            eax_7 = eax_8 * 0x1330 + *esi_1
            
            if (*(eax_7 + 0x1328) == edx_1)
                if (ecx_7 == 2)
                    return &sub_4bb050(esi_1, edx_1)[2]
                
                var_8 = "GetActiveGameSetup"
                var_c = 0xec
                var_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
                ecx_4 = "gCreateDlg.style == DISPLAY_MULTIPAYER"
                goto label_4bbe8d
            
            ecx_3 = *(data_cc8dc8 + 0x1e1a4)
else
    ecx_3 = *(data_cc8dc8 + 0x1e1a4)
    
    if ((data_8dbf40 & 1) != 0)
        return sub_4d8f30(ecx_3) + 0x2360

return sub_4d8f30(ecx_3) + 0x11b8
