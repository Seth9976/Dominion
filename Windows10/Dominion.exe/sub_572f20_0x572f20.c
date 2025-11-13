// 函数: sub_572f20
// 地址: 0x572f20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
void* eax_1 = sub_571b30(arg2, arg3)
int32_t ecx_1 = 0
void* edx_1 = eax_1 + 0xa8

while (true)
    int32_t esi_1 = *edx_1
    
    if (esi_1 != 0)
        if (esi_1 == 0xf)
            break
        
        ecx_1 += 1
        edx_1 += 0xb4
        
        if (ecx_1 s< 8)
            continue
    
    eax_1.b = 0
    return eax_1

*arg4 = *(ecx_1 * 0xb4 + eax_1 + 0xbc)
int32_t* eax_3
eax_3.b = 1
return eax_3
