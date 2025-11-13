// 函数: sub_6fbf50
// 地址: 0x6fbf50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_772370
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
float result = data_147ded0

if (result != 0)
    result = *(result i+ 4)
    
    if (result == 0x1e)
        result = sub_747dd0()
    else if (result == 0x22)
        result = sub_670c40()
    else
        float var_e8
        int128_t result_4
        float var_40
        
        if (result == 0x1d)
            void var_150
            int128_t* eax_3 = sub_751f80(&var_150)
            int128_t var_a8_1 = *eax_3
            int128_t var_98_1 = eax_3[1]
            int128_t var_88_1 = eax_3[2]
            int128_t var_78_1 = eax_3[3]
            int128_t var_68_1 = eax_3[4]
            int128_t var_58_1 = eax_3[5]
            int32_t ecx_5 = sub_63c270(&var_e8)
            char var_cc_1
            
            if ((*(data_147ac28 + 0x1c) & 1) != 0)
                var_cc_1 = 1
            
            if ((*(data_147ac28 + 0x1c) & 1) == 0 || *(data_cf65b4 + 0x18) == 0)
                var_cc_1 = 0
            
            int32_t var_16c_1 = ecx_5
            data_1597cc0
            int128_t* eax_6 =
                sub_699c40(&var_40, &var_e8, var_cc_1.d, data_8c4634, 0, 0, nullptr, eax_2)
            int128_t result_1 = *eax_6
            uint32_t ecx_7 = eax_6[1].d
            result = result_1
            result_4 = result_1
            
            if (result == 2)
                result = sub_6eb5e0(result, result_4:0xc.d, ecx_7, data_1597cbc)
        else if (result != 0x20)
            void* edi_1 = data_147abe8
            char const* const var_168
            int32_t var_164
            char const* const var_160_3
            char* ecx_8
            
            if (edi_1 == 0)
            label_6fc0d2:
                var_160_3 = "GetGameData"
                var_164 = 0x45
                var_168 = "C:\x\ax2017\Engine\Game.h"
                ecx_8 = "gpGameData"
            label_6fc6fe:
                sub_63b870(result, &data_801800, ecx_8, var_168, var_164, var_160_3)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            int32_t* edi_2 = *(edi_1 + 0xc)
            int32_t* esi_1 = nullptr
            
            while (true)
                if (esi_1 != 0)
                    esi_1 = &esi_1[0x25]
                else
                    esi_1 = *edi_2
                
                result = edi_2[1] * 0x94 + *edi_2
                
                if (esi_1 u>= result)
                    break
                
                while ((esi_1[0x24] & 0xffff0000) == 0)
                    esi_1 = &esi_1[0x25]
                    
                    if (esi_1 u>= result)
                        goto label_6fc126
                
                sub_6e5cc0(esi_1, esi_1.w, edi_2, data_8c4634)
            
        label_6fc126:
            void* edi_3 = data_147abe8
            
            if (edi_3 == 0)
                goto label_6fc0d2
            
            int32_t* edi_4 = *(edi_3 + 0x10)
            void* esi_2 = nullptr
            
            while (true)
                if (esi_2 != 0)
                    esi_2 += 0x7c
                else
                    esi_2 = *edi_4
                
                result = edi_4[1] * 0x7c + *edi_4
                
                if (esi_2 u>= result)
                    break
                
                while ((*(esi_2 + 0x78) & 0xffff0000) == 0)
                    esi_2 += 0x7c
                    
                    if (esi_2 u>= result)
                        goto label_6fc170
                
                sub_6bca30(esi_2, data_147df84)
            
        label_6fc170:
            int32_t* ecx_10 = data_147abe8
            
            if (ecx_10 == 0)
                goto label_6fc0d2
            
            int32_t* ecx_11 = *ecx_10
            void* esi_3 = nullptr
            char var_cc
            var_cc.d = ecx_11
            
            while (true)
                if (esi_3 != 0)
                    esi_3 += 0x6c
                else
                    esi_3 = *ecx_11
                
                int32_t eax_10 = ecx_11[1] * 0x6c + *ecx_11
                
                if (esi_3 u>= eax_10)
                    break
                
                while (true)
                    if ((*(esi_3 + 0x68) & 0xffff0000) != 0)
                        int32_t* ecx_13 = *(esi_3 + 0x2c)
                        
                        if (ecx_13 != 0)
                            sub_6dee00(ecx_13)
                        
                        int32_t* i = *(esi_3 + 0x38)
                        ecx_11 = var_cc.d
                        
                        if (i == 0)
                            break
                        
                        do
                            int32_t* i_6 = i
                            i = i[4]
                            sub_6da1f0(esi_3, i_6)
                        while (i != 0)
                        
                        ecx_11 = var_cc.d
                        break
                    
                    esi_3 += 0x6c
                    
                    if (esi_3 u>= eax_10)
                        goto label_6fc1c0
            
        label_6fc1c0:
            result = data_147df8c
            
            if (result u> 3)
                var_160_3 = "EditorControlsUpdate"
                var_164 = 0x507
                var_168 = "C:\x\ax2017\Engine\Editor\EditorControls.cpp"
            label_6fc6f4:
                ecx_8 = "Halt"
                goto label_6fc6fe
            
            switch (result)
                case 1
                    result = sub_73b4a0()
                case 2
                    result = sub_73ca00()
            
            if (data_147df8c == 0)
                void* esi_4 = data_147dec8
                int32_t eax_11 = *(esi_4 + 0x20)
                float var_34
                int64_t var_30
                int64_t var_f0
                
                if (eax_11 == 1)
                    result = sub_63c270(&result_4:0xc)
                    
                    if (result.b == 0)
                        esi_4 = data_147dec8
                    else
                        esi_4 = data_147dec8
                        float xmm1_16 = result_4:0xc.d
                        float xmm0_23 = var_cc.d
                        float xmm2_9 = xmm1_16 f- *(esi_4 + 0x44)
                        float xmm3_6 = xmm0_23 f- *(esi_4 + 0x48)
                        *(esi_4 + 0x48) = xmm0_23
                        *(esi_4 + 0x44) = xmm1_16
                        xmm2_9 f- 0
                        result:1.b = (xmm2_9 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm2_9, 0f) ? 1 : 0) << 2 | (xmm2_9 < 0f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        bool p_4
                        
                        if (not(p_2))
                            xmm3_6 f- 0
                            result:1.b = (xmm3_6 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm3_6, 0f) ? 1 : 0) << 2 | (xmm3_6 < 0f ? 1 : 0)
                            p_4 = unimplemented  {test ah, 0x44}
                        
                        if (p_2 || p_4)
                            var_40 = 0f
                            int32_t var_3c_2 = 0
                            int32_t var_38_2 = 0
                            float xmm0_24 = sub_4ac580(ebp_1, 3f)
                            int32_t eax_17 = *(esi_4 + 0x40)
                            float xmm1_17[0x4] = 1f / xmm0_24
                            var_34 = xmm1_17
                            var_30 = _mm_unpacklo_ps(xmm1_17, xmm1_17)
                            var_40.o = var_40.o
                            float var_38_3 = 0f f- *(esi_4 + 0x60)
                            var_40 = 0f f- *(esi_4 + 0x58)
                            float var_3c_3 = 0f f- *(esi_4 + 0x5c)
                            
                            if (eax_17 != 0)
                                result = eax_17 - 1
                                
                                if (eax_17 != 1)
                                    float result_2 = result
                                    result -= 1
                                    
                                    if (result_2 != 1)
                                        float result_3 = result
                                        result -= 1
                                        
                                        if (result_3 != 1)
                                            var_160_3 = "sEditModeFindManipulatorPosition"
                                            var_164 = 0x1cb
                                            var_168 = "C:\x\ax2017\Engine\Editor\EditMode.cpp"
                                            goto label_6fc6f4
                            else
                                result = sub_6fbb80(&var_40, &var_f0:4)
                                esi_4 = data_147dec8
                else if (eax_11 == 2)
                    result = sub_63c270(&var_e8)
                    
                    if (result.b != 0)
                        var_40 = 0f
                        float var_3c_1 = 0f
                        float var_38_1 = 0f
                        float xmm1_3[0x4] = 1f / sub_4ac580(ebp_1, 3f)
                        result_4:8.d = 0
                        result_4:0xc.d = 0
                        var_cc.d = 0
                        var_34 = xmm1_3
                        int128_t xmm0_9 = var_40.o
                        int64_t xmm1_4 = _mm_unpacklo_ps(xmm1_3, xmm1_3)
                        var_40.o = xmm0_9
                        int32_t var_14_1 = 0
                        sub_6fba80(&result_4:8)
                        int128_t var_c8 = zx.o(0)
                        var_c8:0xc.b = 1
                        var_c8.d = &result_4:8
                        int128_t var_b8_1 = zx.o(0)
                        
                        if (sub_6db2f0(&var_40, &var_c8) != 0)
                            goto label_6fc4be
                        
                        float xmm5_1 = xmm1_4:4.d
                        float xmm4_1 = xmm1_4.d
                        result = 0f
                        var_e8 = 0f
                        var_f0 = 0x3f80000000000000
                        uint32_t xmm2_4[0x4] = var_34 * 0f + xmm4_1 + xmm5_1 * 0f
                        int32_t xmm1_6 = __andps_xmmxud_memxud(xmm2_4, data_8937a0.o)
                        float xmm1_11
                        float xmm7_1
                        
                        if (not(9.99999975e-06f f> xmm1_6))
                            xmm7_1 = var_40
                            float var_ec
                            xmm1_11 =
                                var_f0.d * xmm7_1 + var_ec * var_3c_1 + var_e8 * var_38_1 + -0f
                        
                        if (9.99999975e-06f f> xmm1_6 || 0 f< xmm1_11 f* xmm2_4)
                            int32_t var_14_4 = 1
                            int32_t* i_1 = result_4:8.d
                            
                            while (i_1 != 0)
                                int32_t* i_5 = i_1
                                i_1 = i_1[1]
                                result = sub_64c080(i_5, 0xc)
                            
                            var_cc.d = 0
                            result_4:8.d = 0
                            result_4:0xc.d = 0
                        else
                            float xmm1_13 = (xmm1_11 ^ (data_8937c0.o).d) f/ xmm2_4
                            var_b8_1.d = var_34 * xmm1_13 + xmm7_1
                            var_b8_1:4.d = xmm4_1 * xmm1_13 + var_3c_1
                            var_b8_1:8.d = xmm5_1 * xmm1_13 + var_38_1
                        label_6fc4be:
                            int32_t var_14_2 = 2
                            int32_t* i_2 = result_4:8.d
                            
                            while (i_2 != 0)
                                int32_t* i_4 = i_2
                                i_2 = i_2[1]
                                sub_64c080(i_4, 0xc)
                            
                            var_cc.d = 0
                            result_4:8.d = 0
                            result_4:0xc.d = 0
                            int32_t var_14_3 = 0xffffffff
                            result = sub_6fc730(&var_40)
                            
                            if (result == 0)
                                result = sub_63c270(&var_e8)
                    
                    esi_4 = data_147dec8
                else
                    result = eax_11 - 3
                    
                    if (eax_11 == 3)
                        sub_63c270(&result_4:0xc)
                        esi_4 = data_147dec8
                        result = result_4:0xc.d
                        *(esi_4 + 0x2c) = result
                        *(esi_4 + 0x30) = var_cc.d
                        
                        while (*(esi_4 + 0x3c) != 0)
                            int32_t* ecx_17 = *(esi_4 + 0x34)
                            void* eax_14 = ecx_17[1]
                            *(esi_4 + 0x34) = eax_14
                            
                            if (eax_14 == 0)
                                *(esi_4 + 0x38) = 0
                            else
                                *(eax_14 + 8) = 0
                            
                            int32_t i_3 = *ecx_17
                            *(esi_4 + 0x3c) -= 1
                            sub_64c080(ecx_17, 0xc)
                            void* eax_15 = data_147dec8
                            int32_t* ecx_18 = *(eax_15 + 0xc)
                            
                            if (ecx_18 == 0)
                            label_6fc2c3:
                                ecx_18 = nullptr
                            else
                                while (*ecx_18 != i_3)
                                    ecx_18 = ecx_18[1]
                                    
                                    if (ecx_18 == 0)
                                        goto label_6fc2c3
                            
                            void* esi_5 = ecx_18[2]
                            int32_t edx_2 = ecx_18[1]
                            
                            if (esi_5 == 0)
                                *(eax_15 + 0xc) = edx_2
                            else
                                *(esi_5 + 4) = edx_2
                            
                            void* esi_6 = ecx_18[1]
                            int32_t edx_3 = ecx_18[2]
                            
                            if (esi_6 == 0)
                                *(eax_15 + 0x10) = edx_3
                            else
                                *(esi_6 + 8) = edx_3
                            
                            *(eax_15 + 0x14) -= 1
                            result = sub_64c080(ecx_18, 0xc)
                            esi_4 = data_147dec8
                        
                        if (data_147abe8 == 0)
                            goto label_6fc0d2
                int32_t ecx_24 = *(esi_4 + 0x14)
                
                if (ecx_24 != 0)
                    var_34.q = 0
                    var_30:4.d = 0
                    float xmm3_4 = 1f / _mm_cvtepi32_ps(zx.o(ecx_24))
                    *(esi_4 + 0x4c) = _mm_unpacklo_ps(var_34 * xmm3_4, var_30.d * xmm3_4)
                    var_30:4.d = 0f * xmm3_4
                    result = var_30:4.d
                    *(esi_4 + 0x54) = result
        else
            result = sub_7411d0()

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
