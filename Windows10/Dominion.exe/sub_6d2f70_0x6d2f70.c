// 函数: sub_6d2f70
// 地址: 0x6d2f70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm1 = *(arg1 + 8)
float temp0 = *(arg1 + 0x10)
xmm1 - temp0
int32_t eax
eax:1.b = (xmm1 == temp0 ? 1 : 0) << 6 | (is_unordered.d(xmm1, temp0) ? 1 : 0) << 2
    | (xmm1 < temp0 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
bool p_3

if (not(p_1))
    float xmm0_1 = *(arg1 + 0xc)
    float temp1_1 = *(arg1 + 0x14)
    xmm0_1 - temp1_1
    eax:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
        | (xmm0_1 < temp1_1 ? 1 : 0)
    p_3 = unimplemented  {test ah, 0x44}

if (p_1 || p_3)
    int32_t edi_1 = int.d(fconvert.t(*(arg1 + 0xc)))
    int32_t edx_1 = int.d(xmm1)
    
    if (*arg1 != 0)
        void* eax_1 = sub_6d2e70(eax, edx_1, arg1, edi_1)
        *(arg1 + 0x2c) += 1
        return eax_1
    
    int32_t ecx_1 = *(arg1 + 0x2c) * 7
    eax = *(arg1 + 0x28)
    *(eax + (ecx_1 << 1)) = edx_1.w
    *(arg1 + 0x2c) += 1
    *(eax + (ecx_1 << 1) + 2) = edi_1.w
    *(eax + (ecx_1 << 1) + 0xc) = 2
    *(eax + (ecx_1 << 1) + 4) = 0
    *(eax + (ecx_1 << 1) + 8) = 0

return eax
