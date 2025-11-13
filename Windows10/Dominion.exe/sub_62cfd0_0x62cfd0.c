// 函数: sub_62cfd0
// 地址: 0x62cfd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76bbed
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = *arg1
int32_t result = 0
char* var_14 = esi

if (esi != 0 && *esi != 0)
    char* eax_3 = sub_63d4e0(&var_14)
    *(eax_3 + 4) += 1

int32_t var_8_1 = 0
char* const var_20 = &data_801800
char* const var_1c = &data_801800
char* const var_18 = &data_801800
var_8_1.b = 3
char* const* var_50 = &var_18
char* const var_38

if (sub_62cb50(&var_1c, &var_20, &var_14, &var_1c) != 0)
    int32_t var_3c_1 = 1
    void* var_24_1 = arg2
    char i
    
    do
        char* const edi_1 = var_1c
        
        if (edi_1 != 0 && *edi_1 != 0)
            int32_t var_34_1 = 0
            char* const var_30 = edi_1
            char* eax_6 = sub_63d4e0(&var_30)
            *(eax_6 + 4) += 1
            int32_t* eax_7 = var_24_1
            result += 1
            var_8_1.b = 4
            var_24_1 = &eax_7[2]
            *eax_7 = 0
            sub_63d850(&eax_7[1], &var_30)
            var_8_1.b = 5
            
            if (data_cf65bc != 0 && *edi_1 != 0)
                char* eax_9 = sub_63d4e0(&var_30)
                int32_t temp3_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
                    var_30 = &data_801800
            
            var_8_1.b = 3
        
        char* const edi_2 = var_20
        var_38 = edi_2
        
        if (edi_2 != 0 && *edi_2 != 0)
            char* eax_10 = sub_63d4e0(&var_38)
            *(eax_10 + 4) += 1
        
        result += 1
        void* ecx_8 = var_24_1
        var_8_1.b = 6
        var_24_1 += 8
        *ecx_8 = 1
        sub_63d850(ecx_8 + 4, &var_38)
        var_8_1.b = 7
        
        if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
            char* eax_13 = sub_63d4e0(&var_38)
            int32_t temp5_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                var_38 = &data_801800
        
        var_8_1.b = 3
        char* const edi_3 = var_18
        char* const ecx_12 = &data_801800
        
        if (esi != 0)
            ecx_12 = esi
        
        char* const eax_14 = &data_801800
        
        if (edi_3 != 0)
            eax_14 = edi_3
        
        if (ecx_12 != eax_14)
            if (data_cf65bc != 0 && esi != 0 && *esi != 0)
                char* eax_15 = sub_63d4e0(&var_14)
                int32_t temp7_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp7_1 == 1)
                    sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
            
            esi = edi_3
            var_14 = esi
            
            if (edi_3 != 0 && *edi_3 != 0)
                char* eax_16 = sub_63d4e0(&var_14)
                *(eax_16 + 4) += 1
        
        char* const* var_50_3 = &var_18
        i = sub_62cb50(&var_1c, &var_20, &var_14, &var_1c)
    while (i != 0)

if (esi != 0 && *esi != 0)
    int32_t var_3c_2 = 0
    var_38 = esi
    char* eax_18 = sub_63d4e0(&var_38)
    *(eax_18 + 4) += 1
    void* ecx_18 = arg2 + (result << 3)
    var_8_1.b = 8
    *ecx_18 = 0
    result += 1
    sub_63d850(ecx_18 + 4, &var_38)
    var_8_1.b = 9
    
    if (data_cf65bc != 0 && *esi != 0)
        char* eax_19 = sub_63d4e0(&var_38)
        int32_t temp1_1 = *(eax_19 + 4)
        *(eax_19 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)

var_8_1.b = 0xa

if (data_cf65bc != 0)
    char* const eax_20 = var_18
    
    if (eax_20 != 0 && *eax_20 != 0)
        char* eax_21 = sub_63d4e0(&var_18)
        int32_t temp0_1 = *(eax_21 + 4)
        *(eax_21 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)

var_8_1.b = 0xb

if (data_cf65bc != 0)
    char* const eax_22 = var_1c
    
    if (eax_22 != 0 && *eax_22 != 0)
        char* eax_23 = sub_63d4e0(&var_1c)
        int32_t temp2_1 = *(eax_23 + 4)
        *(eax_23 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)

var_8_1.b = 0xc

if (data_cf65bc != 0)
    char* const eax_24 = var_20
    
    if (eax_24 != 0 && *eax_24 != 0)
        char* eax_25 = sub_63d4e0(&var_20)
        int32_t temp4_1 = *(eax_25 + 4)
        *(eax_25 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)

int32_t var_8_2 = 0xd

if (data_cf65bc != 0 && esi != 0 && *esi != 0)
    char* eax_26 = sub_63d4e0(&var_14)
    int32_t temp6_1 = *(eax_26 + 4)
    *(eax_26 + 4) -= 1
    
    if (temp6_1 == 1)
        sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
