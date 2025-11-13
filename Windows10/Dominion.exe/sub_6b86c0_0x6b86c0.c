// 函数: sub_6b86c0
// 地址: 0x6b86c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg2[2]
float xmm0_1
bool p_2

if (esi[2] == 1)
    int32_t* eax_1 = *esi
    xmm0_1 = *eax_1
    float temp0_1 = eax_1[1]
    xmm0_1 - temp0_1
    eax_1:1.b = (xmm0_1 == temp0_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp0_1) ? 1 : 0) << 2
        | (xmm0_1 < temp0_1 ? 1 : 0)
    p_2 = unimplemented  {test ah, 0x44}

if (esi[2] != 1 || p_2)
    int32_t ecx_2 = (*(arg1 + 0x2c) + *arg2) * *arg2
    int32_t edx_2 = (ecx_2 << 0xf) + not.d(ecx_2)
    int32_t ecx_4 = (edx_2 u>> 0xc ^ edx_2) * 5
    int32_t eax_8 = (ecx_4 u>> 4 ^ ecx_4) * 0x809
    xmm0_1 = sub_706bb0(esi, *(arg1 + 0x2f4), *(arg1 + 0x2e8), 
        (((eax_8 u>> 0x10 ^ eax_8) & 0x7fffff) | 0x3f800000) - 1f)

if (0 f<= xmm0_1)
    return int.d(xmm0_1 + 0.5f)

return int.d(xmm0_1 - 0.5f)
