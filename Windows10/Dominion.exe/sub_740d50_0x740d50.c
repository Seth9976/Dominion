// 函数: sub_740d50
// 地址: 0x740d50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1014)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = data_147ef94
int32_t edi = 0
int32_t var_1010 = 0
int32_t var_100c[0x3fc]

if (eax_2 s> 0)
    while (true)
        int32_t* ecx_1 = data_147df90
        int32_t var_1018_1
        int32_t* ecx_5
        int32_t ebx
        void* ebx_2
        
        if (ecx_1[1] == 0x20)
            void* eax_3
            int32_t ecx_2
            eax_3, ecx_2 = sub_5af880(ecx_1)
            ebx = *(eax_3 + 8)
            int32_t var_18_1 = ecx_2
            int32_t* eax_4 = sub_69dd00(data_1777518, 0)
            sub_6fb630(eax_4, eax_4, eax_3, ebx)
            ecx_5 = data_147df90
            eax_2 = edi << 2
            var_1018_1 = eax_2
            ebx_2 = ebx * 0xe0 + *eax_3
        
        char const* const var_1c_3
        int32_t var_18_4
        char const* const var_14_4
        char* ecx_11
        
        if (ecx_1[1] != 0x20 || ecx_5[1] != 0x20)
            var_14_4 = "FabDefGet"
            var_18_4 = 0xeb
            ecx_11 = "ptr->assetType == ASSET_TYPE_FAB"
            var_1c_3 = "C:\x\ax2017\Engine\FabDef.cpp"
        else
            void* edx_3 = *(eax_2 + &data_147df94) * 0xe0 + *sub_5af880(ecx_5)
            eax_2 = *(ebx_2 + 8)
            __builtin_memcpy(ebx_2, edx_3, 0xe0)
            *(ebx_2 + 8) = eax_2
            char* edi_2 = *(edx_3 + 8)
            
            if (edi_2 == 0)
                var_14_4 = "DefDeepCopyString"
                var_18_4 = 0x25b
                var_1c_3 = "C:\x\ax2017\Engine\Definition.cpp"
                ecx_11 = "pExistingString"
            else
                char* eax_6 = edi_2
                void* edx_4 = &eax_6[1]
                char i
                
                do
                    i = *eax_6
                    eax_6 = &eax_6[1]
                while (i != 0)
                int32_t eax_8 = sub_687730(eax_6 - edx_4 + 1)
                *(ebx_2 + 8) = eax_8
                memcpy(eax_8, edi_2, eax_6 - edx_4 + 1)
                edi = var_1010 + 1
                var_1010 = edi
                *(&var_100c + var_1018_1) = ebx
                eax_2 = data_147ef94
                
                if (edi s>= eax_2)
                    break
                
                continue
        
        sub_63b870(eax_2, &data_801800, ecx_11, var_1c_3, var_18_4, var_14_4)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

memcpy(&data_147df94, &var_100c, eax_2 << 2)
sub_6f6b00(data_147df90)
uint32_t result = sub_73e3e0()
CookieCheckFunction(result)
return result
