// 函数: sub_5a1a90
// 地址: 0x5a1a90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = *(arg1 + 8)
int32_t ecx_1 = arg2 s>> 1
void* ebx = *(edi + (arg2 << 2))

while (arg2 s> 1)
    void* esi_1 = *(edi + (ecx_1 << 2))
    float xmm0_1 = *(ebx + 0x14)
    float xmm1_1 = *(esi_1 + 0x14)
    xmm1_1 - xmm0_1
    int32_t eax
    eax:1.b = (xmm1_1 == xmm0_1 ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, xmm0_1) ? 1 : 0) << 2
        | (xmm1_1 < xmm0_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    bool cond:0_1
    
    if (p_2)
        cond:0_1 = xmm1_1 > xmm0_1
    else
        cond:0_1 = *(esi_1 + 0xc) f> *(ebx + 0xc)
    
    eax.b = cond:0_1
    
    if (eax == 0)
        break
    
    *(edi + (arg2 << 2)) = esi_1
    *(esi_1 + 0x1c) = arg2
    arg2 = ecx_1
    ecx_1 s>>= 1

*(ebx + 0x1c) = arg2
*(edi + (arg2 << 2)) = ebx
return arg2
