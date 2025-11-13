// 函数: sub_65c8b0
// 地址: 0x65c8b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t* var_8 = __security_cookie ^ &__saved_ebp
float xmm0 = *(arg1 + 0x1680)
int32_t* ebx = *(arg1 + 0x1478)
xmm0 f- 0
int32_t* result
result:1.b =
    (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    int32_t ecx = *(arg1 + 0x13a4)
    
    if (ebx != 0)
        if (ecx != 0)
            goto label_65c916
        
        result = sub_6a8390(ebx, *(arg1 + 0x1488))
    label_65c9a6:
        char* edx_4 = *(arg1 + 0x1498)
        *(arg1 + 0x13a4) = result
        
        if (edx_4 != 0 && *edx_4 != 0)
            int32_t var_50_1 = *(arg1 + 0x1480)
            sub_6a8520(result, edx_4, result)
            sub_63d8d0(arg1 + 0x1374, *(arg1 + 0x1498))
            result = *(arg1 + 0x1480)
            *(arg1 + 0x137c) = result
    else if (ecx != 0)
    label_65c916:
        result = sub_6a82e0(ecx)
        
        if (ebx == 0)
            int32_t* result_1 = result
            sub_7112e0(result_1[2])
            result = sub_713890(result_1[1])
            int32_t edx_2 = data_caf778
            data_caf778 = zx.d(result_1[5].w)
            result_1[5] = edx_2
            data_caf77c -= 1
            *(arg1 + 0x13a4) = ebx
        else if (ebx != *result)
            char* ebx_1 = *(arg1 + 0x1488)
            uint32_t eax_1 = sub_6a82e0(*(arg1 + 0x13a4))
            sub_7112e0(*(eax_1 + 8))
            sub_713890(*(eax_1 + 4))
            int32_t esi_1 = data_caf778
            data_caf778 = zx.d(*(eax_1 + 0x14))
            *(eax_1 + 0x14) = esi_1
            data_caf77c -= 1
            result = sub_6a8390(ebx, ebx_1)
            goto label_65c9a6
    
    int32_t ecx_12 = *(arg1 + 0x13a4)
    
    if (ecx_12 != 0)
        uint32_t eax_2 = sub_6a82e0(ecx_12)
        float xmm3_1 = *(arg1 + 0x16d0)
        float xmm2_1 = *(arg1 + 0x16cc)
        void* eax_4 = **(eax_2 + 4)
        float xmm1 = *(eax_4 + 8)
        float xmm5_1 = *(eax_4 + 0xc)
        float xmm4_2 = xmm1 f+ *(eax_4 + 0x10)
        float xmm0_2 = xmm5_1 f+ *(eax_4 + 0x14)
        float xmm4_3 = xmm4_2 - xmm1
        float xmm1_2 = xmm0_2 - xmm5_1
        float xmm2_3 = _mm_min_ss(xmm2_1 / xmm4_3, xmm3_1 / xmm1_2)
        float xmm4_4 = xmm4_3 * xmm2_3
        float xmm1_3 = xmm1_2 * xmm2_3
        float eax_5
        int32_t ecx_13
        float edx_5
        eax_5, ecx_13, edx_5 = sub_6b7590(5)
        float var_34 = eax_5
        float xmm2_8 = (xmm2_1 - 0f) * var_34 + 0f - ((xmm4_4 - 0f) * var_34 + 0f)
        float xmm3_6 = (xmm3_1 - 0f) * edx_5 + 0f - ((xmm1_3 - 0f) * edx_5 + 0f)
        float xmm0_13 = *(arg1 + 0x1620)
        float xmm5_7 =
            ((xmm4_4 + xmm2_8 + xmm2_8) * 0.5f - (xmm4_2 + xmm1) * 0.5f * xmm2_3) * xmm0_13
        float xmm6_6 =
            ((xmm1_3 + xmm3_6 + xmm3_6) * 0.5f - (xmm5_1 + xmm0_2) * 0.5f * xmm2_3) * xmm0_13
        float xmm0_14 = xmm0_13 * 0f
        float xmm0_15 = *(arg1 + 0x1630)
        float xmm6_7 = *(arg1 + 0x1628)
        float xmm1_9 = xmm0_15 * xmm0_15
        float xmm0_16 = *(arg1 + 0x1624)
        float xmm2_10 = xmm6_7 * xmm0_16
        int32_t var_50_3 = ecx_13
        float xmm7_1 = *(arg1 + 0x162c)
        float xmm5_9 = xmm0_16 * xmm0_16
        int32_t ecx_14 = *(arg1 + 0x13a4)
        float xmm0_18 = xmm7_1 f* *(arg1 + 0x1630)
        float xmm4_10 = xmm6_7 * xmm6_7
        float xmm3_8 = xmm7_1 * xmm7_1
        float xmm1_11 = (xmm2_10 - xmm0_18) * (xmm6_6 + xmm6_6)
        float var_c_3 = xmm1_11
        float xmm0_34 = xmm1_11 + (xmm5_9 + xmm1_9 - xmm4_10 - xmm3_8) * xmm5_7
            + (xmm6_7 f* *(arg1 + 0x1630) + xmm7_1 f* *(arg1 + 0x1624)) * (xmm0_14 + xmm0_14) f+
            *(arg1 + 0x1634)
        float xmm0_49 = xmm2_3 f* *(arg1 + 0x1620)
        float xmm2_14 = (xmm0_18 + xmm2_10) * (xmm5_7 + xmm5_7)
            + (xmm1_9 - xmm5_9 + xmm4_10 - xmm3_8) * xmm6_6
            + (xmm7_1 * xmm6_7 - *(arg1 + 0x1624) * xmm0_15) * (xmm0_14 + xmm0_14)
        var_34 = xmm0_49
        float var_30_2 = xmm0_49
        float xmm2_15 = xmm2_14 f+ *(arg1 + 0x1638)
        float var_2c = xmm0_34
        float var_28_3 = xmm2_15
        result = sub_6a85f0(&var_34, &var_2c, ecx_14, arg2, &var_34, *(arg1 + 0x1484))

CookieCheckFunction(result)
return result
