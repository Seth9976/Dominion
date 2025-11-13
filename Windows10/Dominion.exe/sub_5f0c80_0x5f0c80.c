// 函数: sub_5f0c80
// 地址: 0x5f0c80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3

if (arg5 == 0)
    *arg2 = arg5
    return arg5

*arg3 = arg5
*arg4 = arg6
*arg2 = 1
void* eax_2 = sub_5cb070()
void* edx = eax_2

if (edx != 0)
    int32_t ecx_2 = *(edx + 0x10)
    
    if (ecx_2 == 0xa || ecx_2 == 9 || ecx_2 == 8)
        if (*arg3 != 0xb)
            *arg2 = 3
    else if (ecx_2 != 1 && ecx_2 != 0x19 && ecx_2 != 6 && ecx_2 != 7)
        if (ecx_2 == 0x13 || ecx_2 == 0x14)
            eax_2 = data_b80988
        
        if ((ecx_2 != 0x13 && ecx_2 != 0x14) || eax_2 != data_b80990)
            if (ecx_2 != 0x16)
                *arg2 = 3
            else
                eax_2 = *arg3
                
                if (eax_2 == *(edx + 0x18))
                    return eax_2
                
                *arg2 = 3

return eax_2
