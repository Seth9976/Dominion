// 函数: sub_4f1890
// 地址: 0x4f1890
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm0 = *(*(arg1 + 0xb4) * 0x84 + 0x1777650)
xmm0 - 0f
void* result
result:1.b =
    (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    return result

int32_t eax = *(arg1 + 0xd4)
int32_t eax_1 = eax * 4

if (mulu.dp.d(eax, 4) u>> 0x20 != 0)
    eax_1 = 0xffffffff

int32_t var_20_1 = eax_1
int32_t eax_2 = sub_7597a2()
int32_t edi_1 = 0
float var_8_1 = 0f

if (*(arg1 + 0xd4) s> 0)
    int32_t var_c_1 = 0
    int32_t eax_5
    float xmm0_5
    
    do
        int32_t ecx
        float xmm0_1
        ecx, xmm0_1 = sub_4ec7c0()
        int32_t var_20_2 = ecx
        tgammaf(xmm0_1 f* *(*(arg1 + 0xb4) * 0x84 + 0x1777654) + 9.99999972e-10f)
        float var_10_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xc], st0})
        unimplemented  {fstp dword [ebp-0xc], st0}
        int16_t top = top + 1
        float xmm0_4 = var_10_1
        *(eax_2 + (edi_1 << 2)) = xmm0_4
        
        if (not(-100f f<= *(var_c_1 + *(arg1 + 0xd0) + 0x3c)))
            xmm0_4 = (zx.o(0)).d
            *(eax_2 + (edi_1 << 2)) = 0
        
        xmm0_5 = xmm0_4 + var_8_1
        eax_5 = *(arg1 + 0xd4)
        edi_1 += 1
        var_c_1 += 0x54
        var_8_1 = xmm0_5
    while (edi_1 s< eax_5)
    
    int32_t i = 0
    
    if (eax_5 s> 0)
        int32_t edx_1 = 0
        
        do
            float xmm0_6 = *(eax_2 + (i << 2))
            edx_1 += 0x54
            i += 1
            *(edx_1 + *(arg1 + 0xd0) - 0x14) = xmm0_6 / xmm0_5
        while (i s< *(arg1 + 0xd4))

return sub_7597b9(eax_2)
