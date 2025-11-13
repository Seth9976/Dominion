// 函数: sub_7484a0
// 地址: 0x7484a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x101c)
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_8 = eax_1
int32_t ebx = 0
int32_t var_1018 = 0
int32_t var_100c[0x3fc]

if (data_151345c s> 0)
    while (true)
        int32_t* ecx_1 = data_1512450
        char const* const var_1c_5
        int32_t var_18_6
        char const* const var_14_6
        char* ecx_18
        
        if (ecx_1[1] != 0x1e)
            var_14_6 = "UIDefGet"
            var_18_6 = 0x127
            var_1c_5 = "C:\x\ax2017\Engine\UIDef.cpp"
            ecx_18 = "ptr->assetType == ASSET_TYPE_UI"
        else
            void* eax_2
            int32_t ecx_2
            eax_2, ecx_2 = sub_5af880(ecx_1)
            int32_t esi_1 = *(eax_2 + 8)
            int32_t var_18_1 = ecx_2
            int32_t* eax_3 = sub_69dd00(data_17774dc, 0)
            sub_6fb630(eax_3, eax_3, eax_2, esi_1)
            int32_t eax_4 = ebx << 2
            int32_t* esi_3 = esi_1 * 0x178 + *eax_2
            int32_t eax_5 = sub_744f10((&data_151245c)[ebx], nullptr)
            int32_t ebx_1 = esi_3[2]
            eax_1 = esi_3[0x48]
            int32_t edx_2 = esi_3[0x38]
            __builtin_memcpy(esi_3, eax_5, 0x178)
            esi_3[2] = ebx_1
            esi_3[0x48] = eax_1
            esi_3[0x38] = edx_2
            char* ebx_3 = *(eax_5 + 8)
            
            if (ebx_3 != 0)
                char* esi_5 = ebx_3
                void* ecx_6 = &esi_5[1]
                
                do
                    eax_1.b = *esi_5
                    esi_5 = &esi_5[1]
                while (eax_1.b != 0)
                
                int32_t eax_6 = sub_687730(esi_5 - ecx_6 + 1)
                esi_3[2] = eax_6
                memcpy(eax_6, ebx_3, esi_5 - ecx_6 + 1)
                eax_1 = eax_5
                char* ebx_4 = *(eax_1 + 0x120)
                
                if (ebx_4 != 0)
                    char* esi_8 = ebx_4
                    void* ecx_8 = &esi_8[1]
                    
                    do
                        eax_1.b = *esi_8
                        esi_8 = &esi_8[1]
                    while (eax_1.b != 0)
                    
                    int32_t eax_7 = sub_687730(esi_8 - ecx_8 + 1)
                    esi_3[0x48] = eax_7
                    memcpy(eax_7, ebx_4, esi_8 - ecx_8 + 1)
                    eax_1 = eax_5
                    char* ebx_5 = *(eax_1 + 0xe0)
                    
                    if (ebx_5 != 0)
                        char* eax_8 = ebx_5
                        void* edx_3 = &eax_8[1]
                        char i
                        
                        do
                            i = *eax_8
                            eax_8 = &eax_8[1]
                        while (i != 0)
                        int32_t eax_10 = sub_687730(eax_8 - edx_3 + 1)
                        esi_3[0x38] = eax_10
                        memcpy(eax_10, ebx_5, eax_8 - edx_3 + 1)
                        int32_t ecx_11 = data_1512458
                        ebx = var_1018 + 1
                        var_1018 = ebx
                        data_1512458 = ecx_11 + 1
                        eax_1 = eax_4
                        *esi_3 = ecx_11
                        *(&var_100c + eax_1) = ecx_11
                        
                        if (ebx s>= data_151345c)
                            break
                        
                        continue
            
            var_14_6 = "DefDeepCopyString"
            var_18_6 = 0x25b
            var_1c_5 = "C:\x\ax2017\Engine\Definition.cpp"
            ecx_18 = "pExistingString"
        
        sub_63b870(eax_1, &data_801800, ecx_18, var_1c_5, var_18_6, var_14_6)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

int32_t eax_12 = sub_748410()
memcpy(&data_151245c, &var_100c, data_151345c << 2)
sub_74ae80(eax_12 + 1)
sub_6f6e30(data_1512450)
LRESULT result = sub_74ac70()
CookieCheckFunction(result)
return result
