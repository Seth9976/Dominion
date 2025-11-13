// 函数: sub_662420
// 地址: 0x662420
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
void* result = arg2
int32_t* var_14 = arg3
int32_t edx = 0
void* result_1 = result
int32_t var_20 = 0

if (*(result + 0x18) s> 0)
    void** edi_1 = nullptr
    void** var_18_1 = nullptr
    
    while (true)
        char const* const var_1f4_6
        int32_t var_1f0_6
        char const* const var_1ec_6
        char* ecx_12
        
        if (edi_1 s< 0 || edx s>= *(result + 0x18))
            var_1ec_6 = "XDynArray<struct TextEntry>::operator []"
            var_1f0_6 = 0xe2
            var_1f4_6 = "C:\x\ax2017\Engine\xDynArray.h"
            ecx_12 = "index >= 0 && index < mSize"
        else
            void* edx_1 = *(result + 0x14)
            result = *(edi_1 + edx_1)
            void arg_4
            
            if (result u> 3)
                var_1ec_6 = "DrawLayout"
                var_1f0_6 = 0x2f28
                var_1f4_6 = "C:\x\ax2017\Engine\UI2.cpp"
                ecx_12 = "Halt"
            else
                switch (result)
                    case nullptr
                        arg8 f- 0
                        result:1.b = (arg8 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(arg8, 0f) ? 1 : 0) << 2 | (arg8 < 0f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_2))
                            int32_t* eax_2 = edx_1 + 0x20 + edi_1
                            sub_661920(eax_2, &arg_4, arg3, eax_2, *(edi_1 + edx_1 + 0x10), 
                                *(edi_1 + edx_1 + 0x14))
                        else
                            int32_t* esi_2 = edx_1 + 0x20 + edi_1
                            float xmm1_1 = arg3[5]
                            sub_661920(result, &arg_4, arg3, esi_2, 
                                xmm1_1 * 0f f+ *(edi_1 + edx_1 + 0x10), 
                                xmm1_1 * (arg8 ^ (data_8937c0.o).d) * 0.5f f+
                                    *(edi_1 + edx_1 + 0x14))
                            sub_661920(var_14, &arg_4, var_14, esi_2, 
                                var_14[5] f* 0f f+ *(edi_1 + edx_1 + 0x10), 
                                arg8 * 0.5f f* var_14[5] f+ *(edi_1 + edx_1 + 0x14))
                        
                        goto label_66277d
                    case 1
                        sub_65e640(&arg_4, *(edi_1 + edx_1 + 0x20))
                    label_66277d:
                        arg3 = var_14
                    label_662786:
                        edi_1 = &edi_1[0xd]
                        result = result_1
                        edx = var_20 + 1
                        var_20 = edx
                        var_18_1 = edi_1
                        
                        if (edx s>= *(result + 0x18))
                            break
                        
                        continue
                    case 2
                        if (arg7 == 0)
                            goto label_662786
                        
                        int128_t* esi_4 = data_147b06c + 0x124
                        int32_t edi_2 = *(edi_1 + edx_1 + 0x20)
                        int32_t var_58_1 = 0
                        int128_t xmm0_4 = *esi_4
                        int128_t xmm0_5 = esi_4[1]
                        int128_t xmm0_6 = esi_4[2]
                        int128_t xmm0_7 = esi_4[3]
                        int32_t var_60 = *(var_18_1 + edx_1 + 0x10)
                        int32_t var_5c_1 = *(var_18_1 + edx_1 + 0x14)
                        float var_160[0x10]
                        float* eax_5 =
                            sub_6818c0(&var_160, &data_800248, &var_60, &var_160, &data_7fef80)
                        int128_t var_e0_1 = *eax_5
                        int128_t var_d0_1 = *(eax_5 + 0x10)
                        int128_t var_c0_1 = *(eax_5 + 0x20)
                        int128_t var_b0_1 = *(eax_5 + 0x30)
                        void var_1a0
                        int128_t* eax_6 = sub_642e30(&var_1a0)
                        int128_t var_120_1 = *eax_6
                        int128_t var_110_1 = eax_6[1]
                        int128_t var_100_1 = eax_6[2]
                        int128_t var_f0_1 = eax_6[3]
                        void var_1e0
                        int128_t* eax_7 = sub_642e30(&var_1e0)
                        int128_t xmm1_7 = eax_7[1]
                        int128_t xmm2_8 = eax_7[2]
                        int128_t xmm3_1 = eax_7[3]
                        *esi_4 = *eax_7
                        esi_4[1] = xmm1_7
                        esi_4[2] = xmm2_8
                        esi_4[3] = xmm3_1
                        sub_6651e0(edi_2)
                        void* eax_8 = data_147b06c
                        edi_1 = var_18_1
                        *(eax_8 + 0x124) = xmm0_4
                        *(eax_8 + 0x134) = xmm0_5
                        *(eax_8 + 0x144) = xmm0_6
                        *(eax_8 + 0x154) = xmm0_7
                        goto label_66277d
                    case 3
                        float xmm2_9 = arg5
                        int32_t var_48_1 = arg4
                        void* ecx_7 = *(edi_1 + edx_1 + 0x28)
                        void* var_4c = arg6
                        float var_18_2 = xmm2_9
                        float xmm0_23 = *(ecx_7 + 0x20)
                        xmm0_23 f- 0
                        result:1.b = (xmm0_23 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_23, 0f) ? 1 : 0) << 2 | (xmm0_23 < 0f ? 1 : 0)
                        bool p_4 = unimplemented  {test ah, 0x44}
                        
                        if (p_4)
                            float xmm0_24 = xmm0_23 * xmm2_9
                            xmm2_9 = xmm0_24
                            var_18_2 = xmm0_24
                        
                        if (*(ecx_7 + 0x38) == 0)
                            *(edi_1 + edx_1 + 0x20)
                            float xmm0_26 = *(edi_1 + edx_1 + 0x10) + 0f
                            float xmm1_12 = _mm_cvtepi32_ps(zx.o(*(ecx_7 + 0xc))) * xmm2_9 f-
                                *(edi_1 + edx_1 + 0x24) f+ *(edi_1 + edx_1 + 0x14)
                            float eax_9
                            int32_t ecx_9
                            float edx_7
                            eax_9, ecx_9, edx_7 = sub_5a0e40()
                            float var_1ec_5 = xmm1_12
                            float var_54 = eax_9 * var_18_2
                            float var_50_1 = edx_7 * var_18_2
                            sub_662030(var_14, &var_54, *(edi_1 + edx_1 + 0x20), ecx_9, var_14, 
                                &var_4c, xmm0_26)
                            goto label_66277d
                        
                        var_1ec_6 = "DrawLayout"
                        var_1f0_6 = 0x2f14
                        var_1f4_6 = "C:\x\ax2017\Engine\UI2.cpp"
                        ecx_12 = "entry.image.fancy->mHorzOffset == 0"
        
        sub_63b870(result, &data_801800, ecx_12, var_1f4_6, var_1f0_6, var_1ec_6)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

return result
