// 函数: sub_5c1c70
// 地址: 0x5c1c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76973d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_214 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[2]

if (ecx != 0 && arg2[1] != 0 && *(arg4 + 8) != 0)
    float* var_1a0
    uint128_t var_160
    void var_138
    float* var_c8
    
    if (*(arg3 + 8) == 1)
        bool cond:0 = arg2[1] != 1
        uint128_t xmm1 = *arg3
        int64_t xmm0_1 = arg3[1].q
        int32_t ecx_1 = *(arg4 + 4)
        var_c8 = *arg3
        int32_t var_c4 = *(arg3 + 4)
        uint128_t var_bc_1 = xmm1
        int32_t var_a4 = *(arg3 + 0x18)
        void* xmm1_1 = _mm_bsrli_si128(xmm1, 0xc)
        uint128_t xmm1_2 = *arg4
        int32_t var_a0 = 0
        int64_t var_ac_1 = xmm0_1
        int64_t xmm0_2 = arg4[1].q
        int32_t var_9c = 0
        int32_t var_98 = *(xmm1_1 + 4)
        int32_t eax_9 = *arg4
        int32_t eax_10 = *(arg4 + 0x18)
        var_160 = xmm1_2
        int32_t var_148 = eax_10
        void* xmm1_3 = _mm_bsrli_si128(xmm1_2, 0xc)
        int32_t var_168 = ecx_1
        int32_t var_144_1 = 0
        int32_t var_140 = 0
        int32_t edi_1 = *(xmm1_3 + 4)
        
        if (cond:0)
            var_1a0.o = eax_9.o
            int32_t var_170 = edi_1
            int128_t var_194 = var_160
            int64_t var_184
            var_184:4.o = xmm0_2:4.o
            void* eax_35 = sub_5c5c70(&var_c8, &var_1a0, arg2, &var_c8, arg5)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_35
        
        float* esi_2 = *arg2
        int32_t var_218_1 = 1
        int128_t var_1ec
        sub_5c03b0(&var_1ec, eax_9, ecx_1)
        int32_t var_1b0 = edi_1
        int32_t var_130 = xmm0_2.d
        int32_t var_12c = ecx
        int32_t ecx_4 = *(xmm1_3 + 4)
        int32_t xmm0_6 = var_1ec.d
        int32_t var_1a4 = ecx_4
        int32_t var_d0 = ecx_4
        int32_t var_124_1 = 0
        int32_t var_120 = 0
        int128_t var_108_1 = eax_9.o
        int32_t var_11c_1 = 1
        int64_t xmm0_8 = var_160.12:4.q
        int128_t var_e8_1 = xmm0_2:4.o
        int64_t var_d8 = 0.q
        int32_t xmm1_4
        
        if (sub_5c3ca0(&var_138) != 0)
            int32_t edi_2 = arg2[1]
            float* var_78_1 = esi_2
            int32_t var_74_1 = edi_2
            int32_t var_6c_1 = xmm0_6
            int32_t var_64_1 = *(xmm0_8:4.d + 4)
            int32_t var_14_1 = 0
            int32_t esi_3 = 1
            float var_24_1 = *xmm0_6 * *esi_2
            
            if (sub_5c3ca0(&var_138) s> 1)
                int32_t ecx_8 = edi_2 << 2
                int32_t var_34_2 = ecx_8
                float* edi_4 = esi_2 + ecx_8
                int32_t eax_21
                
                do
                    float xmm0_13 = *(xmm0_6 + (esi_3 << 2))
                    esi_3 += 1
                    float xmm0_14 = xmm0_13 * *edi_4
                    edi_4 += ecx_8
                    var_24_1 = xmm0_14 + var_24_1
                    eax_21 = sub_5c3ca0(&var_138)
                    ecx_8 = var_34_2
                while (esi_3 s< eax_21)
            
            int32_t var_3c_1 = 1
            xmm1_4 = var_24_1
        else
            xmm1_4 = (zx.o(0)).d
        
        float* esi_5 = var_c8
        float xmm1_5 = xmm1_4 f* *arg5
        sub_5c5ad0(&var_c8)
        *esi_5 = xmm1_5 + *esi_5
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    if (*(arg3 + 4) == 1)
        bool cond:1 = *(arg4 + 8) != 1
        int128_t xmm0_24 = *arg3
        var_1a0 = *arg3
        int32_t var_198 = *(arg3 + 8)
        int128_t var_194_1 = xmm0_24
        int32_t var_17c = *(arg3 + 0x18)
        int32_t edi_7 = *arg2
        int64_t var_184_1 = arg3[1].q
        int32_t var_178 = 0
        int32_t var_174 = 0
        int32_t var_170_1 = 1
        int32_t* var_70 = arg2
        int32_t var_6c_2 = 0
        int32_t var_68 = 0
        
        if (cond:1)
            int32_t eax_65 = *(arg4 + 0x18)
            var_160 = edi_7.o
            int32_t var_1f0 = eax_65
            int32_t var_144
            var_144.q = var_6c_2.q
            int32_t var_13c = 1
            int128_t var_208 = *arg4
            int64_t var_1f8 = arg4[1].q
            int32_t eax_67 = sub_5c5d10(&var_1a0, &var_208, &var_160:0xc, &var_1a0, arg5)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_67
        
        int32_t var_218_3 = ecx
        sub_5bc1c0(&var_c8, edi_7, 1)
        uint128_t xmm1_6 = *arg4
        int128_t var_bc
        int32_t var_78
        var_bc:4.d = var_78
        var_78.q = arg4[1].q
        var_bc:8.d = ecx
        var_bc.d = edi_7
        var_bc:0xc.d = arg2
        float* var_134
        var_134.o = var_c8.o
        int64_t var_ac
        var_ac.d = 0
        var_ac:4.d = 0
        int32_t var_a4_1 = 1
        int32_t var_124
        var_124.o = var_bc
        int32_t var_9c_1 = 0
        int32_t var_90 = *(arg4 + 4)
        int128_t var_118 = var_ac:4.o
        int32_t var_70_1 = *(arg4 + 0x18)
        int32_t var_6c_3 = 0
        int96_t var_108
        var_108:8.o = (*arg4).o
        int32_t var_68_1 = 0
        int32_t var_98_1 = 1
        int128_t var_f8 = xmm1_6
        var_108:4.d = 1
        void* var_e8
        var_e8:8.o = ecx.o
        int32_t var_d0_1 = *(_mm_bsrli_si128(xmm1_6, 0xc) + 4)
        float xmm1_8
        
        if (sub_5c83b0(&var_138) != 0)
            int32_t* ecx_24 = var_108:8.d
            void* var_11c
            int32_t edi_8 = *(var_11c + 4)
            float* var_78_2 = var_134
            int32_t var_74_3 = edi_8
            int32_t* var_6c_4 = ecx_24
            int32_t var_64_2 = *(var_e8 + 4)
            int32_t var_14_2 = 1
            int32_t esi_6 = 1
            float var_24_3 = *ecx_24 * *var_134
            
            if (sub_5c83b0(&var_138) s> 1)
                int32_t ecx_26 = edi_8 << 2
                int32_t var_40_2 = ecx_26
                float* edi_10 = var_134 + ecx_26
                int32_t eax_52
                
                do
                    float xmm0_35 = ecx_24[esi_6]
                    esi_6 += 1
                    float xmm0_36 = xmm0_35 * *edi_10
                    edi_10 += ecx_26
                    var_24_3 = xmm0_36 + var_24_3
                    eax_52 = sub_5c83b0(&var_138)
                    ecx_26 = var_40_2
                while (esi_6 s< eax_52)
            
            int32_t var_38_3 = 1
            xmm1_8 = var_24_3
        else
            xmm1_8 = (zx.o(0)).d
        
        float* esi_8 = var_1a0
        float xmm1_9 = xmm1_8 f* *arg5
        sub_5c5ad0(&var_1a0)
        *esi_8 = xmm1_9 + *esi_8
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    int32_t var_218_5 = ecx
    int32_t var_50 = ecx
    void* var_60 = nullptr
    int32_t* xmm0_47 = *arg5
    int32_t var_58 = *(arg3 + 4)
    int32_t var_54 = *(arg3 + 8)
    struct _EXCEPTION_REGISTRATION_RECORD** var_5c_1 = nullptr
    sub_5c6110(&var_54, &var_58, &var_50, &var_54)
    int32_t ecx_40 = var_50
    int32_t var_4c_1 = ecx_40 * var_58
    int32_t var_48_1 = ecx_40 * var_54
    int32_t var_14_3 = 2
    int32_t* ecx_42 = arg2[1]
    int32_t* var_21c_5 = &var_60
    int32_t* var_220_3 = ecx_42
    void* eax_75 = *(arg4 + 0xc)
    sub_5c5790(eax_75, *(arg4 + 8), ecx_42, arg2[2], *arg2, ecx_42, *arg4, *(eax_75 + 4), *arg3, 
        ecx_42, *(*(arg3 + 0xc) + 4), xmm0_47)
    void* eax_76 = var_60
    
    if (eax_76 != 0)
        free(*(eax_76 - 4))
    
    eax_3 = var_5c_1
    
    if (eax_3 != 0)
        eax_3 = free(eax_3[-1])

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
