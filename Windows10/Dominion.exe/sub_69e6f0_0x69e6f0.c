// 函数: sub_69e6f0
// 地址: 0x69e6f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
*(arg3 + 0x325) = 0
int32_t var_110
__builtin_memcpy(&var_110, arg3 + 0x110, 0x100)
*(arg3 + 0x324) = 0
__builtin_memcpy(arg3 + 0x110, arg6, 0x100)
int32_t ecx = *arg7
*(arg3 + 0x314) = arg7[1]
*(arg3 + 0x310) = ecx
*(arg3 + 0x318) = *arg8
*(arg3 + 0x320) = arg8[1].d
void* eax_7 = (**(arg3 + 0x210))()
void* edi_1

if (eax_7 != sub_4ab040)
    edi_1 = arg3 + 0x110
else
    eax_7 = eax_7(arg3 + 0x210, &data_800190)
    edi_1 = arg3 + 0x110
    
    if (eax_7.b != 0)
        int32_t eax_9 = (**edi_1)()
        eax_7 = (*var_110)()
        
        if (eax_9 != eax_7)
            *(arg3 + 0x324) = 1
        else
            eax_7 = eax_9(edi_1, &var_110)
            
            if (eax_7.b == 0)
                *(arg3 + 0x324) = 1

if (arg2 == 0)
    void* ecx_4
    void* esi_3
    
    if (arg4 == 0)
        eax_7 = arg3 + 4
        void* var_11c_1 = eax_7
        ecx_4 = eax_7
        
        if (*(arg3 + 4) != 0)
            int32_t eax_11 = (*var_110)()
            eax_7 = (**(arg3 + 0x210))()
            
            if (eax_11 == eax_7)
                eax_7 = eax_11(&var_110, arg3 + 0x210)
                ecx_4 = arg3 + 4
                
                if (eax_7.b != 0)
                    esi_3 = &var_110
                    eax_7 = arg5 - *(arg3 + 8)
                    
                    if (_mm_cvtepi32_ps(zx.o(eax_7)) f< 500f)
                        goto label_69e80a
                    
                    *(arg3 + 0x328) = 1
                    __builtin_memcpy(edi_1, esi_3, 0x100)
                    ecx_4 = arg3 + 4
            else
                ecx_4 = var_11c_1
    else
        *(arg3 + 0x325) = 1
        edi_1 = arg3 + 0x10
        *(arg3 + 0xc) = 0
        esi_3 = arg3 + 0x110
    label_69e80a:
        *(arg3 + 0x327) = 1
        __builtin_memcpy(edi_1, esi_3, 0x100)
        ecx_4 = arg3 + 4
    *ecx_4 = 0
    __builtin_memcpy(arg3 + 0x210, &data_800190, 0x100)
    CookieCheckFunction(eax_7)
    return eax_7

if (*(arg3 + 4) != 0)
    uint32_t eax_19 = arg5 - *(arg3 + 8)
    
    if (not(_mm_cvtepi32_ps(zx.o(eax_19)) f< 500f))
        int32_t eax_21 = (*var_110)()
        eax_19 = (**(arg3 + 0x210))()
        
        if (eax_21 == eax_19)
            eax_19 = eax_21(&var_110, arg3 + 0x210)
            
            if (eax_19.b != 0)
                *(arg3 + 0x326) = 1
    
    CookieCheckFunction(eax_19)
    return eax_19

*(arg3 + 8) = arg5
int32_t eax_14 = arg5 - *(arg3 + 0xc)
*(arg3 + 4) = 1
__builtin_memcpy(arg3 + 0x210, edi_1, 0x100)
int32_t eax_16 = (**(arg3 + 0x110))()
int32_t eax_17

if (eax_16 != (**(arg3 + 0x10))())
    eax_17.b = 0
else if (eax_16(arg3 + 0x110, arg3 + 0x10).b == 0)
    eax_17.b = 0
else if (0.400000006f f<= _mm_cvtepi32_ps(zx.o(eax_14)))
    eax_17.b = 0
else
    eax_17.b = 1

*(arg3 + 0x329) = eax_17.b
*(arg3 + 0x325) = 1
*(arg3 + 0xc) = arg5
__builtin_memcpy(arg3 + 0x10, arg3 + 0x110, 0x100)
CookieCheckFunction(arg5)
return arg5
