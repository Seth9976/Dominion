// 函数: sub_5c07d0
// 地址: 0x5c07d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_769664
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_1dc = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = arg3[1]
struct _EXCEPTION_REGISTRATION_RECORD** eax_12
int32_t var_b4
uint128_t var_a8
int32_t* var_50
int32_t i_1
void var_35

if (*(arg4 + 4) + edi + arg3[2] s>= 0x14 || *(arg4 + 4) s<= 0)
    void* eax_93 = arg3[3]
    int32_t ecx_69 = *arg3
    int32_t i_6 = edi * arg3[2]
    int32_t var_a0_1 = 0
    var_b4 = ecx_69
    int32_t var_ac_1 = *(eax_93 + 4)
    var_50 = &var_b4
    void* var_4c_1 = &var_a8:8
    void* var_48_1 = &var_35
    int32_t i = i_6
    int32_t* var_44_1 = arg3
    
    if ((ecx_69.b & 3) == 0)
        int32_t i_4 = neg.d(ecx_69 u>> 2) & 3
        
        if (i_4 s< i_6)
            i = i_4
    
    int32_t eax_97
    int32_t edx_14
    edx_14:eax_97 = sx.q(i_6 - i)
    int32_t i_3 = i + ((eax_97 + (edx_14 & 3)) s>> 2 << 2)
    i_1 = i_3
    int32_t eax_100 = sub_5c8250(i_3, 0, &var_50, i)
    int32_t i_5
    
    for (i_5 = i_1; i s< i_5; i += 4)
        float xmm0_49[0x4] = var_a0_1
        eax_100 = var_b4
        *(eax_100 + (i << 2)) = _mm_shuffle_ps(xmm0_49, xmm0_49, 0)
    
    sub_5c8250(eax_100, i_5, &var_50, i_6)
    i_1 = 0x3f800000
    eax_12 = sub_5c1c70(&i_1, arg2, arg3, arg4, &i_1)
else
    uint128_t xmm1_1 = *arg4
    int32_t eax_6 = *(arg4 + 0x18)
    int64_t xmm0_1 = arg4[1].q
    int32_t* var_1d0 = arg2
    uint128_t var_1cc_1 = xmm1_1
    int32_t var_1b4_1 = eax_6
    int64_t var_1bc_1 = xmm0_1
    int32_t eax_7 = sub_5bbe40(arg2)
    int32_t var_1a8_1 = xmm1_1
    int32_t var_1b0_1 = *arg2
    int32_t var_1ac_1 = eax_7
    int32_t var_1a0_1 = sub_5bbe40(_mm_bsrli_si128(xmm1_1, 0xc))
    int32_t var_19c_1 = arg2[2]
    int32_t var_14_1 = 0
    int32_t eax_10 = *arg3
    void* ecx_4 = arg3[3]
    var_b4 = eax_10
    int32_t var_ac = sub_5bbe40(ecx_4)
    var_50 = &var_b4
    int32_t* var_4c = &var_1d0
    void* var_48 = &var_35
    int128_t var_ec
    uint128_t var_94
    uint128_t var_78
    
    if ((eax_10.b & 3) u<= 0)
        var_14_1.b = 5
        struct _EXCEPTION_REGISTRATION_RECORD** esi_8 = sub_5bbe40(arg3)
        struct _EXCEPTION_REGISTRATION_RECORD** var_9c_2 = esi_8
        var_14_1.b = 6
        int32_t i_2 = sub_4acc50(arg3)
        var_14_1.b = 1
        i_1 = i_2
        int32_t eax_38 = sub_5c7580(&var_50) & 0x80000003
        
        if (eax_38 s< 0)
            eax_38 = ((eax_38 - 1) | 0xfffffffc) + 1
        
        struct _EXCEPTION_REGISTRATION_RECORD** ecx_31 = neg.d(eax_10 u>> 2) & 3
        int32_t var_30_1 = 0
        eax_12 = esi_8
        
        if (ecx_31 s< esi_8)
            eax_12 = ecx_31
        
        struct _EXCEPTION_REGISTRATION_RECORD** var_34_2 = eax_12
        
        if (i_2 s> 0)
            int32_t edi_13
            
            do
                int32_t ecx_32 = 0
                int32_t var_2c_2 = 0
                void* edx_6 = ((esi_8 - eax_12) & 0xfffffffc) + eax_12
                void* var_28_2 = edx_6
                void var_164
                float* var_e8
                
                if (eax_12 s> 0)
                    do
                        int32_t* esi_9 = *var_4c
                        int32_t var_1e0_3 = esi_9[2]
                        sub_5bc1c0(&var_94, *esi_9 + (ecx_32 << 2), 1)
                        int32_t* var_88_1 = esi_9
                        uint128_t xmm0_17 = var_94
                        int32_t var_1e0_4 = 1
                        int32_t var_1e4_2 = var_4c[2]
                        int32_t var_80_1 = 0
                        int32_t var_7c_2 = 1
                        int64_t xmm0_18 = var_2c_2.q
                        int32_t eax_46 = sub_5bbe40(var_4c[4])
                        sub_5c03b0(&var_ec:4, var_4c[1] + ((eax_46 * var_30_1) << 2), var_1e4_2)
                        uint128_t xmm1_9 = *(var_4c + 4)
                        int64_t xmm0_19 = *(var_4c + 0x14)
                        int32_t var_c4_1 = var_4c[7]
                        int32_t var_c0_1 = 0
                        int32_t var_bc_2 = var_30_1
                        int32_t eax_50 = sub_5bbe40(_mm_bsrli_si128(xmm1_9, 0xc))
                        int32_t var_148_1 = 1
                        float* var_160_1 = xmm0_17
                        int32_t xmm0_21 = _mm_bsrli_si128(xmm0_17, 4)
                        int32_t var_158_1 = _mm_bsrli_si128(xmm0_17, 8)
                        int32_t var_15c_1 = xmm0_21
                        void* xmm1_12 = _mm_bsrli_si128(xmm0_17, 0xc)
                        int32_t var_150_1 = xmm0_18.d
                        int32_t var_b8_1 = eax_50
                        int32_t var_14c_1 = xmm0_18:4.d
                        int32_t var_114_1 = eax_50
                        int128_t var_124_1 = xmm0_19:4.o
                        int32_t xmm0_27
                        
                        if (sub_5c3ca0(&var_164) != 0)
                            var_78:4.d = var_160_1
                            uint128_t var_70_1
                            var_70_1.d = sub_5bbe40(xmm1_12)
                            var_70_1:8.d = var_e8
                            int32_t var_60_2 = sub_5bbe40(xmm1_9:4.12:8.d)
                            var_14_1.b = 7
                            int32_t esi_13 = 1
                            int32_t var_24_2 = *var_160_1 * *var_e8
                            
                            if (sub_5c3ca0(&var_164) s> 1)
                                int32_t eax_57 = var_70_1.d
                                float* edi_8 = &var_160_1[eax_57]
                                bool cond:3_1
                                
                                do
                                    float xmm0_30 = *edi_8
                                    edi_8 = &edi_8[eax_57]
                                    float xmm0_31 = xmm0_30 * var_e8[esi_13]
                                    esi_13 += 1
                                    var_24_2 = var_24_2 f+ xmm0_31
                                    cond:3_1 = esi_13 s< sub_5c3ca0(&var_164)
                                    eax_57 = var_70_1.d
                                while (cond:3_1)
                            
                            xmm0_27 = var_24_2
                            var_14_1.b = 1
                        else
                            xmm0_27 = (zx.o(0)).d
                        
                        int32_t* eax_59 = var_50
                        *(*eax_59 + ((eax_59[2] * var_30_1 + var_2c_2) << 2)) = xmm0_27
                        eax_12 = var_34_2
                        ecx_32 = var_2c_2 + 1
                        var_2c_2 = ecx_32
                    while (ecx_32 s< eax_12)
                    
                    edx_6 = var_28_2
                    esi_8 = var_9c_2
                
                struct _EXCEPTION_REGISTRATION_RECORD** var_24_3 = eax_12
                struct _EXCEPTION_REGISTRATION_RECORD** edi_9 = eax_12
                
                if (eax_12 s< edx_6)
                    do
                        float xmm2_1[0x4] = zx.o(0)
                        int32_t j_1 = var_4c[0xd]
                        
                        if (j_1 s> 0)
                            int32_t edi_11 = var_4c[9] << 2
                            int128_t* edx_10 = var_4c[8] + (var_24_3 << 2)
                            int128_t* eax_67 = var_4c[0xa] + ((var_4c[0xc] * var_30_1) << 2)
                            int32_t j
                            
                            do
                                float xmm0_32[0x4] = *eax_67
                                eax_67 += 4
                                float xmm1_15[0x4] = *edx_10
                                edx_10 += edi_11
                                xmm2_1 = _mm_add_ps(xmm2_1, 
                                    _mm_mul_ps(xmm1_15, _mm_shuffle_ps(xmm0_32, xmm0_32, 0)))
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                            edx_6 = var_28_2
                            edi_9 = var_24_3
                        
                        int32_t* eax_68 = var_50
                        void* eax_71 = eax_68[2] * var_30_1 + edi_9
                        edi_9 = &edi_9[1]
                        var_24_3 = edi_9
                        *(*eax_68 + (eax_71 << 2)) = xmm2_1
                    while (edi_9 s< edx_6)
                    
                    eax_12 = var_34_2
                    esi_8 = var_9c_2
                
                if (edx_6 s>= esi_8)
                    edi_13 = var_30_1
                else
                    do
                        int32_t* esi_14 = *var_4c
                        int32_t var_1e0_5 = esi_14[2]
                        sub_5bc1c0(&var_94, *esi_14 + (edx_6 << 2), 1)
                        int32_t* var_88_2 = esi_14
                        uint128_t xmm0_34 = var_94
                        int32_t var_1e0_6 = 1
                        int32_t var_1e4_3 = var_4c[2]
                        int32_t var_80_2 = 0
                        int32_t var_7c_3 = 1
                        int64_t xmm0_35 = var_28_2.q
                        int32_t eax_76 = sub_5bbe40(var_4c[4]) * var_30_1
                        sub_5c03b0(&var_ec:4, var_4c[1] + (eax_76 << 2), var_1e4_3)
                        uint128_t xmm1_17 = *(var_4c + 4)
                        int64_t xmm0_36 = *(var_4c + 0x14)
                        edi_13 = var_30_1
                        int32_t var_c4_2 = var_4c[7]
                        int32_t var_c0_2 = 0
                        int32_t var_bc_3 = edi_13
                        int32_t eax_79 = sub_5bbe40(_mm_bsrli_si128(xmm1_17, 0xc))
                        int32_t var_148_2 = 1
                        float* var_160_2 = xmm0_34
                        int32_t xmm0_38 = _mm_bsrli_si128(xmm0_34, 4)
                        int32_t var_158_2 = _mm_bsrli_si128(xmm0_34, 8)
                        int32_t var_15c_2 = xmm0_38
                        void* xmm1_20 = _mm_bsrli_si128(xmm0_34, 0xc)
                        int32_t var_150_2 = xmm0_35.d
                        int32_t var_b8_2 = eax_79
                        int32_t var_14c_2 = xmm0_35:4.d
                        int32_t var_114_2 = eax_79
                        int128_t var_124_2 = xmm0_36:4.o
                        int32_t xmm1_21
                        
                        if (sub_5c3ca0(&var_164) != 0)
                            var_78:4.d = var_160_2
                            uint128_t var_70_2
                            var_70_2.d = sub_5bbe40(xmm1_20)
                            var_70_2:8.d = var_e8
                            int32_t var_60_3 = sub_5bbe40(xmm1_17:4.12:8.d)
                            var_14_1.b = 8
                            int32_t esi_18 = 1
                            int32_t var_24_4 = *var_160_2 * *var_e8
                            
                            if (sub_5c3ca0(&var_164) s> 1)
                                int32_t eax_86 = var_70_2.d
                                void* edi_14 = &var_160_2[eax_86]
                                bool cond:4_1
                                
                                do
                                    float xmm0_46 = *edi_14
                                    edi_14 += eax_86 << 2
                                    float xmm0_47 = xmm0_46 * var_e8[esi_18]
                                    esi_18 += 1
                                    var_24_4 = xmm0_47 f+ var_24_4
                                    cond:4_1 = esi_18 s< sub_5c3ca0(&var_164)
                                    eax_86 = var_70_2.d
                                while (cond:4_1)
                                edi_13 = var_30_1
                            
                            xmm1_21 = var_24_4
                            var_14_1.b = 1
                        else
                            xmm1_21 = (zx.o(0)).d
                        
                        int32_t* eax_88 = var_50
                        esi_8 = var_9c_2
                        void* ecx_66 = eax_88[2] * edi_13 + var_28_2
                        edx_6 = var_28_2 + 1
                        var_28_2 = edx_6
                        *(*eax_88 + (ecx_66 << 2)) = xmm1_21
                    while (edx_6 s< esi_8)
                    
                    eax_12 = var_34_2
                
                eax_12 = (eax_12 + (neg.d(eax_38) & 3)) & 0x80000003
                
                if (eax_12 s< 0)
                    eax_12 = ((eax_12 - 1) | 0xfffffffc) + 1
                
                if (esi_8 s< eax_12)
                    eax_12 = esi_8
                
                var_34_2 = eax_12
                var_30_1 = edi_13 + 1
            while (edi_13 + 1 s< i_1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_12
    else
        int32_t edi_1 = 0
        int32_t var_2c_1 = 0
        var_14_1.b = 2
        eax_12 = sub_4acc50(arg3)
        var_14_1.b = 1
        
        if (eax_12 s> 0)
            int32_t eax_35
            
            do
                int32_t var_28_1 = 0
                var_14_1.b = 3
                var_14_1.b = 1
                
                if (sub_5bbe40(arg3) s> 0)
                    int32_t eax_34
                    int32_t esi_7
                    
                    do
                        int32_t* esi_1 = *var_4c
                        int32_t var_1e0_1 = esi_1[2]
                        sub_5bc1c0(&var_78, *esi_1 + (var_28_1 << 2), 1)
                        void* ecx_9 = var_4c[4]
                        int128_t var_70
                        var_70:4.d = esi_1
                        int32_t var_1e0_2 = 1
                        int32_t var_1e4_1 = var_4c[2]
                        var_70:8.d = var_28_1
                        var_70:0xc.d = 0
                        var_a8 = var_78
                        int32_t var_60_1 = 1
                        float* var_84
                        var_84.q = var_70:8.q
                        int32_t eax_17 = sub_5bbe40(ecx_9)
                        int128_t var_198
                        sub_5c03b0(&var_198, var_4c[1] + ((eax_17 * var_2c_1) << 2), var_1e4_1)
                        uint128_t xmm1_3 = *(var_4c + 4)
                        int64_t xmm0_4 = *(var_4c + 0x14)
                        int32_t var_174_1 = var_4c[7]
                        int64_t var_170
                        var_170.d = 0
                        var_170:4.d = var_2c_1
                        int32_t eax_21 = sub_5bbe40(_mm_bsrli_si128(xmm1_3, 0xc))
                        uint128_t xmm1_5 = var_a8
                        int32_t var_f0_1 = 1
                        float* var_108_1 = xmm1_5
                        int32_t xmm0_6 = _mm_bsrli_si128(xmm1_5, 4)
                        int32_t var_100_1 = _mm_bsrli_si128(xmm1_5, 8)
                        int128_t xmm0_9 = var_198
                        int32_t var_104_1 = xmm0_6
                        void* xmm1_6 = _mm_bsrli_si128(xmm1_5, 0xc)
                        var_ec = xmm0_9
                        float* var_f8_1 = var_84
                        int32_t var_168_1 = eax_21
                        int32_t var_80
                        int32_t var_f4_1 = var_80
                        int32_t var_bc_1 = eax_21
                        int64_t var_cc
                        var_cc.o = xmm0_4:4.o
                        void var_10c
                        int32_t xmm0_12
                        
                        if (sub_5c3ca0(&var_10c) != 0)
                            var_94:4.d = var_108_1
                            int32_t eax_25 = sub_5bbe40(xmm1_6)
                            float* edx_2 = var_ec.d
                            var_94:8.d = eax_25
                            var_84 = edx_2
                            int32_t var_7c_1 = sub_5bbe40(xmm1_3:4.12:8.d)
                            var_14_1.b = 4
                            int32_t esi_5 = 1
                            int32_t var_34_1 = *var_108_1 * *edx_2
                            
                            if (sub_5c3ca0(&var_10c) s> 1)
                                int32_t eax_28 = var_94:8.d
                                float* edi_4 = &var_108_1[eax_28]
                                bool cond:2_1
                                
                                do
                                    float xmm0_15 = *edi_4
                                    edi_4 = &edi_4[eax_28]
                                    float xmm0_16 = xmm0_15 * edx_2[esi_5]
                                    esi_5 += 1
                                    var_34_1 = var_34_1 f+ xmm0_16
                                    cond:2_1 = esi_5 s< sub_5c3ca0(&var_10c)
                                    eax_28 = var_94:8.d
                                while (cond:2_1)
                            
                            xmm0_12 = var_34_1
                        else
                            xmm0_12 = (zx.o(0)).d
                        
                        int32_t* eax_30 = var_50
                        edi_1 = var_2c_1
                        int32_t eax_33 = eax_30[2] * edi_1 + var_28_1
                        esi_7 = var_28_1 + 1
                        var_28_1 = esi_7
                        *(*eax_30 + (eax_33 << 2)) = xmm0_12
                        var_14_1.b = 3
                        eax_34 = sub_5bbe40(arg3)
                        var_14_1.b = 1
                    while (esi_7 s< eax_34)
                
                edi_1 += 1
                var_2c_1 = edi_1
                var_14_1.b = 2
                eax_35 = sub_4acc50(arg3)
                var_14_1.b = 1
            while (edi_1 s< eax_35)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_35
fsbase->NtTib.ExceptionList = ExceptionList
return eax_12
