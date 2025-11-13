// 函数: sub_4d5d30
// 地址: 0x4d5d30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t ecx = arg1[2]
void* edx

if (arg1[4] + 4 s<= ecx)
    edx = &arg1[4]
else
    uint32_t eax_2 = ecx * 2
    uint32_t ecx_1 = 0x1000
    
    if (eax_2 s> 0x1000)
        ecx_1 = eax_2
    
    arg1[2] = ecx_1
    int32_t eax_3 = sub_687730(ecx_1)
    memmove(eax_3, *arg1, arg1[4])
    int32_t eax_4 = *arg1
    edx = &arg1[4]
    
    if (eax_4 != 0)
        _aligned_free(eax_4)
        edx = &arg1[4]
    
    *arg1 = eax_3

*(arg1[4] + *arg1) = arg2
*edx += 4
int32_t result = *edx
arg1[3] = result
return result
