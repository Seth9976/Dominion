// 函数: sub_5c1200
// 地址: 0x5c1200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7696bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_23c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = arg3[2]
int32_t ecx = *(arg4 + 8)
struct _EXCEPTION_REGISTRATION_RECORD** eax_23
int32_t var_44

if (arg3[1] + ecx + edx s>= 0x14 || ecx s<= 0)
    int32_t edx_11 = edx * arg3[1]
    int32_t* ecx_38 = *arg3
    var_44 = 0
    sub_5c3cd0(&var_44, edx_11, ecx_38, &var_44)
    var_44 = 0x3f800000
    eax_23 = sub_5c2510(&var_44, arg2, arg3, arg4, &var_44)
else
    int32_t eax_6 = *(arg2 + 0x18)
    int64_t xmm1_1 = arg2[1].q
    uint128_t var_120 = *arg2
    int32_t var_b8_1 = eax_6
    int64_t var_c0_1 = arg2[1].q
    int128_t xmm0_3 = *arg4
    int32_t var_9c_1 = *(arg4 + 0x18)
    int32_t eax_8 = *(arg2 + 0x18)
    int64_t var_1e0_1 = xmm1_1
    uint128_t xmm1_2 = *arg4
    int32_t var_1d8_1 = eax_8
    int32_t eax_9 = *(arg4 + 0x18)
    int64_t var_a4_1 = arg4[1].q
    uint128_t xmm0_5 = *arg2
    int32_t var_1bc_1 = eax_9
    int96_t var_1d4_1 = xmm1_2.12
    int64_t xmm1_3 = arg4[1].q
    int96_t var_1f0_1 = xmm0_5.12
    int64_t var_1c4_1 = xmm1_3
    int32_t var_1b8_1 = xmm0_5
    int32_t var_14_1 = 1
    int32_t eax_10 = sub_5bbe40(_mm_bsrli_si128(xmm0_5, 0xc))
    int128_t* var_38_1 = xmm1_2
    int32_t var_1ac_1 = xmm1_2
    int32_t var_14_2 = 3
    int32_t eax_11 = sub_5bbe40(_mm_bsrli_si128(xmm1_2, 0xc))
    uint128_t xmm1_4 = var_120
    int32_t j_2 = _mm_bsrli_si128(xmm1_4, 8)
    int32_t xmm1_5 = _mm_bsrli_si128(xmm1_4, 4)
    int32_t var_14_3 = 4
    int32_t edi_1 = xmm0_3:4.d
    
    if (arg3[1] != xmm1_5 || arg3[2] != edi_1)
        if (xmm1_5 != 0 && edi_1 != 0)
            int32_t eax_13
            eax_13.b = xmm1_5 s> divs.dp.d(0x7fffffff, edi_1)
            
            if (eax_13.b != 0)
                sub_5c8e10(&var_120:4)
                _CxxThrowException(&var_120:4, &data_8c059c)
                noreturn
        
        sub_5bffd0(arg3, xmm1_5 * edi_1, xmm1_5, edi_1)
    
    var_14_3.b = 5
    int32_t eax_14 = sub_5bbe40(arg3)
    int32_t* eax_15 = *arg3
    var_120:8.d = eax_15
    var_120:0xc.d = eax_14
    var_14_3.b = 0x1a
    void* eax_16 = sub_5bbe40(arg3)
    var_14_3.b = 0x1b
    int32_t eax_17 = sub_4acc50(arg3)
    var_14_3.b = 0x1c
    var_14_3.b = 6
    int32_t eax_19 = sub_5bbe40(arg3) & 0x80000003
    
    if (eax_19 s< 0)
        eax_19 = ((eax_19 - 1) | 0xfffffffc) + 1
    
    void* const edi_2 = nullptr
    eax_23 = neg.d(eax_19) & 3
    void* const var_34_1 = nullptr
    int32_t var_4c_1 = 0
    
    if (eax_17 s> 0)
        int32_t* ecx_12 = eax_15
        var_44 = eax_14 << 2
        void* eax_26 = eax_16
        void* var_50 = nullptr
        int32_t* var_5c = ecx_12
        bool cond:2_1
        
        do
            int32_t esi_1 = 0
            int32_t var_3c_1 = 0
            void* edx_5 = (eax_26 - edi_2) & 0xfffffffc
            void* var_48_1 = edx_5 + edi_2
            void var_198
            int128_t var_104
            int128_t var_cc
            int128_t var_b4_1
            
            if (edi_2 s> 0)
                int32_t eax_28 = var_1b8_1
                int32_t* edi_3 = ecx_12
                int32_t var_24_1 = eax_28
                int32_t* var_28_1 = ecx_12
                
                do
                    int32_t var_240_2 = var_1f0_1:8.d
                    sub_5bc1c0(&var_104, eax_28, 1)
                    int32_t var_240_3 = 1
                    int32_t var_e0_1 = eax_8
                    int32_t xmm0_12 = var_104.d
                    int32_t var_dc_1 = esi_1
                    int32_t var_d8_1 = 0
                    int32_t var_d4_1 = 1
                    sub_5c03b0(&var_cc, var_38_1, var_1d4_1:8.d)
                    var_b4_1:0xc.d = eax_9
                    var_c0_1.o = xmm1_2
                    var_b4_1:4.q = xmm1_3
                    var_a4_1.d = 0
                    var_a4_1:4.d = var_4c_1
                    int32_t var_9c_2 = 1
                    int32_t var_164_1 = 1
                    int32_t var_130_1 = 1
                    int128_t var_174_1 = xmm1_1:4.o
                    int32_t xmm0_20 = var_cc.d
                    int128_t var_140_1 = var_b4_1
                    int32_t xmm1_6
                    
                    if (sub_5c83b0(&var_198) != 0)
                        int32_t var_8c_1 = xmm0_12
                        var_14_3.b = 0x26
                        int128_t var_88_1
                        var_88_1.d = sub_5bbe40(xmm0_5:4.12:8.d)
                        var_88_1:8.d = xmm0_20
                        var_14_3.b = 0x2a
                        var_88_1:0xc.d = sub_5bbe40(var_c0_1:4.12:8.d)
                        var_14_3.b = 0x2d
                        int32_t var_2c_1 = 1
                        float var_30_1 = *xmm0_12 f* *xmm0_20
                        
                        if (sub_5c83b0(&var_198) s> 1)
                            int32_t eax_37 = var_88_1.d << 2
                            int32_t ecx_20 = var_88_1:0xc.d << 2
                            float* esi_5 = xmm0_12 + eax_37
                            int32_t var_94_1 = eax_37
                            float* edi_5 = xmm0_20 + ecx_20
                            int32_t var_60_1 = ecx_20
                            bool cond:3_1
                            
                            do
                                float xmm0_25 = *esi_5
                                esi_5 += eax_37
                                float xmm0_26 = xmm0_25 * *edi_5
                                edi_5 += ecx_20
                                var_2c_1 += 1
                                var_30_1 = xmm0_26 + var_30_1
                                cond:3_1 = var_2c_1 s< sub_5c83b0(&var_198)
                                eax_37 = var_94_1
                                ecx_20 = var_60_1
                            while (cond:3_1)
                        
                        xmm1_6 = var_30_1
                        edi_3 = var_28_1
                        var_14_3.b = 6
                    else
                        xmm1_6 = (zx.o(0)).d
                    
                    esi_1 = var_3c_1 + 1
                    *edi_3 = xmm1_6
                    eax_28 = var_24_1 + 4
                    edi_3 = &edi_3[1]
                    var_3c_1 = esi_1
                    var_24_1 = eax_28
                    var_28_1 = edi_3
                while (esi_1 s< var_34_1)
                
                edi_2 = var_34_1
            
            void* esi_9 = var_48_1
            
            if (edi_2 s< esi_9)
                int128_t* ecx_22 = var_1b8_1 + (edi_2 << 2)
                int128_t* var_28_2 = ecx_22
                int32_t i_1 = ((edx_5 - 1) u>> 2) + 1
                int32_t i_2 = i_1
                void* eax_43 = &eax_15[var_50 + edi_2]
                int32_t j_3 = j_2
                void* var_24_2 = eax_43
                int32_t i
                
                do
                    float xmm2_1[0x4] = zx.o(0)
                    
                    if (j_3 s> 0)
                        int32_t j_1 = j_2
                        int128_t* eax_46 = var_38_1
                        int32_t j
                        
                        do
                            float xmm1_7[0x4] = *eax_46
                            eax_46 += eax_11 << 2
                            float xmm0_28[0x4] = *ecx_22
                            ecx_22 += eax_10 << 2
                            xmm2_1 = _mm_add_ps(xmm2_1, 
                                _mm_mul_ps(xmm0_28, _mm_shuffle_ps(xmm1_7, xmm1_7, 0)))
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        eax_43 = var_24_2
                        ecx_22 = var_28_2
                        i_1 = i_2
                        j_3 = j_2
                    
                    *eax_43 = xmm2_1
                    ecx_22 = &ecx_22[1]
                    eax_43 += 0x10
                    var_28_2 = ecx_22
                    i = i_1
                    i_1 -= 1
                    var_24_2 = eax_43
                    i_2 = i_1
                while (i != 1)
                esi_9 = var_48_1
                edi_2 = var_34_1
            
            eax_26 = eax_16
            
            if (esi_9 s< eax_26)
                int32_t ecx_23 = var_1b8_1 + (esi_9 << 2)
                int32_t var_28_3 = ecx_23
                void* edi_7 = &eax_15[var_50 + esi_9]
                void* var_24_3 = edi_7
                
                do
                    int32_t var_240_4 = var_1f0_1:8.d
                    sub_5bc1c0(&var_cc, ecx_23, 1)
                    int32_t var_240_5 = 1
                    var_c0_1.o = xmm0_5
                    var_b4_1:0xc.d = eax_8
                    var_b4_1:4.q = xmm1_1
                    int128_t xmm0_32 = var_cc
                    var_a4_1.d = esi_9
                    var_a4_1:4.d = 0
                    int32_t var_9c_3 = 1
                    sub_5c03b0(&var_104, var_38_1, var_1d4_1:8.d)
                    int32_t var_e0_2 = eax_9
                    float* xmm0_37 = xmm0_32.d
                    int32_t var_dc_2 = 0
                    int32_t var_d8_2 = var_4c_1
                    int32_t var_d4_2 = 1
                    int32_t var_164_2 = 1
                    int32_t var_130_2 = 1
                    int128_t var_174_2 = var_b4_1
                    int32_t xmm0_40 = var_104.d
                    int128_t var_140_2 = xmm1_3:4.o
                    int32_t xmm1_9
                    
                    if (sub_5c83b0(&var_198) != 0)
                        float* var_8c_2 = xmm0_37
                        var_14_3.b = 0x37
                        int128_t var_88_2
                        var_88_2.d = sub_5bbe40(var_c0_1:4.12:8.d)
                        var_88_2:8.d = xmm0_40
                        var_14_3.b = 0x3b
                        var_88_2:0xc.d = sub_5bbe40(xmm1_2:4.12:8.d)
                        var_14_3.b = 0x3e
                        int32_t var_30_2 = 1
                        int32_t var_2c_2 = *xmm0_37 f* *xmm0_40
                        
                        if (sub_5c83b0(&var_198) s> 1)
                            int32_t eax_58 = var_88_2.d << 2
                            int32_t ecx_31 = var_88_2:0xc.d << 2
                            void* esi_13 = xmm0_37 + eax_58
                            int32_t var_64_2 = eax_58
                            float* edi_9 = xmm0_40 + ecx_31
                            int32_t var_60_2 = ecx_31
                            bool cond:4_1
                            
                            do
                                float xmm0_45 = *esi_13
                                esi_13 += eax_58
                                float xmm0_46 = xmm0_45 * *edi_9
                                edi_9 += ecx_31
                                var_30_2 += 1
                                var_2c_2 = xmm0_46 f+ var_2c_2
                                cond:4_1 = var_30_2 s< sub_5c83b0(&var_198)
                                eax_58 = var_64_2
                                ecx_31 = var_60_2
                            while (cond:4_1)
                        
                        xmm1_9 = var_2c_2
                        edi_7 = var_24_3
                        var_14_3.b = 6
                    else
                        xmm1_9 = (zx.o(0)).d
                    
                    esi_9 = var_48_1 + 1
                    eax_26 = eax_16
                    ecx_23 = var_28_3 + 4
                    *edi_7 = xmm1_9
                    edi_7 += 4
                    var_48_1 = esi_9
                    var_28_3 = ecx_23
                    var_24_3 = edi_7
                while (esi_9 s< eax_26)
                
                edi_2 = var_34_1
            
            edi_2 = (edi_2 + eax_23) & 0x80000003
            
            if (edi_2 s< 0)
                edi_2 = ((edi_2 - 1) | 0xfffffffc) + 1
            
            if (eax_26 s< edi_2)
                edi_2 = eax_26
            
            var_50 += eax_14
            var_5c += var_44
            var_38_1 += 4
            cond:2_1 = var_4c_1 + 1 s< eax_17
            var_4c_1 += 1
            ecx_12 = var_5c
            var_34_1 = edi_2
        while (cond:2_1)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_26
fsbase->NtTib.ExceptionList = ExceptionList
return eax_23
