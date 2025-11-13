// 函数: sub_65db40
// 地址: 0x65db40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76d03e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int32_t var_20 = 0
char* const var_18 = &data_801800
int32_t var_8_1 = 1
char* ecx = *(arg2 + 0x152c)
char* var_1c
char* const esi_2

if (ecx == 0 || *ecx == 0 || *(arg2 + 0x10) != 0)
    sub_63d850(&var_18, arg2 + 0x15d8)
    esi_2 = var_18
else
    int32_t* eax_4 = *(arg2 + 0x15cc)
    char* esi_3
    char* edi_1
    
    if (eax_4 == 0)
        char** eax_12 = *(arg2 + 0x1530)
        
        if (eax_12 != 0)
        label_65dcf4:
            esi_3 = *eax_12
            edi_1 = esi_3
            var_1c = esi_3
            
            if (esi_3 != 0 && *esi_3 != 0)
                char* eax_14 = sub_63d4e0(&var_1c)
                *(eax_14 + 4) += 1
        else
            eax_12 = sub_68caf0(eax_12, nullptr, ecx, eax_12)
            *(arg2 + 0x1530) = eax_12
            
            if (eax_12 != 0)
                goto label_65dcf4
            
            esi_3 = *(arg2 + 0x152c)
            var_1c = esi_3
            
            if (esi_3 != 0 && *esi_3 != eax_12.b)
                char* eax_13 = sub_63d4e0(&var_1c)
                *(eax_13 + 4) += 1
            
            edi_1 = esi_3
        
        ebx = 4
        int32_t var_20_2 = 4
        var_8_1.b = 4
        sub_63d850(&var_18, &var_1c)
        var_8_1.b = 5
    label_65dc60:
        
        if (data_cf65bc == 0)
            esi_2 = var_18
        else
            if (edi_1 != 0 && *esi_3 != 0)
                char* eax_10 = sub_63d4e0(&var_1c)
                int32_t temp3_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
            
            esi_2 = var_18
    else
        int32_t esi_1 = 0
        
        if (eax_4[2] s<= 0)
        label_65dc00:
            esi_3 = *(arg2 + 0x152c)
            bool cond:0_1 = esi_3 == 0
            
            if (esi_3 == 0)
                goto label_65dc2e
            
            if (*esi_3 == 0)
                goto label_65dc2c
            
            void* eax_8 = *(arg2 + 0x1530)
            
            if (eax_8 != 0)
            label_65dca2:
                esi_3 = *eax_8
                edi_1 = esi_3
                var_1c = esi_3
                
                if (esi_3 != 0 && *esi_3 != 0)
                    char* eax_11 = sub_63d4e0(&var_1c)
                    *(eax_11 + 4) += 1
            else
                eax_8 = sub_68caf0(eax_8, nullptr, esi_3, eax_8)
                *(arg2 + 0x1530) = eax_8
                
                if (eax_8 != 0)
                    goto label_65dca2
                
                esi_3 = *(arg2 + 0x152c)
            label_65dc2c:
                cond:0_1 = esi_3 == 0
            label_65dc2e:
                var_1c = esi_3
                
                if (not(cond:0_1) && *esi_3 != 0)
                    char* eax_9 = sub_63d4e0(&var_1c)
                    *(eax_9 + 4) += 1
                
                edi_1 = esi_3
            
            ebx = 2
            int32_t var_20_1 = 2
            var_8_1.b = 2
            sub_63d850(&var_18, &var_1c)
            var_8_1.b = 3
            goto label_65dc60
        
        char* eax_6
        
        while (true)
            int32_t var_40_1 = *(*eax_4 + (esi_1 << 3))
            void var_11
            eax_6 = sub_65d9c0(arg2 + 0x152c, &var_11)
            
            if (eax_6 != 0)
                break
            
            esi_1 += 1
            eax_4 = *(arg2 + 0x15cc)
            
            if (esi_1 s>= eax_4[2])
                goto label_65dc00
        
        sub_63d8d0(&var_18, eax_6)
        esi_2 = var_18
        
        if (esi_2 == 0 || *esi_2 == 0)
            goto label_65dc00

var_1c = &data_801800
var_8_1.b = 6

if (*(arg2 + 0x1544) == 0)
    char** eax_20 = arg1
    *eax_20 = esi_2
    
    if (esi_2 != 0 && *esi_2 != 0)
        char* eax_21 = sub_63d4e0(eax_20)
        *(eax_21 + 4) += 1
    
    int32_t var_20_4 = ebx | 1
    int32_t var_8_3 = 0xa
else
    sub_63d850(&var_1c, &var_18)
    sub_63e4d0(&var_1c)
    char* edi_2 = var_1c
    *arg1 = edi_2
    
    if (edi_2 != 0 && *edi_2 != 0)
        char* eax_18 = sub_63d4e0(arg1)
        *(eax_18 + 4) += 1
    
    int32_t var_20_3 = ebx | 1
    var_8_1.b = 7
    
    if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
        char* eax_19 = sub_63d4e0(&var_1c)
        int32_t temp1_1 = *(eax_19 + 4)
        *(eax_19 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
    
    int32_t var_8_2 = 8

if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
    char* eax_22 = sub_63d4e0(&var_18)
    int32_t temp2_1 = *(eax_22 + 4)
    *(eax_22 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
