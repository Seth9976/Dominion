// 函数: sub_5c4a40
// 地址: 0x5c4a40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_769823
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_1a4 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = arg2[2]

if (edx != 0 && arg2[1] != 0 && arg4[2] != 0)
    int32_t eax_4 = arg3[1]
    int128_t var_140
    int32_t* var_10c
    int128_t var_d0
    float* var_60
    
    if (arg3[2] == 1)
        bool cond:1 = arg2[1] != 1
        var_60 = *arg3
        int32_t eax_6 = arg3[1]
        int32_t var_5c = eax_6
        int32_t* var_54 = arg3
        int32_t ecx = *arg4
        int32_t var_48 = eax_6
        int32_t eax_7 = arg4[1]
        int32_t var_50 = 0
        int32_t var_4c = 0
        int32_t var_78_1 = eax_7
        int32_t* var_70 = arg4
        int32_t var_6c = 0
        int32_t var_68 = 0
        
        if (cond:1)
            int32_t var_128_1 = eax_7
            var_140 = ecx.o
            int64_t var_130_1 = var_6c.q
            void* eax_32 = sub_5c5c70(&var_60, &var_140, arg2, &var_60, arg5)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_32
        
        int32_t* esi_1 = *arg2
        int32_t var_1a8_1 = 1
        int128_t var_124
        sub_5c03b0(&var_124, ecx, eax_7)
        int32_t var_118 = ecx
        int128_t xmm0_1 = var_124
        int32_t var_74
        int32_t var_110 = var_74
        var_10c = arg4
        var_d0 = xmm0_1
        int32_t var_100 = eax_7
        int32_t var_fc_1 = 0
        int32_t ecx_3 = arg4[1]
        int32_t var_e8 = 0
        int32_t var_f4 = ecx_3
        int32_t var_e4 = edx
        int32_t var_a0 = ecx_3
        int32_t var_dc = 0
        int32_t var_d8 = 0
        int32_t var_d4 = 1
        int128_t var_b0_1 = 0.o
        void var_f0
        int32_t xmm1
        
        if (sub_5c3ca0(&var_f0) != 0)
            float* ecx_5 = var_d0.d
            int32_t edi_2 = arg2[1]
            int32_t* var_78_2 = esi_1
            int32_t var_74_1 = edi_2
            float* var_6c_1 = ecx_5
            int32_t var_64_1 = *(eax_7.12:8.d + 4)
            int32_t var_14_1 = 0
            int32_t esi_2 = 1
            float var_24_1 = *esi_1 * *ecx_5
            
            if (sub_5c3ca0(&var_f0) s> 1)
                int32_t ecx_7 = edi_2 << 2
                int32_t var_34_2 = ecx_7
                float* edi_4 = esi_1 + ecx_7
                int32_t eax_18
                
                do
                    float xmm0_6 = ecx_5[esi_2]
                    esi_2 += 1
                    float xmm0_7 = xmm0_6 * *edi_4
                    edi_4 += ecx_7
                    var_24_1 = xmm0_7 + var_24_1
                    eax_18 = sub_5c3ca0(&var_f0)
                    ecx_7 = var_34_2
                while (esi_2 s< eax_18)
            
            int32_t var_40_1 = 1
            xmm1 = var_24_1
        else
            xmm1 = (zx.o(0)).d
        
        float* esi_4 = var_60
        float xmm1_1 = xmm1 f* *arg5
        sub_5c1ae0(&var_60)
        *esi_4 = xmm1_1 + *esi_4
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    if (eax_4 == 1)
        bool cond:2 = arg4[2] != 1
        var_60 = *arg3
        int32_t var_58 = arg3[2]
        int32_t eax_35 = *arg2
        int32_t* var_54_1 = arg3
        int32_t var_50_1 = 0
        int32_t var_4c_1 = 0
        int32_t var_48_1 = 1
        int32_t var_74_2 = edx
        int32_t* var_70_1 = arg2
        int32_t var_68_1 = 0
        
        if (cond:2)
            var_10c.o = eax_35.o
            int32_t var_f4_1 = 1
            int32_t var_fc
            var_fc.q = 0.q
            void* eax_61 = sub_5c81f0(&var_60, arg4, &var_10c, &var_60, arg5)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_61
        
        int32_t var_1a8_3 = edx
        sub_5bc1c0(&var_d0:4, eax_35, 1)
        int32_t ecx_21 = arg4[1]
        int128_t var_c0
        var_c0.d = eax_35
        int32_t xmm0_16 = var_d0.d
        int32_t var_78
        var_c0:4.d = var_78
        var_c0:8.d = edx
        float* eax_39 = *arg4
        var_c0:0xc.d = arg2
        int128_t var_b0
        var_b0.d = 0
        var_b0:4.d = 0
        var_b0:8.d = 1
        int32_t var_a0_1 = 0
        int32_t var_15c = ecx_21
        int32_t var_148 = ecx_21
        int32_t var_9c = 1
        int128_t var_174 = 0
        int32_t var_164 = 1
        int32_t var_104
        int32_t var_158 = var_104
        int32_t var_150 = 0
        int32_t var_14c = 0
        void var_198
        float xmm1_2
        
        if (sub_5c83b0(&var_198) != 0)
            int32_t edi_7 = *(var_c0:4.12:8.d + 4)
            var_140:4.d = xmm0_16
            var_140:8.d = edi_7
            int64_t var_130
            var_130.d = eax_39
            int32_t var_128_2 = arg4[1]
            int32_t var_14_2 = 1
            int32_t esi_5 = 1
            float var_24_3 = *eax_39 f* *xmm0_16
            
            if (sub_5c83b0(&var_198) s> 1)
                int32_t ecx_25 = edi_7 << 2
                int32_t var_38_3 = ecx_25
                int32_t edi_9 = xmm0_16 + ecx_25
                int32_t eax_47
                
                do
                    float xmm0_20 = eax_39[esi_5]
                    esi_5 += 1
                    float xmm0_21 = xmm0_20 f* *edi_9
                    edi_9 += ecx_25
                    var_24_3 = xmm0_21 + var_24_3
                    eax_47 = sub_5c83b0(&var_198)
                    ecx_25 = var_38_3
                while (esi_5 s< eax_47)
            
            int32_t var_3c_3 = 1
            xmm1_2 = var_24_3
        else
            xmm1_2 = (zx.o(0)).d
        
        float* esi_7 = var_60
        float xmm1_3 = xmm1_2 f* *arg5
        sub_5c1ae0(&var_60)
        *esi_7 = xmm1_3 + *esi_7
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    int32_t* var_1a8_5 = arg3
    int32_t var_88 = edx
    void* var_98 = nullptr
    int32_t* xmm0_30 = *arg5
    int32_t var_90 = eax_4
    int32_t var_8c = arg3[2]
    struct _EXCEPTION_REGISTRATION_RECORD** var_94_1 = nullptr
    sub_5c6110(&var_8c, &var_90, &var_88, &var_8c)
    int32_t ecx_39 = var_88
    int32_t var_84_1 = ecx_39 * var_90
    int32_t var_80_1 = ecx_39 * var_8c
    int32_t var_14_3 = 2
    int32_t* ecx_41 = arg2[1]
    int32_t* var_1ac_5 = &var_98
    int32_t* var_1b0_3 = ecx_41
    sub_5c5790(arg3, arg4[2], ecx_41, arg2[2], *arg2, ecx_41, *arg4, arg4[1], *arg3, ecx_41, 
        arg3[1], xmm0_30)
    void* eax_69 = var_98
    
    if (eax_69 != 0)
        free(*(eax_69 - 4))
    
    eax_3 = var_94_1
    
    if (eax_3 != 0)
        eax_3 = free(eax_3[-1])

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
