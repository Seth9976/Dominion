// 函数: sub_6b8630
// 地址: 0x6b8630
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg2[2]

if (esi[2] == 1)
    int32_t* result = *esi
    float xmm0_1 = *result
    float temp0_1 = result[1]
    xmm0_1 - temp0_1
    result:1.b = (xmm0_1 == temp0_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp0_1) ? 1 : 0) << 2
        | (xmm0_1 < temp0_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_2))
        return result

int32_t ecx_2 = (*(arg1 + 0x2c) + *arg2) * *arg2
int32_t edx_2 = (ecx_2 << 0xf) + not.d(ecx_2)
int32_t ecx_4 = (edx_2 u>> 0xc ^ edx_2) * 5
int32_t eax_7 = (ecx_4 u>> 4 ^ ecx_4) * 0x809
return sub_706bb0(esi, *(arg1 + 0x2f4), *(arg1 + 0x2e8), 
    (((eax_7 u>> 0x10 ^ eax_7) & 0x7fffff) | 0x3f800000) - 1f)
