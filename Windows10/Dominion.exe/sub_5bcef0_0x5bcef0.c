// 函数: sub_5bcef0
// 地址: 0x5bcef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = __ehhandler$??$zeta_imp@OU?$policy@U?$promote_float@$0A@@policies@math@boost@@U?$promote_double@$0A@@234@Udefault_policy@234@U6234@U6234@U6234@U6234@U6234@U6234@U6234@U6234@U6234@U6234@@policies@math@boost@@U?$int_@$0DF@@mpl@4@@detail@math@boost@@YAOOOABU?$policy@U?$promote_float@$0A@@policies@math@boost@@U?$promote_double@$0A@@234@Udefault_policy@234@U6234@U6234@U6234@U6234@U6234@U6234@U6234@U6234@U6234@U6234@@policies@12@ABU?$int_@$0DF@@mpl@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_9 = arg6
int32_t var_14_1 = 0
int32_t edi = arg2[2]
int32_t temp0 = divs.dp.d(sx.q(edi), *(arg3 + 0x40cc8))
*(arg3 + 0x40cc8)
void* result_1 = nullptr
int32_t var_68 = 0
int32_t var_64 = 0
int32_t var_120
__builtin_memset(&var_120, 0, 0x18)
void* ecx = nullptr
void* var_94 = nullptr
void* var_34 = nullptr
int32_t var_30 = 0
int32_t var_2c = 0
var_14_1.b = 4
int32_t eax_7
int32_t edx_2

if (arg6 != 0 && edi != 0)
    edx_2:eax_7 = 0x7fffffff

if (arg6 == 0 || edi == 0 || arg6 s<= divs.dp.d(edx_2:eax_7, edi))
    int32_t eax_10 = arg6 * edi
    
    if (eax_10 != 0)
        if (eax_10 s<= 0)
            ecx = nullptr
        else
            ecx = sub_5c0320(eax_10)
        
        var_34 = ecx
        var_94 = ecx
    
    int32_t eax_16 = arg6
    int32_t var_2c_1 = edi
    int32_t var_30_1 = eax_16
    var_14_1.b = 5
    int32_t edx_5 = arg2[2]
    int32_t* var_24_1 = *arg2
    
    if (edi == edx_5)
        goto label_5bd04d
    
    int32_t eax_12
    int32_t edx_8
    
    if (arg6 != 0 && edx_5 != 0)
        edx_8:eax_12 = 0x7fffffff
    
    if (arg6 == 0 || edx_5 == 0 || arg6 s<= divs.dp.d(edx_8:eax_12, edx_5))
        sub_5bffd0(&var_34, arg6 * edx_5, arg6, edx_5)
        ecx = var_34
        edi = var_2c_1
        eax_16 = var_30_1
        var_94 = ecx
    label_5bd04d:
        int32_t edx_10 = 0
        int32_t var_38_1 = 0
        int32_t i_7
        
        if (edi s> 0)
            i_7 = eax_16 << 2
            
            do
                int32_t esi_2 = 0
                
                if (eax_16 s> 0)
                    int32_t* edx_11 = var_24_1
                    
                    do
                        ecx += 4
                        *(ecx - 4) = *edx_11
                        esi_2 += 1
                        eax_16 = var_30_1
                        edx_11 = &edx_11[edx_5]
                    while (esi_2 s< eax_16)
                    
                    edi = var_2c_1
                    ecx = var_94
                    edx_10 = var_38_1
                
                ecx += i_7
                edx_10 += 1
                var_24_1 = &var_24_1[1]
                var_38_1 = edx_10
                var_94 = ecx
            while (edx_10 s< edi)
        
        char* var_15c
        void* arg_8
        sub_5be8d0(
            sub_5bedb0(sub_5be8d0(eax_16.b, &arg_8, &var_15c, "_layernorm1"), &var_34, arg3, 
                var_15c), 
            &arg_8, &var_15c, "_q")
        void* var_c0
        int32_t* eax_22 = sub_5bcb60(&var_34, arg3, &var_c0, &var_34, 0)
        void* result_3 = result_1
        result_1 = *eax_22
        int32_t i_11 = eax_22[1]
        *eax_22 = result_3
        int32_t eax_23 = eax_22[2]
        eax_22[1] = var_68
        eax_22[2] = var_64
        void* eax_24 = var_c0
        
        if (eax_24 != 0)
            free(*(eax_24 - 4))
        
        void* var_a4 = nullptr
        int32_t var_a0_1 = 0
        int32_t var_9c_1 = 0
        int32_t edi_2 = arg2[2]
        int32_t i_3 = i_9
        var_14_1.b = 6
        int32_t eax_26
        int32_t edx_17
        
        if (i_3 != 0 && edi_2 != 0)
            edx_17:eax_26 = 0x7fffffff
        
        if (i_3 == 0 || edi_2 == 0 || i_3 s<= divs.dp.d(edx_17:eax_26, edi_2))
            int32_t ecx_11 = i_3 * edi_2
            
            if (ecx_11 != 0)
                if (ecx_11 s<= 0)
                    var_a4 = nullptr
                else
                    var_a4 = sub_5c0320(ecx_11)
            
            int32_t var_9c_2 = edi_2
            void* var_48 = nullptr
            int32_t var_44_1 = 0
            int32_t var_40_1 = 0
            var_14_1.b = 8
            
            if (i_3 == 0)
            label_5bd1f1:
                double xmm0_2 = _mm_cvtepi32_pd(zx.q(temp0))
                var_14_1.b = 9
                
                if (0 f> xmm0_2)
                    _libm_sse2_sqrt_precise(eax_2, arg5, arg4)
                else
                    xmm0_2 = _mm_sqrt_sd(xmm0_2, xmm0_2)
                
                void* result_2 = result_1
                void* result_4
                int32_t* var_b4 = &result_4
                int32_t var_3c
                int32_t* var_b0 = &var_3c
                i_7 = i_11
                void var_49
                void* var_ac_1 = &var_49
                int32_t* var_a8_1 = &result_1
                result_4 = result_2
                int32_t edi_4 = i_11 * eax_23
                float xmm1_3[0x4] = _mm_cvtpd_ps(1.0 / xmm0_2)
                int32_t eax_33
                int32_t edx_21
                edx_21:eax_33 = sx.q(edi_4)
                var_3c = xmm1_3
                int32_t edx_24 = ((edx_21 & 3) + eax_33) & 0xfffffffc
                int32_t eax_34 = 0
                
                if (edx_24 s> 0)
                    while (true)
                        *(result_2 + (eax_34 << 2)) = __mulps_xmmps_memps(
                            _mm_shuffle_ps(xmm1_3, xmm1_3, 0), *(result_2 + (eax_34 << 2)))
                        eax_34 += 4
                        
                        if (eax_34 s>= edx_24)
                            break
                        
                        xmm1_3 = var_3c
                        result_2 = result_4
                
                sub_5c51c0(eax_34, edx_24, &var_b4, edi_4)
                void* eax_35 = arg3
                void* var_38_2 = nullptr
                
                if (*(eax_35 + 0x40cc8) s> 0)
                    void* result_8 = nullptr
                    void* result_5 = nullptr
                    
                    while (true)
                        void* result_9 = result_8
                        int32_t i_12 = i_11
                        int32_t var_e8_1 = 0
                        int32_t i_13 = i_11
                        int32_t var_d8_1 = var_30_1
                        int32_t var_cc_1 = 0
                        void* result_6 = result_5
                        void* var_f8 = result_1 + ((result_8 * i_11) << 2)
                        int32_t var_f0_1 = temp0
                        int32_t* var_ec_1 = &result_1
                        int32_t var_c4_1 = var_30_1
                        void* var_dc = var_34 + ((var_30_1 * result_5) << 2)
                        int32_t var_d4_1 = temp0
                        void** var_d0_1 = &var_34
                        
                        if (i_3 != i_11 || i_3 != var_30_1)
                            if (i_11 != 0 && var_30_1 != 0)
                                int32_t eax_43
                                eax_43.b = i_11 s> divs.dp.d(0x7fffffff, var_30_1)
                                
                                if (eax_43.b != 0)
                                    goto label_5bd835
                            
                            sub_5bffd0(&var_48, var_30_1 * i_11, i_11, var_30_1)
                        
                        int32_t edx_29 = sub_5c1200(&var_dc, &var_f8, &var_48, &var_dc)
                        void* var_98 = var_48
                        int32_t i_5 = i_3
                        
                        if (not(sub_5c0680(&var_48, edx_29, &var_98, &var_48) f<= 20f))
                            void** var_134_1 = &var_48
                            i_7 = &var_48
                            void var_138
                            sub_5bf3d0(&i_7, &var_138)
                        
                        void* ecx_23 = var_48
                        void* esi_6 = ecx_23
                        void* var_5c
                        int32_t* var_108 = &var_5c
                        void** var_104_1 = &var_c0
                        int32_t i_4 = i_3
                        int32_t i_8 = i_3
                        void* edi_7 = i_3 * i_3
                        void* var_100_1 = &var_49
                        void** var_fc_1 = &var_48
                        void* var_bc_1 = ecx_23
                        var_5c = esi_6
                        int32_t eax_49
                        int32_t edx_30
                        edx_30:eax_49 = sx.q(edi_7)
                        void* eax_50 = nullptr
                        int32_t edx_33 = ((edx_30 & 3) + eax_49) & 0xfffffffc
                        void* var_90
                        
                        if (edx_33 s> 0)
                            while (true)
                                var_90.o = *(ecx_23 + (eax_50 << 2))
                                *(esi_6 + (eax_50 << 2)) = sub_5b0d00(&var_90)
                                eax_50 += 4
                                
                                if (eax_50 s>= edx_33)
                                    break
                                
                                ecx_23 = var_bc_1
                                esi_6 = var_5c
                        
                        sub_5c6600(eax_50, edx_33, &var_108, edi_7)
                        void** var_ac_2 = &var_48
                        i_7 = &var_48
                        sub_5bf690(&i_7, &var_b0)
                        void** var_e0_1 = &var_48
                        void* eax_51 = var_34
                        int32_t var_d8_2 = var_30_1
                        int32_t var_c4_2 = var_30_1
                        int32_t i_6 = i_3
                        i_7 = i_3
                        int32_t var_d4_2 = temp0
                        int32_t var_cc_2 = 0
                        var_dc = eax_51 + ((var_30_1 * result_5) << 2)
                        void** var_d0_2 = &var_34
                        void* eax_53 = var_a4
                        void* result_7 = result_5
                        int32_t var_88_1 = temp0
                        int32_t var_80_1 = 0
                        result_4 = result_5
                        var_90 = eax_53 + ((result_5 * i_3) << 2)
                        void** var_84_1 = &var_a4
                        sub_5c07d0(&var_dc, &var_48, &var_90, &var_dc)
                        result_8 = result_5 + temp0
                        eax_35 = var_38_2 + 1
                        var_38_2 = eax_35
                        result_5 = result_8
                        
                        if (eax_35 s>= *(arg3 + 0x40cc8))
                            i_3 = i_9
                            break
                
                sub_5be8d0(eax_35.b, &arg_8, &var_15c, "_attention")
                int32_t* eax_58 = sub_5bcb60(&var_a4, arg3, &var_b0, &var_a4, 0)
                int32_t* edi_9 = *eax_58
                int32_t j_2 = arg2[2]
                int32_t j_4 = j_2
                i_7 = eax_58[1]
                float* eax_60 = *arg2
                float* var_38_3 = eax_60
                
                if (i_3 s> 0)
                    int32_t ecx_37 = j_2 << 2
                    int32_t i_2 = i_3
                    int32_t i_10 = i_2
                    int32_t esi_8 = j_2 << 2
                    int32_t i
                    
                    do
                        if (j_2 s> 0)
                            int32_t* ecx_39 = edi_9
                            int32_t j
                            
                            do
                                float xmm0_6 = *ecx_39
                                ecx_39 = &ecx_39[i_7]
                                *eax_60 = xmm0_6 + *eax_60
                                eax_60 = &eax_60[1]
                                j = j_2
                                j_2 -= 1
                            while (j != 1)
                            eax_60 = var_38_3
                            j_2 = j_4
                            i_2 = i_10
                            esi_8 = ecx_37
                        
                        eax_60 += esi_8
                        edi_9 = &edi_9[1]
                        i = i_2
                        i_2 -= 1
                        var_38_3 = eax_60
                        i_10 = i_2
                    while (i != 1)
                    i_3 = i_9
                
                int32_t* eax_61 = var_b0
                
                if (eax_61 != 0)
                    free(eax_61[-1])
                
                int32_t edi_10 = var_30_1
                int32_t ecx_40 = arg2[2]
                int32_t var_24_2 = ecx_40
                int32_t* var_28_1 = *arg2
                
                if (edi_10 != i_3)
                    goto label_5bd611
                
                int32_t ecx_41 = var_2c_1
                
                if (ecx_41 == var_24_2)
                    goto label_5bd639
                
                ecx_40 = var_24_2
            label_5bd611:
                int32_t eax_64
                int32_t edx_39
                
                if (i_3 != 0 && ecx_40 != 0)
                    edx_39:eax_64 = 0x7fffffff
                
                if (i_3 == 0 || ecx_40 == 0 || i_3 s<= divs.dp.d(edx_39:eax_64, ecx_40))
                    sub_5bffd0(&var_34, ecx_40 * i_3, i_3, ecx_40)
                    ecx_41 = var_2c_1
                    edi_10 = var_30_1
                label_5bd639:
                    int32_t eax_68 = 0
                    int32_t var_38_4 = 0
                    
                    if (ecx_41 s> 0)
                        i_7 = edi_10 << 2
                        void* edx_42 = var_34
                        void* var_58_3 = edx_42
                        
                        do
                            int32_t esi_10 = 0
                            
                            if (edi_10 s> 0)
                                void* ecx_43 = edx_42
                                int32_t* edx_43 = var_28_1
                                
                                do
                                    ecx_43 += 4
                                    esi_10 += 1
                                    *(ecx_43 - 4) = *edx_43
                                    edi_10 = var_30_1
                                    edx_43 = &edx_43[var_24_2]
                                while (esi_10 s< edi_10)
                                
                                ecx_41 = var_2c_1
                                eax_68 = var_38_4
                                edx_42 = var_58_3
                            
                            edx_42 += i_7
                            eax_68 += 1
                            var_28_1 = &var_28_1[1]
                            var_38_4 = eax_68
                            var_58_3 = edx_42
                        while (eax_68 s< ecx_41)
                        
                        i_3 = i_9
                    
                    sub_5be8d0(
                        sub_5bedb0(sub_5be8d0(eax_68.b, &arg_8, &var_15c, "_layernorm2"), &var_34, 
                            arg3), 
                        &arg_8, &var_15c, "_dense1")
                    var_14_1.b = 0xa
                    void* var_12c
                    sub_5be8d0(sub_5bcb60(&var_34, arg3, &var_12c, &var_34, 1), &arg_8, &var_15c, 
                        "_dense2")
                    int32_t* eax_76 = sub_5bcb60(&var_12c, arg3, &var_b0, &var_12c, 0)
                    int32_t* edi_13 = *eax_76
                    int32_t j_3 = arg2[2]
                    i_7 = eax_76[1]
                    float* eax_78 = *arg2
                    int32_t j_5 = j_3
                    float* var_38_5 = eax_78
                    
                    if (i_3 s> 0)
                        int32_t ecx_51 = j_3 << 2
                        int32_t var_28_2 = ecx_51
                        int32_t i_1
                        
                        do
                            if (j_3 s> 0)
                                int32_t* ecx_53 = edi_13
                                int32_t j_1
                                
                                do
                                    float xmm0_8 = *ecx_53
                                    ecx_53 = &ecx_53[i_7]
                                    *eax_78 = xmm0_8 + *eax_78
                                    eax_78 = &eax_78[1]
                                    j_1 = j_3
                                    j_3 -= 1
                                while (j_1 != 1)
                                i_3 = i_9
                                eax_78 = var_38_5
                                j_3 = j_5
                                ecx_51 = var_28_2
                            
                            eax_78 += ecx_51
                            edi_13 = &edi_13[1]
                            i_1 = i_3
                            i_3 -= 1
                            var_38_5 = eax_78
                            i_9 = i_3
                        while (i_1 != 1)
                    
                    int32_t* eax_79 = var_b0
                    
                    if (eax_79 != 0)
                        free(eax_79[-1])
                    
                    void* eax_80 = var_12c
                    
                    if (eax_80 != 0)
                        free(*(eax_80 - 4))
                    
                    void* eax_81 = var_48
                    
                    if (eax_81 != 0)
                        free(*(eax_81 - 4))
                    
                    void* eax_82 = var_a4
                    
                    if (eax_82 != 0)
                        free(*(eax_82 - 4))
                    
                    void* eax_83 = var_34
                    
                    if (eax_83 != 0)
                        free(*(eax_83 - 4))
                    
                    void* result = result_1
                    
                    if (result != 0)
                        result = free(*(result - 4))
                    
                    if (arg7 u> 0xf)
                        void* edx_50 = arg_8
                        int32_t ecx_55 = arg7 + 1
                        void* eax_84 = edx_50
                        
                        if (ecx_55 u>= 0x1000)
                            edx_50 = *(eax_84 - 4)
                            ecx_55 += 0x23
                            
                            if (eax_84 - edx_50 - 4 u> 0x1f)
                                _invalid_parameter_noinfo_noreturn()
                                noreturn
                        
                        int32_t var_148_19 = ecx_55
                        result = operator new(edx_50)
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
            else if (i_3 s<= divs.dp.d(0x7fffffff, i_3))
                int32_t ecx_13 = i_3 * i_3
                
                if (ecx_13 != 0)
                    if (ecx_13 s<= 0)
                        var_48 = nullptr
                    else
                        var_48 = sub_5c0320(ecx_13)
                
                goto label_5bd1f1

label_5bd835:
sub_5b0890()
noreturn
