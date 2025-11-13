// 函数: sub_689f40
// 地址: 0x689f40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76de4d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_4
int32_t* ebx = arg_4
*arg2 = 0
char* eax_3 = *ebx

if (eax_3 != 0 && eax_3 != &data_801800)
    if (data_cf65bc != 0 && *eax_3 != 0)
        char* eax_4 = sub_63d4e0(ebx)
        int32_t temp0_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
    
    *ebx = &data_801800

char* eax_5 = *arg4

if (eax_5 != 0 && eax_5 != &data_801800)
    if (data_cf65bc != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(arg4)
        int32_t temp1_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
    
    *arg4 = &data_801800

char* var_18 = *arg3
char* const var_20 = &data_801800
int32_t var_8_1 = 0
char eax_8
va_list ecx_5
int32_t edx_5
eax_8, ecx_5, edx_5 = sub_689e90(&var_18, &var_20)
char* const edi_1 = var_20
int32_t result

if (eax_8 == 0)
    result = 2
else
    char* const ebx_2 = &data_801800
    int32_t* var_40_1 = arg2
    char* const eax_9 = &data_801800
    
    if (edi_1 != 0)
        eax_9 = edi_1
    
    int32_t eax_10
    va_list ecx_6
    int32_t edx_6
    eax_10, ecx_6, edx_6 = sub_64b6d0(eax_9, edx_5, ecx_5, eax_9, "HTTP/1.1 %d")
    int32_t eax_12
    
    if (eax_10 != 1)
        char* const eax_11 = &data_801800
        int32_t* var_40_2 = arg2
        
        if (edi_1 != 0)
            eax_11 = edi_1
        
        eax_12 = sub_64b6d0(eax_11, edx_6, ecx_6, eax_11, "HTTP/1.0 %d")
    
    if (eax_10 != 1 && eax_12 != 1)
        result = 2
    else
        char* eax_13 = var_18
        
        if (*arg2 == 0xc8)
            uint32_t var_1c = 0xffffffff
            char* const var_14 = &data_801800
            var_8_1.b = 1
            char eax_14
            int32_t edx_8
            eax_14, edx_8 = sub_689e90(&var_18, &var_14)
            
            if (eax_14 == 0)
            label_68a121:
                var_8_1.b = 2
                
                if (data_cf65bc != 0)
                    char* const eax_19 = var_14
                    
                    if (eax_19 != 0 && *eax_19 != 0)
                        char* eax_20 = sub_63d4e0(&var_14)
                        int32_t temp4_1 = *(eax_20 + 4)
                        *(eax_20 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                
                result = 2
            else
                char* const esi_1
                
                while (true)
                    esi_1 = var_14
                    
                    if (esi_1 == 0)
                        break
                    
                    if (*esi_1 == 0)
                        break
                    
                    char* const* ecx_8 = &var_14
                    
                    if (*(sub_63d4e0(ecx_8) + 8) == 0)
                        break
                    
                    int32_t* var_40_4 = &var_1c
                    sub_64b6d0(&var_1c, edx_8, ecx_8, esi_1, "Content-Length: %d")
                    var_8_1.b = 4
                    
                    if (data_cf65bc != 0 && *esi_1 != 0)
                        char* eax_17 = sub_63d4e0(&var_14)
                        int32_t temp6_1 = *(eax_17 + 4)
                        *(eax_17 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                    
                    var_14 = &data_801800
                    var_8_1.b = 1
                    char eax_18
                    eax_18, edx_8 = sub_689e90(&var_18, &var_14)
                    
                    if (eax_18 == 0)
                        goto label_68a121
                
                char* ebx_3 = var_18
                sub_63db30(arg_4, eax_13, ebx_3 - eax_13)
                var_8_1.b = 3
                
                if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                    char* eax_25 = sub_63d4e0(&var_14)
                    int32_t temp5_1 = *(eax_25 + 4)
                    *(eax_25 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                
                var_8_1.b = 0
                uint32_t eax_26 = var_1c
                
                if (eax_26 s< 0)
                    arg_4 = &data_801800
                    var_8_1.b = 5
                    char eax_27
                    int32_t edx_19
                    eax_27, edx_19 = sub_689e90(&var_18, &arg_4)
                    int32_t* esi_2 = arg_4
                    
                    if (eax_27 != 0)
                        var_1c = 0xffffffff
                        uint32_t* var_40_6 = &var_1c
                        int32_t* eax_28 = &data_801800
                        
                        if (esi_2 != 0)
                            eax_28 = esi_2
                        
                        sub_64b6d0(eax_28, edx_19, &var_1c, eax_28, "%x")
                        char* ecx_24 = var_18
                        char* edx_20 = ecx_24
                        char i
                        
                        do
                            i = *edx_20
                            edx_20 = &edx_20[1]
                        while (i != 0)
                        uint32_t eax_29 = var_1c
                        
                        if (edx_20 - &edx_20[1] s< eax_29)
                            result = 1
                        else
                            sub_63db30(arg4, ecx_24, eax_29)
                            result = 0
                    else
                        result = 2
                    
                    var_8_1.b = 6
                    
                    if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
                        char* eax_30 = sub_63d4e0(&arg_4)
                        int32_t temp7_1 = *(eax_30 + 4)
                        *(eax_30 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)
                else if (eax_26 != 0)
                    void* edx_25 = ebx_3 - *arg3
                    void* ecx_29 = arg3[1] - edx_25
                    
                    if (ecx_29 s>= eax_26)
                        if (ecx_29 s> eax_26)
                            sub_63b5f0("extra data after http response")
                            eax_26 = var_1c
                        
                        sub_63db30(arg4, ebx_3, eax_26)
                        result = 0
                    else
                        sub_688d40(arg3, edx_25 + eax_26 + 1)
                        result = 2
                else
                    result = 0
        else
            if (edi_1 != 0)
                ebx_2 = edi_1
            
            char* const var_40_3 = ebx_2
            sub_63b5f0("http response line: %s")
            result = 0

int32_t var_8_2 = 7

if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
    char* eax_21 = sub_63d4e0(&var_20)
    int32_t temp2_1 = *(eax_21 + 4)
    *(eax_21 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
