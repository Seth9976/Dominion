// 函数: sub_5baeb0
// 地址: 0x5baeb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_769220
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi_1 = arg3 * 0x40cd0 + 0x1597e78
void* var_64 = esi_1
char* var_12c
char** eax_3
int32_t edx
eax_3, edx = sub_5bbeb0(&var_12c, "card_embed/embeddings")
int32_t* i_72 = sub_5b0f90(eax_3, edx, esi_1, var_12c)
int32_t* i_8 = *(esi_1 + 0x4000c)
int32_t* i_12 = i_8
void* edx_1 = (i_8 << 1) + 0x3d
void* var_2c = edx_1

if (*(esi_1 + 0x40cc0) s>= 0xc)
    edx_1 = i_8 * 3 + 0x3d
    var_2c = edx_1

void* eax_4 = esi_1 + 0x40010
void* i_16 = *(esi_1 + 0x40014) - edx_1
int32_t edx_3 = *(eax_4 + 4)
void* ecx_4 = edx_3 - i_16
void* var_a8 = ecx_4
int32_t var_a4 = edx_3
int32_t var_80 = edx_3
void* i_24 = *eax_4 + (ecx_4 << 2)
void* i_15 = i_24
void* i_54
int32_t* var_a0 = &i_54
void* i_52 = i_24
float var_50
int32_t* i_53 = &var_50
void* i_23 = i_16
void var_45
void* var_98 = &var_45
void* var_b0 = esi_1 + 0x40010
void* i_25 = i_15
int32_t* var_94 = &i_52
void* i_17 = i_16
int32_t var_f0 = 0
var_50 = 0f
i_54 = i_25
void* i_6

if ((i_25.b & 3) != 0)
    i_6 = i_16
else
    void* i_26 = neg.d(i_25 u>> 2) & 3
    
    if (i_26 s< i_16)
        i_17 = i_26
    
    i_6 = i_17

int32_t eax_12
int32_t edx_5
edx_5:eax_12 = sx.q(i_16 - i_17)
void* i_27 = i_17 + ((eax_12 + (edx_5 & 3)) s>> 2 << 2)
i_15 = i_27
void* i_58 = sub_5c8250(i_27, 0, &var_a0, i_17)
void* i = i_6
void* i_38

for (i_38 = i_15; i s< i_38; i += 4)
    i_58 = i_54
    float xmm0_1[0x4] = var_50
    *(i_58 + (i << 2)) = _mm_shuffle_ps(xmm0_1, xmm0_1, 0)

sub_5c8250(i_58, i_38, &var_a0, i_16)
int32_t ecx_7 = arg7
int32_t eax_15 = 0
int32_t var_3c = 0
int32_t var_11c
char const* const var_118_6
void* i_59
char* ecx_20
int32_t* var_100
int32_t* i_51
int32_t* i_9
int32_t* i_70
int32_t** var_74
int32_t* i_13
void* i_57
void var_25

if (ecx_7 s<= 0)
label_5bb2d7:
    float xmm2_2 = _mm_cvtepi32_ps(zx.o(ecx_7))
    
    if (ecx_7 s> 1)
        int32_t eax_47 = *(esi_1 + 0x40010)
        void* var_d4_2 = esi_1 + 0x40010
        i_9 = i_8
        var_50 = xmm2_2
        int32_t* i_69 = eax_47 + (var_2c << 2)
        void* var_cc_2 = var_2c
        i_51 = i_69
        int32_t var_c8_2 = *(esi_1 + 0x40014)
        i_53 = i_69
        int32_t* i_18 = i_8
        int32_t var_94_2 = *(esi_1 + 0x40014)
        var_74 = &i_53
        int32_t* var_70_2 = &var_50
        void* var_6c_2 = &var_25
        int32_t* var_68_2 = &i_51
        int32_t* i_14
        
        if ((i_69.b & 3) != 0)
            i_14 = i_8
        else
            int32_t* i_41 = neg.d(i_69 u>> 2) & 3
            
            if (i_41 s< i_8)
                i_18 = i_41
            
            i_14 = i_18
        
        int32_t eax_53
        int32_t edx_20
        edx_20:eax_53 = sx.q(i_8 - i_18)
        void* i_29 = &i_18[(eax_53 + (edx_20 & 3)) s>> 2]
        i_15 = i_29
        void* i_62 = sub_5c2ef0(i_29, 0, &var_74, i_18)
        int32_t* i_32 = i_14
        void* i_42 = i_15
        
        if (i_32 s< i_42)
            do
                i_62 = i_53
                float xmm0_4[0x4] = var_50
                float xmm0_5[0x4] = _mm_shuffle_ps(xmm0_4, xmm0_4, 0)
                *(i_62 + (i_32 << 2)) = _mm_div_ps(*(i_62 + (i_32 << 2)), xmm0_5)
                i_32 = &i_32[1]
            while (i_32 s< i_42)
            
            xmm2_2 = _mm_cvtepi32_ps(zx.o(arg7))
        
        ecx_7 = sub_5c2ef0(i_62, i_42, &var_74, i_8)
    
    float _X = xmm2_2 / 3f
    void* edx_22 = var_2c + (i_8 << 1)
    
    if (*(esi_1 + 0x40cc0) s< 0xd)
        *(*(esi_1 + 0x40010) + (edx_22 << 2)) = _X
    else
        int32_t var_118_9 = ecx_7
        asinhf(_X)
        int32_t eax_57 = *(esi_1 + 0x40010)
        i_15 = fconvert.s(arg4 - fconvert.t(1f))
        edx_22 = var_2c + (i_8 << 1)
        *(eax_57 + (edx_22 << 2)) = i_15
    
    int32_t ecx_32 = arg9
    int32_t eax_59 = 0
    int32_t var_40_1 = 0
    
    if (ecx_32 s>= 4)
        void* edi_2 = arg8 + 8
        int32_t i_5 = ((ecx_32 - 4) u>> 2) + 1
        var_40_1 = (((ecx_32 - 4) u>> 2) + 1) << 2
        int32_t i_1
        
        do
            void* ecx_24 = *(edi_2 - 8)
            edi_2 += 0x10
            *(*(esi_1 + 0x40010) + ((ecx_24 + edx_22 + 1) << 2) - 4) = 0x3f800000
            *(*(esi_1 + 0x40010) + ((*(edi_2 - 0x14) + edx_22 + 1) << 2) - 4) = 0x3f800000
            *(*(esi_1 + 0x40010) + ((*(edi_2 - 0x10) + edx_22 + 1) << 2) - 4) = 0x3f800000
            i_1 = i_5
            i_5 -= 1
            *(*(esi_1 + 0x40010) + ((*(edi_2 - 0xc) + edx_22 + 1) << 2) - 4) = 0x3f800000
        while (i_1 != 1)
        i_8 = i_12
        eax_59 = var_40_1
        ecx_32 = arg9
    
    if (eax_59 s< ecx_32)
        int32_t edi_3 = var_40_1
        
        do
            void* ecx_33 = *(arg8 + (edi_3 << 2))
            edi_3 += 1
            *(*(esi_1 + 0x40010) + ((ecx_33 + edx_22 + 1) << 2) - 4) = 0x3f800000
        while (edi_3 s< arg9)
        
        i_8 = i_12
    
    void* edx_24
    
    if (*(esi_1 + 0x40cc0) s>= 0xc)
        edx_24 = edx_22 + 0xfa
    else
        edx_24 = edx_22 + 0xdc
    
    void* ecx_35 = edx_24 + 0x29
    
    if (arg11 s> 0)
        float xmm0_8 = _mm_cvtepi32_ps(zx.o(arg11))
        *(*(esi_1 + 0x40010) + ((arg11 + edx_24) << 2) - 4) = 0x3f800000
        ecx_35 = edx_24 + 0x29
        *(*(esi_1 + 0x40010) + (ecx_35 << 2)) = (xmm0_8 - 21f) / 20f
    
    void* ecx_38 = ecx_35 + 1
    
    if (arg10 != 0)
        int32_t* eax_74 = *i_72 + (arg10 << 2)
        int32_t edx_26 = i_72[2]
        int32_t* i_33 = nullptr
        i_15 = *(esi_1 + 0x40010) + (ecx_38 << 2)
        void* i_73 = i_72[1]
        i_57 = i_73
        
        if (edx_26 s>= 4)
            void* i_74 = i_57
            void* edx_28 = i_15 + 8
            int32_t* esi_4 = &eax_74[i_73 * 3]
            int32_t* var_40_2 = &eax_74[i_74]
            int32_t i_4 = ((edx_26 - 4) u>> 2) + 1
            int32_t* eax_88 = eax_74
            i_13 = (((edx_26 - 4) u>> 2) + 1) << 2
            int32_t* ecx_40 = &eax_74[i_74 * 2]
            int32_t* var_3c_1 = eax_88
            int32_t i_2
            
            do
                edx_28 += 0x10
                *(edx_28 - 0x18) = *eax_88
                int32_t* eax_90 = var_40_2
                var_40_2 = &var_40_2[i_73 * 4]
                *(edx_28 - 0x14) = *eax_90
                int32_t eax_92 = *ecx_40
                ecx_40 = &ecx_40[i_73 * 4]
                *(edx_28 - 0x10) = eax_92
                int32_t eax_93 = *esi_4
                esi_4 = &esi_4[i_73 * 4]
                *(edx_28 - 0xc) = eax_93
                eax_88 = &var_3c_1[i_73 * 4]
                i_2 = i_4
                i_4 -= 1
                var_3c_1 = eax_88
            while (i_2 != 1)
            i_33 = i_13
            i_8 = i_12
            esi_1 = var_64
            
            if (i_33 s< edx_26)
                i_73 = i_57
            label_5bb62d:
                i_13 = i_73 << 2
                void* edx_30 = &eax_74[i_73 * i_33]
                int32_t* i_49 = i_13
                
                do
                    int32_t eax_96 = *edx_30
                    edx_30 += i_49
                    *(i_15 + (i_33 << 2)) = eax_96
                    i_33 += 1
                while (i_33 s< edx_26)
                
                i_8 = i_12
                esi_1 = var_64
        else if (edx_26 s> 0)
            goto label_5bb62d
    
    i_59 = i_72
    void* ecx_41 = ecx_38 + *(i_59 + 8)
    void* ecx_44
    
    if (*(esi_1 + 0x40cc0) s>= 0xe)
        if (arg12 != 0)
            i_59 = *(esi_1 + 0x40010)
            *(i_59 + ((ecx_41 + arg12) << 2) - 4) = 0x3f800000
        
        ecx_44 = ecx_41 + 0x1c
    else
        if (arg12 != 0 && arg12 s< 0x15)
            i_59 = *(esi_1 + 0x40010)
            *(i_59 + ((ecx_41 + arg12) << 2) - 4) = 0x3f800000
        
        ecx_44 = ecx_41 + 0x15
    
    if (arg13 == 0)
        if (*(esi_1 + 0x40cc0) s>= 0xd)
            ecx_44 += i_8 << 1
    else if (*(esi_1 + 0x40cc0) s>= 0xd)
        void* i_63 = nullptr
        void* i_55 = nullptr
        int32_t var_5c = 0
        int32_t var_14_1 = 0
        
        if (i_8 != 0)
            if (divs.dp.d(0x7fffffff, i_8) s< 1)
                sub_5b0890()
                noreturn
            
            if (i_8 s<= 0)
                i_63 = nullptr
            else
                i_63 = sub_5c0320(i_8)
            
            i_55 = i_63
        
        int32_t** var_118_11 = &i_13
        i_13 = nullptr
        sub_5c3cd0(i_63, i_8, i_63, var_118_11)
        void* i_64 = nullptr
        int32_t var_14_2 = 1
        void* i_56 = nullptr
        int32_t var_40_3 = 0
        var_14_2.b = 2
        
        if (i_8 != 0)
            if (divs.dp.d(0x7fffffff, i_8) s< 1)
                sub_5b0890()
                noreturn
            
            if (i_8 s<= 0)
                i_64 = nullptr
            else
                i_64 = sub_5c0320(i_8)
            
            i_56 = i_64
        
        int32_t* var_118_12 = &i_13
        i_13 = nullptr
        sub_5c3cd0(i_64, i_8, i_64, var_118_12)
        int32_t eax_101 = 0
        var_14_2.b = 3
        float xmm1_7[0x4] = zx.o(0)
        int32_t var_30_2 = 0
        var_a0.o = zx.o(0)
        
        if (arg7 s> 0)
            int32_t ecx_49 = 0
            int32_t var_3c_2 = 0
            i_13 = 1 - arg7
            
            do
                int32_t eax_103 = *(esi_1 + (*(arg6 + (eax_101 << 2)) << 2) + 0x40024)
                
                if (eax_103 s< 0)
                    sub_63b870(eax_103, &data_801800, "idx >= 0", 
                        "C:\x\ax2017\Jams\Dominion\code\NeuralEigen.cpp", 0x654, "ComputePolicy")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(ecx_49)))
                _libm_sse2_pow_precise(eax_2)
                float xmm1_12[0x2] = _mm_cvtepi32_ps(zx.o(var_30_2 + i_13))
                i_57 = fconvert.s(2.0)
                _mm_cvtps_pd(xmm1_12)
                _libm_sse2_pow_precise()
                int32_t edx_40 = *(esi_1 + 0x4000c)
                float i_77[0x4] = i_57
                int32_t var_ac_2 = edx_40
                float xmm2_4[0x4] = fconvert.s(2.0)
                int32_t eax_107 = *(esi_1 + 0x40004) + ((edx_40 * eax_103) << 2)
                float i_79[0x4] = i_77
                void* i_34 = i_55
                var_74 = &i_15
                int32_t* var_70_3 = &i_70
                void* var_6c_3 = &var_25
                void** var_68_3 = &i_55
                int32_t eax_109
                int32_t edx_41
                edx_41:eax_109 = sx.q(i_8)
                int32_t i_80 = i_79
                i_15 = i_34
                int32_t edx_44 = ((edx_41 & 3) + eax_109) & 0xfffffffc
                int32_t* eax_110 = nullptr
                
                if (edx_44 s> 0)
                    int32_t esi_6 = eax_107
                    
                    while (true)
                        *(i_34 + (eax_110 << 2)) = __addps_xmmps_memps(
                            _mm_mul_ps(*(esi_6 + (eax_110 << 2)), _mm_shuffle_ps(i_79, i_79, 0)), 
                            *(i_34 + (eax_110 << 2)))
                        eax_110 = &eax_110[1]
                        
                        if (eax_110 s>= edx_44)
                            break
                        
                        i_79 = i_80
                        esi_6 = eax_107
                        i_34 = i_15
                    
                    i_77 = i_57
                    esi_1 = var_64
                
                sub_5c33e0(eax_110, edx_44, &var_74, i_8)
                int32_t edx_45 = *(esi_1 + 0x4000c)
                int32_t var_ac_3 = edx_45
                int32_t var_a8_2 = xmm2_4
                int32_t eax_112 = *(esi_1 + 0x40004) + ((edx_45 * eax_103) << 2)
                void* i_35 = i_56
                var_100 = &i_15
                int32_t* var_fc_2 = &i_70
                void* var_f8_2 = &var_45
                void** var_f4_2 = &i_56
                int32_t eax_114
                int32_t edx_46
                edx_46:eax_114 = sx.q(i_8)
                i_15 = i_35
                int32_t* eax_115 = nullptr
                void* i_75 = ((edx_46 & 3) + eax_114) & 0xfffffffc
                i_57 = i_75
                
                if (i_75 s> 0)
                    int32_t edx_49 = eax_112
                    void* i_76 = i_57
                    
                    while (true)
                        float xmm2_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(xmm2_4, xmm2_4, 0), 
                            *(edx_49 + (eax_115 << 2)))
                        *(i_35 + (eax_115 << 2)) = _mm_add_ps(*(i_35 + (eax_115 << 2)), xmm2_6)
                        eax_115 = &eax_115[1]
                        
                        if (eax_115 s>= i_76)
                            break
                        
                        i_35 = i_15
                        xmm2_4 = var_a8_2
                        edx_49 = eax_112
                    
                    esi_1 = var_64
                    i_75 = i_57
                
                sub_5c33e0(eax_115, i_75, &var_100, i_8)
                xmm1_7 = i_77 f+ var_a0
                eax_101 = var_30_2 + 1
                ecx_49 = var_3c_2 - 1
                var_30_2 = eax_101
                var_3c_2 = ecx_49
                var_a0.o = xmm1_7
            while (eax_101 s< arg7)
        
        void* i_36 = i_55
        var_74 = &i_15
        float xmm2_7[0x4] = xmm1_7
        int32_t var_84 = xmm2_7
        int32_t* var_70_4 = &var_84
        void* var_6c_4 = &var_25
        void** var_68_4 = &i_55
        i_13 = i_8
        int32_t eax_118
        int32_t edx_50
        edx_50:eax_118 = sx.q(i_8)
        i_15 = i_36
        int32_t eax_119 = 0
        int32_t edx_53 = ((edx_50 & 3) + eax_118) & 0xfffffffc
        
        if (edx_53 s> 0)
            while (true)
                *(i_36 + (eax_119 << 2)) =
                    _mm_div_ps(*(i_36 + (eax_119 << 2)), _mm_shuffle_ps(xmm2_7, xmm2_7, 0))
                eax_119 += 4
                
                if (eax_119 s>= edx_53)
                    break
                
                xmm2_7 = var_84
                i_36 = i_15
        
        sub_5c2e40(eax_119, edx_53, &var_74, i_13)
        void* i_37 = i_56
        var_74 = &i_15
        var_84 = xmm1_7
        int32_t* var_70_5 = &var_84
        void* var_6c_5 = &var_25
        void** var_68_5 = &i_56
        i_13 = i_8
        int32_t eax_121
        int32_t edx_54
        edx_54:eax_121 = sx.q(i_8)
        i_15 = i_37
        int32_t eax_122 = 0
        int32_t edx_57 = ((edx_54 & 3) + eax_121) & 0xfffffffc
        
        if (edx_57 s> 0)
            while (true)
                *(i_37 + (eax_122 << 2)) =
                    _mm_div_ps(*(i_37 + (eax_122 << 2)), _mm_shuffle_ps(xmm1_7, xmm1_7, 0))
                eax_122 += 4
                
                if (eax_122 s>= edx_57)
                    break
                
                xmm1_7 = var_84
                i_37 = i_15
        
        sub_5c2e40(eax_122, edx_57, &var_74, i_13)
        void* var_d4_3 = esi_1 + 0x40010
        void* var_cc_3 = ecx_44
        int32_t* i_10 = i_8
        int32_t* i_30 = *(esi_1 + 0x40010) + (ecx_44 << 2)
        i_13 = i_30
        int32_t* i_43 = i_13
        i_51 = i_30
        int32_t var_c8_3 = *(esi_1 + 0x40014)
        i_57 = i_55
        i_53 = i_43
        void* i_19 = i_8
        int32_t var_94_3 = *(esi_1 + 0x40014)
        var_74 = &i_53
        void** var_70_6 = &i_57
        void* var_6c_6 = &var_25
        int32_t** var_68_6 = &i_51
        
        if ((i_43.b & 3) != 0)
            i_15 = i_8
        else
            void* i_44 = neg.d(i_43 u>> 2) & 3
            
            if (i_44 s< i_8)
                i_19 = i_44
            
            i_15 = i_19
        
        int32_t eax_129
        int32_t edx_61
        edx_61:eax_129 = sx.q(i_8 - i_19)
        void* eax_132 = i_19 + ((eax_129 + (edx_61 & 3)) s>> 2 << 2)
        sub_5c5320(eax_132, 0, &var_74, i_19)
        void* i_45 = i_15
        void* eax_133 = eax_132
        
        if (i_45 s< eax_133)
            do
                *(i_53 + (i_45 << 2)) = *(i_57 + (i_45 << 2))
                i_45 += 4
            while (i_45 s< eax_133)
            
            esi_1 = var_64
            eax_133 = eax_132
        
        sub_5c5320(eax_133, eax_133, &var_74, i_8)
        void* edx_65 = ecx_44 + i_8
        void* var_d4_4 = esi_1 + 0x40010
        void* var_cc_4 = edx_65
        i_9 = i_8
        int32_t* i_31 = *(esi_1 + 0x40010) + (edx_65 << 2)
        i_13 = i_31
        int32_t* i_46 = i_13
        i_51 = i_31
        int32_t var_c8_4 = *(esi_1 + 0x40014)
        i_57 = i_56
        i_53 = i_46
        int32_t* i_20 = i_8
        int32_t var_94_4 = *(esi_1 + 0x40014)
        var_74 = &i_53
        void** var_70_7 = &i_57
        void* var_6c_7 = &var_25
        int32_t** var_68_7 = &i_51
        
        if ((i_46.b & 3) != 0)
            i_15 = i_8
        else
            int32_t* i_47 = neg.d(i_46 u>> 2) & 3
            
            if (i_47 s< i_8)
                i_20 = i_47
            
            i_15 = i_20
        
        int32_t eax_141
        int32_t edx_68
        edx_68:eax_141 = sx.q(i_8 - i_20)
        void* eax_144 = &i_20[(eax_141 + (edx_68 & 3)) s>> 2]
        sub_5c5320(eax_144, 0, &var_74, i_20)
        void* i_48 = i_15
        void* eax_145 = eax_144
        
        if (i_48 s< eax_145)
            do
                *(i_53 + (i_48 << 2)) = *(i_57 + (i_48 << 2))
                i_48 += 4
            while (i_48 s< eax_145)
            
            esi_1 = var_64
            eax_145 = eax_144
        
        sub_5c5320(eax_145, eax_145, &var_74, i_8)
        void* i_65 = i_56
        ecx_44 = edx_65 + i_8
        void* var_2c_5 = ecx_44
        
        if (i_65 != 0)
            free(*(i_65 - 4))
            ecx_44 = var_2c_5
        
        int32_t var_14_3 = 0xffffffff
        i_59 = i_55
        
        if (i_59 != 0)
            i_59 = free(*(i_59 - 4))
            ecx_44 = var_2c_5
    
    if (ecx_44 == *(esi_1 + 0x40014))
        int32_t** var_c4 = nullptr
        int32_t var_c0 = 0
        int32_t var_14_4 = 4
        sub_5bbeb0(&var_12c, "policy_dense")
        int32_t* eax_148 = sub_5bc6a0(esi_1 + 0x40010, esi_1, &var_50, esi_1 + 0x40010, 1)
        int32_t** edx_72 = var_c4
        var_c4 = *eax_148
        int32_t ecx_71 = eax_148[1]
        *eax_148 = edx_72
        int32_t var_c0_1 = ecx_71
        eax_148[1] = var_c0
        float eax_149 = var_50
        
        if (eax_149 != 0)
            free(*(eax_149 - 4))
        
        char** eax_150
        int32_t edx_74
        eax_150, edx_74 = sub_5bbeb0(&var_12c, "policy_final/kernel")
        int32_t* eax_151 = sub_5b0f90(eax_150, edx_74, esi_1)
        int32_t var_d0 = arg5
        int32_t var_d4_5 = 0
        int32_t* i_66 = eax_151[1]
        int32_t ecx_74 = *eax_151
        int32_t** esi_10 = var_c4
        i_51 = i_66
        int32_t* i_22 = i_9
        int128_t* result = eax_151[1]
        int32_t* var_d8 = eax_151
        int128_t* result_1 = result
        int32_t ecx_75 = ecx_74 + ((i_66 * arg5) << 2)
        int32_t var_e4 = ecx_75
        int32_t* var_e8 = &var_c4
        
        if (result != 0)
            int128_t* result_2 = result
            int32_t var_70_8 = ecx_75
            void var_ec
            void* var_118_24 = &var_ec
            var_74 = esi_10
            void var_78
            int32_t xmm0_24
            result, xmm0_24 = sub_5c0400(&var_ec, &var_c4, &var_78, var_118_24)
            var_f0 = xmm0_24
        
        if (esi_10 != 0)
            result = free(esi_10[-1])
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    var_118_6 = "ComputePolicy"
    var_11c = 0x66f
    ecx_20 = "n == net.policyInput.size()"
else
    while (true)
        i_59 = *(arg6 + (eax_15 << 2))
        
        if (i_59 == 0)
            var_118_6 = "ComputePolicy"
            var_11c = 0x5f6
            ecx_20 = "stack[i] != 0"
            break
        
        int32_t edx_8 = *(esi_1 + (i_59 << 2) + 0x40024)
        
        if (edx_8 s>= 0)
            i_59 = ((*(esi_1 + 0x4000c) * edx_8) << 2) + *(esi_1 + 0x40004)
            i_57 = i_59
            i_15 = fconvert.s(fconvert.t(*i_59))
            void* i_50 = i_15
            i_59.b = is_unordered.d(i_50, i_50)
            
            if (i_59.b == 1)
                var_118_6 = "ComputePolicy"
                var_11c = 0x5fc
                ecx_20 = "!isnan(net.elements(idx, 0))"
                break
            
            int32_t* i_11 = i_8
            void* var_b0_1 = esi_1 + 0x40010
            void* i_67 = *(esi_1 + 0x40010) + (var_2c << 2)
            void* var_a8_1 = var_2c
            i_52 = i_67
            int32_t var_a4_1 = *(esi_1 + 0x40014)
            void* i_71 = i_57
            int32_t* i_3 = i_8
            i_13 = *(esi_1 + 0x4000c)
            i_54 = i_67
            int32_t var_80_1 = *(esi_1 + 0x40014)
            var_100 = &i_54
            void** var_fc_1 = &i_71
            void* var_f8_1 = &var_45
            int32_t* var_f4_1 = &i_52
            
            if ((i_67.b & 3) == 0)
                int32_t* i_7 = neg.d(i_67 u>> 2) & 3
                
                if (i_7 s< i_8)
                    i_3 = i_7
            
            void* eax_27 = i_8 - i_3
            
            if (eax_27 s< 0)
                eax_27 += 3
            
            void* i_28 = &i_3[eax_27 s>> 2]
            i_15 = i_28
            void* i_78 = sub_5c3200(i_28, 0, &var_100, i_3)
            void* i_39
            
            for (i_39 = i_15; i_3 s< i_39; i_3 = &i_3[1])
                i_78 = i_71
                void* i_68 = i_54
                *(i_68 + (i_3 << 2)) =
                    __addps_xmmps_memps(*(i_78 + (i_3 << 2)), *(i_68 + (i_3 << 2)))
            
            sub_5c3200(i_78, i_39, &var_100, i_8)
            void* edx_11 = var_2c + i_8
            i_9 = i_8
            void* var_cc_1 = edx_11
            int32_t* i_60 = *eax_4 + (edx_11 << 2)
            i_70 = i_60
            int32_t esi_2 = *(var_64 + 0x4000c)
            int32_t ecx_15 = *(var_64 + 0x40004) + ((esi_2 * edx_8) << 2)
            i_51 = i_60
            void* var_d4_1 = eax_4
            int32_t var_c8_1 = *(eax_4 + 4)
            int32_t var_b0_2 = *(eax_4 + 4)
            int32_t var_a4_2 = esi_2
            int32_t* i_21 = i_8
            i_53 = i_60
            int32_t var_94_1 = *(eax_4 + 4)
            var_74 = &i_53
            int32_t* var_70_1 = &i_52
            void* var_6c_1 = &var_25
            int32_t* var_68_1 = &i_51
            
            if ((i_60.b & 3) == 0)
                int32_t* i_40 = neg.d(i_60 u>> 2) & 3
                
                if (i_40 s< i_8)
                    i_21 = i_40
            
            void* eax_42 = i_8 - i_21
            
            if (eax_42 s< 0)
                eax_42 += 3
            
            void* eax_44 = &i_21[eax_42 s>> 2]
            int32_t* i_61 = sub_5c53e0(eax_44, 0, &var_74, i_21)
            void* edx_15 = eax_44
            
            if (i_21 s< edx_15)
                int32_t edx_16 = i_21 << 2
                
                do
                    edx_16 += 0x10
                    i_61 = i_53
                    *(i_61 + (i_21 << 2)) =
                        _mm_max_ps(*(ecx_15 + edx_16 - 0x10), *(i_70 + (i_21 << 2)))
                    i_21 = &i_21[1]
                while (i_21 s< eax_44)
                
                i_8 = i_12
                edx_15 = eax_44
            
            sub_5c53e0(i_61, edx_15, &var_74, i_8)
            esi_1 = var_64
            ecx_7 = arg7
        
        eax_15 = var_3c + 1
        var_3c = eax_15
        
        if (eax_15 s>= ecx_7)
            goto label_5bb2d7
sub_63b870(i_59, &data_801800, ecx_20, "C:\x\ax2017\Jams\Dominion\code\NeuralEigen.cpp", var_11c, 
    var_118_6)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
