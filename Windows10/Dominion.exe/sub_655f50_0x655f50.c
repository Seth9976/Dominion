// 函数: sub_655f50
// 地址: 0x655f50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_3c = data_c23c04
float var_38 = data_c23c08
float xmm1 = *(arg2 + 0x1680)
xmm1 f- 0
float var_34 = data_c23c0c
float var_30 = data_c23c10
float var_2c = data_c23c14
uint32_t var_50 = arg3
struct InputHitResult::UI2HitResult::VTable* const var_40 =
    &UI2HitResult::`vftable'{for `InputHitResult'}
float eax_6
eax_6:1.b =
    (xmm1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm1 - 1f
    eax_6:1.b =
        (xmm1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 1f) ? 1 : 0) << 2 | (xmm1 < 1f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (not(p_3) || *(arg2 + 0x159c) != 0)
        int128_t* eax_7 = *(arg2 + 0x1410)
        char const* const var_6c_3
        int32_t var_68_5
        char const* const var_64_5
        char* ecx_23
        
        if (eax_7 u> 5)
            var_64_5 = "UI2HitTest"
            var_68_5 = 0x1ad4
        label_6564b9:
            var_6c_3 = "C:\x\ax2017\Engine\UI2.cpp"
            ecx_23 = "Halt"
        label_6564c8:
            sub_63b870(eax_7, &data_801800, ecx_23, var_6c_3, var_68_5, var_64_5)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        float var_20
        float var_1c
        float var_18
        float var_14
        float ebx_1
        
        switch (eax_7)
            case nullptr
            label_656151:
                
                if (arg6 != 0)
                    goto label_6560b3
                
                goto label_65615b
            case 1, 3, 4, 5
                int32_t ecx_1
                eax_7, ecx_1 = sub_67d460(arg2 + 0x554, *(data_147abe8 + 0x2c), &var_20)
                float xmm1_2 = *(arg2 + 0x16cc) - 0f
                float xmm0_2 = *(arg2 + 0x16d0) - 0f
                float xmm1_4 = xmm1_2 * var_18 + 0f
                float xmm3_3 = xmm1_2 * var_20 + 0f
                float xmm2_4 = xmm0_2 * var_1c + 0f
                float xmm0_4 = xmm0_2 * var_14 + 0f
                
                if (xmm1_4 < xmm3_3 || xmm0_4 < xmm2_4)
                    var_64_5 = "RectInflate"
                    var_68_5 = 0xb3
                    var_6c_3 = "C:\x\ax2017\Engine\Rect.cpp"
                    ecx_23 = "RectIsNormalized(r)"
                    goto label_6564c8
                
                float xmm2_5 = xmm2_4 f+ *(arg2 + 0x1580)
                float xmm1_5 = xmm1_4 f+ *(arg2 + 0x1584)
                float xmm0_5 = xmm0_4 f+ *(arg2 + 0x1588)
                int32_t var_64_2 = ecx_1
                var_20 = xmm3_3 f+ *(arg2 + 0x157c)
                var_1c = xmm2_5
                var_18 = xmm1_5
                var_14 = xmm0_5
                char eax_10
                eax_10, arg3 = sub_6559a0(&var_20, arg2 + 0x1620, arg5, &var_20)
                
                if (eax_10 != 0)
                    goto label_656151
                
                arg6 = 1
            label_6560b3:
                ebx_1 = arg4
            label_6560bd:
                int32_t var_28
                int32_t var_24
                
                if (*(arg2 + 0x1598) != 4)
                    int32_t eax_11 = *(arg2 + 0x189c)
                    int32_t edi_1 = 0
                    
                    if (eax_11 != 0)
                        int32_t ebx_2 = ebx_1 << 8
                        int32_t var_4c_1 = ebx_2
                        
                        do
                            sub_64e7a0(*(arg2 + (edi_1 << 2) + 0x179c))
                            sub_655f50(edi_1 | ebx_2, arg5, arg6.d)
                            int32_t eax_16 = (*var_28)()
                            int32_t eax_18 = (*data_c23c00)()
                            char eax_19
                            
                            if (eax_16 == eax_18)
                                eax_19 = eax_16(&var_28, &data_c23c00)
                            
                            if (eax_16 != eax_18 || eax_19 == 0)
                                int32_t (* const vFunc_0)() = var_40->vFunc_0
                                int32_t (* ebx_4)(void* arg1, void* arg2)
                                
                                if (vFunc_0 != sub_4ae6d0)
                                    ebx_4 = vFunc_0()
                                else
                                    ebx_4 = sub_4ae6a0
                                
                                int32_t eax_35 = (*data_c23c00)()
                                char eax_36
                                
                                if (ebx_4 == eax_35)
                                    eax_36 = ebx_4(&var_40, &data_c23c00)
                                
                                float ecx_9
                                
                                if (ebx_4 != eax_35 || eax_36 == 0)
                                    ecx_9 = var_18
                                    
                                    if (ecx_9 u>= var_30)
                                        goto label_65630b
                                else
                                    ecx_9 = var_18
                                label_65630b:
                                    var_3c = var_24
                                    var_38 = var_20
                                    var_34 = var_1c
                                    var_30 = ecx_9
                                    var_2c = var_14
                            
                            ebx_2 = var_4c_1
                            edi_1 += 1
                        while (edi_1 != eax_11)
                
                if (*(arg2 + 0x14f0) != 0 || *(arg2 + 0x15a0) != 0)
                    int32_t i = 0
                    void* ebx_5 = arg2 + 0x18a4
                    
                    do
                        int32_t ecx_10 = *ebx_5
                        
                        if (ecx_10 == 0)
                            break
                        
                        if (sub_64e7a0(ecx_10) == 0)
                            break
                        
                        sub_655f50(arg4 << 8 | i, arg5, arg6.d)
                        int32_t eax_46 = (*var_28)()
                        int32_t eax_48 = (*data_c23c00)()
                        char eax_49
                        
                        if (eax_46 == eax_48)
                            eax_49 = eax_46(&var_28, &data_c23c00)
                        
                        if (eax_46 != eax_48 || eax_49 == 0)
                            int32_t (* const vFunc_0_1)() = var_40->vFunc_0
                            int32_t (* esi_2)(void* arg1, void* arg2)
                            
                            if (vFunc_0_1 != sub_4ae6d0)
                                esi_2 = vFunc_0_1()
                            else
                                esi_2 = sub_4ae6a0
                            
                            int32_t eax_53 = (*data_c23c00)()
                            char eax_54
                            
                            if (esi_2 == eax_53)
                                eax_54 = esi_2(&var_40, &data_c23c00)
                            
                            float ecx_13
                            
                            if (esi_2 != eax_53 || eax_54 == 0)
                                ecx_13 = var_18
                                
                                if (ecx_13 u>= var_30)
                                    goto label_6563fb
                            else
                                ecx_13 = var_18
                            label_6563fb:
                                var_3c = var_24
                                var_38 = var_20
                                var_34 = var_1c
                                var_30 = ecx_13
                                var_2c = var_14
                        
                        i += 1
                        ebx_5 += 4
                    while (i s< 5)
                
                *(var_50 + 4) = var_3c
                *(var_50 + 8) = var_38
                *(var_50 + 0xc) = var_34
                *(var_50 + 0x10) = var_30
                *var_50 = &UI2HitResult::`vftable'{for `InputHitResult'}
                *(var_50 + 0x14) = var_2c
                CookieCheckFunction(var_50)
                return var_50
            case 2
                arg6 = 0
            label_65615b:
                float xmm3_5[0x4] = *(arg2 + 0x157c)
                float xmm1_6 = *(arg2 + 0x1428)
                float xmm5_1 = *(arg2 + 0x16cc)
                float xmm6_1 = *(arg2 + 0x16d0)
                float xmm2_8 = xmm3_5[0] * xmm1_6 + 0f
                float xmm4_4 = _mm_shuffle_ps(xmm3_5, xmm3_5, 0x55) * xmm1_6 + 0f
                float xmm0_7 = _mm_shuffle_ps(xmm3_5, xmm3_5, 0xaa)
                float xmm3_7 = _mm_shuffle_ps(xmm3_5, xmm3_5, 0xff) * xmm1_6
                float xmm0_9 = xmm0_7 * xmm1_6 + xmm5_1
                var_20 = xmm2_8
                var_1c = xmm4_4
                float xmm3_8 = xmm3_7 + xmm6_1
                var_18 = xmm0_9
                var_14 = xmm3_8
                
                if (xmm2_8 >= xmm0_9 || not(xmm4_4 < xmm3_8))
                    var_20 = 0f
                    var_1c = 0f
                    var_18 = xmm5_1
                    var_14 = xmm6_1
                
                eax_7 = *(arg2 + 0x1598)
                var_20.o = var_20.o
                
                if (eax_7 u> 6)
                    var_64_5 = "UI2AcceptsHover"
                    var_68_5 = 0x19bd
                    goto label_6564b9
                
                switch (eax_7)
                    case nullptr
                        int32_t eax_21 = *(arg2 + 0x15f8)
                        
                        if (eax_21 == 2)
                            if (*(arg2 + 0x14e8) == 0)
                                goto label_6560b3
                            
                            goto label_656238
                        
                        if (eax_21 == 3)
                            if (*(arg2 + 0x1568) != 0)
                                goto label_656238
                            
                            goto label_6560b3
                        
                        if (eax_21 == 5)
                            goto label_656238
                        
                        goto label_6560b3
                    case 1, 2, 3, 5, 6
                    label_656238:
                        uint32_t var_64_4 = arg3
                        ebx_1 = arg4
                        
                        if (sub_6559a0(&var_20, arg2 + 0x1620, arg5, &var_20) != 0)
                            var_3c = *(arg2 + 0x18c8)
                            float eax_28 = *(arg2 + 0x140c)
                            var_34 = ebx_1
                            
                            if (eax_28 == 0)
                                eax_28 = *(arg2 + 0x1694)
                            
                            var_30 = eax_28
                            
                            if (sub_6553d0(arg2) == 0 || data_c23bf8 == 0)
                                if (sub_655340(arg2) == 0)
                                    var_2c = 4.20389539e-45f
                                else
                                    int32_t eax_31
                                    eax_31.b = *(arg2 + 0x1598) == 6
                                    var_2c = eax_31 + 1
                            else
                                var_2c = 5.60519386e-45f
                        
                        goto label_6560bd
                    case 4
                        goto label_6560b3

*arg3 = &UI2HitResult::`vftable'{for `InputHitResult'}
*(arg3 + 4) = data_c23c04
*(arg3 + 8) = data_c23c08
*(arg3 + 0xc) = data_c23c0c
*(arg3 + 0x10) = data_c23c10
*(arg3 + 0x14) = data_c23c14
CookieCheckFunction(arg3)
return arg3
