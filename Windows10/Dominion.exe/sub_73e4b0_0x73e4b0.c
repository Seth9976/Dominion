// 函数: sub_73e4b0
// 地址: 0x73e4b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
__security_cookie
int64_t xmm1 = 0x3f8000003f800000
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t eax_2 = arg3[6]
int32_t eax_3 = *arg3
int64_t var_28 = *(arg3 + 0x10)

if (eax_3 == 1 || eax_3 == 2)
    int32_t eax_6 = arg3[0x12]
    int32_t edx = data_cf65e0:0xc
    
    if (eax_6 u> 3)
        char const* const var_a4_5 = "ElTransform"
        int32_t var_a8_3 = 0x19a
        char const* const var_ac_1 = "C:\x\ax2017\Engine\Editor\FabEditor.cpp"
        sub_63b870(eax_6, &data_801800, "Halt")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int64_t var_d4
    float var_cc
    int64_t var_c8
    int32_t var_c0
    int64_t var_bc
    float var_b4
    int64_t var_b0_1
    float var_a8
    void* var_a4
    float var_60[0x4]
    void var_4c
    int128_t var_40
    float eax_11
    void* eax_13
    int32_t ecx_3
    int64_t* esi_1
    
    switch (eax_6)
        case 1
            float xmm6_1 = data_cf65e0.d
            int128_t xmm2_1 = data_cf65d0:4
            float xmm4_1 = data_cf65d0:8
            float xmm7_1 = data_cf65d0:0xc
            var_a4 = &var_40:4
            float xmm5_2 = xmm7_1 * xmm4_1
            float xmm3_2 = xmm7_1 * xmm7_1
            var_40 = xmm2_1
            float xmm0_6 = xmm2_1.d * xmm6_1
            var_60 = xmm2_1.d * xmm7_1 + xmm6_1 * xmm4_1
            float xmm2_2 = xmm2_1 f* var_40.d
            float xmm1_5 = xmm5_2 - xmm0_6
            float xmm0_8 = xmm4_1 * xmm4_1
            float xmm1_7 = xmm6_1 * xmm6_1
            int32_t xmm0_9 = var_60.d
            var_60 = xmm0_9 f+ xmm0_9
            float xmm4_3 = xmm0_6 + xmm5_2
            var_40 = var_40.d * xmm4_1
            float xmm6_3 = var_40.d f- xmm7_1 * xmm6_1
            float xmm1_8[0x4] = var_60
            var_b0_1 = _mm_unpacklo_ps(xmm6_3 + xmm6_3, xmm0_8 - xmm3_2 + xmm1_7 - xmm2_2)
            var_a8 = xmm4_3 + xmm4_3
            var_bc = _mm_unpacklo_ps(xmm1_8, xmm1_5 + xmm1_5)
            var_b4 = xmm3_2 - xmm0_8 - xmm2_2 + xmm1_7
            var_c8 = data_cf65e0:4.q
            var_c0 = edx
            eax_11 = arg3[6]
            var_d4 = *(arg3 + 0x10)
            var_cc = eax_11
            ecx_3 = 0
        label_73e6a5:
            sub_649e10(eax_11, &var_4c, ecx_3, var_d4, var_cc, var_c8, var_c0, var_bc, var_b4, 
                var_b0_1, var_a8, var_a4)
            esi_1 = arg4
            *esi_1 = var_28
            esi_1[1].d = eax_2
            void* var_a4_1 = &var_40:4
            eax_13 = &var_4c
            goto label_73e6d1
        case 2
            var_a4 = &var_40:4
            var_b0_1 = 0
            var_a8 = 0f
            var_bc = 0
            var_b4 = 1f
            var_c8 = data_cf65e0:4.q
            var_c0 = edx
            eax_11 = arg3[6]
            var_d4 = *(arg3 + 0x10)
            var_cc = eax_11
            ecx_3 = 1
            goto label_73e6a5
        case 3
            float xmm6_6 = data_cf65d0:4
            float xmm3_3 = data_cf65d0:0xc
            float xmm1_10 = data_cf65e0.d
            float xmm2_3 = data_cf65d0:8
            float xmm5_5 = xmm3_3 * xmm1_10 + xmm6_6 * xmm2_3
            float xmm4_7 = xmm6_6 * xmm3_3 - xmm1_10 * xmm2_3
            int64_t xmm6_11 = _mm_unpacklo_ps(
                xmm6_6 * xmm6_6 + xmm1_10 * xmm1_10 - xmm3_3 * xmm3_3 - xmm2_3 * xmm2_3, 
                xmm5_5 + xmm5_5)
            int32_t var_b4_1 = 0x3f800000
            float eax_20 = arg3[6]
            sub_649e10(eax_20, &var_40:4, 3, *(arg3 + 0x10), eax_20, data_cf65e0:4.q, edx, 0, 
                0x3f800000, xmm6_11, xmm4_7 + xmm4_7, &var_4c)
            esi_1 = arg4
            *esi_1 = var_28
            esi_1[1].d = eax_2
            void* var_a4_4 = &var_4c
            eax_13 = &var_40:4
        label_73e6d1:
            void* var_a8_1 = eax_13
            int32_t var_20 = 0xbf800000
            void var_88
            void* var_ac = &var_88
            var_28:4.d = 0x80000000
            var_28.d = 0x80000000
            int128_t* eax_15
            int32_t edx_4
            eax_15, edx_4 = sub_4ac840(&var_88, &var_28, 0x7fef20)
            var_60 = *eax_15
            float var_98[0x4]
            int64_t* eax_17
            int80_t st0
            st0, eax_17 = sub_4eb460(&var_98, edx_4, &var_60, esi_1, 0x3f800000, &var_98)
            int32_t ecx_6 = eax_17[1].d
            *(esi_1 + 0xc) = *eax_17
            *(esi_1 + 0x14) = ecx_6
            esi_1[3] = xmm1
            esi_1[4].d = 0x3f800000
            CookieCheckFunction(esi_1)
            return esi_1

int32_t eax_7 = arg3[6]
int32_t ecx = arg3[9]
*arg4 = *(arg3 + 0x10)
int64_t xmm0_2 = *(arg3 + 0x1c)
arg4[1].d = eax_7
arg4[3] = xmm1
*(arg4 + 0xc) = xmm0_2
arg4[4].d = 0x3f800000
*(arg4 + 0x14) = ecx
CookieCheckFunction(arg4)
return arg4
