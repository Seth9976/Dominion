// 函数: sub_6cb470
// 地址: 0x6cb470
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = __ehhandler$___std_tzdb_get_sys_info@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_ac = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_147d19c != 0)
    if (data_1a9a2e0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
        sub_75970e(&data_1a9a2e0)
        
        if (data_1a9a2e0 == 0xffffffff)
            int32_t var_14_1 = 0
            data_1a9a2e4 = sub_69f030("sys/DebugFont.font", 0x12)
            int32_t var_14_2 = 0xffffffff
            __Init_thread_footer(&data_1a9a2e0)
    
    int32_t var_88_1 = 0x43c80000
    int32_t var_90_1 = 0
    int32_t eax_8 = *(data_147d19c + 0xbbaaa4) + 1
    int32_t var_8c_1 = 0
    int32_t var_68 = 0x40000000
    float var_84_1 = _mm_cvtepi32_ps(zx.o(eax_8)) * 15f
    int128_t var_a0 = var_90_1.o
    sub_682f00(&var_a0, &var_68)
    sub_6cadd0()
    void* edx_2 = data_147d19c
    float xmm0_5 = 15f
    int32_t eax_9 = *(edx_2 + 0xbbaaa4)
    int32_t esi_1 = *(edx_2 + 0xbbaaac)
    
    if (esi_1 s>= eax_9)
        esi_1 = eax_9
    
    struct _EXCEPTION_REGISTRATION_RECORD** result_6 = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
    
    if (esi_1 s> 0)
        int32_t var_90_2 = 0
        int32_t var_88_2 = 0x43c80000
        
        do
            float var_8c_2 = xmm0_5
            void* eax_11 = *(edx_2 + 0xbbaaa8) + result_6
            var_a0 = var_90_2.o
            
            if (*(edx_2 + 0xbbaa9c) == eax_11)
                var_68 = 0x400000ff
            label_6cb5f7:
                sub_682f00(&var_a0, &var_68)
                result_6 = result_1
                edx_2 = data_147d19c
            else if ((result_6.b & 1) != 0)
                var_68 = 0x3fffffff
                goto label_6cb5f7
            
            xmm0_5 = xmm0_5 + 15f
            result_6 += 1
            result_1 = result_6
        while (result_6 s< esi_1)
    
    float var_24_1 = 15f
    result = sub_6cafa0()
    char* const var_78_1 = &data_801800
    int32_t ecx_4 = 0
    int32_t var_14_3 = 1
    var_68 = 0
    
    if (esi_1 s> 0)
        while (true)
            void* esi_2 = data_147d19c
            int32_t eax_12 = *(esi_2 + 0xbbaaa8)
            int32_t eax_13 = eax_12 + ecx_4
            
            if (eax_12 + ecx_4 s< 0 || eax_13 s>= *(esi_2 + 0xbbaaac))
                sub_63b870(eax_13, &data_801800, 
                    "sortIndex >= 0 && sortIndex < gProfilerGlobals->mCalculatedFunctionCount", 
                    "C:\x\ax2017\Engine\PerfEvent.cpp", 0x358, "ProfilerDraw")
                
                if (sub_63bc30() == 0)
                    sub_63bb00()
                    noreturn
                
                breakpoint
            
            int32_t edi_1 = *(esi_2 + (eax_13 << 2) + 0xbb6c04)
            int32_t ecx_5 = *(esi_2 + 0xbbaa98)
            int32_t eax_15 = edi_1 * 7
            float var_64_1
            float var_60_1
            float var_5c_1
            float xmm1_3[0x2]
            
            if (ecx_5 != 0x28)
                void* ecx_8 =
                    mods.dp.d(sx.q(*(esi_2 + 0xb9b680) + ecx_5 + 1), 0x28) * 0x4a490 + esi_2
                int32_t eax_20 = edi_1 * 2
                var_5c_1 = *(ecx_8 + (eax_20 << 3) + 0x3aa8c)
                var_60_1 = *(ecx_8 + (eax_20 << 3) + 0x3aa90)
                float xmm0_12 = *(ecx_8 + (eax_20 << 3) + 0x3aa98)
                xmm1_3 = _mm_cvtepi32_ps(zx.o(*(ecx_8 + (eax_20 << 3) + 0x3aa94)))
                var_64_1 = xmm0_12
            else
                float xmm2_1 = *(esi_2 + (eax_15 << 2) + 0xb9b68c)
                float xmm0_9 = _mm_cvtepi32_ps(zx.o(*(esi_2 + 0xbbaa88)))
                var_5c_1 = xmm2_1 / xmm0_9
                xmm1_3 = _mm_cvtepi32_ps(zx.o(*(esi_2 + (eax_15 << 2) + 0xb9b694))) / xmm0_9
                var_60_1 = *(esi_2 + (eax_15 << 2) + 0xb9b690) / xmm0_9
                var_64_1 = *(esi_2 + (eax_15 << 2) + 0xb9b698) / xmm0_9
            
            struct _EXCEPTION_REGISTRATION_RECORD** result_2 = &data_801800
            char* const result_3 = &data_801800
            char* const var_34 = &data_801800
            char* const var_30 = &data_801800
            var_14_3.b = 5
            int32_t var_b4
            var_b4.q = _mm_cvtps_pd(xmm1_3)
            
            if (10f f<= xmm1_3)
                var_14_3.b = 8
                char* var_40
                sub_63d850(&result_2, sub_63df30(&var_40, "%0.0f"))
                var_14_3.b = 9
                
                if (data_cf65bc != 0)
                    char* eax_25 = var_40
                    
                    if (eax_25 != 0 && *eax_25 != 0)
                        char* eax_26 = sub_63d4e0(&var_40)
                        int32_t temp3_1 = *(eax_26 + 4)
                        *(eax_26 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
                            var_40 = &data_801800
            else
                var_14_3.b = 6
                char* var_3c
                sub_63d850(&result_2, sub_63df30(&var_3c, "%0.1f"))
                var_14_3.b = 7
                
                if (data_cf65bc != 0)
                    char* eax_22 = var_3c
                    
                    if (eax_22 != 0 && *eax_22 != 0)
                        char* eax_23 = sub_63d4e0(&var_3c)
                        int32_t temp4_1 = *(eax_23 + 4)
                        *(eax_23 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                            var_3c = &data_801800
            
            float xmm0_14[0x2] = var_5c_1
            var_14_3.b = 5
            var_b4.q = _mm_cvtps_pd(xmm0_14)
            
            if (100f f<= xmm0_14)
                var_14_3.b = 0xc
                char* var_48
                sub_63d850(&result_3, sub_63df30(&var_48, "%0.1f"))
                var_14_3.b = 0xd
                
                if (data_cf65bc != 0)
                    char* eax_31 = var_48
                    
                    if (eax_31 != 0 && *eax_31 != 0)
                        char* eax_32 = sub_63d4e0(&var_48)
                        int32_t temp5_1 = *(eax_32 + 4)
                        *(eax_32 + 4) -= 1
                        
                        if (temp5_1 == 1)
                            sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                            var_48 = &data_801800
            else
                var_14_3.b = 0xa
                char* const var_44
                sub_63d850(&result_3, sub_63df30(&var_44, "%0.2f"))
                var_14_3.b = 0xb
                
                if (data_cf65bc != 0)
                    char* eax_28 = var_44
                    
                    if (eax_28 != 0 && *eax_28 != 0)
                        char* eax_29 = sub_63d4e0(&var_44)
                        int32_t temp6_1 = *(eax_29 + 4)
                        *(eax_29 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                            var_44 = &data_801800
            
            float xmm0_15[0x2] = var_60_1
            var_14_3.b = 5
            var_b4.q = _mm_cvtps_pd(xmm0_15)
            
            if (100f f<= xmm0_15)
                var_14_3.b = 0x10
                char* var_50
                sub_63d850(&var_34, sub_63df30(&var_50, "%0.1f"))
                var_14_3.b = 0x11
                
                if (data_cf65bc != 0)
                    char* eax_37 = var_50
                    
                    if (eax_37 != 0 && *eax_37 != 0)
                        char* eax_38 = sub_63d4e0(&var_50)
                        int32_t temp7_1 = *(eax_38 + 4)
                        *(eax_38 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
                            var_50 = &data_801800
            else
                var_14_3.b = 0xe
                char* const var_4c
                sub_63d850(&var_34, sub_63df30(&var_4c, "%0.2f"))
                var_14_3.b = 0xf
                
                if (data_cf65bc != 0)
                    char* eax_34 = var_4c
                    
                    if (eax_34 != 0 && *eax_34 != 0)
                        char* eax_35 = sub_63d4e0(&var_4c)
                        int32_t temp8_1 = *(eax_35 + 4)
                        *(eax_35 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_64c080(eax_35, *(eax_35 + 0xc) + 0x10)
                            var_4c = &data_801800
            
            float xmm0_16[0x2] = var_64_1
            var_14_3.b = 5
            var_b4.q = _mm_cvtps_pd(xmm0_16)
            int32_t edx_18
            
            if (10f f<= xmm0_16)
                var_14_3.b = 0x14
                char* var_58
                edx_18 = sub_63d850(&var_30, sub_63df30(&var_58, "%0.0f"))
                var_14_3.b = 0x15
                
                if (data_cf65bc != 0)
                    char* eax_43 = var_58
                    
                    if (eax_43 != 0 && *eax_43 != 0)
                        char* eax_44 = sub_63d4e0(&var_58)
                        int32_t temp9_1 = *(eax_44 + 4)
                        *(eax_44 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            edx_18 = sub_64c080(eax_44, *(eax_44 + 0xc) + 0x10)
                            var_58 = &data_801800
            else
                var_14_3.b = 0x12
                char* const var_54
                edx_18 = sub_63d850(&var_30, sub_63df30(&var_54, "%0.1f"))
                var_14_3.b = 0x13
                
                if (data_cf65bc != 0)
                    char* eax_40 = var_54
                    
                    if (eax_40 != 0 && *eax_40 != 0)
                        char* eax_41 = sub_63d4e0(&var_54)
                        int32_t temp10_1 = *(eax_41 + 4)
                        *(eax_41 + 4) -= 1
                        
                        if (temp10_1 == 1)
                            edx_18 = sub_64c080(eax_41, *(eax_41 + 0xc) + 0x10)
                            var_54 = &data_801800
            
            var_14_3.b = 5
            void* eax_45 = data_147d19c
            float var_5c_2 = 0f
            int32_t ecx_33 = *(eax_45 + 0xbbaab0)
            
            if (ecx_33 != 1)
                if (ecx_33 == 2 && *(eax_45 + 0xbbaab4) == edi_1)
                    var_5c_2 = 10f
            else if (*(eax_45 + 0xbbaab4) != edi_1)
                var_5c_2 = 10f
            
            struct _EXCEPTION_REGISTRATION_RECORD** result_4 = result_2
            char* result_7 = &data_801800
            
            if (result_4 != 0)
                result_7 = result_4
            
            char* result_9 = result_7
            int32_t edx_23 = sub_6b3f10(result_4, edx_18, result_7, data_1a9a2e4, 0xffffffff, 1, 1f)
            char* const result_5 = result_3
            char* result_8 = &data_801800
            
            if (result_5 != 0)
                result_8 = result_5
            
            void* eax_46
            int32_t edx_24
            eax_46, edx_24 = sub_6b3f10(result_5, edx_23, result_8, data_1a9a2e4, 0xffffffff, 1, 1f)
            char* edi_2 = var_34
            char* ecx_34 = &data_801800
            
            if (edi_2 != 0)
                ecx_34 = edi_2
            
            void* eax_47
            int32_t edx_25
            eax_47, edx_25 = sub_6b3f10(eax_46, edx_24, ecx_34, data_1a9a2e4, 0xffffffff, 1, 1f)
            char* const esi_3 = var_30
            char* const ecx_35 = &data_801800
            
            if (esi_3 != 0)
                ecx_35 = esi_3
            
            sub_6b3f10(eax_47, edx_25, ecx_35, data_1a9a2e4, 0xffffffff, 1, 1f)
            int32_t var_88_3 = 0x43c80000
            int32_t var_c0_1 = *(esi_2 + (eax_15 << 2) + 0xb9b688)
            float var_8c_3 = var_24_1
            float xmm0_20 = var_24_1 + 15f
            int32_t var_c4_1 = *(esi_2 + (eax_15 << 2) + 0xb9b684)
            var_24_1 = xmm0_20
            float var_84_3 = xmm0_20
            var_a0 = (var_5c_2 + 163f).o
            char** eax_49
            int32_t ecx_37
            eax_49, ecx_37 = sub_63df30(&result_1, "%s%s")
            var_14_3.b = 0x16
            int32_t var_b0_9 = 0
            var_b4 = 0
            result = sub_6b74d0(eax_49, &var_a0, ecx_37, data_1a9a2e4, 0xffffffff, 0, 1, 0x3f800000)
            var_14_3.b = 0x17
            
            if (data_cf65bc != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_63d4e0(&result_1)
                    int32_t temp11_1 = result[1]
                    result[1] -= 1
                    
                    if (temp11_1 == 1)
                        result = sub_64c080(result, &result[3][2])
                        result_1 = &data_801800
            
            var_14_3.b = 0x18
            
            if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
                result = sub_63d4e0(&var_30)
                int32_t temp12_1 = result[1]
                result[1] -= 1
                
                if (temp12_1 == 1)
                    result = sub_64c080(result, &result[3][2])
                    var_30 = &data_801800
            
            var_14_3.b = 0x19
            
            if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
                result = sub_63d4e0(&var_34)
                int32_t temp13_1 = result[1]
                result[1] -= 1
                
                if (temp13_1 == 1)
                    result = sub_64c080(result, &result[3][2])
                    var_34 = &data_801800
            
            var_14_3.b = 0x1a
            
            if (data_cf65bc != 0)
                result = result_3
                
                if (result != 0 && *result != 0)
                    result = sub_63d4e0(&result_3)
                    int32_t temp14_1 = result[1]
                    result[1] -= 1
                    
                    if (temp14_1 == 1)
                        result = sub_64c080(result, &result[3][2])
                        result_3 = &data_801800
            
            var_14_3.b = 0x1b
            
            if (data_cf65bc != 0)
                result = result_2
                
                if (result != 0 && *result != 0)
                    result = sub_63d4e0(&result_2)
                    int32_t temp15_1 = result[1]
                    result[1] -= 1
                    
                    if (temp15_1 == 1)
                        result = sub_64c080(result, &result[3][2])
                        result_2 = &data_801800
            
            var_14_3.b = 1
            ecx_4 = var_68 + 1
            var_68 = ecx_4
            
            if (ecx_4 s>= esi_1)
                break
            
            continue

fsbase->NtTib.ExceptionList = ExceptionList
return result
