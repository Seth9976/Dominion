// 函数: sub_708a00
// 地址: 0x708a00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = arg3
void* var_18 = arg2
char* eax = *edi
int32_t ebx
ebx.b = *eax
uint32_t eax_1 = zx.d(ebx.b)
*edi = &eax[1]
int32_t i

if (eax_1 == 1)
    i = *(arg2 + 8)
    *(arg4 * 0x4c + i) = 0x3f800000
else
    i = eax_1 - 2
    
    if (eax_1 == 2)
        arg3.b = eax[1]
        *edi = &eax[2]
        i.b = eax[2]
        *edi = &eax[3]
        arg2.b = eax[3]
        *edi = &eax[4]
        ebx.b = eax[4]
        *edi = &eax[5]
        uint32_t var_8_1 = ((zx.d(arg3.b) << 8 | zx.d(i.b)) << 8 | zx.d(arg2.b)) << 8 | zx.d(ebx.b)
        uint32_t ecx_6
        ecx_6.b = eax[5]
        *edi = &eax[6]
        uint32_t eax_5
        eax_5.b = eax[6]
        *edi = &eax[7]
        arg2.b = eax[7]
        *edi = &eax[8]
        ebx.b = eax[8]
        *edi = &eax[9]
        uint32_t var_c_1 =
            ((zx.d(ecx_6.b) << 8 | zx.d(eax_5.b)) << 8 | zx.d(arg2.b)) << 8 | zx.d(ebx.b)
        uint32_t ecx_13
        ecx_13.b = eax[9]
        *edi = &eax[0xa]
        uint32_t eax_8
        eax_8.b = eax[0xa]
        *edi = &eax[0xb]
        arg2.b = eax[0xb]
        *edi = &eax[0xc]
        ebx.b = eax[0xc]
        *edi = &eax[0xd]
        uint32_t var_10_1 =
            ((zx.d(ecx_13.b) << 8 | zx.d(eax_8.b)) << 8 | zx.d(arg2.b)) << 8 | zx.d(ebx.b)
        uint32_t ecx_20
        ecx_20.b = eax[0xd]
        *edi = &eax[0xe]
        arg2.b = eax[0xe]
        *edi = &eax[0xf]
        ebx.b = eax[0xf]
        *edi = &eax[0x10]
        arg2:1.b = eax[0x10]
        *edi = &eax[0x11]
        float xmm6_3 = (var_10_1 f- var_8_1 f* 2f) * 0.0299999993f
        uint32_t ecx_27 =
            ((zx.d(ecx_20.b) << 8 | zx.d(arg2.b)) << 8 | zx.d(ebx.b)) << 8 | zx.d(arg2:1.b)
        int32_t eax_16 = arg4 * 0x13
        int32_t ecx_29 = *(var_18 + 8)
        float xmm5_3 = (ecx_27 - var_c_1 f* 2f) * 0.0299999993f
        *(ecx_29 + (eax_16 << 2)) = 0x40000000
        i = eax_16 + 1
        float xmm3_2 = ((var_8_1 f- var_10_1) * 3f + 1f) * 0.00600000005f
        float xmm4_4 = ((var_c_1 f- ecx_27) * 3f + 1f) * 0.00600000005f
        float xmm4_7 = xmm6_3 + xmm6_3 + xmm3_2
        float xmm7_4 = var_8_1 f* 0.300000012f + xmm6_3 + xmm3_2 * 0.166666672f
        float xmm3_6 = var_c_1 f* 0.300000012f + xmm5_3 + xmm4_4 * 0.166666672f
        float xmm1_1 = xmm7_4
        float xmm2_3 = xmm3_6
        
        if (i s< eax_16 + 0x12)
            float xmm0_16 = xmm5_3 + xmm5_3 + xmm4_4
            
            do
                *(ecx_29 + (i << 2)) = xmm1_1
                xmm7_4 = xmm7_4 + xmm4_7
                xmm3_6 = xmm3_6 + xmm0_16
                *(ecx_29 + (i << 2) + 4) = xmm2_3
                i += 2
                xmm4_7 = xmm4_7 + xmm3_2
                xmm0_16 = xmm0_16 + xmm4_4
                xmm1_1 = xmm1_1 + xmm7_4
                xmm2_3 = xmm2_3 + xmm3_6
            while (i s< eax_16 + 0x12)

return i
