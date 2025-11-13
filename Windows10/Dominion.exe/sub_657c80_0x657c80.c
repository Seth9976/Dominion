// 函数: sub_657c80
// 地址: 0x657c80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = arg6
int32_t var_24_1
char const* const var_20_1
char* ecx
char const* const edx

if (arg3 != 0)
    if (arg3[1] == 0x22)
        arg1 = sub_5af880(arg3)
        void** var_c = arg1
        
        if (arg1[2] != 0)
            *(arg2 + 0x1600) = arg3
            int32_t edi_2 = ebx * 0x18
            bool cond:0 = *(arg2 + 0x15f8) != 0
            *(arg2 + 0x1604) = ebx
            
            if (not(cond:0))
                *(arg2 + 0x15f8) = sub_6dcf50(arg1, *arg1 + edi_2, &data_8cae70, 0x66)
                arg1 = var_c
            
            void* eax_1 = *arg1
            int32_t edx_3 = *(eax_1 + edi_2 + 0x10)
            void* edi_3 = nullptr
            
            if (edx_3 s<= 0)
                *arg5 += edx_3
                return eax_1
            
            char eax_8
            
            while (true)
                int32_t eax_2 = *(arg2 + 0x15f8)
                int32_t var_24_3
                char const* const var_20_3
                char* ecx_7
                
                if (eax_2 == 0)
                    var_20_3 = "UI2MergeRecFromSublayout"
                    var_24_3 = 0x1e2e
                    ecx_7 = "item.type != UI_NONE"
                else
                    struct _EXCEPTION_REGISTRATION_RECORD** eax_4
                    
                    if (eax_2 != 2)
                        eax_4 = sub_64ece0(arg2, edi_3)
                    label_657d8c:
                        eax_4[0x5c7].b = 1
                        var_c = nullptr
                        sub_657c80(arg3, arg4, &var_c, ebx + 1)
                        void** eax_6 = var_c
                        edi_3 += 1
                        ebx = ebx + 1 + eax_6
                        *arg5 += eax_6
                        
                        if (edi_3 s< edx_3)
                            continue
                        
                        *arg5 += edx_3
                        return eax_6
                    else
                        if (edi_3 == 0)
                            int32_t ecx_2 = *(arg2 + 0x18a0)
                            
                            if (ecx_2 == 0)
                                void* eax_3 = sub_64e660(arg2)
                                ecx_2 = *(eax_3 + 0x18c8)
                                *(eax_3 + 5) = 1
                                *(arg2 + 0x18a0) = ecx_2
                            
                            eax_4 = sub_64e7a0(ecx_2)
                            goto label_657d8c
                        
                        var_20_3 = "UI2GetOrAllocTemplateChild"
                        var_24_3 = 0xfc1
                        ecx_7 = "idx == 0"
                
                sub_63b870(eax_2, &data_801800, ecx_7, "C:\x\ax2017\Engine\UI2.cpp", var_24_3, 
                    var_20_3)
                eax_8 = sub_63bc30()
                break
            
            if (eax_8 != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        var_20_1 = "UI2MergeRecFromSublayout"
        var_24_1 = 0x1e19
        ecx = "Halt"
    else
        var_20_1 = "UI2DefGet"
        var_24_1 = 0xc17
        ecx = "ptr->assetType == ASSET_TYPE_UI2"
    
    edx = &data_801800
else
    var_20_1 = "UI2DefGet"
    var_24_1 = 0xc16
    edx = "UI2DefGet on null pointer"
    ecx = &data_874470

sub_63b870(arg1, edx, ecx, "C:\x\ax2017\Engine\UI2.cpp", var_24_1, var_20_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
