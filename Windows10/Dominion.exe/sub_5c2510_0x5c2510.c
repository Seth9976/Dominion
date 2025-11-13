// 函数: sub_5c2510
// 地址: 0x5c2510
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_769783
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_24c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = arg2[2]

if (edx != 0 && arg2[1] != 0 && *(arg4 + 4) != 0)
    int32_t eax_4 = arg3[1]
    int128_t var_23c
    void var_1ec
    int128_t var_164
    int128_t var_d8
    int128_t var_a4
    float* var_60
    
    if (arg3[2] == 1)
        bool cond:1 = arg2[1] != 1
        int128_t xmm0_1 = *arg4
        var_60 = *arg3
        int32_t eax_6 = arg3[1]
        int32_t var_5c = eax_6
        int32_t var_48 = eax_6
        int32_t eax_7 = *arg4
        var_a4 = xmm0_1
        int32_t* var_54 = arg3
        int64_t xmm0_2 = arg4[1].q
        int32_t ecx = *(arg4 + 8)
        int128_t xmm0_3 = *arg2
        int32_t var_50 = 0
        int32_t var_4c = 0
        int32_t var_ac = ecx
        int32_t var_8c = *(arg4 + 0x18)
        int32_t var_88_1 = 0
        int32_t var_84 = 0
        
        if (cond:1)
            int32_t eax_27 = arg2[6]
            var_d8 = xmm0_3
            int32_t var_b4 = eax_27
            int32_t var_bc
            var_bc.q = *(arg2 + 0x10)
            int32_t var_20c = 1
            var_23c = eax_7.o
            int128_t var_22c = var_a4
            int128_t var_21c = xmm0_2:4.o
            void* eax_29 = sub_5c5d80(&var_60, &var_23c, &var_d8:0xc, &var_60, arg5)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_29
        
        int32_t eax_9 = *arg2
        int32_t var_250_1 = 1
        int64_t xmm0_4 = *(arg2 + 0x10)
        int32_t var_110 = edx
        int32_t var_f4 = arg2[6]
        int32_t var_f0 = 0
        int32_t var_ec = 0
        sub_5c03b0(&var_164, *arg4, ecx)
        int32_t var_128 = 1
        int32_t var_11c = 1
        int32_t var_1b8_1 = 1
        int32_t var_16c = 1
        int128_t var_1c8 = xmm0_4:4.o
        int32_t xmm0_11 = var_164.d
        int128_t var_1a4_1 = eax_7.o
        int64_t xmm0_13 = var_a4.12:4.q
        int128_t var_184_1 = xmm0_2:4.o
        int64_t var_174 = 0.q
        int32_t xmm1
        
        if (sub_5c83b0(&var_1ec) != 0)
            float* esi_2 = eax_9
            int32_t eax_13 = *(xmm0_3:4.12:8.d + 4)
            int64_t var_94
            var_94:4.d = eax_13
            var_94.d = esi_2
            int32_t var_38_1 = xmm0_11
            int32_t var_88_2 = xmm0_11
            int32_t eax_15 = *(xmm0_13:4.d + 4)
            int32_t var_84_1 = eax_15
            int32_t var_14_1 = 0
            int32_t var_28_1 = 1
            float var_24_1 = *esi_2 f* *xmm0_11
            
            if (sub_5c83b0(&var_1ec) s> 1)
                int32_t eax_18 = eax_13 << 2
                int32_t ecx_5 = eax_15 << 2
                void* esi_3 = esi_2 + eax_18
                int32_t var_30_1 = eax_18
                int32_t edi_2 = xmm0_11 + ecx_5
                int32_t var_34_1 = ecx_5
                bool cond:4_1
                
                do
                    float xmm0_18 = *esi_3
                    esi_3 += eax_18
                    float xmm0_19 = xmm0_18 f* *edi_2
                    edi_2 += ecx_5
                    var_28_1 += 1
                    var_24_1 = xmm0_19 + var_24_1
                    cond:4_1 = var_28_1 s< sub_5c83b0(&var_1ec)
                    eax_18 = var_30_1
                    ecx_5 = var_34_1
                while (cond:4_1)
            
            int32_t var_30_2 = 1
            xmm1 = var_24_1
        else
            xmm1 = (zx.o(0)).d
        
        float* esi_8 = var_60
        float xmm1_1 = xmm1 f* *arg5
        sub_5c1ae0(&var_60)
        *esi_8 = xmm1_1 + *esi_8
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    if (eax_4 == 1)
        bool cond:3 = *(arg4 + 4) != 1
        int128_t xmm0_30 = *arg2
        var_60 = *arg3
        int32_t eax_31 = arg3[2]
        var_d8 = xmm0_30
        int32_t var_58 = eax_31
        int64_t xmm0_31 = *(arg2 + 0x10)
        int32_t* var_54_1 = arg3
        int32_t ecx_16 = *arg2
        int32_t var_50_1 = 0
        int32_t var_4c_1 = 0
        int32_t var_48_1 = 1
        int32_t var_dc = edx
        int32_t var_c0 = arg2[6]
        int32_t var_bc_1 = 0
        int32_t var_b8 = 0
        
        if (cond:3)
            int32_t eax_51 = *(arg4 + 0x18)
            var_23c = ecx_16.o
            int32_t var_80 = eax_51
            int32_t var_20c_1 = 1
            int128_t var_22c_1 = var_d8
            int128_t var_21c_1 = xmm0_31:4.o
            var_a4 = *arg4
            int32_t var_88
            var_88.q = arg4[1].q
            uint32_t eax_53 = sub_5c5e20(&var_60, &var_a4:0xc, &var_23c, &var_60, arg5)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_53
        
        int32_t var_250_3 = edx
        sub_5bc1c0(&var_164, ecx_16, 1)
        int32_t var_128_1 = 1
        int32_t var_120 = 0
        int32_t var_114 = *(arg4 + 8)
        int32_t var_f4_1 = *(arg4 + 0x18)
        int32_t var_f0_1 = 0
        int32_t var_ec_1 = 0
        int32_t var_11c_1 = 1
        int96_t var_1a4
        var_1a4:4.d = 1
        int32_t xmm0_37 = var_164.d
        int32_t var_16c_1 = 1
        int128_t var_1d8_1 = ecx_16.o
        int64_t xmm0_39 = var_d8.12:4.q
        int32_t var_1b8
        var_1b8.o = xmm0_31:4.o
        int128_t var_1b4
        int32_t var_124
        var_1b4:0xc.q = var_124.q
        var_1a4:8.o = (*arg4).o
        int128_t var_194 = *arg4
        void* var_184
        var_184:8.o = arg4[1].q:4.o
        float xmm1_2
        
        if (sub_5c83c0(&var_1ec) != 0)
            float* edi_5 = var_1a4:8.d
            int32_t eax_37 = *(xmm0_39:4.d + 4)
            int64_t var_c8
            var_c8:4.d = eax_37
            var_c8.d = xmm0_37
            float* var_30_3 = edi_5
            float* var_bc_2 = edi_5
            int32_t eax_39 = *(var_184 + 4)
            int32_t var_b8_1 = eax_39
            int32_t var_14_2 = 1
            int32_t var_2c_3 = 1
            float var_24_3 = *edi_5 f* *xmm0_37
            
            if (sub_5c83c0(&var_1ec) s> 1)
                int32_t eax_42 = eax_37 << 2
                int32_t ecx_22 = eax_39 << 2
                float* esi_10 = xmm0_37 + eax_42
                int32_t var_40_3 = eax_42
                void* edi_6 = edi_5 + ecx_22
                int32_t var_34_3 = ecx_22
                bool cond:5_1
                
                do
                    float xmm0_47 = *esi_10
                    esi_10 += eax_42
                    float xmm0_48 = xmm0_47 f* *edi_6
                    edi_6 += ecx_22
                    var_2c_3 += 1
                    var_24_3 = xmm0_48 + var_24_3
                    cond:5_1 = var_2c_3 s< sub_5c83c0(&var_1ec)
                    eax_42 = var_40_3
                    ecx_22 = var_34_3
                while (cond:5_1)
            
            int32_t var_38_3 = 1
            xmm1_2 = var_24_3
        else
            xmm1_2 = (zx.o(0)).d
        
        float* esi_15 = var_60
        float xmm1_3 = xmm1_2 * *arg5
        sub_5c1ae0(&var_60)
        *esi_15 = xmm1_3 + *esi_15
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    int128_t xmm0_60 = *arg4
    int32_t* var_250_5 = arg3
    int32_t var_6c = edx
    int64_t var_1f8_1 = arg4[1].q
    float xmm0_62 = *arg5
    int32_t var_74 = eax_4
    int32_t var_70 = arg3[2]
    void* var_7c = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD** var_78_1 = nullptr
    sub_5c6110(&var_70, &var_74, &var_6c, &var_70)
    int32_t ecx_34 = var_6c
    int32_t ecx_35 = ecx_34 * var_70
    int32_t var_68_1 = ecx_34 * var_74
    int32_t var_64_1 = ecx_35
    int32_t var_14_3 = 2
    int32_t edx_6 = *(arg4 + 4)
    
    if (edx_6 == 0xffffffff)
        edx_6 = xmm0_60:4.d
    
    int32_t* var_254_5 = &var_7c
    int32_t var_258_3 = ecx_35
    void* eax_62 = arg2[3]
    sub_5c5450(eax_62, edx_6, arg2[1], arg2[2], *arg2, *(eax_62 + 4), xmm0_60.d, 
        *(xmm0_60:0xc.d + 4), *arg3, ecx_35, arg3[1], xmm0_62)
    void* eax_63 = var_7c
    
    if (eax_63 != 0)
        free(*(eax_63 - 4))
    
    eax_3 = var_78_1
    
    if (eax_3 != 0)
        eax_3 = free(eax_3[-1])

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
