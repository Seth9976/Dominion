// 函数: sub_62b450
// 地址: 0x62b450
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0

if (*(arg1 + 0xaf0) s<= 0)
    return 

void* ebx_1 = arg1

do
    int32_t eax_1 = *ebx_1
    int32_t eax_2
    char edx_1
    edx_1:eax_2 = sx.q(eax_1)
    void* var_10_1 = ebx_1
    int32_t ecx_1 = (zx.d(edx_1) + eax_2) s>> 8
    int32_t var_8_2 = eax_1 - (ecx_1 << 8)
    int32_t var_c
    int32_t eax
    
    if (var_8_2 s< 0 || var_8_2 s>= sub_571770(ecx_1, &var_c))
        *(arg1 + 0xaf0) -= 1
        i -= 1
        ebx_1 -= 4
        eax = *(arg1 + (*(arg1 + 0xaf0) << 2))
    else
        eax = *(var_8_2 * 0x698 + var_c + 0x8c)
    
    i += 1
    ebx_1 += 4
    *var_10_1 = eax
while (i s< *(arg1 + 0xaf0))
