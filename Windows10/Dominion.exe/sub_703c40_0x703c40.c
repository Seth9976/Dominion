// 函数: sub_703c40
// 地址: 0x703c40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* ebx = arg2
void* var_d8 = ebx
int32_t var_d4 = 0
(*__glewGetProgramiv)(arg3, 0x8b86, &var_d4)
int32_t ecx = var_d4
*(arg4 + 0x100) = 0
*(ebx + 0x18) = 0
int32_t count = ecx * 0xc
int32_t esi_1

if (count != 0)
    esi_1 = sub_687730(count)
    memset(esi_1, 0, count)
    ecx = var_d4
else
    esi_1 = 0

uint32_t result = 0
*(ebx + 0x20) = esi_1
int32_t var_e0 = 0
uint32_t result_1 = 0

if (ecx s> 0)
    do
        int32_t var_dc = 0
        int32_t var_ec = 0
        char var_d0[0x63]
        (*__glewGetActiveUniform)(arg3, result, 0x64, 0, &var_dc, &var_ec, &var_d0)
        int32_t eax_6 = 0
        char i
        
        do
            i = var_d0[eax_6]
            eax_6 += 1
            void var_6d
            *(&var_6d + eax_6) = i
        while (i != 0)
        void _Str2
        char* eax_7 = strchr(&_Str2, 0x5b)
        
        if (eax_7 != 0)
            *eax_7 = 0
        
        int32_t i_1 = 0
        
        if (data_8ce7c4 s> 0)
            int32_t edi_1 = 0
            
            do
                void* ebx_1 = data_8ce7c0
                int32_t eax_8 = _stricmp(*(ebx_1 + edi_1 + 4), &_Str2)
                
                if (eax_8 == 0)
                    int32_t edx = *(ebx_1 + edi_1)
                    
                    if (edx == 0xffffffff)
                        goto label_703d8b
                    
                    int32_t var_104_5
                    char const* const var_100_7
                    char* ecx_7
                    
                    if (edx s< 0 || edx s>= data_8ce7cc)
                        var_100_7 = "AttribTagGetField"
                        var_104_5 = 0x8b
                        ecx_7 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
                    label_703eb0:
                        sub_63b870(eax_8, &data_801800, ecx_7, "C:\x\ax2017\Engine\AttribMap.cpp", 
                            var_104_5, var_100_7)
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    eax_8 = *(data_8ce7c8 + (edx << 2))
                    void* edi_2 = *(eax_8 + 0xc)
                    
                    if (edi_2 == 0)
                        var_100_7 = "AttribTagGetDefMap"
                        var_104_5 = 0x1fe
                        ecx_7 = "pAttribField->pDefMap"
                        goto label_703eb0
                    
                    ebx = var_d8
                    int32_t ecx_4 = *(ebx + 0x18) * 3
                    int32_t eax_12 = *(ebx + 0x20)
                    *(eax_12 + (ecx_4 << 2) + 8) = edx
                    int32_t* esi_2 = eax_12 + (ecx_4 << 2)
                    esi_2[1] = var_dc
                    
                    if (*(edi_2 + 0x10) == 0xf)
                        esi_2[1] = var_e0
                        var_e0 += 1
                    
                    *esi_2 = (*__glewGetUniformLocation)(arg3, &var_d0)
                    *(ebx + 0x18) += 1
                    int32_t ecx_6 = esi_2[1] + *esi_2
                    int32_t eax_18 = *(arg4 + 0x100)
                    
                    if (eax_18 s<= ecx_6)
                        eax_18 = ecx_6
                    
                    *(arg4 + 0x100) = eax_18
                    goto label_703da8
                
                i_1 += 1
                edi_1 += 0x3c
            while (i_1 s< data_8ce7c4)
            
        label_703d8b:
            ebx = var_d8
        
        void* var_100_4 = &_Str2
        sub_63b5f0("Unknown shader constant '%s'")
    label_703da8:
        result = result_1 + 1
        result_1 = result
    while (result s< var_d4)

if (*(ebx + 0x18) == 0)
    result = *(ebx + 0x20)
    
    if (result != 0)
        result = _aligned_free(result)
    
    *(ebx + 0x20) = 0

CookieCheckFunction(result)
return result
