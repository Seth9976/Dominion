// 函数: sub_4e50e0
// 地址: 0x4e50e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?Shutdown@ResourceManager@details@Concurrency@@QAEXPAVSchedulerProxy@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = arg2
int32_t var_2c = 0

if (arg4 == 0)
    sub_63d720(arg3, &data_801800)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3

char* const esi = &data_801800
char* const var_14 = &data_801800
int32_t edi = 0
int32_t var_8_1 = 1

if (arg4 s> 0)
    while (*(arg2 + (edi << 2)) != 0)
        if (esi != 0 && *esi != 0)
            char* eax_5 = sub_63d4e0(&var_14)
            int32_t esi_1 = *(eax_5 + 8)
            sub_63d5e0(eax_5, esi_1 + 2, &var_14, 1)
            char* const ecx_4 = var_14
            *(ecx_4 + esi_1) = 0x202c
            ecx_4[esi_1 + 2] = 0
        
        void* eax_6 = sub_571b30(*(var_1c + (edi << 2)), 0x17)
        int32_t edx_1 = 0
        void* ecx_7 = eax_6 + 0xc8
        int32_t eax_7
        
        while (true)
            int32_t esi_2 = *(ecx_7 - 0x20)
            
            if (esi_2 != 0)
                if (esi_2 == 0xd && *ecx_7 != 0)
                    int32_t eax_14 = edx_1 * 0xb4
                    eax_7 = *(eax_14 + eax_6 + 0xc0)
                    int32_t var_28 = *(eax_14 + eax_6 + 0xbc)
                    break
                
                edx_1 += 1
                ecx_7 += 0xb4
                
                if (edx_1 s< 8)
                    continue
            
            eax_7 = 0
            break
        
        sub_4e50e0(eax_7, arg5, eax_2)
        var_8_1.b = 2
        char* var_18
        char* esi_3 = var_18
        
        if (esi_3 == 0 || *esi_3 == 0)
            sub_63d960(&var_14, *(sub_571b30(*(var_1c + (edi << 2)), 0x17) + 0x58))
        else
            char* var_44_2 = esi_3
            int32_t var_48_2 = *(sub_571b30(*(var_1c + (edi << 2)), 0x17) + 0x58)
            var_8_1.b = 3
            char* ecx_10 = &data_801800
            char* var_20
            char* eax_11 = *sub_63df30(&var_20, "%s(%s)")
            
            if (eax_11 != 0)
                ecx_10 = eax_11
            
            sub_63d960(&var_14, ecx_10)
            var_8_1.b = 4
            
            if (data_cf65bc != 0)
                char* eax_12 = var_20
                
                if (eax_12 != 0 && *eax_12 != 0)
                    char* eax_13 = sub_63d4e0(&var_20)
                    int32_t temp2_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                        var_20 = &data_801800
        
        var_8_1.b = 5
        
        if (data_cf65bc != 0)
            char* eax_17 = var_18
            
            if (eax_17 != 0 && *eax_17 != 0)
                char* eax_18 = sub_63d4e0(&var_18)
                int32_t temp1_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                    var_18 = &data_801800
        
        edi += 1
        var_8_1.b = 1
        esi = var_14
        
        if (edi s>= arg4)
            break
        
        arg2 = var_1c

*arg3 = esi

if (esi != 0 && *esi != 0)
    char* eax_19 = sub_63d4e0(arg3)
    *(eax_19 + 4) += 1

int32_t var_2c_1 = 1
int32_t var_8_2 = 6

if (data_cf65bc != 0 && esi != 0 && *esi != 0)
    char* eax_20 = sub_63d4e0(&var_14)
    int32_t temp0_1 = *(eax_20 + 4)
    *(eax_20 + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
