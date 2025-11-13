// 函数: sub_5c34f0
// 地址: 0x5c34f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7697db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_164 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = arg3[1]
int32_t edx = arg3[2]
int32_t ecx_1 = arg4[1]
struct _EXCEPTION_REGISTRATION_RECORD** eax_19
int32_t var_38

if (ecx_1 + edi + edx s>= 0x14 || ecx_1 s<= 0)
    int32_t* ecx_47 = *arg3
    var_38 = 0
    sub_5c3cd0(&var_38, edx * edi, ecx_47, &var_38)
    var_38 = 0x3f800000
    eax_19 = sub_5c4a40(&var_38, arg2, arg3, arg4, &var_38)
else
    int32_t* var_138_1 = arg2
    int32_t* var_134_1 = arg4
    int32_t var_14_1 = 0
    int32_t eax_6 = sub_5bbe40(arg2)
    int32_t var_12c_1 = eax_6
    int32_t ecx_3 = *arg2
    int32_t var_130_1 = ecx_3
    int32_t var_14_2 = 1
    int32_t eax_7 = sub_5bbe40(arg4)
    int128_t* ecx_5 = *arg4
    int128_t* var_54_1 = ecx_5
    int128_t* var_128_1 = ecx_5
    int32_t var_124_1 = eax_7
    int32_t j_2 = arg2[2]
    int32_t j_3 = j_2
    int32_t var_14_3 = 2
    int32_t ecx_7 = arg2[1]
    int32_t edi_2 = arg4[2]
    
    if (arg3[1] != ecx_7 || arg3[2] != edi_2)
        if (ecx_7 != 0 && edi_2 != 0 && ecx_7 s> divs.dp.d(0x7fffffff, edi_2))
            struct std::exception::std::bad_alloc::VTable* exceptionObject
            sub_5c8e10(&exceptionObject)
            _CxxThrowException(&exceptionObject, &data_8c059c)
            noreturn
        
        sub_5bffd0(arg3, ecx_7 * edi_2, ecx_7, edi_2)
    
    var_14_3.b = 3
    int32_t eax_10 = sub_5bbe40(arg3)
    int32_t* eax_11 = *arg3
    int32_t* var_118_1 = eax_11
    int32_t var_114_1 = eax_10
    var_14_3.b = 0x10
    void* edi_3 = sub_5bbe40(arg3)
    void* var_50_1 = edi_3
    var_14_3.b = 0x11
    int32_t eax_13 = sub_4acc50(arg3)
    var_14_3.b = 0x12
    var_14_3.b = 4
    int32_t eax_15 = sub_5bbe40(arg3) & 0x80000003
    
    if (eax_15 s< 0)
        eax_15 = ((eax_15 - 1) | 0xfffffffc) + 1
    
    void* const edx_4 = nullptr
    eax_19 = neg.d(eax_15) & 3
    void* const var_40_1 = nullptr
    int32_t var_34_1 = 0
    
    if (eax_13 s> 0)
        var_38 = eax_10 << 2
        int32_t* eax_24 = eax_11
        void* var_44 = nullptr
        int32_t* var_48_2 = eax_24
        int32_t ecx_44
        
        do
            int32_t esi_1 = 0
            int32_t var_24_1 = 0
            int32_t edi_6 = ((edi_3 - edx_4) & 0xfffffffc) + edx_4
            int32_t var_3c_1 = edi_6
            uint128_t var_110
            uint128_t var_f4
            void var_c8
            
            if (edx_4 s> 0)
                int32_t* edi_7 = eax_24
                int32_t* var_28_1 = eax_24
                
                do
                    int32_t var_168_2 = arg2[2]
                    sub_5bc1c0(&var_f4, *arg2 + (esi_1 << 2), 1)
                    int32_t* var_e8_1 = arg2
                    uint128_t xmm0_1 = var_f4
                    int32_t var_e0_1 = 0
                    int32_t var_dc_1 = 1
                    int64_t xmm0_2 = esi_1.q
                    int32_t esi_2 = arg4[1]
                    var_14_3.b = 0x15
                    int32_t var_168_3 = 1
                    int32_t ecx_18 = var_34_1 * sub_5bbe40(arg4)
                    var_14_3.b = 4
                    sub_5c03b0(&var_110, *arg4 + (ecx_18 << 2), esi_2)
                    int32_t* var_104_1 = arg4
                    int32_t var_100_1 = 0
                    int32_t var_fc_1 = var_34_1
                    var_14_3.b = 0x16
                    int32_t eax_33 = sub_5bbe40(arg4)
                    var_14_3.b = 4
                    int32_t var_b4_1 = xmm0_2.d
                    int32_t xmm0_4 = _mm_bsrli_si128(xmm0_1, 4)
                    int32_t var_bc_1 = _mm_bsrli_si128(xmm0_1, 8)
                    uint128_t xmm0_7 = var_110
                    int32_t var_c0_1 = xmm0_4
                    int32_t* var_c4_1 = xmm0_1
                    int32_t var_f8_1 = eax_33
                    void* xmm1_2 = _mm_bsrli_si128(xmm0_1, 0xc)
                    int32_t var_b0_1 = xmm0_2:4.d
                    int32_t var_ac_1 = 1
                    int64_t var_98_1 = var_100_1.q
                    int32_t var_90_1 = eax_33
                    int32_t xmm1_3
                    
                    if (sub_5c3ca0(&var_c8) != 0)
                        int32_t* var_84_1 = var_c4_1
                        var_14_3.b = 0x17
                        float* esi_6 = xmm0_7.d
                        uint128_t var_80_1
                        var_80_1.d = sub_5bbe40(xmm1_2)
                        var_80_1:8.d = esi_6
                        var_14_3.b = 0x1a
                        int32_t var_70_1 = sub_5bbe40(xmm0_7:0xc.d)
                        var_14_3.b = 0x1b
                        int32_t esi_7 = 1
                        int32_t var_30_1 = *var_c4_1 * *esi_6
                        
                        if (sub_5c3ca0(&var_c8) s> 1)
                            int32_t eax_40 = var_80_1.d
                            float* edi_9 = &var_c4_1[eax_40]
                            bool cond:1_1
                            
                            do
                                float xmm0_11 = *edi_9
                                edi_9 = &edi_9[eax_40]
                                float xmm0_12 = xmm0_11 * esi_6[esi_7]
                                esi_7 += 1
                                var_30_1 = xmm0_12 f+ var_30_1
                                cond:1_1 = esi_7 s< sub_5c3ca0(&var_c8)
                                eax_40 = var_80_1.d
                            while (cond:1_1)
                        
                        xmm1_3 = var_30_1
                        var_14_3.b = 4
                        edi_7 = var_28_1
                    else
                        xmm1_3 = (zx.o(0)).d
                    
                    edx_4 = var_40_1
                    esi_1 = var_24_1 + 1
                    *edi_7 = xmm1_3
                    edi_7 = &edi_7[1]
                    var_24_1 = esi_1
                    var_28_1 = edi_7
                while (esi_1 s< edx_4)
                
                edi_6 = var_3c_1
            
            if (edx_4 s< edi_6)
                int128_t* ecx_28 = ecx_3 + (edx_4 << 2)
                int128_t* var_28_2 = ecx_28
                int32_t j_1 = j_2
                int32_t i_1 = ((edi_6 - edx_4 - 1) u>> 2) + 1
                void* eax_45 = &eax_11[var_44 + edx_4]
                void* var_24_2 = eax_45
                int32_t i
                
                do
                    float xmm2_1[0x4] = zx.o(0)
                    
                    if (j_1 s> 0)
                        int128_t* eax_47 = var_54_1
                        int32_t j
                        
                        do
                            float xmm0_14[0x4] = *eax_47
                            eax_47 += 4
                            float xmm1_4[0x4] = *ecx_28
                            ecx_28 += eax_6 << 2
                            xmm2_1 = _mm_add_ps(xmm2_1, 
                                _mm_mul_ps(xmm1_4, _mm_shuffle_ps(xmm0_14, xmm0_14, 0)))
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        ecx_28 = var_28_2
                        eax_45 = var_24_2
                        j_1 = j_2
                    
                    *eax_45 = xmm2_1
                    ecx_28 = &ecx_28[1]
                    eax_45 += 0x10
                    var_28_2 = ecx_28
                    var_24_2 = eax_45
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                edi_6 = var_3c_1
                edx_4 = var_40_1
            
            if (edi_6 s< var_50_1)
                void* var_24_3 = &eax_11[var_44 + edi_6]
                
                do
                    int32_t var_168_4 = arg2[2]
                    sub_5bc1c0(&var_110, *arg2 + (edi_6 << 2), 1)
                    int32_t* var_104_2 = arg2
                    uint128_t xmm0_16 = var_110
                    int32_t var_fc_2 = 0
                    int32_t var_f8_2 = 1
                    int64_t xmm0_17 = edi_6.q
                    int32_t esi_12 = arg4[1]
                    var_14_3.b = 0x1e
                    int32_t eax_55 = sub_5bbe40(arg4) * var_34_1
                    int32_t var_168_5 = 1
                    var_14_3.b = 4
                    sub_5c03b0(&var_f4, *arg4 + (eax_55 << 2), esi_12)
                    int32_t* var_e8_2 = arg4
                    int32_t var_e4_2 = 0
                    int32_t var_e0_2 = var_34_1
                    var_14_3.b = 0x1f
                    int32_t eax_58 = sub_5bbe40(arg4)
                    var_14_3.b = 4
                    int32_t var_b4_2 = xmm0_17.d
                    int32_t xmm0_19 = _mm_bsrli_si128(xmm0_16, 4)
                    int32_t var_bc_2 = _mm_bsrli_si128(xmm0_16, 8)
                    uint128_t xmm0_22 = var_f4
                    int32_t var_c0_2 = xmm0_19
                    float* var_c4_2 = xmm0_16
                    int32_t var_dc_2 = eax_58
                    void* xmm1_7 = _mm_bsrli_si128(xmm0_16, 0xc)
                    int32_t var_b0_2 = xmm0_17:4.d
                    int32_t var_ac_2 = 1
                    int64_t var_98_2 = var_e4_2.q
                    int32_t var_90_2 = eax_58
                    int32_t xmm1_8
                    
                    if (sub_5c3ca0(&var_c8) != 0)
                        float* var_84_2 = var_c4_2
                        var_14_3.b = 0x20
                        float* esi_16 = xmm0_22.d
                        uint128_t var_80_2
                        var_80_2.d = sub_5bbe40(xmm1_7)
                        var_80_2:8.d = esi_16
                        var_14_3.b = 0x23
                        int32_t var_70_2 = sub_5bbe40(xmm0_22:0xc.d)
                        var_14_3.b = 0x24
                        int32_t esi_17 = 1
                        int32_t var_30_2 = *var_c4_2 * *esi_16
                        
                        if (sub_5c3ca0(&var_c8) s> 1)
                            int32_t eax_67 = var_80_2.d
                            float* edi_13 = &var_c4_2[eax_67]
                            bool cond:2_1
                            
                            do
                                float xmm0_26 = *edi_13
                                edi_13 = &edi_13[eax_67]
                                float xmm0_27 = xmm0_26 * esi_16[esi_17]
                                esi_17 += 1
                                var_30_2 = xmm0_27 f+ var_30_2
                                cond:2_1 = esi_17 s< sub_5c3ca0(&var_c8)
                                eax_67 = var_80_2.d
                            while (cond:2_1)
                            edi_6 = var_3c_1
                        
                        xmm1_8 = var_30_2
                        var_14_3.b = 4
                    else
                        xmm1_8 = (zx.o(0)).d
                    
                    edi_6 += 1
                    var_3c_1 = edi_6
                    *var_24_3 = xmm1_8
                    var_24_3 += 4
                while (edi_6 s< var_50_1)
                
                edx_4 = var_40_1
            
            edx_4 = (edx_4 + eax_19) & 0x80000003
            
            if (edx_4 s< 0)
                edx_4 = ((edx_4 - 1) | 0xfffffffc) + 1
            
            edi_3 = var_50_1
            
            if (edi_3 s< edx_4)
                edx_4 = edi_3
            
            var_54_1 += eax_7 << 2
            ecx_44 = var_34_1 + 1
            var_44 += eax_10
            eax_24 = var_48_2 + var_38
            var_40_1 = edx_4
            var_34_1 = ecx_44
            var_48_2 = eax_24
        while (ecx_44 s< eax_13)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_24
fsbase->NtTib.ExceptionList = ExceptionList
return eax_19
