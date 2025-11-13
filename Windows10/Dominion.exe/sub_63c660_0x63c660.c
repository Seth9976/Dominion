// 函数: sub_63c660
// 地址: 0x63c660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t* edi = arg7
*arg4 = arg2
*edi = arg5
int16_t* eax_1 = *arg4

if (eax_1 != arg3 && arg5 != arg6)
    do
        uint32_t ecx_3 = zx.d(*eax_1)
        uint32_t eax_2 = ecx_3
        arg5:3.b = 0
        uint32_t edx_2 = zx.d(*arg1)
        
        if (1 u< edx_2.w)
            if (ecx_3.w + 0x2400 u> 0x3ff)
                return 2
            
            eax_2 = (ecx_3 - 0xdc00) | edx_2 << 0xa
        else if (ecx_3.w + 0x2800 u<= 0x3ff)
            arg5:3.b = 1
            eax_2 = (eax_2 - 0xd7c0) << 0xa
        
        int32_t j_1
        
        if (eax_2 u< 0x80)
            j_1 = 0
            edx_2.b = eax_2.b
            arg7 = nullptr
        else if (eax_2 u< 0x800)
            j_1 = 1
            edx_2.b = (eax_2 u>> 6).b | 0xc0
            arg7 = 1
        else if (eax_2 u>= 0x10000)
            edx_2.b = (eax_2 u>> 0x12).b | 0xf0
            arg7 = 3
            j_1 = (zx.d(arg5:3.b) ^ 1) * 2
        else
            j_1 = 2
            edx_2.b = (eax_2 u>> 0xc).b | 0xe0
            arg7 = 2
        
        int32_t j = j_1 + 1
        
        if (arg6 - *edi s< j)
            break
        
        *arg4 += 2
        int32_t* ecx_10
        
        if (arg5:3.b == 0)
            ecx_10 = arg7
        
        uint8_t* ebx_3
        
        if (arg5:3.b != 0 || ecx_10 u< 3)
            j = j_1
            **edi = edx_2.b
            *edi += 1
            ecx_10 = arg7
            ebx_3 = *edi
        else
            ebx_3 = *edi
        
        if (j s> 0)
            int32_t ecx_14 = ecx_10 * 6
            
            do
                ecx_14 -= 6
                j -= 1
                *ebx_3 = ((eax_2 u>> ecx_14.b).b & 0x3f) | 0x80
                *edi += 1
                ebx_3 = *edi
            while (j s> 0)
        
        uint16_t ecx_15 = 1
        
        if (arg5:3.b != 0)
            ecx_15 = (eax_2 u>> 0xa).w
        
        *arg1 = ecx_15
        eax_1 = *arg4
        
        if (eax_1 == arg3)
            break
    while (*edi != arg6)

int32_t result
result.b = arg2 == *arg4
return result
