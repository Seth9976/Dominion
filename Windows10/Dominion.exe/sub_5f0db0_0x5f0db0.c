// 函数: sub_5f0db0
// 地址: 0x5f0db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = data_b80b58
int32_t ecx = 0
int32_t var_8 = 0

if (result != arg5)
    *arg3 = 6
    arg3[0x18] = 0
    arg3[0xc] = 1
    void* eax = sub_5cb070()
    
    if (eax != 0)
        int32_t ecx_1 = *(eax + 0x10)
        
        if (ecx_1 == 0xa || ecx_1 == 9 || ecx_1 == 8)
            if (*arg3 != 0xb)
                arg3[0xc] = 3
        else if (ecx_1 != 1 && ecx_1 != 0x19 && ecx_1 != 6 && ecx_1 != 7
                && ((ecx_1 != 0x13 && ecx_1 != 0x14) || data_b80988 != data_b80990)
                && (ecx_1 != 0x16 || *arg3 != *(eax + 0x18)))
            arg3[0xc] = 3
    
    result = data_b8097c
    
    if (result s< data_b80b58)
        arg3[0xc] = 3
    
    ecx = 1
    var_8 = 1

int32_t i_1 = arg4

if (i_1 s> 0)
    void* esi_2 = &arg3[ecx + 0xc]
    int32_t* edi_2 = arg2 + (i_1 << 2) - 4
    var_8 = ecx + i_1
    int32_t i
    
    do
        sub_5f0c80(esi_2 + 0x30, esi_2, esi_2 - 0x30, esi_2 + 0x30, *edi_2, arg6)
        int32_t edx_2 = data_b8097c
        result = 0
        
        if (edx_2 s> 0)
            do
                if (*((result << 2) + &data_b7fcfc) == *edi_2)
                    *esi_2 = 2
                    break
                
                result += 1
            while (result s< edx_2)
        
        esi_2 += 4
        edi_2 -= 4
        i = i_1
        i_1 -= 1
    while (i != 1)

if (var_8 s< 0xc)
    int32_t edx_4 = var_8 << 2
    result = 0
    __builtin_memset(edx_4 + 0x30 + arg3, 0, (0x30 - edx_4) u>> 2 << 2)

return result
