// 函数: sub_5a1c20
// 地址: 0x5a1c20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
void* esi = *arg3
void* edi = *arg2

if (esi != 0 && edi != 0)
    float* ebx_1 = *(esi + 8)
    float* edx = *(edi + 8)
    
    if (ebx_1 != edx)
        float xmm6_1 = *(esi + 0x1c)
        float xmm5_1 = *(edi + 0x20)
        float xmm7_1 = *(edi + 0x1c)
        float xmm3_3 = xmm6_1 * xmm5_1 - *(esi + 0x20) * xmm7_1
        
        if (xmm3_3 <= -1.00000001e-10f || not(1.00000001e-10f > xmm3_3))
            float xmm1_1 = *(edi + 0x24)
            float xmm2_1 = *(esi + 0x24)
            float xmm0_5 = ebx_1[1]
            float xmm4_4 = (xmm2_1 * xmm5_1 - xmm1_1 f* *(esi + 0x20)) / xmm3_3
            arg4[1] = (xmm1_1 * xmm6_1 - xmm2_1 * xmm7_1) / xmm3_3
            float xmm1_5 = edx[1]
            xmm0_5 - xmm1_5
            *arg4 = xmm4_4
            float* eax_1
            eax_1:1.b = (xmm0_5 == xmm1_5 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_5, xmm1_5) ? 1 : 0) << 2 | (xmm0_5 < xmm1_5 ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            bool cond:0_1
            
            if (p_2)
                cond:0_1 = xmm1_5 > xmm0_5
            else
                cond:0_1 = *edx > *ebx_1
            
            int32_t eax_2
            eax_2.b = cond:0_1
            
            if (eax_2 == 0)
                arg3 = arg2
            
            if (eax_2 == 0)
                esi = edi
            
            int32_t edx_1 = arg3[6]
            int32_t ecx
            ecx.b = xmm4_4 f>= **(esi + 8)
            bool cond:2_1
            
            if (ecx == 0)
                cond:2_1 = edx_1 == 1
            else
                cond:2_1 = edx_1 == 0
            
            if (not(cond:2_1))
                return 1

return 0
