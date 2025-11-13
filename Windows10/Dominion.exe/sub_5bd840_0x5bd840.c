// 函数: sub_5bd840
// 地址: 0x5bd840
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_769422
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_6 = arg6
int32_t i_14 = i_6
int32_t var_14_1 = 0
int32_t ecx = arg2[2]
int32_t temp0 = divs.dp.d(sx.q(ecx), *(arg3 + 0x40cc8))
*(arg3 + 0x40cc8)
void* result_1 = nullptr
int32_t var_98 = 0
int32_t var_94 = 0
void* var_c8
__builtin_memset(&var_c8, 0, 0x18)
void* var_58 = nullptr
void* var_40 = nullptr
int32_t var_3c = 0
int32_t var_38 = 0
var_14_1.b = 4
int32_t eax_7
int32_t edx_2

if (i_6 != 0 && ecx != 0)
    edx_2:eax_7 = 0x7fffffff

if (i_6 == 0 || ecx == 0 || i_6 s<= divs.dp.d(edx_2:eax_7, ecx))
    int32_t eax_10 = i_6 * ecx
    void* edx_4
    
    if (eax_10 == 0)
        edx_4 = nullptr
    else if (eax_10 s<= 0)
        edx_4 = nullptr
        var_58 = nullptr
        var_40 = nullptr
    else
        edx_4 = sub_5c0320(eax_10)
        var_58 = edx_4
        var_40 = edx_4
    
    int32_t i_15 = i_6
    int32_t var_38_1 = ecx
    int32_t i_16 = i_15
    var_14_1.b = 5
    int32_t esi_2 = arg2[2]
    int32_t* var_30_1 = *arg2
    
    if (ecx == esi_2)
        goto label_5bd9b1
    
    int32_t eax_12
    int32_t edx_5
    
    if (i_6 != 0 && esi_2 != 0)
        edx_5:eax_12 = 0x7fffffff
    
    if (i_6 == 0 || esi_2 == 0 || i_6 s<= divs.dp.d(edx_5:eax_12, esi_2))
        sub_5bffd0(&var_40, esi_2 * i_6, i_6, esi_2)
        edx_4 = var_40
        ecx = var_38_1
        i_15 = i_16
        var_58 = edx_4
    label_5bd9b1:
        int32_t var_28_1 = 0
        int32_t i_10
        
        if (ecx s> 0)
            int32_t* edi = var_30_1
            i_10 = i_15 << 2
            int32_t esi_9
            
            do
                int32_t esi_7 = 0
                
                if (i_15 s> 0)
                    void* ecx_3 = edx_4
                    int32_t* edx_7 = edi
                    
                    do
                        ecx_3 += 4
                        *(ecx_3 - 4) = *edx_7
                        esi_7 += 1
                        i_15 = i_16
                        edx_7 = &edx_7[esi_2]
                    while (esi_7 s< i_15)
                    
                    ecx = var_38_1
                    edx_4 = var_58
                    edi = var_30_1
                
                edi = &edi[1]
                edx_4 += i_10
                esi_9 = var_28_1 + 1
                var_28_1 = esi_9
                var_58 = edx_4
                var_30_1 = edi
            while (esi_9 s< ecx)
            i_6 = i_14
        
        int128_t* eax_19 = *(arg3 + 0x40cc0)
        char* var_16c
        void* arg_8
        
        if (eax_19 s>= 0xd)
            if (eax_19 s< 0xf)
                eax_19 = sub_5bf950(arg3, &var_40)
            else
                eax_19 = sub_5bedb0(sub_5be8d0(eax_19.b, &arg_8, &var_16c, "_layernorm1"), &var_40, 
                    arg3, var_16c)
        
        sub_5be8d0(eax_19.b, &arg_8, &var_16c, "_q")
        void* var_f0
        int32_t* eax_22 = sub_5bcb60(&var_40, arg3, &var_f0, &var_40, 0, var_16c)
        void* result_3 = result_1
        result_1 = *eax_22
        int32_t i_17 = eax_22[1]
        *eax_22 = result_3
        int32_t eax_23 = eax_22[2]
        eax_22[1] = var_98
        eax_22[2] = var_94
        void* eax_24 = var_f0
        
        if (eax_24 != 0)
            eax_24 = free(*(eax_24 - 4))
        
        sub_5be8d0(eax_24.b, &arg_8, &var_16c, "_k")
        int32_t* eax_26 = sub_5bcb60(&var_40, arg3, &var_f0, &var_40, 0)
        void* edx_16 = var_c8
        var_c8 = *eax_26
        int32_t ecx_14 = eax_26[1]
        *eax_26 = edx_16
        int32_t eax_27 = eax_26[2]
        int32_t var_c4
        eax_26[1] = var_c4
        int32_t var_c0_1 = eax_27
        int32_t var_c0
        eax_26[2] = var_c0
        void* eax_28 = var_f0
        
        if (eax_28 != 0)
            eax_28 = free(*(eax_28 - 4))
        
        sub_5be8d0(eax_28.b, &arg_8, &var_16c, "_v")
        int32_t* eax_30 = sub_5bcb60(&var_40, arg3, &var_f0, &var_40, 0)
        void* var_bc
        void* edx_20 = var_bc
        var_bc = *eax_30
        int32_t ecx_19 = eax_30[1]
        *eax_30 = edx_20
        int32_t eax_31 = eax_30[2]
        int32_t var_b8
        eax_30[1] = var_b8
        int32_t var_b4_1 = eax_31
        int32_t var_b4
        eax_30[2] = var_b4
        void* eax_32 = var_f0
        
        if (eax_32 != 0)
            free(*(eax_32 - 4))
        
        void* var_b0 = nullptr
        int32_t var_ac_1 = 0
        int32_t var_a8_1 = 0
        int32_t esi_14 = arg2[2]
        var_14_1.b = 6
        int32_t eax_34
        int32_t edx_22
        
        if (i_6 != 0 && esi_14 != 0)
            edx_22:eax_34 = 0x7fffffff
        
        if (i_6 == 0 || esi_14 == 0 || i_6 s<= divs.dp.d(edx_22:eax_34, esi_14))
            int32_t ecx_22 = i_6 * esi_14
            
            if (ecx_22 != 0)
                if (ecx_22 s<= 0)
                    var_b0 = nullptr
                else
                    var_b0 = sub_5c0320(ecx_22)
            
            int32_t var_a8_2 = esi_14
            void* var_50 = nullptr
            int32_t var_4c_1 = 0
            int32_t var_48_1 = 0
            var_14_1.b = 8
            
            if (i_6 == 0)
            label_5bdc84:
                double xmm0_2 = _mm_cvtepi32_pd(zx.q(temp0))
                var_14_1.b = 9
                
                if (0 f> xmm0_2)
                    _libm_sse2_sqrt_precise(eax_2, arg5, arg4)
                else
                    xmm0_2 = _mm_sqrt_sd(xmm0_2, xmm0_2)
                
                void* result_2 = result_1
                void* result_4
                int32_t* var_d8 = &result_4
                void* var_a4
                int32_t* var_d4 = &var_a4
                void var_51
                void* var_d0_1 = &var_51
                i_10 = i_17
                int32_t* var_cc_1 = &result_1
                result_4 = result_2
                int32_t esi_16 = eax_23 * i_17
                float xmm1_3[0x4] = _mm_cvtpd_ps(1.0 / xmm0_2)
                int32_t eax_42
                int32_t edx_26
                edx_26:eax_42 = sx.q(esi_16)
                var_a4 = xmm1_3
                int32_t edx_29 = ((edx_26 & 3) + eax_42) & 0xfffffffc
                int32_t eax_43 = 0
                
                if (edx_29 s> 0)
                    while (true)
                        *(result_2 + (eax_43 << 2)) = _mm_mul_ps(*(result_2 + (eax_43 << 2)), 
                            _mm_shuffle_ps(xmm1_3, xmm1_3, 0))
                        eax_43 += 4
                        
                        if (eax_43 s>= edx_29)
                            break
                        
                        xmm1_3 = var_a4
                        result_2 = result_4
                
                sub_5c51c0(eax_43, edx_29, &var_d8, esi_16)
                int32_t* eax_44 = arg3 + 0x40cc8
                int32_t var_28_2 = 0
                
                if (*eax_44 s> 0)
                    void* result_8 = nullptr
                    void* result_5 = nullptr
                    
                    while (true)
                        void* result_9 = result_8
                        int32_t i_20 = i_17
                        int32_t var_120_1 = temp0
                        int32_t var_118_1 = 0
                        int32_t i_21 = i_17
                        int32_t var_104_1 = temp0
                        int32_t var_fc_1 = 0
                        void* var_128 = result_1 + ((result_8 * i_17) << 2)
                        int32_t* var_11c_1 = &result_1
                        int32_t var_108_1 = ecx_14
                        int32_t var_f4_1 = ecx_14
                        void* var_10c = var_c8 + ((result_8 * ecx_14) << 2)
                        int32_t* var_100_1 = &var_c8
                        void* result_6 = result_5
                        
                        if (i_6 != i_17 || i_6 != ecx_14)
                            if (i_17 != 0 && ecx_14 != 0)
                                int32_t eax_51
                                eax_51.b = i_17 s> divs.dp.d(0x7fffffff, ecx_14)
                                
                                if (eax_51.b != 0)
                                    goto label_5be51a
                            
                            sub_5bffd0(&var_50, i_17 * ecx_14, i_17, ecx_14)
                        
                        int32_t edx_34 = sub_5c1200(&var_10c, &var_128, &var_50, &var_10c)
                        void* var_64 = var_50
                        int32_t i_11 = i_6
                        
                        if (not(sub_5c0680(&var_50, edx_34, &var_64, &var_50) f<= 20f))
                            void** var_140_1 = &var_50
                            i_10 = &var_50
                            void var_144
                            sub_5bf3d0(&i_10, &var_144)
                        
                        void* ecx_34 = var_50
                        void* esi_19 = ecx_34
                        int32_t* var_138 = &var_a4
                        void** var_134_1 = &var_f0
                        void* edi_4 = i_6 * i_6
                        void* var_130_1 = &var_51
                        int32_t i_7 = i_6
                        int32_t i_8 = i_6
                        void** var_12c_1 = &var_50
                        void* var_ec_1 = ecx_34
                        int32_t eax_58
                        int32_t edx_35
                        edx_35:eax_58 = sx.q(edi_4)
                        var_a4 = esi_19
                        void* eax_59 = nullptr
                        int32_t edx_38 = ((edx_35 & 3) + eax_58) & 0xfffffffc
                        void* var_90
                        
                        if (edx_38 s> 0)
                            while (true)
                                var_90.o = *(ecx_34 + (eax_59 << 2))
                                *(esi_19 + (eax_59 << 2)) = sub_5b0d00(&var_90)
                                eax_59 += 4
                                
                                if (eax_59 s>= edx_38)
                                    break
                                
                                esi_19 = var_a4
                                ecx_34 = var_ec_1
                        
                        sub_5c6600(eax_59, edx_38, &var_138, edi_4)
                        void** var_d0_2 = &var_50
                        i_10 = &var_50
                        sub_5bf690(&i_10, &var_d4)
                        void** var_110_1 = &var_50
                        void* eax_60 = var_bc
                        int32_t var_108_2 = ecx_19
                        int32_t var_f4_2 = ecx_19
                        int32_t i_9 = i_6
                        i_10 = i_6
                        int32_t var_104_2 = temp0
                        int32_t var_fc_2 = 0
                        var_10c = eax_60 + ((ecx_19 * result_5) << 2)
                        int32_t* var_100_2 = &var_bc
                        void* eax_62 = var_b0
                        void* result_7 = result_5
                        int32_t var_88_1 = temp0
                        int32_t var_80_1 = 0
                        result_4 = result_5
                        var_90 = eax_62 + ((i_6 * result_5) << 2)
                        void** var_84_1 = &var_b0
                        sub_5c07d0(&var_10c, &var_50, &var_90, &var_10c)
                        result_8 = result_5 + temp0
                        eax_44 = arg3 + 0x40cc8
                        int32_t edx_43 = var_28_2 + 1
                        var_28_2 = edx_43
                        result_5 = result_8
                        
                        if (edx_43 s>= *eax_44)
                            i_6 = i_14
                            break
                
                void* var_e4 = nullptr
                int32_t var_e0_1 = 0
                int32_t var_dc_1 = 0
                void** edx_44 = &arg_8
                var_14_1.b = 0xa
                char** ecx_43 = &var_16c
                float var_30_2 = 1f
                
                if (*(arg3 + 0x40cc0) s> 0xe)
                    sub_5be8d0(eax_44.b, edx_44, ecx_43, "_attention")
                    int32_t* eax_73 = sub_5bcb60(&var_b0, arg3, &var_d4, &var_b0, 0)
                    float* edx_50 = *eax_73
                    int32_t esi_23 = arg2[2]
                    i_10 = eax_73[1]
                    int32_t* eax_75 = *arg2
                    float* var_28_4 = edx_50
                    int32_t* var_24_2 = eax_75
                    
                    if (i_6 s> 0)
                        int32_t i_13 = i_6
                        int32_t i
                        
                        do
                            int32_t ecx_52 = 0
                            
                            if (esi_23 s> 0)
                                do
                                    ecx_52 += 1
                                    float xmm0_13 = *eax_75 + *edx_50
                                    edx_50 = &edx_50[i_10]
                                    *eax_75 = xmm0_13
                                    eax_75 = &eax_75[1]
                                while (ecx_52 s< esi_23)
                                
                                edx_50 = var_28_4
                                eax_75 = var_24_2
                                i_6 = i_13
                            
                            edx_50 = &edx_50[1]
                            eax_75 = &eax_75[esi_23]
                            var_28_4 = edx_50
                            i = i_6
                            i_6 -= 1
                            var_24_2 = eax_75
                            i_13 = i_6
                        while (i != 1)
                else
                    char** eax_65
                    int32_t edx_45
                    eax_65, edx_45 = sub_5be8d0(eax_44.b, edx_44, ecx_43, "_rezero/alpha")
                    int32_t* eax_67 = *sub_5b10e0(eax_65, edx_45, arg3)
                    var_30_2 = *eax_67
                    sub_5be8d0(eax_67.b, &arg_8, &var_16c, "_attention")
                    int32_t* eax_69 = sub_5bcb60(&var_b0, arg3, &var_d4, &var_b0, 0)
                    float* edx_48 = *eax_69
                    int32_t esi_22 = arg2[2]
                    i_10 = eax_69[1]
                    float* eax_71 = *arg2
                    float* var_28_3 = edx_48
                    float* var_24_1 = eax_71
                    
                    if (i_6 s> 0)
                        int32_t i_12 = i_6
                        int32_t i_1
                        
                        do
                            int32_t ecx_48 = 0
                            
                            if (esi_22 s> 0)
                                do
                                    ecx_48 += 1
                                    float xmm0_10 = var_30_2 * *edx_48
                                    edx_48 = &edx_48[i_10]
                                    *eax_71 = xmm0_10 + *eax_71
                                    eax_71 = &eax_71[1]
                                while (ecx_48 s< esi_22)
                                
                                edx_48 = var_28_3
                                eax_71 = var_24_1
                                i_6 = i_12
                            
                            edx_48 = &edx_48[1]
                            eax_71 = &eax_71[esi_22]
                            var_28_3 = edx_48
                            i_1 = i_6
                            i_6 -= 1
                            var_24_1 = eax_71
                            i_12 = i_6
                        while (i_1 != 1)
                
                int32_t* eax_76 = var_d4
                
                if (eax_76 != 0)
                    free(eax_76[-1])
                
                int32_t i_22 = i_16
                int32_t i_18 = arg2[2]
                int32_t* eax_78 = *arg2
                i_10 = i_18
                int32_t* var_2c_1 = eax_78
                int32_t edx_51
                
                if (i_22 == i_14)
                    edx_51 = var_38_1
                
                if (i_22 == i_14 && edx_51 == i_18)
                    goto label_5be1de
                
                int32_t eax_79
                int32_t edx_52
                
                if (i_14 != 0 && i_18 != 0)
                    edx_52:eax_79 = 0x7fffffff
                
                if (i_14 == 0 || i_18 == 0 || i_14 s<= divs.dp.d(edx_52:eax_79, i_18))
                    sub_5bffd0(&var_40, i_14 * i_18, i_14, i_18)
                    edx_51 = var_38_1
                    i_22 = i_16
                label_5be1de:
                    int32_t eax_83 = 0
                    int32_t var_24_3 = 0
                    
                    if (edx_51 s> 0)
                        int32_t ecx_56 = i_22 << 2
                        void* ecx_57 = var_40
                        void* var_28_5 = ecx_57
                        
                        do
                            int32_t esi_24 = 0
                            
                            if (i_22 s> 0)
                                int32_t* edx_54 = var_2c_1
                                
                                do
                                    int32_t i_19 = i_10
                                    ecx_57 += 4
                                    esi_24 += 1
                                    *(ecx_57 - 4) = *edx_54
                                    i_22 = i_16
                                    edx_54 = &edx_54[i_19]
                                while (esi_24 s< i_22)
                                
                                edx_51 = var_38_1
                                eax_83 = var_24_3
                                ecx_57 = var_28_5
                            
                            ecx_57 += ecx_56
                            eax_83 += 1
                            var_2c_1 = &var_2c_1[1]
                            var_24_3 = eax_83
                            var_28_5 = ecx_57
                        while (eax_83 s< edx_51)
                    
                    int128_t* eax_86 = *(arg3 + 0x40cc0)
                    
                    if (eax_86 s>= 0xd)
                        if (eax_86 s< 0xf)
                            eax_86 = sub_5bf950(arg3, &var_40)
                        else
                            eax_86 = sub_5bedb0(
                                sub_5be8d0(eax_86.b, &arg_8, &var_16c, "_layernorm2"), &var_40, 
                                arg3)
                    
                    sub_5be8d0(eax_86.b, &arg_8, &var_16c, "_dense1")
                    int32_t* eax_89 = sub_5bcb60(&var_40, arg3, &var_d4, &var_40, 1)
                    void* edx_60 = var_e4
                    var_e4 = *eax_89
                    int32_t ecx_64 = eax_89[1]
                    *eax_89 = edx_60
                    int32_t var_e0_2 = ecx_64
                    int32_t eax_90 = eax_89[2]
                    eax_89[1] = var_e0_1
                    int32_t var_dc_2 = eax_90
                    eax_89[2] = var_dc_1
                    int32_t* eax_91 = var_d4
                    
                    if (eax_91 != 0)
                        eax_91 = free(eax_91[-1])
                    
                    void** edx_62 = &arg_8
                    char** ecx_66 = &var_16c
                    
                    if (*(arg3 + 0x40cc0) s> 0xe)
                        sub_5be8d0(eax_91.b, edx_62, ecx_66, "_dense2")
                        int32_t* eax_98 = sub_5bcb60(&var_e4, arg3, &var_d4, &var_e4, 0)
                        float* edx_66 = *eax_98
                        int32_t* edi_13 = *arg2
                        int32_t esi_27 = arg2[2]
                        i_10 = eax_98[1]
                        int32_t i_5 = i_14
                        float* var_24_5 = edx_66
                        int32_t* var_2c_3 = edi_13
                        
                        if (i_5 s> 0)
                            int32_t i_2
                            
                            do
                                int32_t ecx_73 = 0
                                
                                if (esi_27 s> 0)
                                    int32_t* eax_101 = var_2c_3
                                    
                                    do
                                        ecx_73 += 1
                                        float xmm0_18 = *eax_101 + *edx_66
                                        edx_66 = &edx_66[i_10]
                                        *eax_101 = xmm0_18
                                        eax_101 = &eax_101[1]
                                    while (ecx_73 s< esi_27)
                                    
                                    i_5 = i_14
                                    edx_66 = var_24_5
                                    edi_13 = var_2c_3
                                
                                edx_66 = &edx_66[1]
                                edi_13 = &edi_13[esi_27]
                                var_24_5 = edx_66
                                i_2 = i_5
                                i_5 -= 1
                                var_2c_3 = edi_13
                                i_14 = i_5
                            while (i_2 != 1)
                    else
                        sub_5be8d0(eax_91.b, edx_62, ecx_66, "_dense2")
                        int32_t* eax_93 = sub_5bcb60(&var_e4, arg3, &var_d4, &var_e4, 0)
                        float* edx_64 = *eax_93
                        float* edi_11 = *arg2
                        int32_t esi_26 = arg2[2]
                        i_10 = eax_93[1]
                        int32_t i_4 = i_14
                        float* var_24_4 = edx_64
                        float* var_2c_2 = edi_11
                        
                        if (i_4 s> 0)
                            int32_t i_3
                            
                            do
                                int32_t ecx_69 = 0
                                
                                if (esi_26 s> 0)
                                    float* eax_96 = var_2c_2
                                    
                                    do
                                        ecx_69 += 1
                                        float xmm0_15 = var_30_2 * *edx_64
                                        edx_64 = &edx_64[i_10]
                                        *eax_96 = xmm0_15 + *eax_96
                                        eax_96 = &eax_96[1]
                                    while (ecx_69 s< esi_26)
                                    
                                    i_4 = i_14
                                    edx_64 = var_24_4
                                    edi_11 = var_2c_2
                                
                                edx_64 = &edx_64[1]
                                edi_11 = &edi_11[esi_26]
                                var_24_4 = edx_64
                                i_3 = i_4
                                i_4 -= 1
                                var_2c_2 = edi_11
                                i_14 = i_4
                            while (i_3 != 1)
                    
                    int32_t* eax_102 = var_d4
                    
                    if (eax_102 != 0)
                        free(eax_102[-1])
                    
                    void* eax_103 = var_e4
                    
                    if (eax_103 != 0)
                        free(*(eax_103 - 4))
                    
                    void* eax_104 = var_50
                    
                    if (eax_104 != 0)
                        free(*(eax_104 - 4))
                    
                    void* eax_105 = var_b0
                    
                    if (eax_105 != 0)
                        free(*(eax_105 - 4))
                    
                    void* eax_106 = var_40
                    
                    if (eax_106 != 0)
                        free(*(eax_106 - 4))
                    
                    void* eax_107 = var_bc
                    
                    if (eax_107 != 0)
                        free(*(eax_107 - 4))
                    
                    void* eax_108 = var_c8
                    
                    if (eax_108 != 0)
                        free(*(eax_108 - 4))
                    
                    void* result = result_1
                    
                    if (result != 0)
                        result = free(*(result - 4))
                    
                    if (arg7 u> 0xf)
                        void* edx_67 = arg_8
                        int32_t ecx_76 = arg7 + 1
                        void* eax_109 = edx_67
                        
                        if (ecx_76 u>= 0x1000)
                            edx_67 = *(eax_109 - 4)
                            ecx_76 += 0x23
                            
                            if (eax_109 - edx_67 - 4 u> 0x1f)
                                _invalid_parameter_noinfo_noreturn()
                                noreturn
                        
                        int32_t var_158_24 = ecx_76
                        result = operator new(edx_67)
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
            else if (i_6 s<= divs.dp.d(0x7fffffff, i_6))
                int32_t ecx_24 = i_6 * i_6
                
                if (ecx_24 != 0)
                    if (ecx_24 s<= 0)
                        var_50 = nullptr
                    else
                        var_50 = sub_5c0320(ecx_24)
                
                goto label_5bdc84

label_5be51a:
sub_5b0890()
noreturn
