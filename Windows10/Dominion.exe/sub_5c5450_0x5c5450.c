// 函数: sub_5c5450
// 地址: 0x5c5450
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_769868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_a0 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg3
int32_t ecx = arg2
int32_t edx = arg12[4]

if (arg12[2] s< arg3)
    ebx = arg12[2]

if (arg12[3] s< arg2)
    ecx = arg12[3]

int32_t ebx_1 = ebx * edx
int32_t eax_4 = ecx * edx

if (ebx_1 u<= 0x3fffffff)
    int32_t* result_7 = *arg12
    int32_t ebx_2 = ebx_1 << 2
    int32_t* result_10 = result_7
    
    if (result_7 != 0)
        goto label_5c551a
    
    if (ebx_2 u> 0x20000)
        int32_t eax_7 = malloc(ebx_2 + 0x10)
        
        if (eax_7 != 0)
            void* edx_2 = eax_7 & 0xfffffff0
            result_7 = edx_2 + 0x10
            result_10 = result_7
            result_7[-1] = eax_7
            
            if (edx_2 != 0xfffffff0)
                goto label_5c551a
    else
        __alloca_probe_16(ebx_2 + 0xf)
        result_7 = &var_a0
        result_10 = &var_a0
    label_5c551a:
        int32_t* result_1 = nullptr
        
        if (*arg12 == 0)
            result_1 = result_7
        
        int32_t* result_4 = result_1
        int32_t var_88_1 = ebx_1
        int32_t var_8_1 = 0
        
        if (eax_4 u> 0x3fffffff)
            sub_5b0890()
            noreturn
        
        int32_t* result_6 = arg12[1]
        int32_t ebx_4 = eax_4 << 2
        int32_t* result_9 = result_6
        
        if (result_6 != 0)
            goto label_5c55a1
        
        if (ebx_4 u<= 0x20000)
            __alloca_probe_16(ebx_4 + 0xf)
            result_6 = &var_a0
            result_9 = &var_a0
        label_5c55a1:
            int32_t* result_2 = nullptr
            
            if (arg12[1] == 0)
                result_2 = result_6
            
            int32_t* result_5 = result_2
            int32_t var_7c = eax_4
            int32_t* result = arg3
            int32_t* ebx_5 = ebx
            int32_t ecx_1 = arg4
            var_8_1.b = 1
            char var_19_1
            
            if (ebx_5 != result && edx == ecx_1)
                var_19_1 = 1
            
            if (ebx_5 == result || edx != ecx_1 || ecx != arg2)
                var_19_1 = 0
            
            int32_t* result_11 = nullptr
            int32_t* result_12 = nullptr
            
            if (result s> 0)
                int32_t* result_13 = result_10
                
                do
                    int32_t* result_8 = result_11 + ebx_5
                    int32_t* result_3 = result_8
                    
                    if (result s< result_8)
                        result_3 = result
                    
                    int32_t eax_14 = 0
                    void* ebx_6 = result_3 - result_11
                    int32_t var_2c_1 = 0
                    void* var_44_1 = ebx_6
                    
                    if (ecx_1 s> 0)
                        do
                            int32_t edi_2 = edx + eax_14
                            int32_t ecx_2 = edi_2
                            
                            if (arg4 s< edi_2)
                                ecx_2 = arg4
                            
                            int32_t ecx_3 = ecx_2 - eax_14
                            int32_t var_a4_3 = 0
                            int32_t var_a8_1 = 0
                            int32_t var_60_1 = arg6
                            int32_t var_64 = arg5 + ((eax_14 * arg6 + result_11) << 2)
                            sub_5c6650(result_13, &var_64, ecx_3, ebx_6)
                            int32_t eax_18 = arg2
                            int32_t edi_4 = 0
                            
                            if (eax_18 s> 0)
                                do
                                    int32_t ebx_8 = ecx + edi_4
                                    int32_t esi_1 = ebx_8
                                    
                                    if (eax_18 s< ebx_8)
                                        esi_1 = eax_18
                                    
                                    int32_t esi_2 = esi_1 - edi_4
                                    int32_t* result_14
                                    
                                    if (var_19_1 != 0)
                                        result_14 = result_12
                                    
                                    if (var_19_1 == 0 || result_14 == 0)
                                        int32_t var_68_1 = arg8
                                        int32_t var_6c = arg7 + ((var_2c_1 * arg8 + edi_4) << 2)
                                        sub_5c5ae0(result_9, &var_6c, ecx_3, esi_2)
                                        result_14 = result_12
                                    
                                    int32_t var_a4_4 = 0
                                    int32_t var_a8_2 = 0
                                    int32_t var_ac_3 = 0xffffffff
                                    int32_t var_b0_3 = 0xffffffff
                                    int32_t var_b4_3 = arg10
                                    int32_t var_70_1 = arg10
                                    int32_t var_74 = arg9 + ((edi_4 * arg10 + result_14) << 2)
                                    sub_5c67c0(&var_74, result_10, result_9, var_44_1, ecx_3, 
                                        esi_2, arg11)
                                    eax_18 = arg2
                                    edi_4 = ebx_8
                                while (edi_4 s< eax_18)
                                
                                ebx_6 = var_44_1
                                result_13 = result_10
                            
                            eax_14 = edi_2
                            ecx_1 = arg4
                            result_11 = result_12
                            var_2c_1 = eax_14
                        while (eax_14 s< ecx_1)
                    
                    result = arg3
                    result_11 = result_8
                    ebx_5 = ebx
                    result_12 = result_11
                while (result_11 s< result)
            
            if (ebx_4 u> 0x20000)
                result = result_2
                
                if (result != 0)
                    result = free(result[-1])
            
            if (ebx_2 u> 0x20000)
                result = result_1
                
                if (result != 0)
                    result = free(result[-1])
            
            fsbase->NtTib.ExceptionList = ExceptionList
            CookieCheckFunction(result)
            return result
        
        int32_t eax_11 = malloc(ebx_4 + 0x10)
        
        if (eax_11 != 0)
            void* eax_12 = eax_11 & 0xfffffff0
            result_6 = eax_12 + 0x10
            result_9 = result_6
            result_6[-1] = eax_11
            
            if (eax_12 != 0xfffffff0)
                goto label_5c55a1

sub_5b0890()
noreturn
