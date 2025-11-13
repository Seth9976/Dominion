// 函数: sub_5869d0
// 地址: 0x5869d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3

if (arg7 == 0)
    return 0

int32_t edi = arg8
int32_t eax_3 = arg9

if (((arg13 | arg14.b) & 1) == 0)
    if (arg7 == 1 && eax_3 == arg7)
        return arg7
    
    int32_t* edx = arg6
    uint32_t esi_2 = zx.d((*edx).w)
    
    if (esi_2 u>= 0x320)
        sub_591930()
        arg3 = var_8
        edx = arg6
    
    int32_t esi_3 = 1
    int32_t eax_6 = arg3[esi_2 * 0x19 + 0x693]
    
    if (arg7 s> 1)
        do
            uint32_t edi_1 = zx.d(edx[esi_3].w)
            
            if (edi_1 u>= 0x320)
                sub_591930()
                arg3 = var_8
                edx = arg6
            
            if (arg3[edi_1 * 0x19 + 0x693] != eax_6)
                eax_3 = arg9
                edi = arg8
                goto label_586a8d
            
            esi_3 += 1
        while (esi_3 s< arg7)
        
        edi = arg8
    
    eax_3 = arg9
    
    if (eax_3 == edi)
        return eax_3
    
label_586a8d:
    
    if ((arg13 & 4) == 0 && arg7 == eax_3)
        return eax_3

int32_t esi_4

if (arg4 != arg3[0x673])
    esi_4 = arg4
else
    esi_4 = arg3[0x674]

return sub_623300(eax_3, arg2, arg3, arg4, esi_4, arg5, arg6, arg7, edi, eax_3, arg10, arg11, 
    arg12, arg13, arg14)
