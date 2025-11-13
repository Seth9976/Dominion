// 函数: sub_5ec8d0
// 地址: 0x5ec8d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76a25d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** i = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_ccf768 != 0)
    bool cond:0_1 = data_8db5c4 != 0x27
    void* eax_3 = data_cf65b8
    int32_t edi = data_8db5d8
    int32_t ecx_1 = data_8db5c8
    int32_t esi = data_8db5d4
    uint128_t xmm2_1 = zx.o(*(eax_3 + 0x18))
    int32_t xmm1_2 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
    float var_80 = 0f
    int32_t var_7c_1 = 0
    int32_t var_78_1 = xmm1_2
    int32_t var_74_1 = _mm_cvtepi32_ps(xmm2_1)
    var_80.o = var_80.o
    int32_t var_a0_1
    int96_t xmm0_2
    int32_t edx_1
    
    if (cond:0_1)
        if (esi == 0x27)
            edx_1 = edi
            goto label_5ec97e
        
        var_a0_1 = (data_bf21e8).d
        xmm0_2 = (data_bf21f8).12
    else
        edx_1 = ecx_1
    label_5ec97e:
        
        if (edx_1 == 0)
            var_a0_1 = (data_bf21e8).d
            xmm0_2 = (data_bf21f8).12
        else
            uint32_t eax_4 = zx.d(edx_1.w)
            
            if (eax_4 u>= data_c23bac || *(eax_4 * 0x18d0 + data_c23ba8 + 0x18c8) != edx_1)
                var_a0_1 = (data_bf21e8).d
                xmm0_2 = (data_bf21f8).12
            else
                uint32_t eax_7 = sub_64e7a0(edx_1)
                edi = data_8db5d8
                esi = data_8db5d4
                ecx_1 = data_8db5c8
                var_a0_1 = (*(eax_7 + 0x1620)).d
                xmm0_2 = (*(eax_7 + 0x1630)).12
    
    if (data_8db5c4 != 0x27)
        ecx_1 = 0
        
        if (esi == 0x27)
            ecx_1 = edi
    
    uint32_t eax_8 = sub_64e7a0(ecx_1)
    float xmm1_6 = (*(eax_8 + 0x16d0) f- *(eax_8 + 0x1658) f+ *(eax_8 + 0x1660)) * 0.5f
    float xmm0_5 = data_ccf770 - xmm1_6
    data_ccf780 = xmm1_6
    int32_t xmm2_4 = _mm_max_ss(xmm1_6, xmm0_5)
    float xmm0_6 = data_ccf774
    float var_48_1 = xmm0_6
    float xmm3_2 = xmm0_6 f+ data_ccf778
    data_ccf784 = xmm2_4
    float xmm2_5 = xmm2_4 ^ 0x80000000
    float var_50_1 = xmm3_2
    data_ccf778 = xmm3_2
    uint16_t var_c0
    double var_bc
    float xmm1_12
    
    if (xmm2_5 <= xmm3_2)
        float xmm1_13 = xmm1_6 ^ 0x80000000
        
        if (not(xmm3_2 <= xmm1_13))
            _mm_cvtps_pd(arg3 * 10f)
            _libm_sse2_pow_precise(eax_2, arg2, arg1, var_c0, var_bc)
            xmm1_12 = _mm_max_ss(0xc37a0000, 
                _mm_min_ss(0xbdcccccd, 
                    fconvert.s(0.004999999888241291) * ((xmm3_2 - xmm1_13) ^ (data_8937c0.o).d)))
            goto label_5ecb37
    else
        _mm_cvtps_pd(arg3 * 10f)
        _libm_sse2_pow_precise(eax_2, arg2, arg1, var_c0, var_bc)
        xmm1_12 = _mm_min_ss(0x437a0000, 
            _mm_max_ss(0x3dcccccd, 
                fconvert.s(0.004999999888241291) * ((xmm3_2 - xmm2_5) ^ (data_8937c0.o).d)))
    label_5ecb37:
        float xmm0_20 = var_50_1 + xmm1_12
        var_50_1 = xmm0_20
        data_ccf778 = xmm0_20
        var_48_1 = 0f
    double xmm0_22 = _mm_cvtps_pd(data_ccf77c)
    _mm_cvtps_pd(arg3)
    i = _libm_sse2_pow_precise(eax_2, arg2, arg1, var_c0, var_bc)
    bool cond:2_1 = data_cd3188 s<= 0
    struct _EXCEPTION_REGISTRATION_RECORD** i_1 = nullptr
    data_ccf774 = fconvert.s(xmm0_22) * var_48_1
    float xmm0_25 = 1f f/ var_a0_1
    
    if (not(cond:2_1))
        void* var_4c_1 = nullptr
        int32_t* edi_1 = &data_ccf78c
        void* var_54_3 = &data_ccf78c
        
        do
            sub_654ce0(&var_80, edi_1, "kv label", data_171e82c, &var_80, &var_80, 0x36b0, nullptr, 
                0)
            int128_t xmm0_26 = data_800248
            int32_t ecx_3 = *edi_1
            float var_a4_1 = var_a0_1 f* 0f
            float xmm2_11 = (var_50_1 + 1024f + xmm0_2:8.d * xmm0_25 f+ edi_1[2]) f* var_a0_1
            float var_ac_1 = (xmm0_2:4.d * xmm0_25 + 0f f+ edi_1[1]) f* var_a0_1
            int128_t var_44 = var_a0_1.o
            float var_a8_1 = xmm2_11
            int128_t var_34_1 = xmm0_26
            sub_666060(ecx_3, &var_44)
            int32_t eax_10 = edi_1[-1]
            
            if (eax_10 - 1 u<= 3)
                switch (eax_10)
                    case 1
                        uint32_t eax_11 = sub_64e7a0(*edi_1)
                        sub_665db0(eax_11, &data_be4434, eax_11, 0x3f800000, 0xffffffff, 0)
                        char* const var_5c
                        char** eax_12 = sub_5eb240(&var_5c, edi_1[3])
                        int32_t var_14_1 = 0
                        int32_t var_d8_1 = 0xffffffff
                        sub_666380(eax_12, &data_be4470, *edi_1, eax_12)
                        int32_t var_14_2 = 1
                        
                        if (data_cf65bc != 0)
                            char* eax_13 = var_5c
                            
                            if (eax_13 != 0 && *eax_13 != 0)
                                char* eax_14 = sub_63d4e0(&var_5c)
                                int32_t temp3_1 = *(eax_14 + 4)
                                *(eax_14 + 4) -= 1
                                
                                if (temp3_1 == 1)
                                    sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                                    var_5c = &data_801800
                        
                        int32_t var_14_3 = 0xffffffff
                    case 2, 3, 4
                        char const* const var_d8_4
                        int32_t var_d4
                        char const* const var_d0_3
                        void* eax_17
                        char* ecx_35
                        void** esi_1
                        
                        if (eax_10 != 2)
                            if (eax_10 == 3)
                                esi_1 = &data_be444c
                                goto label_5ecd57
                            
                            eax_17 = eax_10 - 4
                            
                            if (eax_10 == 4)
                                esi_1 = &data_be4458
                                goto label_5ecd57
                            
                            var_d0_3 = "KingdomViewUpdate"
                            var_d4 = 0x68ee
                            var_d8_4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                            ecx_35 = "Halt"
                        label_5ed0c4:
                            sub_63b870(eax_17, &data_801800, ecx_35, var_d8_4, var_d4, var_d0_3)
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        esi_1 = &data_be4440
                    label_5ecd57:
                        uint32_t eax_18 = sub_64e7a0(*edi_1)
                        int32_t var_d8_2 = 0xffffffff
                        sub_666120(sub_665db0(eax_18, esi_1, eax_18, 0x3f800000, 0xffffffff, 0), 
                            &data_be4464, *edi_1, edi_1[0x1b])
                        void* ecx_15 = nullptr
                        void* var_48_2 = nullptr
                        
                        if (edi_1[0x1b] s> 0)
                            void* var_60_1 = &edi_1[3]
                            
                            while (true)
                                int32_t eax_21 = edi_1[-1]
                                int32_t* edi_2
                                int32_t var_58_1
                                void* esi_2
                                
                                if (eax_21 == 2 || eax_21 == 3)
                                    esi_2 = (var_4c_1 + ecx_15) * 9
                                    int32_t eax_32 = *edi_1
                                    var_58_1 = eax_32
                                    
                                    if (*((esi_2 << 2) + &data_1a8cadc) != "tbl_cards"
                                        || *((esi_2 << 2) + &data_1a8cad8) != eax_32
                                        || *((esi_2 << 2) + &data_1a8cae0) != ecx_15
                                        || *((esi_2 << 2) + &data_1a8cae4) != 0)
                                    label_5ecec4:
                                        int32_t* eax_35 = sub_67be20(ecx_15)
                                        ecx_15 = var_48_2
                                        edi_2 = eax_35
                                        *((esi_2 << 2) + &data_1a8caf8) = edi_2
                                        
                                        if (edi_2 != 0)
                                            *((esi_2 << 2) + &data_1a8cadc) = "tbl_cards"
                                        label_5eceea:
                                            *((esi_2 << 2) + &data_1a8cae4) = 0
                                            *((esi_2 << 2) + &data_1a8cae0) = ecx_15
                                            *((esi_2 << 2) + &data_1a8cad8) = var_58_1
                                    else
                                        edi_2 = *((esi_2 << 2) + &data_1a8caf8)
                                        
                                        if (edi_2 == 0)
                                            goto label_5ecec4
                                        
                                        uint32_t edx_10 = zx.d(edi_2.w)
                                        
                                        if (edx_10 u>= data_c23bac
                                                || *(edx_10 * 0x18d0 + data_c23ba8 + 0x18c8)
                                                != edi_2)
                                            goto label_5ecec4
                                else
                                    eax_17 = eax_21 - 4
                                    
                                    if (eax_21 != 4)
                                        var_d0_3 = "KingdomViewUpdate"
                                        var_d4 = 0x68ff
                                        var_d8_4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                                        ecx_35 = "Halt"
                                        break
                                    
                                    esi_2 = (var_4c_1 + ecx_15) * 9
                                    int32_t eax_26 = *edi_1
                                    var_58_1 = eax_26
                                    
                                    if (*((esi_2 << 2) + &data_1a8cadc) != "tbl_landscapes"
                                        || *((esi_2 << 2) + &data_1a8cad8) != eax_26
                                        || *((esi_2 << 2) + &data_1a8cae0) != ecx_15
                                        || *((esi_2 << 2) + &data_1a8cae4) != 0)
                                    label_5ece2d:
                                        int32_t* eax_29 = sub_67be20(ecx_15)
                                        ecx_15 = var_48_2
                                        edi_2 = eax_29
                                        *((esi_2 << 2) + &data_1a8caf8) = edi_2
                                        
                                        if (edi_2 != 0)
                                            *((esi_2 << 2) + &data_1a8cadc) = "tbl_landscapes"
                                            goto label_5eceea
                                    else
                                        edi_2 = *((esi_2 << 2) + &data_1a8caf8)
                                        
                                        if (edi_2 == 0)
                                            goto label_5ece2d
                                        
                                        uint32_t edx_8 = zx.d(edi_2.w)
                                        
                                        if (edx_8 u>= data_c23bac
                                                || *(edx_8 * 0x18d0 + data_c23ba8 + 0x18c8)
                                                != edi_2)
                                            goto label_5ece2d
                                
                                if (edi_2 != 0)
                                    void* eax_38 = sub_571b30(*var_60_1, sub_5cf7e0())
                                    uint32_t eax_39 = sub_64e7a0(edi_2)
                                    sub_5e0df0(
                                        sub_5e01b0(
                                            sub_665db0(eax_39, eax_38 + 0x74, eax_39, 0x3f800000, 
                                                0xffffffff, 0), 
                                            eax_38, edi_2, nullptr, 1, 0), 
                                        eax_38, edi_2, 2)
                                    sub_5defb0(edi_2, eax_38)
                                    uint32_t eax_42 = sub_64e7a0(edi_2)
                                    int32_t var_d8_3 = 0xffffffff
                                    sub_666120(
                                        sub_665db0(eax_42, &data_be3d98, eax_42, 0x3f800000, 
                                            0xffffffff, 0), 
                                        &data_be4134, edi_2, 0)
                                    uint32_t eax_44 = sub_4c89a0()
                                    sub_4d3b70(edi_2)
                                    
                                    if (eax_44 - 0x10 u> 3)
                                        eax_17 = data_cc8dc0
                                        
                                        if (eax_17 == 0)
                                            var_d0_3 = "GetLocalSettings"
                                            var_d4 = 0x5fb
                                            var_d8_4 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                                            ecx_35 = "gGameSettings.localSettings"
                                            break
                                        
                                        int32_t eax_45 = *(eax_17 + 0x28)
                                        
                                        if (eax_45 != 0)
                                            uint32_t eax_48
                                            void** edx_17
                                            
                                            if (eax_45 == 1)
                                                eax_48 = sub_64e7a0(edi_2)
                                                edx_17 = &data_8dc674
                                            else
                                                eax_17 = eax_45 - 2
                                                
                                                if (eax_45 != 2)
                                                    var_d0_3 = "KingdomViewUpdate"
                                                    var_d4 = 0x692c
                                                    var_d8_4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                                                    ecx_35 = "Halt"
                                                    break
                                                
                                                eax_48 = sub_64e7a0(edi_2)
                                                edx_17 = &data_8dc680
                                            
                                            sub_665db0(eax_48, edx_17, eax_48, 0x3f800000, 
                                                0xffffffff, 0)
                                    
                                    ecx_15 = var_48_2
                                
                                edi_1 = var_54_3
                                ecx_15 += 1
                                var_60_1 += 0x10
                                var_48_2 = ecx_15
                                
                                if (ecx_15 s>= edi_1[0x1b])
                                    goto label_5ed029
                            
                            goto label_5ed0c4
            
        label_5ed029:
            sub_65d6e0(*edi_1, data_8c4634)
            edi_1 = &edi_1[0x1d]
            var_4c_1 += 6
            i = i_1 + 1
            i_1 = i
            var_54_3 = edi_1
        while (i s< data_cd3188)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(i)
return i
