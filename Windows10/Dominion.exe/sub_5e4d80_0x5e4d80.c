// 函数: sub_5e4d80
// 地址: 0x5e4d80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t* ebx_1 = &var_4
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76a157
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_20 = &var_4
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t edi = arg2
uint32_t var_c4 = edi
int128_t* result_2 = arg4
int128_t* result = *(edi + 0x2c)
char const* const var_150_5
int32_t var_14c_1
char const* const var_148_1
char* ecx

if (result == 0)
    if ((*(edi + 0x98)).w u>= 0x320)
        sub_591930()
    
    result, arg2 = sub_5dc840(edi)
    
    if (result.b == 0 || *(edi + 0xa4) == 6)
        goto label_5e4ec3
    
    if (*(edi + 0x1a18) == 0 && *(edi + 0x370) == 1)
        int32_t eax_5 = *(edi + 0x378)
        
        if ((eax_5 != 6 && eax_5 != 7) || *(edi + 0x37c) != 2)
            goto label_5e4e72
        
        result, arg2 = sub_5cc500()
        
        if (result != 0)
            goto label_5e4ec3
        
        goto label_5e4e72
    
label_5e4e72:
    result, arg2 = sub_5cba00(*(edi + 0x9c))
    
    if (*(result + 0x2c) == 3)
        result = *(result + 0x1c28)
        
        if (result == data_b7fcf4)
            goto label_5e4ec3
        
        if (*(edi + 0xa4) != 0x474)
            goto label_5e6f66
        
        var_148_1 = "DomDeclareCard"
        var_14c_1 = 0x4d71
        ecx = "gfx.card.where != CW_CARD"
    labelid_3:
        var_150_5 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    else
        var_148_1 = "PileIsOpen"
        var_14c_1 = 0xaf0
        ecx = "gfx.type == DOMGFX_PILE"
    labelid_3:
        var_150_5 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else if (result == 3 || result == 1)
label_5e4ec3:
    
    if (*(edi + 0x2c) == 3 && *(edi + 0x30) == 0)
    label_5e6f66:
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        *ebx_1
        return result
    
    void* eax_6 = data_cf65b8
    int32_t var_d8_1 = 0
    int32_t var_d4_1 = 0
    uint128_t xmm2_1 = zx.o(*(eax_6 + 0x18))
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(*(eax_6 + 0x14)))
    float xmm2_2 = _mm_cvtepi32_ps(xmm2_1)
    float var_d0 = xmm1_2
    float var_cc_1 = xmm2_2
    int32_t var_d8_2 = 0
    var_d0 = xmm1_2
    int128_t var_110 = var_d8_1.o
    int32_t var_d4_2 = 0
    int128_t var_100 = var_d8_2.o
    void var_130
    result = sub_5de520(&var_130, arg2, edi, &var_130)
    float xmm5_1[0x4] = result[1]
    float xmm4_1[0x4] = *result
    float xmm1_4[0x4] = _mm_shuffle_ps(xmm5_1, xmm5_1, 0x55)
    var_d8_2.o = xmm4_1
    float var_80[0x4] = xmm4_1
    float var_f0[0x4] = xmm5_1
    float var_70_1[0x4] = xmm5_1
    float var_40[0x4] = xmm1_4
    
    if (not(xmm1_4 f>= -100000f))
        var_148_1 = "DomDeclareCard"
        var_14c_1 = 0x4d8a
        ecx = "t.t.x >= -100000.0f"
    labelid_3:
        var_150_5 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    else if (100000f f>= xmm1_4)
        float var_a8
        int128_t* i_4
        void* i_5
        float var_50[0x4]
        
        if (*(edi + 0x2c) != 0)
            var_f0 = var_80[0]
        else
            int32_t ecx_5 = *(edi + 0x128)
            
            if (ecx_5 == 0)
                var_f0 = var_80[0]
            else
                float xmm0_3 = 0.600000024f
                
                if (ecx_5 == 1)
                    int32_t eax_8 = data_b604e0
                    
                    if (eax_8 == 0xffffffff)
                        eax_8 = 0
                    
                    if (*(edi + 0xa0) == eax_8)
                        xmm0_3 = 4f
                
                float xmm0_5 = xmm0_3 f* data_8c4634 f+ *(edi + 0x12c)
                *(edi + 0x12c) = xmm0_5
                
                if (not(xmm0_5 <= 1f))
                    *(edi + 0x128) = 0
                    *(edi + 0x12c) = 0
                    var_f0 = var_80[0]
                else if (ecx_5 != 1)
                    var_f0 = var_80[0]
                else
                    int32_t eax_9 = data_b604e0
                    
                    if (eax_9 == 0xffffffff)
                        eax_9 = 0
                    
                    if (*(edi + 0xa0) != eax_9)
                        int128_t* i_8 = *(edi + 0x130)
                        float xmm1_9 = xmm4_1[0] * -1000f
                        int32_t esi_1 = *(edi + 0x134)
                        float i_19 = xmm4_1[0] * -700f
                        i_4 = i_8
                        float xmm1_11 = xmm4_1[0] * 1000f
                        i_5 = i_19
                        var_a8 = xmm1_11
                        float xmm2_4
                        int32_t ecx_6
                        float xmm0_12
                        float xmm1_12
                        
                        if (0.100000001f <= xmm0_5)
                            if (not(xmm0_5 <= 0.899999976f))
                                xmm0_12 = (xmm0_5 - 0.899999976f) / 0.100000024f
                            
                            if (xmm0_5 <= 0.899999976f || 0 f>= xmm0_12)
                                xmm2_4 = 1f
                            else
                                xmm2_4 = (zx.o(0)).d
                                
                                if (not(xmm0_12 >= 1f))
                                    ecx_6 = 3
                                    xmm1_12 = 1f
                                    goto label_5e515e
                        else
                            xmm0_12 = (xmm0_5 - 0f) / 0.100000001f
                            
                            if (0 f< xmm0_12)
                                xmm2_4 = 1f
                                
                                if (not(xmm0_12 >= 1f))
                                    ecx_6 = 2
                                    xmm1_12 = (zx.o(0)).d
                                label_5e515e:
                                    xmm2_4 = sub_4ae110(ecx_6, xmm0_12, xmm1_12, xmm2_4)
                                    xmm4_1 = var_d8_2.o
                                    i_8 = i_4
                                    xmm5_1 = var_f0
                                    i_19 = i_5
                            else
                                xmm2_4 = (zx.o(0)).d
                        var_50 = xmm5_1
                        float xmm1_18 =
                            (_mm_cvtepi32_ps(zx.o(i_8 * 2 - esi_1 + 1)) * xmm1_9 - 0f) * xmm2_4 + 0f
                        float xmm0_19 = xmm2_4 * var_a8
                        var_50[1] = xmm1_18 + xmm2_4 * i_19 + var_40[0]
                        var_50[2] = xmm0_19 + var_50[2]
                        xmm5_1 = var_50
                        xmm4_1[0] = (xmm2_4 * 3f + 1f) f* xmm4_1
                        var_70_1 = xmm5_1
                        float xmm0_21[0x4] = var_70_1[1]
                        var_80 = xmm4_1
                        var_40 = xmm0_21
                        var_f0 = var_80[0]
                    else
                        float xmm0_6 = xmm0_5 - 0f
                        var_f0 = xmm4_1
                        
                        if (not(0 f< xmm0_6))
                            var_70_1[2] = 0f + var_70_1[2]
                            xmm5_1 = var_70_1
                        else if (xmm0_6 < 1f)
                            float xmm0_10 =
                                sub_4ae110(0xd, xmm0_6, (zx.o(0)).d, xmm4_1 f* -100f) + var_70_1[2]
                            xmm4_1 = var_d8_2.o
                            var_70_1[2] = xmm0_10
                            xmm5_1 = var_70_1
                        else
                            var_70_1[2] = 0f + var_70_1[2]
                            xmm5_1 = var_70_1
        
        int32_t eax_13 = *(edi + 0x2c)
        int32_t esi_2 = 0
        *(edi + 0xc) = xmm4_1
        *(edi + 0x1c) = xmm5_1
        
        if (eax_13 == 0)
            esi_2 = *(edi + 0xb0)
        else if (eax_13 == 1)
            if (*(edi + 0x174) != 3)
                esi_2 = *(edi + 0x384)
            else
                esi_2 = 0
        
        int32_t eax_14 = sub_5dc990(edi)
        bool cond:2_1 = *(edi + 0x2c) != 3
        int32_t var_88_1 = eax_14
        *edi = eax_14
        
        if (not(cond:2_1) && sub_5deb60(edi, nullptr) == 0)
            var_88_1 -= 1
        
        char var_b1
        char* eax_16
        eax_16.b = sub_5e3790(edi, &var_b1).b ^ 1
        bool cond:4_1 = *(edi + 0x2c) != 0
        var_a8 = eax_16
        
        if (not(cond:4_1))
            if (*(edi + 0xa4) != 0x3eb)
            label_5e530a:
                
                if (*(edi + 0x2c) == 0 && *(edi + 0xa4) == 0x3eb && sub_5e4d40(*(edi + 0xa0)) == 0)
                    uint32_t eax_22 = zx.d(var_a8.b)
                    
                    if (*(edi + 0x1a18) == 0)
                        eax_22 = 1
                    
                    var_a8 = eax_22
            else
                int32_t eax_17 = sub_5cbb20(edi)
                
                if (eax_17 == 0)
                    goto label_5e530a
                
                if (sub_5754f0(eax_17, eax_17, 0xb80ad8, 0, 0x1000) == 0)
                    goto label_5e530a
                
                int32_t ecx_11 = data_b604e0
                
                if (ecx_11 == 0xffffffff)
                    ecx_11 = 0
                
                if (sub_5e4d40(ecx_11) != 0 || *(edi + 0x1a18) != 0)
                    goto label_5e530a
                
                var_a8.b = 1
        
        result = nullptr
        
        if (esi_2 == 0xffffffff)
            esi_2 = 0
        
        int32_t esi_3 = esi_2 * 2
        *(edi + 4) = esi_3
        
        if (esi_2 * 2 s>= 0)
            if (var_b1 == 0)
                *(edi + 4) = (0x320 - esi_3) * 2
            
            if (*(edi + 0xa4) == 0x3ec)
                int32_t edx_2 = data_b604e0
                
                if (edx_2 == 0xffffffff)
                    edx_2 = 0
                
                void* eax_25 = sub_5cc410(0, edx_2, 0x3ec, 0, 0)
                
                if (eax_25 == 0 || *(eax_25 + 0x1c28) != data_b7fcf4)
                    *(edi + 4) = *(edi + 8) * 2
            
            if (*(edi + 0xa4) == 0x3eb)
                int32_t ecx_13 = data_b604e0
                
                if (ecx_13 == 0xffffffff)
                    ecx_13 = 0
                
                if (sub_5e4d40(ecx_13) == 0)
                    int32_t eax_30 = 0
                    int32_t ecx_14 = 0x1388 - *(edi + 8)
                    
                    if (ecx_14 * 2 s>= 0)
                        eax_30 = ecx_14 * 2
                    
                    *(edi + 4) = eax_30
            
            if (result_2 == 0)
                int32_t var_94_1
                
                if (*(edi + 0x2c) != 3)
                    var_94_1 = 0
                else if (*(edi + 0x70) == 0)
                    var_94_1 = 0
                else if (*(edi + 0x38) == 0)
                    var_94_1 = 0
                else if (*(edi + 0x3c) == 0)
                    var_94_1 = 1
                    result_2 = 2
                else if (*(edi + 0x40) != 0)
                    var_94_1 = 3
                    result_2 = 4
                else
                    var_94_1 = 2
                    result_2 = 3
                
                int32_t ecx_17 = var_94_1
                int32_t* esi_4 = edi + 0x1ba4
                bool cond:10_1 = sub_5cbb20(edi) == 0xf3a
                void* i = 1
                i_5 = 1
                
                if (cond:10_1)
                    ecx_17 = 1
                
                int32_t var_94_2 = ecx_17
                
                do
                    if (i s> ecx_17 && *esi_4 != 0)
                        sub_64e810(esi_4)
                        i = i_5
                        ecx_17 = var_94_2
                    
                    i += 1
                    esi_4 = &esi_4[1]
                    i_5 = i
                while (i != 4)
            
            result = sub_5dea30(arg3, edi)
            int32_t* esi_5 = edi + 0x1ba0
            int128_t* result_3 = result
            int32_t* var_98_1 = esi_5
            
            if (result_2 u> 5)
                var_148_1 = "DomDeclareCard"
                var_14c_1 = 0x4e90
            label_5e6fb8:
                ecx = "Halt"
            labelid_3:
                var_150_5 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            else
                float var_bc
                
                switch (result_2)
                    case nullptr
                        if (sub_5cbb20(edi) != 0xf3a)
                            for (int32_t i_1 = 0; i_1 s< 0xc; )
                                sub_64e810(edi + 0x1ba4)
                                i_1 += 4
                                edi += 4
                            
                            edi = var_c4
                            esi_5 = edi + 0x1ba0
                    case 1, 2, 3, 4
                        if (result_2 == 2)
                            var_98_1 = edi + 0x1ba4
                        else if (result_2 == 3)
                            var_98_1 = edi + 0x1ba8
                        else if (result_2 == 4)
                            var_98_1 = edi + 0x1bac
                        
                        result_3 = sub_571b30(*(edi + (result_2 << 2) + 0x30), sub_5cf7e0())
                        int32_t edx_7
                        
                        if (*(edi + 0x2c) != 3)
                            edx_7 = 1
                        else if (*(edi + 0x70) == 0)
                            edx_7 = 1
                        else if (*(edi + 0x38) == 0)
                            edx_7 = 1
                        else if (*(edi + 0x3c) != 0)
                            int32_t edx_8
                            edx_8.b = *(edi + 0x40) != 0
                            edx_7 = edx_8 + 3
                        else
                            edx_7 = 2
                        
                        sub_5e31a0(&var_bc, edx_7, result_2 - 1, &var_bc, &var_d0)
                        float xmm1_24 = var_bc * var_f0[0]
                        esi_5 = var_98_1
                        var_80[0] = xmm1_24
                        var_70_1[1] = xmm1_24 * var_d0 + var_40[0]
                        float xmm1_26 = xmm1_24 * 0f + var_70_1[3]
                        var_70_1[2] = xmm1_24 * xmm2_2 + var_70_1[2]
                        var_70_1[3] = xmm1_26
                    case 5
                        float xmm1_20 = var_f0.d
                        esi_5 = edi + 0x1ba4
                        var_98_1 = esi_5
                        var_70_1[1] = xmm1_20 * 30f + var_40[0]
                        float xmm1_22 = xmm1_20 * 0f + var_70_1[3]
                        var_70_1[2] = xmm1_20 * 220f + var_70_1[2]
                        var_70_1[3] = xmm1_22
                        int32_t eax_33 = sub_5cbb20(edi)
                        void* i_9
                        
                        if (eax_33 != 0xf3a)
                            i_9 = *sub_577bb0(0xb81824, eax_33)
                        else
                            i_9 = sub_5cc650()
                        
                        i_5 = i_9
                        int32_t eax_35 = sub_5cf7e0()
                        int128_t* result_6 = sub_571b30(i_5, eax_35)
                        *(edi + 4) += 1
                        result_3 = result_6
                
                i_5 = data_171e7f0
                int32_t eax_41 = sub_5cf7e0()
                void* eax_42 = sub_571b30(*(result_3 + 0x8c), eax_41)
                
                if (((*(eax_42 + 0x98) & 0x7f000400) | (*(eax_42 + 0x9c) & 0x940)) != 0)
                    i_5 = data_171e830
                
                char eax_46 = sub_5e2c00(edi)
                void* ecx_34 = *(edi + 4)
                int128_t* var_154_1 = &var_100
                int128_t* eax_47 = &var_110
                float* var_158_1 = &var_110
                
                if (eax_46 != 0)
                    sub_654ce0(eax_47, esi_5, "card", data_171e874, var_158_1, var_154_1, var_88_1, 
                        ecx_34, 0)
                    sub_666060(*esi_5, &var_80)
                    
                    if (sub_5db430(edi) != 0)
                        uint32_t eax_49 = sub_64e7a0(*esi_5)
                        sub_665db0(eax_49, &data_be3184, eax_49, 0x3f800000, 0xffffffff, 0)
                    
                    void* eax_50 = sub_5cb070()
                    var_bc = eax_50
                    
                    if (eax_50 != 0)
                        uint32_t eax_51 = sub_64e7a0(*esi_5)
                        sub_665db0(eax_51, var_bc, eax_51, 0x3f800000, 0xffffffff, 0)
                    
                    uint32_t eax_56
                    
                    switch (*(result_3 + 0x8c) - 0xd4a)
                        case 0
                            eax_56 = sub_64e7a0(*esi_5)
                            sub_665db0(eax_56, &data_be3e64, eax_56, 0x3f800000, 0xffffffff, 0)
                        case 1
                            eax_56 = sub_64e7a0(*esi_5)
                            sub_665db0(eax_56, &data_be3eac, eax_56, 0x3f800000, 0xffffffff, 0)
                        case 2
                            eax_56 = sub_64e7a0(*esi_5)
                            sub_665db0(eax_56, &data_be3eb8, eax_56, 0x3f800000, 0xffffffff, 0)
                        case 3
                            eax_56 = sub_64e7a0(*esi_5)
                            sub_665db0(eax_56, &data_be3edc, eax_56, 0x3f800000, 0xffffffff, 0)
                        case 4
                            eax_56 = sub_64e7a0(*esi_5)
                            sub_665db0(eax_56, &data_be3ee8, eax_56, 0x3f800000, 0xffffffff, 0)
                        case 0xcf
                            eax_56 = sub_64e7a0(*esi_5)
                            sub_665db0(eax_56, &data_be3e94, eax_56, 0x3f800000, 0xffffffff, 0)
                        case 0xd0
                            eax_56 = sub_64e7a0(*esi_5)
                            sub_665db0(eax_56, &data_be3e7c, eax_56, 0x3f800000, 0xffffffff, 0)
                        case 0xd1
                            eax_56 = sub_64e7a0(*esi_5)
                            sub_665db0(eax_56, &data_be3e88, eax_56, 0x3f800000, 0xffffffff, 0)
                        case 0xd2
                            eax_56 = sub_64e7a0(*esi_5)
                            sub_665db0(eax_56, &data_be3e70, eax_56, 0x3f800000, 0xffffffff, 0)
                        case 0xd3
                            eax_56 = sub_64e7a0(*esi_5)
                            sub_665db0(eax_56, &data_be3ea0, eax_56, 0x3f800000, 0xffffffff, 0)
                    
                    if (*(edi + 0xa4) != 0x3f1)
                        uint32_t eax_57 = sub_64e7a0(*(edi + 0x1ba0))
                        sub_665db0(eax_57, &data_be31f0, eax_57, 0x3f800000, 0xffffffff, 0)
                        uint32_t eax_58 = sub_64e7a0(*(edi + 0x1ba0))
                        sub_665db0(eax_58, &data_be31fc, eax_58, 0x3f800000, 0xffffffff, 0)
                    
                    result = sub_65d6e0(*esi_5, data_8c4634)
                    goto label_5e6f66
                
                sub_654ce0(eax_47, esi_5, "card", i_5, var_158_1, var_154_1, var_88_1, ecx_34, 0)
                *(sub_64e7a0(*esi_5) + 0x18bc) = sub_5e4040
                uint32_t eax_60 = sub_64e7a0(*esi_5)
                sub_665db0(eax_60, &data_cadf48, eax_60, 0x3f800000, 0xffffffff, 0)
                sub_4d3b70(*esi_5)
                
                if (sub_5dc840(edi) != 0)
                    uint32_t eax_62 = sub_64e7a0(*esi_5)
                    sub_665db0(eax_62, &data_be3db0, eax_62, 0x3f800000, 0xffffffff, 0)
                
                void* eax_63
                
                if (*(edi + 0x1a18) == 0 && *(edi + 0x370) == 1)
                    eax_63 = *(edi + 0x378)
                
                if (*(edi + 0x1a18) != 0 || *(edi + 0x370) != 1 || (eax_63 != 6 && eax_63 != 7)
                        || *(edi + 0x37c) != 0x3ec)
                    eax_63 = sub_5d78e0(edi, 0x3eb)
                    
                    if (eax_63.b == 0)
                        eax_63 = data_b7fcd0
                        
                        if (eax_63 != *(edi + 0x1c28))
                            uint32_t eax_64 = sub_64e7a0(*esi_5)
                            eax_63 =
                                sub_665db0(eax_64, &data_be3d98, eax_64, 0x3f800000, 0xffffffff, 0)
                
                bool cond:12_1 = *(edi + 0x2c) != 0
                char var_a1_1 = 0
                char var_89 = 0
                
                if (not(cond:12_1) && *(edi + 0xbc) s> 1
                        && (*(edi + 0x1a18) == 0 || *(edi + 0x4a0) != 3) && *(edi + 0x128) == 0)
                    if (*(edi + 0xa4) != 0x3ec)
                    label_5e5a51:
                        char eax_67
                        
                        if (*(edi + 0xa4) == 0x3eb)
                            eax_67 = sub_5e4d40(*(edi + 0xa0))
                        
                        if (*(edi + 0xa4) != 0x3eb || eax_67 != 0)
                            if (*(edi + 0xa4) == 0x3ea)
                                uint32_t eax_68 = sub_64e7a0(*esi_5)
                                sub_665db0(eax_68, &data_be34fc, eax_68, 0x3f800000, 0xffffffff, 0)
                            
                            uint32_t eax_69 = sub_64e7a0(*esi_5)
                            sub_665db0(eax_69, &data_be34c0, eax_69, 0x3f800000, 0xffffffff, 0)
                            int32_t var_150_2 = *(edi + 0xbc)
                            char* const var_c0
                            sub_63df30(&var_c0, "%d")
                            int32_t var_14_1 = 0
                            int32_t var_148_4 = 0xffffffff
                            sub_666380(&var_c0, &data_be34cc, *esi_5, &var_c0)
                            int32_t var_14_2 = 1
                            
                            if (data_cf65bc != 0)
                                char* eax_71 = var_c0
                                
                                if (eax_71 != 0 && *eax_71 != 0)
                                    char* eax_72 = sub_63d4e0(&var_c0)
                                    int32_t temp4_1 = *(eax_72 + 4)
                                    *(eax_72 + 4) -= 1
                                    
                                    if (temp4_1 == 1)
                                        sub_64c080(eax_72, *(eax_72 + 0xc) + 0x10)
                                        var_c0 = &data_801800
                            
                            int32_t var_14_3 = 0xffffffff
                            var_a1_1 = 1
                    else
                        void* eax_65 = sub_5cc410(eax_63, *(edi + 0xa0), 0x3ec, 0, 0)
                        
                        if (eax_65 != 0 && *(eax_65 + 0x1c28) == data_b7fcf4)
                            goto label_5e5a51
                
                int32_t eax_73
                
                if (*(edi + 0x1c28) != data_b7d434 || 0 f<= data_b7d420)
                    eax_73.b = 0
                else
                    eax_73.b = 1
                
                if (var_a8.b != 0 || eax_73.b != 0)
                    uint32_t eax_74 = sub_64e7a0(*esi_5)
                    sub_665db0(eax_74, &data_be3dbc, eax_74, 0x3f800000, 0xffffffff, 0)
                
                if (sub_5db430(edi) != 0)
                    uint32_t eax_76 = sub_64e7a0(*esi_5)
                    sub_665db0(eax_76, &data_be3184, eax_76, 0x3f800000, 0xffffffff, 0)
                
                void* eax_78 = sub_5cb070()
                void* var_b0_2 = eax_78
                
                if (eax_78 != 0)
                    uint32_t eax_77 = sub_64e7a0(*esi_5)
                    eax_78 = sub_665db0(eax_77, var_b0_2, eax_77, 0x3f800000, 0xffffffff, 0)
                
                uint32_t var_ac
                int32_t* result_1
                
                if (*(edi + 0x2c) != 3)
                label_5e5d5a:
                    
                    if (*(edi + 0x2c) == 0 && *(edi + 0x100) s> 1)
                        uint32_t eax_84 = sub_64e7a0(*esi_5)
                        sub_665db0(eax_84, &data_be3df8, eax_84, 0x3f800000, 0xffffffff, 0)
                        int32_t ecx_88 = *(edi + 0xfc)
                        int32_t var_148_5 = *(edi + 0x100)
                        
                        if (ecx_88 != 0)
                            int32_t var_14c_6 = ecx_88
                            char** eax_88 = sub_63df30(&i_5, "%d/%d")
                            int32_t var_14_6 = 4
                            int32_t var_158_3 = 0xffffffff
                            sub_666380(eax_88, &data_be3dec, *esi_5, eax_88)
                            int32_t var_14_7 = 5
                        else
                            char** eax_86 = sub_63df30(&i_5, "%dx")
                            int32_t var_14_4 = 2
                            int32_t var_148_6 = 0xffffffff
                            sub_666380(eax_86, &data_be3dec, *esi_5, eax_86)
                            int32_t var_14_5 = 3
                        
                        if (data_cf65bc != 0)
                            void* i_10 = i_5
                            
                            if (i_10 != 0 && *i_10 != 0)
                                char* eax_89 = sub_63d4e0(&i_5)
                                int32_t temp5_1 = *(eax_89 + 4)
                                *(eax_89 + 4) -= 1
                                
                                if (temp5_1 == 1)
                                    sub_64c080(eax_89, *(eax_89 + 0xc) + 0x10)
                                    i_5 = &data_801800
                        
                        int32_t var_14_8 = 0xffffffff
                    
                    int32_t var_88_2 = 0
                    int128_t* eax_95
                    
                    if (*(edi + 0x2c) != 3)
                    label_5e5f87:
                        eax_95 = result_2
                    else
                        if (*(edi + 0x30) == data_b8193c && (result_2 == 1 || result_2 == 0))
                            var_88_2 = 1
                            uint32_t eax_92 = sub_64e7a0(*esi_5)
                            sub_665db0(eax_92, &data_be3e04, eax_92, 0x3f800000, 0, 0)
                        
                        if (*(edi + 0x2c) != 3)
                        label_5e5f87_1:
                            eax_95 = result_2
                        else
                            int32_t eax_94 = sub_577b50(&var_40, *(edi + 0x30), 0xb81824, &var_40)
                            int32_t ecx_97 = 0
                            
                            if (eax_94 s<= 0)
                            label_5e5f87_2:
                                eax_95 = result_2
                            else
                                while (var_40[ecx_97] != 0xc3f)
                                    ecx_97 += 1
                                    
                                    if (ecx_97 s>= eax_94)
                                        goto label_5e5f87_3
                                
                                eax_95 = result_2
                                
                                if (eax_95 == 1 || eax_95 == 0)
                                    int32_t esi_8 = var_88_2
                                    var_88_2 += 1
                                    uint32_t eax_98 = sub_64e7a0(*var_98_1)
                                    sub_665db0(eax_98, &data_be3e10, eax_98, 0x3f800000, esi_8, 0)
                                    esi_5 = var_98_1
                                label_5e5f87_3:
                                    eax_95 = result_2
                    
                    if (*(edi + 0x2c) == 3 && (eax_95 == 1 || eax_95 == 0))
                        uint32_t eax_100 = sub_577b50(&var_50, *(edi + 0x30), 0xb81824, &var_50)
                        eax_95 = nullptr
                        var_ac = eax_100
                        i_4 = nullptr
                        
                        if (eax_100 s> 0)
                            while (true)
                                int32_t* result_11 = var_50[eax_95]
                                result_1 = result_11
                                
                                if ((*(sub_571b30(result_11, sub_5cf7e0()) + 0x9c) & 0x100) != 0)
                                    int32_t edi_1 = var_88_2
                                    var_88_2 += 1
                                    uint32_t eax_106 = sub_64e7a0(*esi_5)
                                    sub_665db0(eax_106, &data_be3f30, eax_106, 0x3f800000, edi_1, 0)
                                    void* eax_107 = sub_571b30(result_1, data_b81820)
                                    uint32_t eax_108 = sub_64e7a0(*var_98_1)
                                    sub_665db0(eax_108, eax_107 + 0x74, eax_108, 0x3f800000, edi_1, 
                                        0)
                                
                                eax_95 = i_4 + 1
                                i_4 = eax_95
                                
                                if (eax_95 s>= var_ac)
                                    break
                                
                                esi_5 = var_98_1
                            
                            edi = var_c4
                    
                    int32_t** esi_11 = var_98_1
                    int32_t var_148_9 = 0xffffffff
                    sub_666120(eax_95, &data_be4134, *esi_11, var_88_2)
                    
                    if (*(edi + 0x2c) == 0)
                        uint32_t eax_112
                        
                        if (sub_5d78e0(edi, 0x3e9) != 0)
                            eax_112 = sub_64e7a0(*esi_11)
                            sub_665db0(eax_112, &data_be3f00, eax_112, 0x3f800000, 0xffffffff, 0)
                        else if (*(edi + 0x1a18) == 0 && *(edi + 0x370) == 1)
                            int32_t eax_111 = *(edi + 0x378)
                            
                            if ((eax_111 == 6 || eax_111 == 7) && *(edi + 0x37c) == 0x3e9)
                                eax_112 = sub_64e7a0(*esi_11)
                                sub_665db0(eax_112, &data_be3f00, eax_112, 0x3f800000, 0xffffffff, 
                                    0)
                        
                        if (*(edi + 0x2c) == 0)
                            if (*(edi + 0x104) != 0)
                                uint32_t eax_113 = sub_64e7a0(*esi_11)
                                sub_665db0(eax_113, &data_be3dc8, eax_113, 0x3f800000, 0xffffffff, 
                                    0)
                            
                            if (*(edi + 0x2c) == 0)
                                if (*(edi + 0x117) != 0 && *(edi + 0x1a18) == 0
                                        && *(edi + 0xa4) - 1 u<= 0x47)
                                    uint32_t eax_116 = sub_64e7a0(*esi_11)
                                    sub_665db0(eax_116, &data_be3dd4, eax_116, 0x3f800000, 
                                        0xffffffff, 0)
                                
                                if (*(edi + 0x2c) == 0)
                                    int32_t eax_117 = *(edi + 0x10c)
                                    uint32_t eax_118
                                    void** edx_26
                                    
                                    if (eax_117 s<= 0x1012)
                                        if (eax_117 == 0x1012)
                                            eax_118 = sub_64e7a0(*esi_11)
                                            edx_26 = &data_be3e28
                                            goto label_5e6246
                                        
                                        if (eax_117 != 0)
                                            if (eax_117 != 0xc0e)
                                                goto label_5e61c8
                                            
                                            eax_118 = sub_64e7a0(*esi_11)
                                            edx_26 = &data_be3e1c
                                            goto label_5e6246
                                    else if (eax_117 == 0x121d)
                                        eax_118 = sub_64e7a0(*esi_11)
                                        edx_26 = &data_be3e34
                                    label_5e6246:
                                        sub_665db0(eax_118, edx_26, eax_118, 0x3f800000, 
                                            0xffffffff, 0)
                                        uint32_t eax_124 = sub_64e7a0(*esi_11)
                                        sub_665db0(eax_124, &data_be3e40, eax_124, 0x3f800000, 
                                            0xffffffff, 0)
                                    else
                                    label_5e61c8:
                                        int32_t eax_119 = sub_5cf7e0()
                                        void* eax_120 = sub_571b30(*(edi + 0x10c), eax_119)
                                        uint32_t eax_121 = sub_64e7a0(*var_98_1)
                                        sub_665db0(eax_121, &data_be3e40, eax_121, 0x3f800000, 
                                            0xffffffff, 0)
                                        uint32_t eax_123 = sub_64e7a0(*var_98_1)
                                        sub_665db0(eax_123, eax_120 + 0x74, eax_123, 0x3f800000, 
                                            0xffffffff, 0)
                                        esi_11 = var_98_1
                                    
                                    if (*(edi + 0x2c) == 0)
                                        if (*(edi + 0x115) != 0)
                                            uint32_t eax_125 = sub_64e7a0(*esi_11)
                                            sub_665db0(eax_125, &data_be3508, eax_125, 0x3f800000, 
                                                0xffffffff, 0)
                                        
                                        if (*(edi + 0x2c) == 0 && *(edi + 0x116) != 0)
                                            uint32_t eax_126 = sub_64e7a0(*esi_11)
                                            sub_665db0(eax_126, &data_be3514, eax_126, 0x3f800000, 
                                                0xffffffff, 0)
                    
                    if (*(edi + 0x2c) == 3)
                        int32_t ecx_135 = data_b7fcd0
                        int128_t* i_11 = *(edi + 0x6c)
                        i_4 = i_11
                        
                        if (*(edi + 0x70) == ecx_135 && ecx_135 != 0)
                            i_4 = i_11 - 1
                        
                        if (*(edi + 0x1c28) != data_b7d434)
                            int32_t eax_129 = sub_5cf7e0()
                            void* eax_130 = sub_571b30(*(edi + 0x30), eax_129)
                            
                            if (((*(eax_130 + 0x98) & 0x7f000400) | (*(eax_130 + 0x9c) & 0x940))
                                    == 0 && (*(edi + 0x2c) != 3 || *(edi + 0x30) != data_b81998))
                                int32_t eax_135 = *(result_3 + 0x9c) & 0x100000
                                
                                if (eax_135 == 0)
                                    if (i_4 != eax_135 || *(edi + 0x5c) - 7 u> 0x1a)
                                        uint32_t eax_139 = sub_64e7a0(*esi_11)
                                        sub_665db0(eax_139, &data_be34c0, eax_139, 0x3f800000, 
                                            0xffffffff, 0)
                                        int128_t* i_6 = i_4
                                        sub_63df30(&var_a8, "%d")
                                        int32_t var_14_9 = 6
                                        int32_t var_148_10 = 0xffffffff
                                        sub_666380(&var_a8, &data_be34cc, *esi_11, &var_a8)
                                        int32_t var_14_10 = 7
                                        
                                        if (data_cf65bc != 0)
                                            float eax_141 = var_a8
                                            
                                            if (eax_141 != 0 && *eax_141 != 0)
                                                char* eax_142 = sub_63d4e0(&var_a8)
                                                int32_t temp7_1 = *(eax_142 + 4)
                                                *(eax_142 + 4) -= 1
                                                
                                                if (temp7_1 == 1)
                                                    sub_64c080(eax_142, *(eax_142 + 0xc) + 0x10)
                                                    var_a8 = &data_801800
                                        
                                        int32_t var_14_11 = 0xffffffff
                                        var_a1_1 = 1
                                        
                                        if (result_2 - 1 u<= 3)
                                            uint32_t eax_145 = sub_64e7a0(*esi_11)
                                            sub_665db0(eax_145, &data_be34a8, eax_145, 0x3f800000, 
                                                0xffffffff, 0)
                                            int32_t var_150_4 = *(edi + (result_2 << 2) + 0x40)
                                            sub_63df30(&i_4, "%d")
                                            int32_t var_14_12 = 8
                                            int32_t var_148_11 = 0xffffffff
                                            sub_666380(&i_4, &data_be34b4, *esi_11, &i_4)
                                            int32_t var_14_13 = 9
                                            
                                            if (data_cf65bc != 0)
                                                int128_t* i_12 = i_4
                                                
                                                if (i_12 != 0 && *i_12 != 0)
                                                    char* eax_148 = sub_63d4e0(&i_4)
                                                    int32_t temp8_1 = *(eax_148 + 4)
                                                    *(eax_148 + 4) -= 1
                                                    
                                                    if (temp8_1 == 1)
                                                        sub_64c080(eax_148, *(eax_148 + 0xc) + 0x10)
                                                        i_4 = &data_801800
                                            
                                            int32_t var_14_14 = 0xffffffff
                                    else
                                        uint32_t eax_138 = sub_64e7a0(*esi_11)
                                        sub_665db0(eax_138, &data_be34d8, eax_138, 0x3f800000, 
                                            0xffffffff, 0)
                    
                    result = data_b7d434
                    
                    if (result == *(edi + 0x1c28))
                        if (*(edi + 0x2c) == 1)
                            int32_t edx_34 = *(edi + 0x170)
                            
                            if (edx_34 == 0x1309)
                            label_5e653e:
                                int32_t ecx_154
                                
                                if (data_8db5c4 != 0x27)
                                    ecx_154 = 0
                                    
                                    if (data_8db5d4 == 0x27)
                                        ecx_154 = data_8db5d8
                                else
                                    ecx_154 = data_8db5c8
                                
                                uint32_t eax_149 = sub_64e7a0(ecx_154)
                                sub_665db0(eax_149, &data_be40d4, eax_149, 0x3f800000, 0xffffffff, 
                                    0)
                            else if (edx_34 != 0
                                    && sub_5754f0(result, edx_34, 0xb80ad8, 0, 0x1000).b != 0)
                                goto label_5e653e
                        
                        float xmm0_35 = data_b7d41c
                        xmm0_35 - 1f
                        result:1.b = (xmm0_35 == 1f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_35, 1f) ? 1 : 0) << 2 | (xmm0_35 < 1f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_2) && not(data_b7d420 f<= 0.300000012f))
                            result = sub_61ce00(*(result_3 + 0x8c), &var_f0[2])
                            result_1 = result
                            
                            if (result != 0)
                                result = sub_5cb070()
                                
                                if (result == 0)
                                    uint32_t eax_151 = sub_64e7a0(*esi_11)
                                    result = sub_665db0(eax_151, &data_be40e0, eax_151, 0x3f800000, 
                                        0xffffffff, 0)
                                
                                if (data_b7d418 != 0)
                                    result = sub_5e43d0(&var_f0[2], result_1, *esi_11, &var_f0[2])
                    
                    void* esi_12 = data_cc8dc0
                    
                    if (esi_12 != 0)
                        int32_t esi_13 = *(esi_12 + 0xc)
                        uint32_t eax_154 = sub_64e7a0(*var_98_1)
                        void** edx_37 = &data_cadf54
                        
                        if (esi_13 == 0)
                            edx_37 = &data_cadf60
                        
                        sub_665db0(eax_154, edx_37, eax_154, 0x3f800000, 0xffffffff, 0)
                        int32_t* esi_14 = var_98_1
                        sub_5e0df0(
                            sub_5e01b0(&var_89, result_3, *esi_14, &var_89, 0, *(edi + 0x110)), 
                            result_3, *esi_14, nullptr)
                        sub_5defb0(*esi_14, result_3)
                        result = sub_5ded60(edi)
                        int128_t* result_5 = result
                        
                        if (result_2 == 5)
                            result_5 = 3
                        label_5e66c4:
                            uint32_t eax_157 = sub_64e7a0(*esi_14)
                            sub_665db0(eax_157, &data_be3238, eax_157, 0x3f800000, 0xffffffff, 0)
                            
                            if (var_a1_1 == 0)
                                uint32_t eax_158 = sub_64e7a0(*esi_14)
                                sub_665db0(eax_158, &data_be32c8, eax_158, 0x3f800000, 0xffffffff, 
                                    0)
                            
                            if (var_89 == 0)
                                uint32_t eax_159 = sub_64e7a0(*esi_14)
                                sub_665db0(eax_159, &data_be32bc, eax_159, 0x3f800000, 0xffffffff, 
                                    0)
                            
                            goto label_5e6737
                        
                        if (result u> 3)
                            var_148_1 = "DomDeclareCard"
                            var_14c_1 = 0x5067
                            goto label_5e6fb8
                        
                        switch (result)
                            case nullptr
                                result_5 = result
                            label_5e6737:
                                uint32_t eax_160 = sub_4c89a0()
                                
                                if (eax_160 == 0x10 || eax_160 == 0x11 || eax_160 == 0x13
                                        || eax_160 == 0x12)
                                    goto label_5e690c
                                
                                result = data_cc8dc0
                                
                                if (result_5 != 0)
                                    goto label_5e68aa
                                
                                if (result != 0)
                                    int32_t ecx_180 = *(result + 0x28)
                                    
                                    if (ecx_180 != 0)
                                        uint32_t eax_171
                                        void** edx_41
                                        
                                        if (ecx_180 != 1)
                                            if (ecx_180 == 2)
                                                eax_171 = sub_64e7a0(*esi_14)
                                                edx_41 = &data_8dc680
                                                goto label_5e689d
                                            
                                            var_148_1 = "DomDeclareCard"
                                            var_14c_1 = 0x507e
                                            goto label_5e6fb8
                                        
                                        eax_171 = sub_64e7a0(*esi_14)
                                        edx_41 = &data_8dc674
                                    label_5e689d:
                                        sub_665db0(eax_171, edx_41, eax_171, 0x3f800000, 
                                            0xffffffff, 0)
                                        result = data_cc8dc0
                                    
                                label_5e68aa:
                                    
                                    if (result != 0)
                                        int32_t eax_172 = *(result + 0x28)
                                        
                                        if (eax_172 == 0)
                                            goto label_5e690c
                                        
                                        if (eax_172 != 1)
                                            result = eax_172 - 2
                                        
                                        if (eax_172 != 1 && eax_172 != 2)
                                            var_148_1 = "DomDeclareCard"
                                            var_14c_1 = 0x508d
                                            goto label_5e6fb8
                                        
                                        uint32_t eax_175 = sub_64e7a0(*esi_14)
                                        sub_665db0(eax_175, &data_be3268, eax_175, 0x3f800000, 
                                            0xffffffff, 0)
                                    label_5e690c:
                                        void* var_88_3
                                        
                                        if (sub_5cbb20(edi) != 0x101)
                                            var_88_3 = result_3 + 0x74
                                        else
                                            uint32_t eax_177 = sub_4b9370()
                                            
                                            if (eax_177.b == 0 || data_b824b0 == 0)
                                                var_88_3 = result_3 + 0x74
                                            else if (sub_590c70(eax_177, data_b824a4, 0xb80ad8, 
                                                    0x454) == 0)
                                                var_88_3 = result_3 + 0x74
                                            else
                                                if (data_1a8ca58 s>
                                                        *(*fsbase->ThreadLocalStoragePointer + 8))
                                                    sub_75970e(&data_1a8ca58)
                                                    
                                                    if (data_1a8ca58 == 0xffffffff)
                                                        int32_t var_14_15 = 0xc
                                                        data_1a8ca5c = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                                                        ebx_1, esi_14 = sub_4acb80(&data_1a8ca5c, 
                                                            "ad_Estate_Inheritance")
                                                        int32_t var_14_16 = 0xffffffff
                                                        __Init_thread_footer(&data_1a8ca58)
                                                
                                                var_88_3 = &data_1a8ca5c
                                        
                                        uint32_t eax_183 = sub_64e7a0(*esi_14)
                                        sub_665db0(eax_183, var_88_3, eax_183, 0x3f800000, 
                                            0xffffffff, 0)
                                        
                                        if (data_b824dc == 0)
                                            int32_t* result_9 = sub_4b9480()
                                            int32_t i_2 = 0
                                            result_1 = result_9
                                            
                                            if (result_9[0x46a] s> 0)
                                                void* ecx_194 = &result_9[0x1a]
                                                
                                                do
                                                    int32_t eax_184 = *ecx_194
                                                    
                                                    if (eax_184 == 0x3e9)
                                                        goto label_5e6eba
                                                    
                                                    if (eax_184 == 0x3ec)
                                                        goto label_5e6eba
                                                    
                                                    if (eax_184 == 0x3ed)
                                                        goto label_5e6eba
                                                    
                                                    i_2 += 1
                                                    ecx_194 += 0x22c
                                                while (i_2 s< result_1[0x46a])
                                            
                                            void* eax_186 = *(edi + 0x2c)
                                            
                                            if (eax_186 == 0)
                                                if (sub_5efe00(eax_186, &result_1, edi, eax_186.b).b
                                                        != 0)
                                                    int32_t* result_10 = result_1
                                                    void* i_13
                                                    i_13.b = 0
                                                    bool cond:19_1 = data_b80b54 != 1
                                                    i_5 = i_13
                                                    
                                                    if (not(cond:19_1) &&
                                                            (result_10 == 9 || result_10 == 0x17))
                                                        int32_t edx_45 = data_b80b08
                                                        
                                                        if (edx_45 != 0x36)
                                                            void* i_14 = nullptr
                                                            
                                                            if (edx_45 != 0x133)
                                                                i_14 = 1
                                                            
                                                            i_5 = i_14
                                                    
                                                    *(edi + 0x1c24) = result_10
                                                    uint32_t eax_187 = sub_64e7a0(*esi_14)
                                                    sub_665db0(eax_187, &data_be28f0, eax_187, 
                                                        0x3f800000, 0xffffffff, 0)
                                                    int32_t ecx_198 = data_b8097c
                                                    int32_t eax_188 = 0
                                                    
                                                    if (ecx_198 s<= 0)
                                                    label_5e6af5:
                                                        var_89 = 0
                                                    else
                                                        while (*((eax_188 << 2) + &data_b7fcfc)
                                                                != *(edi + 0x98))
                                                            eax_188 += 1
                                                            
                                                            if (eax_188 s>= ecx_198)
                                                                goto label_5e6af5
                                                        
                                                        var_89 = 1
                                                    
                                                    if (i_5.b != 0)
                                                        uint32_t eax_189 = sub_64e7a0(*esi_14)
                                                        sub_665db0(eax_189, &data_be2914, eax_189, 
                                                            0x3f800000, 0xffffffff, 0)
                                                    
                                                    if (var_89 != 0)
                                                        uint32_t eax_190 = sub_64e7a0(*esi_14)
                                                        sub_665db0(eax_190, &data_be2908, eax_190, 
                                                            0x3f800000, 0xffffffff, 0)
                                                        
                                                        if (*(edi + 0xc0) s> 1)
                                                            int32_t eax_191 = data_b80b08
                                                            
                                                            if (eax_191 != 0x8d && eax_191 != 0x96)
                                                                uint32_t eax_193 =
                                                                    zx.d((*(edi + 0x98)).w)
                                                                var_ac = eax_193
                                                                
                                                                if (eax_193 u>= 0x320)
                                                                    sub_591930()
                                                                    eax_193 = var_ac
                                                                
                                                                *(edi + 0xa0)
                                                                *(edi + 0xa4)
                                                                i_4 = nullptr
                                                                var_bc =
                                                                    *(eax_193 * 0x64 + &data_b82524)
                                                                void* i_15 = *(sub_5cc4b0(0, 0) + 0x70)
                                                                i_5 = i_15
                                                                
                                                                if (i_15 != 0)
                                                                    int32_t ecx_204 = data_b8097c
                                                                    
                                                                    while (true)
                                                                        uint32_t eax_197 = zx.d(i_15.w)
                                                                        
                                                                        if (eax_197 u< data_b809e4)
                                                                            void* i_18 = i_5
                                                                            uint32_t edx_48 = eax_197 * 0x1c30
                                                                            eax_197 = data_b809e0
                                                                            var_ac = edx_48
                                                                            esi_14 = var_98_1
                                                                            
                                                                            if (*(edx_48 + eax_197 + 0x1c28)
                                                                                    == i_18)
                                                                                uint32_t eax_199 =
                                                                                    zx.d((*(edx_48 + eax_197 + 0x98)).w)
                                                                                i_5 = *(edx_48 + eax_197 + 0x1b94)
                                                                                var_f0[3] = eax_199
                                                                                
                                                                                if (eax_199 u>= 0x320)
                                                                                    sub_591930()
                                                                                    ecx_204 = data_b8097c
                                                                                    edx_48 = var_ac
                                                                                    eax_199 = var_f0[3]
                                                                                
                                                                                edi = var_c4
                                                                                
                                                                                if (*(eax_199 * 0x64 + &data_b82524)
                                                                                        == var_bc)
                                                                                    int32_t eax_201 = 0
                                                                                    
                                                                                    if (ecx_204 s> 0)
                                                                                        esi_14 = var_98_1
                                                                                        
                                                                                        do
                                                                                            if (*((eax_201 << 2) + &data_b7fcfc)
                                                                                                    == *(edx_48 + eax_197 + 0x98))
                                                                                                i_4 += 1
                                                                                                break
                                                                                            
                                                                                            eax_201 += 1
                                                                                        while (eax_201 s< ecx_204)
                                                                                
                                                                                i_15 = i_5
                                                                                
                                                                                if (i_15 == 0)
                                                                                    break
                                                                                
                                                                                continue
                                                                        
                                                                        sub_63b870(eax_197, &data_801800, 
                                                                            "DataArrayTryToGet(id) != NULL", 
                                                                            "C:\x\ax2017\Engine\DataArray.h", 0x6d, 
                                                                            "
                                                                                DataArray<struct DomGfx>::DataArrayGet")
                                                                        
                                                                        if (sub_63bc30() != 0)
                                                                            breakpoint
                                                                        
                                                                        sub_63bb00()
                                                                        noreturn
                                                                
                                                                uint32_t eax_202 = sub_64e7a0(*esi_14)
                                                                sub_665db0(eax_202, &data_be3e4c, 
                                                                    eax_202, 0x3f800000, 0xffffffff, 0)
                                                                int128_t* i_7 = i_4
                                                                sub_63df30(&i_5, "%d")
                                                                int32_t var_14_17 = 0xd
                                                                int32_t var_148_14 = 0xffffffff
                                                                sub_666380(&i_5, &data_be3e58, *esi_14, 
                                                                    &i_5)
                                                                int32_t var_14_18 = 0xe
                                                                
                                                                if (data_cf65bc != 0)
                                                                    void* i_16 = i_5
                                                                    
                                                                    if (i_16 != 0 && *i_16 != 0)
                                                                        char* eax_204 = sub_63d4e0(&i_5)
                                                                        int32_t temp15_1 = *(eax_204 + 4)
                                                                        *(eax_204 + 4) -= 1
                                                                        
                                                                        if (temp15_1 == 1)
                                                                            sub_64c080(eax_204, 
                                                                                *(eax_204 + 0xc) + 0x10)
                                                                
                                                                int32_t var_14_19 = 0xffffffff
                                            else if (eax_186 == 3)
                                                uint32_t eax_208
                                                
                                                if (sub_5deb60(edi, &var_ac) == 0)
                                                    if (*(edi + 0x1a18) == 0)
                                                        if (*(edi + 0x370) != 1)
                                                        label_5e6e0c:
                                                            int32_t eax_209 = data_b604e0
                                                            
                                                            if (eax_209 == 0xffffffff)
                                                                eax_209 = 0
                                                            
                                                            if (data_b80b44 == eax_209)
                                                                int32_t ecx_212 = data_b80afc
                                                                
                                                                if (ecx_212 == 8)
                                                                label_5e6e8e:
                                                                    
                                                                    if (var_b0_2 == 0
                                                                            || *(var_b0_2 + 0x10) != 0)
                                                                        eax_208 = sub_64e7a0(*esi_14)
                                                                        sub_665db0(eax_208, &data_be28e4, 
                                                                            eax_208, 0x3f800000, 0xffffffff, 0)
                                                                else
                                                                    int32_t edx_54 = data_b80b08
                                                                    
                                                                    if (edx_54 s<= 0x102)
                                                                        if (edx_54 == 0x102)
                                                                            goto label_5e6e8e
                                                                        
                                                                        if (edx_54 - 9 u> 0xf3)
                                                                            goto label_5e6e71
                                                                        
                                                                        switch (edx_54 +
                                                                                &jump_table_5e7134[3]:3)
                                                                            case &lookup_table_5e714c, 
                                                                                    &lookup_table_5e714c[1], 
                                                                                    &lookup_table_5e714c[2], 
                                                                                    &lookup_table_5e714c[3], 
                                                                                    &lookup_table_5e714c[4], 
                                                                                    &lookup_table_5e714c[0xb], 
                                                                                    &lookup_table_5e714c[0x1d], 
                                                                                    &lookup_table_5e714c[0x23], 
                                                                                    &lookup_table_5e714c[0x24], 
                                                                                    &lookup_table_5e714c[0x26], 
                                                                                    &lookup_table_5e714c[0x28], 
                                                                                    &lookup_table_5e714c[0x2e], 
                                                                                    &lookup_table_5e714c[0x33], 
                                                                                    &lookup_table_5e714c[0x3e], 
                                                                                    &lookup_table_5e714c[0x48], 
                                                                                    &lookup_table_5e714c[0x52], 
                                                                                    &lookup_table_5e714c[0x58], 
                                                                                    &lookup_table_5e714c[0x59], 
                                                                                    &lookup_table_5e714c[0x5e], 
                                                                                    &lookup_table_5e714c[0x68], 
                                                                                    &lookup_table_5e714c[0x6b], 
                                                                                    &lookup_table_5e714c[0x6e], 
                                                                                    &lookup_table_5e714c[0x71], 
                                                                                    &lookup_table_5e714c[0x75], 
                                                                                    &lookup_table_5e714c[0x79], 
                                                                                    &lookup_table_5e714c[0x85], 
                                                                                    &lookup_table_5e714c[0x86], 
                                                                                    &lookup_table_5e714c[0x8e], 
                                                                                    &lookup_table_5e714c[0x8f], 
                                                                                    &lookup_table_5e714c[0x93], 
                                                                                    &lookup_table_5e714c[0x94], 
                                                                                    &lookup_table_5e714c[0x99], 
                                                                                    &lookup_table_5e714c[0x9c], 
                                                                                    &lookup_table_5e714c[0xa1], 
                                                                                    &lookup_table_5e714c[0xa3], 
                                                                                    &lookup_table_5e714c[0xa8], 
                                                                                    &lookup_table_5e714c[0xac], 
                                                                                    &lookup_table_5e714c[0xb7], 
                                                                                    &lookup_table_5e714c[0xba], 
                                                                                    &lookup_table_5e714c[0xbc], 
                                                                                    &lookup_table_5e714c[0xbd], 
                                                                                    &lookup_table_5e714c[0xbe], 
                                                                                    &lookup_table_5e714c[0xc8], 
                                                                                    &lookup_table_5e714c[0xc9], 
                                                                                    &lookup_table_5e714c[0xcb], 
                                                                                    &lookup_table_5e714c[0xcc], 
                                                                                    &lookup_table_5e714c[0xcf], 
                                                                                    &lookup_table_5e714c[0xd9], 
                                                                                    &lookup_table_5e714c[0xe1], 
                                                                                    &lookup_table_5e714c[0xeb], 
                                                                                    &lookup_table_5e714c[0xf3]
                                                                                goto label_5e6e8e
                                                                            case &lookup_table_5e714c[5], 
                                                                                    &lookup_table_5e714c[6], 
                                                                                    &lookup_table_5e714c[7], 
                                                                                    &lookup_table_5e714c[8], 
                                                                                    &lookup_table_5e714c[9], 
                                                                                    &lookup_table_5e714c[0xa], 
                                                                                    &lookup_table_5e714c[0xc], 
                                                                                    &lookup_table_5e714c[0xd], 
                                                                                    &lookup_table_5e714c[0xe], 
                                                                                    &lookup_table_5e714c[0xf], 
                                                                                    &lookup_table_5e714c[0x10], 
                                                                                    &lookup_table_5e714c[0x11], 
                                                                                    &lookup_table_5e714c[0x12], 
                                                                                    &lookup_table_5e714c[0x13], 
                                                                                    &lookup_table_5e714c[0x14], 
                                                                                    &lookup_table_5e714c[0x15], 
                                                                                    &lookup_table_5e714c[0x16], 
                                                                                    &lookup_table_5e714c[0x17], 
                                                                                    &lookup_table_5e714c[0x18], 
                                                                                    &lookup_table_5e714c[0x19], 
                                                                                    &lookup_table_5e714c[0x1a], 
                                                                                    &lookup_table_5e714c[0x1b], 
                                                                                    &lookup_table_5e714c[0x1c], 
                                                                                    &lookup_table_5e714c[0x1e], 
                                                                                    &lookup_table_5e714c[0x1f], 
                                                                                    &lookup_table_5e714c[0x20], 
                                                                                    &lookup_table_5e714c[0x21], 
                                                                                    &lookup_table_5e714c[0x22], 
                                                                                    &lookup_table_5e714c[0x25], 
                                                                                    &lookup_table_5e714c[0x27], 
                                                                                    &lookup_table_5e714c[0x29], 
                                                                                    &lookup_table_5e714c[0x2a], 
                                                                                    &lookup_table_5e714c[0x2b], 
                                                                                    &lookup_table_5e714c[0x2c], 
                                                                                    &lookup_table_5e714c[0x2d], 
                                                                                    &lookup_table_5e714c[0x2f], 
                                                                                    &lookup_table_5e714c[0x30], 
                                                                                    &lookup_table_5e714c[0x31], 
                                                                                    &lookup_table_5e714c[0x32], 
                                                                                    &lookup_table_5e714c[0x34], 
                                                                                    &lookup_table_5e714c[0x35], 
                                                                                    &lookup_table_5e714c[0x36], 
                                                                                    &lookup_table_5e714c[0x37], 
                                                                                    &lookup_table_5e714c[0x38], 
                                                                                    &lookup_table_5e714c[0x39], 
                                                                                    &lookup_table_5e714c[0x3a], 
                                                                                    &lookup_table_5e714c[0x3b], 
                                                                                    &lookup_table_5e714c[0x3c], 
                                                                                    &lookup_table_5e714c[0x3d], 
                                                                                    &lookup_table_5e714c[0x3f], 
                                                                                    &lookup_table_5e714c[0x40], 
                                                                                    &lookup_table_5e714c[0x41], 
                                                                                    &lookup_table_5e714c[0x42], 
                                                                                    &lookup_table_5e714c[0x43], 
                                                                                    &lookup_table_5e714c[0x44], 
                                                                                    &lookup_table_5e714c[0x45], 
                                                                                    &lookup_table_5e714c[0x46], 
                                                                                    &lookup_table_5e714c[0x47], 
                                                                                    &lookup_table_5e714c[0x49], 
                                                                                    &lookup_table_5e714c[0x4a], 
                                                                                    &lookup_table_5e714c[0x4b], 
                                                                                    &lookup_table_5e714c[0x4c], 
                                                                                    &lookup_table_5e714c[0x4d], 
                                                                                    &lookup_table_5e714c[0x4e], 
                                                                                    &lookup_table_5e714c[0x4f], 
                                                                                    &lookup_table_5e714c[0x50], 
                                                                                    &lookup_table_5e714c[0x51], 
                                                                                    &lookup_table_5e714c[0x53], 
                                                                                    &lookup_table_5e714c[0x54], 
                                                                                    &lookup_table_5e714c[0x55], 
                                                                                    &lookup_table_5e714c[0x56], 
                                                                                    &lookup_table_5e714c[0x57], 
                                                                                    &lookup_table_5e714c[0x5a], 
                                                                                    &lookup_table_5e714c[0x5b], 
                                                                                    &lookup_table_5e714c[0x5c], 
                                                                                    &lookup_table_5e714c[0x5d], 
                                                                                    &lookup_table_5e714c[0x5f], 
                                                                                    &lookup_table_5e714c[0x60], 
                                                                                    &lookup_table_5e714c[0x61], 
                                                                                    &lookup_table_5e714c[0x62], 
                                                                                    &lookup_table_5e714c[0x63], 
                                                                                    &lookup_table_5e714c[0x64], 
                                                                                    &lookup_table_5e714c[0x65], 
                                                                                    &lookup_table_5e714c[0x66], 
                                                                                    &lookup_table_5e714c[0x67], 
                                                                                    &lookup_table_5e714c[0x69], 
                                                                                    &lookup_table_5e714c[0x6a], 
                                                                                    &lookup_table_5e714c[0x6c], 
                                                                                    &lookup_table_5e714c[0x6d], 
                                                                                    &lookup_table_5e714c[0x6f], 
                                                                                    &lookup_table_5e714c[0x70], 
                                                                                    &lookup_table_5e714c[0x72], 
                                                                                    &lookup_table_5e714c[0x73], 
                                                                                    &lookup_table_5e714c[0x74], 
                                                                                    &lookup_table_5e714c[0x76], 
                                                                                    &lookup_table_5e714c[0x77], 
                                                                                    &lookup_table_5e714c[0x78], 
                                                                                    &lookup_table_5e714c[0x7a], 
                                                                                    &lookup_table_5e714c[0x7b], 
                                                                                    &lookup_table_5e714c[0x7c], 
                                                                                    &lookup_table_5e714c[0x7d], 
                                                                                    &lookup_table_5e714c[0x7e], 
                                                                                    &lookup_table_5e714c[0x7f], 
                                                                                    &lookup_table_5e714c[0x80], 
                                                                                    &lookup_table_5e714c[0x81], 
                                                                                    &lookup_table_5e714c[0x82], 
                                                                                    &lookup_table_5e714c[0x83], 
                                                                                    &lookup_table_5e714c[0x84], 
                                                                                    &lookup_table_5e714c[0x87], 
                                                                                    &lookup_table_5e714c[0x88], 
                                                                                    &lookup_table_5e714c[0x89], 
                                                                                    &lookup_table_5e714c[0x8a], 
                                                                                    &lookup_table_5e714c[0x8b], 
                                                                                    &lookup_table_5e714c[0x8c], 
                                                                                    &lookup_table_5e714c[0x8d], 
                                                                                    &lookup_table_5e714c[0x90], 
                                                                                    &lookup_table_5e714c[0x91], 
                                                                                    &lookup_table_5e714c[0x92], 
                                                                                    &lookup_table_5e714c[0x95], 
                                                                                    &lookup_table_5e714c[0x96], 
                                                                                    &lookup_table_5e714c[0x97], 
                                                                                    &lookup_table_5e714c[0x98], 
                                                                                    &lookup_table_5e714c[0x9a], 
                                                                                    &lookup_table_5e714c[0x9b], 
                                                                                    &lookup_table_5e714c[0x9d], 
                                                                                    &lookup_table_5e714c[0x9e], 
                                                                                    &lookup_table_5e714c[0x9f], 
                                                                                    &lookup_table_5e714c[0xa0], 
                                                                                    &lookup_table_5e714c[0xa2], 
                                                                                    &lookup_table_5e714c[0xa4], 
                                                                                    &lookup_table_5e714c[0xa5], 
                                                                                    &lookup_table_5e714c[0xa6], 
                                                                                    &lookup_table_5e714c[0xa7], 
                                                                                    &lookup_table_5e714c[0xa9], 
                                                                                    &lookup_table_5e714c[0xaa], 
                                                                                    &lookup_table_5e714c[0xab], 
                                                                                    &lookup_table_5e714c[0xad], 
                                                                                    &lookup_table_5e714c[0xae], 
                                                                                    &lookup_table_5e714c[0xaf], 
                                                                                    &lookup_table_5e714c[0xb0], 
                                                                                    &lookup_table_5e714c[0xb1], 
                                                                                    &lookup_table_5e714c[0xb2], 
                                                                                    &lookup_table_5e714c[0xb3], 
                                                                                    &lookup_table_5e714c[0xb4], 
                                                                                    &lookup_table_5e714c[0xb5], 
                                                                                    &lookup_table_5e714c[0xb6], 
                                                                                    &lookup_table_5e714c[0xb8], 
                                                                                    &lookup_table_5e714c[0xb9], 
                                                                                    &lookup_table_5e714c[0xbb], 
                                                                                    &lookup_table_5e714c[0xbf], 
                                                                                    &lookup_table_5e714c[0xc0], 
                                                                                    &lookup_table_5e714c[0xc1], 
                                                                                    &lookup_table_5e714c[0xc2], 
                                                                                    &lookup_table_5e714c[0xc3], 
                                                                                    &lookup_table_5e714c[0xc4], 
                                                                                    &lookup_table_5e714c[0xc5], 
                                                                                    &lookup_table_5e714c[0xc6], 
                                                                                    &lookup_table_5e714c[0xc7], 
                                                                                    &lookup_table_5e714c[0xca], 
                                                                                    &lookup_table_5e714c[0xcd], 
                                                                                    &lookup_table_5e714c[0xce], 
                                                                                    &lookup_table_5e714c[0xd0], 
                                                                                    &lookup_table_5e714c[0xd1], 
                                                                                    &lookup_table_5e714c[0xd2], 
                                                                                    &lookup_table_5e714c[0xd3], 
                                                                                    &lookup_table_5e714c[0xd4], 
                                                                                    &lookup_table_5e714c[0xd5], 
                                                                                    &lookup_table_5e714c[0xd6], 
                                                                                    &lookup_table_5e714c[0xd7], 
                                                                                    &lookup_table_5e714c[0xd8], 
                                                                                    &lookup_table_5e714c[0xda], 
                                                                                    &lookup_table_5e714c[0xdb], 
                                                                                    &lookup_table_5e714c[0xdc], 
                                                                                    &lookup_table_5e714c[0xdd], 
                                                                                    &lookup_table_5e714c[0xde], 
                                                                                    &lookup_table_5e714c[0xdf], 
                                                                                    &lookup_table_5e714c[0xe0], 
                                                                                    &lookup_table_5e714c[0xe2], 
                                                                                    &lookup_table_5e714c[0xe3], 
                                                                                    &lookup_table_5e714c[0xe4], 
                                                                                    &lookup_table_5e714c[0xe5], 
                                                                                    &lookup_table_5e714c[0xe6], 
                                                                                    &lookup_table_5e714c[0xe7], 
                                                                                    &lookup_table_5e714c[0xe8], 
                                                                                    &lookup_table_5e714c[0xe9], 
                                                                                    &lookup_table_5e714c[0xea], 
                                                                                    &lookup_table_5e714c[0xec], 
                                                                                    &lookup_table_5e714c[0xed], 
                                                                                    &lookup_table_5e714c[0xee], 
                                                                                    &lookup_table_5e714c[0xef], 
                                                                                    &lookup_table_5e714c[0xf0], 
                                                                                    &lookup_table_5e714c[0xf1], 
                                                                                    &lookup_table_5e714c[0xf2]
                                                                                goto label_5e6e71
                                                                    else if (edx_54 - 0x104 u> 0x2e)
                                                                    label_5e6e71:
                                                                        
                                                                        if (ecx_212 == 1)
                                                                            if (edx_54 != 2)
                                                                                if (edx_54 == 3)
                                                                                    goto label_5e6e8e
                                                                            else if (ebx_1[2].b != 0)
                                                                                goto label_5e6e8e
                                                                    else
                                                                        switch (edx_54)
                                                                            case 0x104, 0x106, 0x107, 0x109, 0x10b, 
                                                                                    0x10d, 0x10e, 0x111, 0x11a, 0x11b, 
                                                                                    0x11f, 0x120, 0x127, 0x129, 0x12c, 
                                                                                    0x12e, 0x132
                                                                                goto label_5e6e8e
                                                                            case 0x105, 0x108, 0x10a, 0x10c, 0x10f, 
                                                                                    0x110, 0x112, 0x113, 0x114, 0x115, 
                                                                                    0x116, 0x117, 0x118, 0x119, 0x11c, 
                                                                                    0x11d, 0x11e, 0x121, 0x122, 0x123, 
                                                                                    0x124, 0x125, 0x126, 0x128, 0x12a, 
                                                                                    0x12b, 0x12d, 0x12f, 0x130, 0x131
                                                                                goto label_5e6e71
                                                        else if (*(edi + 0x378) != 0x21
                                                                && *(edi + 0x378) != 0x22)
                                                            goto label_5e6e0c
                                                    else if ((*(edi + 0x2e8) != 1
                                                            || *(edi + 0x2f0) != 0x21) && (
                                                            *(edi + 0x418) != 1
                                                            || *(edi + 0x420) != 0x21) && (
                                                            *(edi + 0x2e8) != 1
                                                            || *(edi + 0x2f0) != 0x22) && (
                                                            *(edi + 0x418) != 1
                                                            || *(edi + 0x420) != 0x22))
                                                        goto label_5e6e0c
                                                else if (result_2 == 0 || result_2 == 1)
                                                    *(edi + 0x1c24) = var_ac
                                                    eax_208 = sub_64e7a0(*esi_14)
                                                    sub_665db0(eax_208, &data_be28f0, eax_208, 
                                                        0x3f800000, 0xffffffff, 0)
                                        
                                    label_5e6eba:
                                        int32_t ecx_215 = *(edi + 0x1c24)
                                        int32_t edx_55 = ecx_215
                                        
                                        if (ecx_215 - 9 u<= 0x12)
                                            switch (ecx_215)
                                                case 9, 0xc, 0xe, 0x12, 0x17, 0x19, 0x1b
                                                    edx_55 = ecx_215
                                                    
                                                    if (data_b7d414 == *(edi + 0x1c28))
                                                        edx_55 = ecx_215 + 1
                                                        *(edi + 0x1c24) = edx_55
                                        
                                        sub_5d7560(*esi_14, edx_55)
                                        sub_666060(*esi_14, &var_80)
                                        sub_65d6e0(*esi_14, data_8c4634)
                                        
                                        if (*(result_3 + 0x8c) == 0xf3a && *(edi + 0x2c) != 1)
                                            result = sub_5e4d80(ebx_1[2], 5, eax_2)
                                        else if ((*(result_3 + 0x9c) & 0x100) == 0
                                            || *(edi + 0x2c) == 1)
                                        label_5e6f81:
                                            result = result_2
                                            
                                            if (result == 4)
                                                result = sub_5e4d80(ebx_1[2], 3, eax_2)
                                            else if (result == 3)
                                                result = sub_5e4d80(ebx_1[2], 2, eax_2)
                                            else if (result == 2)
                                                result = sub_5e4d80(ebx_1[2], 1, eax_2)
                                        else
                                            if (sub_5eb6d0(0xb80ad8) == 0)
                                                goto label_5e6f81
                                            
                                            result = sub_5e4d80(ebx_1[2], 5, eax_2)
                                        
                                        goto label_5e6f66
                                    
                                    var_148_1 = "GetLocalSettings"
                                    var_14c_1 = 0x5fb
                                    var_150_5 =
                                        "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                                    ecx = "gGameSettings.localSettings"
                                else
                                    var_148_1 = "GetLocalSettings"
                                    var_14c_1 = 0x5fb
                                    var_150_5 =
                                        "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                                    ecx = "gGameSettings.localSettings"
                            case 1
                                uint32_t eax_164 = sub_64e7a0(*esi_14)
                                sub_665db0(eax_164, &data_be3220, eax_164, 0x3f800000, 0xffffffff, 
                                    0)
                                
                                if ((*(result_3 + 0x98) & 0x20) != 0)
                                    uint32_t eax_169 = sub_64e7a0(*esi_14)
                                    sub_665db0(eax_169, &data_be3298, eax_169, 0x3f800000, 
                                        0xffffffff, 0)
                                
                                goto label_5e6737
                            case 2
                                uint32_t eax_161 = sub_64e7a0(*esi_14)
                                sub_665db0(eax_161, &data_be3220, eax_161, 0x3f800000, 0xffffffff, 
                                    0)
                                uint32_t eax_162 = sub_64e7a0(*esi_14)
                                sub_665db0(eax_162, &data_be322c, eax_162, 0x3f800000, 0xffffffff, 
                                    0)
                                goto label_5e6737
                            case 3
                                goto label_5e66c4
                    else
                        var_148_1 = "GetLocalSettings"
                        var_14c_1 = 0x5fb
                        var_150_5 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                        ecx = "gGameSettings.localSettings"
                else
                    int32_t ecx_82 = *(edi + 0x70)
                    
                    if (ecx_82 == 0)
                    label_5e5cfc:
                        
                        if (*(edi + 0x2c) != 3)
                            goto label_5e5d5a
                        
                        if (*(edi + 0x78) == 0)
                            int32_t edx_18 = *(edi + 0x30)
                            
                            if (edx_18 != 0 && sub_5754f0(eax_78, edx_18, 0xb80ad8, 0, 0x800) != 0)
                                uint32_t eax_83 = sub_64e7a0(*esi_5)
                                sub_665db0(eax_83, &data_be3f24, eax_83, 0x3f800000, 0xffffffff, 0)
                        
                        goto label_5e5d5a
                    
                    result = sub_5cba00(ecx_82)
                    int128_t* result_4 = result
                    
                    if (*(result + 0x2c) == 0)
                        i_4 = nullptr
                        eax_78 = sub_4b9480()
                        
                        if (*(eax_78 + 0x11a8) s> 0)
                            int128_t* i_3 = nullptr
                            
                            do
                                int32_t* result_7 = sub_5cc5e0(i_3)
                                void* i_17 = nullptr
                                result_1 = result_7
                                i_5 = nullptr
                                
                                if (result_7[0x1342] s> 0)
                                    void* ecx_83 = &result_7[0x1022]
                                    var_a8 = ecx_83
                                    
                                    while (true)
                                        var_ac = *ecx_83
                                        result = result_4
                                        
                                        if (*(result + 0x2c) != 0)
                                            var_148_1 = "CardIs"
                                            var_14c_1 = 0x8b1
                                            ecx = "gfx.type == DOMGFX_CARD"
                                            goto label_5e6fbd_3
                                        
                                        uint32_t eax_81 = zx.d((*(result + 0x98)).w)
                                        var_f0[3] = eax_81
                                        
                                        if (eax_81 u>= 0x320)
                                            sub_591930()
                                            ecx_83 = var_a8
                                            i_17 = i_5
                                            eax_81 = var_f0[3]
                                        
                                        eax_78 = eax_81 * 0x64
                                        esi_5 = var_98_1
                                        
                                        if (*(eax_78 + &data_b82524) == var_ac)
                                            uint32_t eax_87
                                            
                                            if (*(edi + 0x1a18) == 0)
                                                if (*(edi + 0x370) != 1 || *(edi + 0x378) != 0x21)
                                                    eax_87 = sub_64e7a0(*esi_5)
                                                    eax_78 = sub_665db0(eax_87, &data_be3ef4, 
                                                        eax_87, 0x3f800000, 0xffffffff, 0)
                                            else if ((*(edi + 0x2e8) != 1 || *(edi + 0x2f0) != 0x21)
                                                    &&
                                                    (*(edi + 0x418) != 1 || *(edi + 0x420) != 0x21))
                                                eax_87 = sub_64e7a0(*esi_5)
                                                eax_78 = sub_665db0(eax_87, &data_be3ef4, eax_87, 
                                                    0x3f800000, 0xffffffff, 0)
                                            break
                                        
                                        int32_t* result_8 = result_1
                                        i_17 += 1
                                        ecx_83 += 4
                                        i_5 = i_17
                                        var_a8 = ecx_83
                                        
                                        if (i_17 s>= result_8[0x1342])
                                            goto label_5e5ce5
                                    
                                    break
                                
                            label_5e5ce5:
                                i_4 += 1
                                eax_78 = sub_4b9480()
                                i_3 = i_4
                            while (i_3 s< *(eax_78 + 0x11a8))
                        
                        goto label_5e5cfc
                    
                    var_148_1 = "IsContrabanded"
                    var_14c_1 = 0x46dc
                    ecx = "gfx.type == DOMGFX_CARD"
                label_5e6fbd:
                    var_150_5 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        else
            var_148_1 = "DomDeclareCard"
            var_14c_1 = 0x4e0b
            ecx = "gfx.sublayer >= 0"
        label_5e6fbd_1:
            var_150_5 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    else
        var_148_1 = "DomDeclareCard"
        var_14c_1 = 0x4d8b
        ecx = "t.t.x <= 100000.0f"
    label_5e6fbd_2:
        var_150_5 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else
    var_148_1 = "DomDeclareCard"
    var_14c_1 = 0x4d53
    ecx =
        "gfx.type == DOMGFX_CARD || gfx.type == DOMGFX_PILE || gfx.type == DOMGFX_CARD_PLACEHOLDER"
label_5e6fbd_3:
    var_150_5 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"

sub_63b870(result, &data_801800, ecx, var_150_5, var_14c_1, var_148_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
