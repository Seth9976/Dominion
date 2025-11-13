// 函数: sub_4f1230
// 地址: 0x4f1230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t var_c = eax_1
uint32_t var_d6c = arg2
uint32_t var_d70 = arg3
void var_d68
int32_t var_cfc

if ((*(arg4 + 0x44) & 1) != 0)
    __builtin_memcpy(&var_d68, arg4, 0xd18)
    var_cfc = 0
    eax_1 = sub_4efcf0(&var_d68, arg2, var_d70, &var_d68)
    arg3 = var_d70
    arg2 = var_d6c

if (*(arg4 + 0x5c) != 1)
    int32_t edi = *(arg4 + 0x6c)
    int32_t var_d90
    char const* const var_d8c_4
    char* ecx_6
    
    if (edi s<= 0)
        var_d8c_4 = "FillNodeMany"
        var_d90 = 0xf38
        ecx_6 = "yld.numChoices > 0"
    label_4f14b8:
        sub_63b870(eax_1, &data_801800, ecx_6, "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 
            var_d90, var_d8c_4)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t eax_7 = *(arg4 + 0x70) * 0x64
    eax_1 = *(eax_7 + arg3 + 0x1a70)
    int32_t esi_5 = 1
    uint32_t var_d7c_1 = eax_1
    
    if (edi s> 1)
        int32_t* edi_1 = arg4 + 0x74
        
        while (true)
            eax_1 = *edi_1 * 0x64
            arg2 = var_d6c
            
            if (*(eax_1 + arg3 + 0x1a4c) == *(eax_7 + arg3 + 0x1a4c))
                arg2 = var_d6c
                
                if (*(eax_1 + arg3 + 0x1a50) == *(eax_7 + arg3 + 0x1a50))
                    arg2 = var_d6c
                    
                    if (*(eax_1 + arg3 + 0x1a70) == var_d7c_1)
                        esi_5 += 1
                        edi_1 = &edi_1[1]
                        
                        if (esi_5 s>= *(arg4 + 0x6c))
                            goto label_4f13e4
                        
                        continue
            
            if (*(arg4 + 0x5c) s>= 0x200)
                var_d8c_4 = "FillNodeMany"
                var_d90 = 0xf4f
                ecx_6 = "yld.maxChoices < 64 * 8"
                break
            
            int64_t var_50
            int128_t* var_d8c_6 = &var_50
            int32_t var_d90_1 = 0
            __builtin_memset(&var_50, 0, 0x40)
            uint32_t eax_10 = sub_4f0f60(&var_50, arg2, arg3, arg4, var_d90_1, var_d8c_6)
            CookieCheckFunction(eax_10)
            return eax_10
        
        goto label_4f14b8
    
label_4f13e4:
    __builtin_memcpy(&var_d68, arg4, 0xd18)
    int32_t var_d0c
    int32_t ecx_7 = var_d0c
    int32_t i_2
    int32_t i = i_2
    
    if (ecx_7 s> var_cfc)
        ecx_7 = var_cfc
    
    for (; i s<= ecx_7; i += 1)
        int32_t i_3 = i
        eax_1 = sub_4efcf0(&var_d68, arg2, var_d70, &var_d68)
        arg2 = var_d6c
else
    eax_1 = sub_5939a0(&var_d68, arg4)
    int32_t i_1 = 0
    int32_t var_cfc_1 = 1
    
    if (*(arg4 + 0x6c) s> 0)
        void* esi_2 = arg4 + 0x70
        
        do
            int32_t var_cf8_1 = *esi_2
            eax_1 = sub_4efcf0(&var_d68, var_d6c, var_d70, &var_d68)
            i_1 += 1
            esi_2 += 4
        while (i_1 s< *(arg4 + 0x6c))
    
    if (*(arg4 + 0x60) == 0)
        int32_t var_cfc_2 = 0
        uint32_t eax_6 = sub_4efcf0(&var_d68, var_d6c, var_d70, &var_d68)
        CookieCheckFunction(eax_6)
        return eax_6

CookieCheckFunction(eax_1)
return eax_1
