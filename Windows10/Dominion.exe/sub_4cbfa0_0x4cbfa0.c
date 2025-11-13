// 函数: sub_4cbfa0
// 地址: 0x4cbfa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_c = arg1
int32_t result = *arg1

if (result == 3)
    arg1[1]
    return result

int32_t eax_1 = sub_571bc0(result, &var_c)
int32_t* ebx = var_c
int32_t edx_2 = 0xffffffff
int32_t ecx = 0

if (eax_1 s> 0)
    int32_t* edx_3 = ebx
    
    while (*edx_3 != arg1[1])
        ecx += 1
        edx_3 = &edx_3[0x11]
        
        if (ecx s>= eax_1)
            return 3
    
    edx_2 = ecx

int32_t ecx_1 = edx_2 - 1

if (ecx_1 s>= 0)
    void* eax_7 = &ebx[ecx_1 * 0x11 + 1]
    
    while (true)
        int32_t edx_5 = *eax_7
        
        if (edx_5 != 3 && edx_5 != 7)
            break
        
        eax_7 -= 0x44
        int32_t temp0_1 = ecx_1
        ecx_1 -= 1
        
        if (temp0_1 - 1 s< 0)
            return 3
    
    if (ecx_1 != 0xffffffff)
        ebx[ecx_1 * 0x11]
        return *arg1

return 3
