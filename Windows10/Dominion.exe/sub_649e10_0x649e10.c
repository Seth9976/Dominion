// 函数: sub_649e10
// 地址: 0x649e10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
__security_cookie
float eax_4 = arg12
float var_40 = eax_4
float xmm5_1 = arg5 f- arg7:4.d
float xmm6_1 = arg6 - arg8
float xmm7_1 = arg4 f- arg7.d
int32_t var_60
char* ecx
int32_t var_20_2

if (arg3 u> 4)
    char const* const var_5c_1 = "BillboardAxes"
    var_60 = 0xb78
    ecx = "Halt"
else
    switch (arg3)
        case 0
            float xmm3 = arg9:4.d
            float xmm0_4 = arg9.d
            *arg2 =
                _mm_unpacklo_ps(arg10 * xmm5_1 - xmm3 * xmm6_1, xmm0_4 * xmm6_1 - arg10 * xmm7_1)
            arg2[1].d = xmm3 * xmm7_1 - xmm0_4 * xmm5_1
            float xmm1_2 = *(arg2 + 4)
            float xmm3_3 = arg2[1].d
            float xmm2_4 = *arg2
            var_20_2 = (xmm2_4 * xmm5_1 - xmm1_2 * xmm7_1) ^ 0x80000000
            *arg13 = _mm_unpacklo_ps((xmm1_2 * xmm6_1 - xmm3_3 * xmm5_1) ^ 0x80000000, 
                (xmm3_3 * xmm7_1 - xmm2_4 * xmm6_1) ^ 0x80000000)
        label_64a1e1:
            arg13[1].d = var_20_2
        label_64a1e4:
            int128_t xmm1_20 = *arg2
            int64_t var_28
            var_28.o = xmm1_20
            float xmm1_21 = *(arg2 + 4)
            float xmm1_23 = arg2[1].d
            float xmm0_40 =
                sub_4ac580(ebp_1, xmm1_20.d f* xmm1_20 + xmm1_21 * xmm1_21 + xmm1_23 * xmm1_23)
            float eax_11
            int64_t xmm0_41
            
            if (9.99999975e-06f <= xmm0_40)
                float xmm0_42 = 1f / (xmm0_40 + 9.99999975e-06f)
                int128_t xmm1_26 = var_28.d * xmm0_42
                float xmm3_25 = *(arg2 + 4) * xmm0_42
                float xmm2_24 = arg2[1].d f* xmm0_42
                var_28.o = xmm1_26
                float xmm1_31 = 1f /
                    sub_4ac580(ebp_1, xmm1_26.d f* xmm1_26 + xmm3_25 * xmm3_25 + xmm2_24 * xmm2_24)
                eax_11 = xmm2_24 * xmm1_31
                xmm0_41 = _mm_unpacklo_ps(var_28.d * xmm1_31, xmm3_25 * xmm1_31)
            else
                xmm0_41 = 0
                eax_11 = 0f
            
            *arg2 = xmm0_41
            arg2[1].d = eax_11
            int128_t xmm1_32 = *arg13
            var_28.o = xmm1_32
            float xmm1_33 = *(arg13 + 4)
            float xmm1_35 = arg13[1].d
            float xmm0_54 =
                sub_4ac580(ebp_1, xmm1_32.d f* xmm1_32 + xmm1_33 * xmm1_33 + xmm1_35 * xmm1_35)
            uint32_t result
            int64_t xmm0_55
            
            if (9.99999975e-06f <= xmm0_54)
                float xmm0_56 = 1f / (xmm0_54 + 9.99999975e-06f)
                float xmm3_29 = *(arg13 + 4) * xmm0_56
                int128_t xmm1_40 = var_28.d * xmm0_56
                float xmm2_28 = arg13[1].d f* xmm0_56
                var_28.o = xmm1_40
                float xmm1_45 = 1f /
                    sub_4ac580(ebp_1, xmm1_40.d f* xmm1_40 + xmm3_29 * xmm3_29 + xmm2_28 * xmm2_28)
                result = xmm2_28 * xmm1_45
                xmm0_55 = _mm_unpacklo_ps(var_28.d * xmm1_45, xmm3_29 * xmm1_45)
            else
                xmm0_55 = 0
                result = 0
            
            *arg13 = xmm0_55
            arg13[1].d = result
            CookieCheckFunction(result)
            return result
        case 1
            float xmm0_10 = arg11.d
            xmm0_10 f- 0
            eax_4:1.b = (xmm0_10 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_10, 0f) ? 1 : 0) << 2
                | (xmm0_10 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                float xmm0_11 = arg11:4.d
                xmm0_11 f- 0
                eax_4:1.b = (xmm0_11 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_11, 0f) ? 1 : 0) << 2 | (xmm0_11 < 0f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    goto label_64a009
                
                var_40 f- 0
                eax_4:1.b = (var_40 == 0f ? 1 : 0) << 6 | (is_unordered.d(var_40, 0f) ? 1 : 0) << 2
                    | (var_40 < 0f ? 1 : 0)
                bool p_6 = unimplemented  {test ah, 0x44}
                
                if (p_6)
                    goto label_64a009
                
                int128_t xmm6_2 = arg9.d
                int64_t xmm5_2 = arg9:4.d
                *arg13 = _mm_unpacklo_ps(xmm6_2 ^ 0x80000000, xmm5_2 ^ 0x80000000)
                arg13[1].d = arg10 ^ 0x80000000
                *arg2 = _mm_unpacklo_ps(arg10 * xmm5_1 - xmm5_2.d * xmm6_1, 
                    xmm6_2.d * xmm6_1 - arg10 * xmm7_1)
                arg2[1].d = xmm5_2 f* xmm7_1 - xmm6_2 f* xmm5_1
                goto label_64a1e4
            
        label_64a009:
            char const* const var_5c = "BillboardAxes"
            var_60 = 0xb62
            ecx = "fwd == V0"
        case 2
            *arg2 = arg11
            arg2[1].d = eax_4
            float xmm1_10 = *(arg2 + 4)
            float xmm3_10 = arg2[1].d
            float xmm2_8 = *arg2
            *arg13 = _mm_unpacklo_ps((xmm1_10 * xmm6_1 - xmm3_10 * xmm5_1) ^ 0x80000000, 
                (xmm3_10 * xmm7_1 - xmm2_8 * xmm6_1) ^ 0x80000000)
            arg13[1].d = (xmm2_8 * xmm5_1 - xmm1_10 * xmm7_1) ^ 0x80000000
            int64_t xmm3_14 = *(arg13 + 4)
            int128_t xmm2_12 = *arg13
            float xmm4_16 = arg13[1].d
            
            if (xmm2_12.d f* arg9.d + xmm3_14.d f* arg9:4.d + xmm4_16 * arg10 <= 0f)
                goto label_64a1e4
            
            var_20_2 = xmm4_16 ^ 0x80000000
            *arg13 = _mm_unpacklo_ps(xmm2_12 ^ 0x80000000, xmm3_14 ^ 0x80000000)
            goto label_64a1e1
        case 3
            float xmm5_6 = arg9.d ^ 0x80000000
            float xmm4_19 = arg9:4.d ^ 0x80000000
            *arg2 = arg11
            float xmm1_17 = arg10 ^ 0x80000000
            arg2[1].d = eax_4
            float xmm2_15 = *(arg2 + 4)
            float xmm6_4 = arg2[1].d
            float xmm3_16 = *arg2
            var_20_2 = (xmm3_16 * xmm4_19 - xmm2_15 * xmm5_6) ^ 0x80000000
            *arg13 = _mm_unpacklo_ps((xmm2_15 * xmm1_17 - xmm6_4 * xmm4_19) ^ 0x80000000, 
                (xmm6_4 * xmm5_6 - xmm3_16 * xmm1_17) ^ 0x80000000)
            goto label_64a1e1
        case 4
            float xmm3_20 = arg11:4.d
            int64_t xmm7_7 = arg9:4.d
            int128_t xmm5_7 = arg9.d
            float xmm0_34 = arg11.d
            int64_t xmm5_9 = _mm_unpacklo_ps(xmm5_7 ^ 0x80000000, xmm7_7 ^ 0x80000000)
            *arg2 = _mm_unpacklo_ps((var_40 f* xmm7_7 - xmm3_20 * arg10) ^ 0x80000000, 
                (xmm0_34 * arg10 - var_40 f* xmm5_7) ^ 0x80000000)
            arg2[1].d = (xmm3_20 f* xmm5_7 - xmm0_34 f* xmm7_7) ^ 0x80000000
            var_20_2 = arg10 ^ 0x80000000
            *arg13 = xmm5_9
            goto label_64a1e1
sub_63b870(eax_4, &data_801800, ecx, "C:\x\ax2017\Engine\Draw3d.cpp", var_60, "BillboardAxes")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
