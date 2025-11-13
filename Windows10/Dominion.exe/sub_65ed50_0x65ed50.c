// 函数: sub_65ed50
// 地址: 0x65ed50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int128_t xmm2_1

if (*(arg3 + 0x18) == 0)
    xmm2_1 = data_893940
    int32_t var_38
    __builtin_memset(&var_38, 0, 0x14)
    int32_t var_3c
    int128_t var_24
    
    if (arg5 != 0)
    label_65eeec:
        float xmm0_9 = *(arg5 + 0x18)
        xmm0_9 f- 0
        var_3c = arg5[1].d + 1
        int32_t eax_4
        eax_4:1.b = (xmm0_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_9, 0f) ? 1 : 0) << 2
            | (xmm0_9 < 0f ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (not(p_6))
            xmm0_9 = *(arg5 + 0x28)
        
        var_24.d = xmm0_9
        float xmm0_10 = *(arg5 + 0x1c)
        xmm0_10 f- 0
        eax_4:1.b = (xmm0_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2
            | (xmm0_10 < 0f ? 1 : 0)
        bool p_8 = unimplemented  {test ah, 0x44}
        
        if (not(p_8))
            xmm0_10 = *(arg5 + 0x2c)
        
        var_24:4.d = xmm0_10
        float xmm0_11 = *(arg5 + 0x24)
        xmm0_11 f- 0
        eax_4:1.b = (xmm0_11 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_11, 0f) ? 1 : 0) << 2
            | (xmm0_11 < 0f ? 1 : 0)
        bool p_10 = unimplemented  {test ah, 0x44}
        
        if (not(p_10))
            xmm0_11 = arg5[3].d
        
        var_24:8.d = xmm0_11
        float xmm0_12 = arg5[2].d
        xmm0_12 f- 0
        eax_4:1.b = (xmm0_12 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_12, 0f) ? 1 : 0) << 2
            | (xmm0_12 < 0f ? 1 : 0)
        bool p_12 = unimplemented  {test ah, 0x44}
        
        if (not(p_12))
            xmm0_12 = *(arg5 + 0x34)
        
        var_24:0xc.d = xmm0_12
    else
        var_3c = 0
        var_24 = zx.o(0)
    *arg5 = xmm2_1
    arg5[1] = var_3c.o
    __builtin_memset(&arg5[2], 0, 0x1c)
    return 0

float* eax = *arg5
char const* const var_68
int32_t var_64
char const* const var_60
int32_t var_38_1
char* ecx_1

if (eax == 0xffffffff)
    float xmm0_5 = *(arg5 + 0x18)
    xmm0_5 f- 0
    eax:1.b = (xmm0_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, 0f) ? 1 : 0) << 2
        | (xmm0_5 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        var_60 = "FinalizeCurrentLine"
        var_64 = 0x2a1d
        ecx_1 = "lineParams.baselineY == 0"
    label_65ef90:
        var_68 = "C:\x\ax2017\Engine\UI2.cpp"
    label_65ef9a:
        sub_63b870(eax, &data_801800, ecx_1, var_68, var_64, var_60)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    float xmm2_5 = *(arg5 + 0x28)
    xmm2_5 f- 0
    eax:1.b = (xmm2_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_5, 0f) ? 1 : 0) << 2
        | (xmm2_5 < 0f ? 1 : 0)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (not(p_4))
        var_60 = "FinalizeCurrentLine"
        var_64 = 0x2a1e
        ecx_1 = "lineParams.prevBaselineY != 0"
        goto label_65ef90
    
    float xmm0_6 = *(arg5 + 0x2c)
    *(arg5 + 0x1c) = xmm0_6
    *(arg5 + 0x18) = xmm0_6 + xmm2_5 f+ *(arg5 + 0x38)
    xmm2_1 = data_893940
    __builtin_memset(&var_38_1, 0, 0x14)
else
    if (eax s< 0 || eax s>= *(arg3 + 0x18))
    label_65ee6c:
        var_60 = "XDynArray<struct TextEntry>::operator []"
        var_64 = 0xd4
        var_68 = "C:\x\ax2017\Engine\xDynArray.h"
        ecx_1 = "index >= 0 && index < mSize"
        goto label_65ef9a
    
    eax = *(arg3 + 0x14)
    
    if (eax[eax * 0xd + 3] != 0)
        var_60 = "FinalizeCurrentLine"
        var_64 = 0x2a05
        ecx_1 = "layout.entries[lineParams.firstEntryIdx].entryIdxOnLine == 0"
        goto label_65ef90
    
    eax = sub_6b7590(*(arg2 + 0x10))
    int32_t edx = *(arg5 + 4)
    float var_c_1 = eax
    int32_t xmm0_1
    
    if (edx != 0xffffffff)
        if (edx s< 0 || edx s>= *(arg3 + 0x18))
            goto label_65ee6c
        
        int32_t eax_1 = *(arg3 + 0x14)
        int32_t ecx_3 = edx * 0x34
        xmm0_1 = *(ecx_3 + eax_1 + 0x18) f+ *(ecx_3 + eax_1 + 0x10)
    else
        xmm0_1 = (zx.o(0)).d
    
    eax = arg4
    int32_t ebx_1 = 0
    int32_t i = *arg5
    float xmm2_4 = (*eax f- xmm0_1) * var_c_1
    
    if (i s<= edx)
        int32_t edx_1 = i * 0x34
        
        do
            if (edx_1 s< 0)
                goto label_65ee6c
            
            if (i s>= *(arg3 + 0x18))
                goto label_65ee6c
            
            eax = *(arg3 + 0x14) + edx_1
            
            if ((eax[1].b & 2) == 0)
                if (eax[3] != ebx_1)
                    var_60 = "FinalizeCurrentLine"
                    var_64 = 0x2a14
                    ecx_1 = "entry.entryIdxOnLine == i"
                    goto label_65ef90
                
                ebx_1 += 1
                eax[4] = xmm2_4 + eax[4]
            
            i += 1
            edx_1 += 0x34
        while (i s<= *(arg5 + 4))
    
    xmm2_1 = data_893940
    __builtin_memset(&var_38_1, 0, 0x14)
goto label_65eeec
