// 函数: sub_691e10
// 地址: 0x691e10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76edde
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14 = arg2
char** var_1c = arg1
int32_t var_18 = 0
char* arg_4
int32_t* esi = arg_4
char* eax_3 = esi[1]
void* ecx = &esi[1]

if (eax_3 == 0 || *eax_3 == 0)
    void* var_34
    int32_t var_8_21
    int32_t* ecx_3
    
    if (*(esi + 0x1a) == 0)
        char* const edi_1 = *esi
        int32_t eax_7
        
        if (edi_1 == 0)
            edi_1 = &data_801800
            eax_7 = 0
        else if (*edi_1 != 0)
            char* eax_8 = sub_63d4e0(esi)
            arg2 = var_14
            ecx = &esi[1]
            eax_7 = *(eax_8 + 8)
        else
            eax_7 = 0
        
        if (edi_1[eax_7 - 1] == 0x5d)
            var_34 = esi
            sub_63d850(ecx, var_34)
        else if (&arg2[0xffffffff] u> 0x12)
        label_692108:
            char* eax_23 = *esi
            char* const ecx_27 = &data_801800
            
            if (eax_23 != 0)
                ecx_27 = eax_23
            
            var_34 = ecx_27
            var_34 = sub_63df30(&arg_4, "%s_s")
            int32_t var_8_19 = 0x14
            sub_63d850(&esi[1], var_34)
            int32_t var_8_20 = 0x15
            
            if (data_cf65bc != 0)
                char* eax_25 = arg_4
                
                if (eax_25 != 0 && *eax_25 != 0)
                    char* eax_26 = sub_63d4e0(&arg_4)
                    int32_t temp1_1 = *(eax_26 + 4)
                    *(eax_26 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
                        arg_4 = &data_801800
            
            var_8_21 = 0xffffffff
        else
            uint32_t eax_10 = zx.d(*(arg2 + &jump_table_6921a8[9]:3))
            
            switch (eax_10)
                case 0
                    var_34 = sub_68d790(&var_14, esi)
                    int32_t var_8_9 = 0xa
                    sub_63d850(&esi[1], var_34)
                    int32_t var_8_10 = 0xb
                    goto label_691e87
                case 1
                    var_34 = esi[3]
                    var_34 = sub_68ec70(eax_10, esi, &var_14, var_34)
                    int32_t var_8_5 = 6
                    sub_63d850(&esi[1], var_34)
                    int32_t var_8_6 = 7
                    goto label_691e87
                case 2
                    var_34 = sub_68dd90(&var_14, esi)
                    int32_t var_8_7 = 8
                    sub_63d850(&esi[1], var_34)
                    int32_t var_8_8 = 9
                    goto label_691e87
                case 3
                    var_34 = sub_690e30(&var_14, esi)
                    int32_t var_8_13 = 0xe
                    sub_63d850(&esi[1], var_34)
                    int32_t var_8_14 = 0xf
                    goto label_691e87
                case 4
                    var_34 = sub_68e110(&var_14, esi)
                    int32_t var_8_17 = 0x12
                    sub_63d850(&esi[1], var_34)
                    int32_t var_8_18 = 0x13
                    goto label_691e87
                case 5
                    var_34 = sub_68e560(&var_14, esi)
                    int32_t var_8_15 = 0x10
                    sub_63d850(&esi[1], var_34)
                    int32_t var_8_16 = 0x11
                    goto label_691e87
                case 6
                    void* eax_17 = *esi
                    int32_t edi_3 = esi[3]
                    var_34 = ecx
                    var_34 = eax_17
                    
                    if (eax_17 != 0 && *eax_17 != 0)
                        char* eax_18 = sub_63d4e0(&var_34)
                        *(eax_18 + 4) += 1
                    
                    var_34 = sub_68f520(&var_14, edi_3)
                    int32_t var_8_11 = 0xc
                    sub_63d850(&esi[1], var_34)
                    int32_t var_8_12 = 0xd
                    goto label_691e87
                case 7
                    var_34 = esi
                    sub_63d850(&esi[1], var_34)
                case 8
                    char* edi_2 = *esi
                    var_14 = edi_2
                    
                    if (edi_2 != 0 && *edi_2 != 0)
                        char* eax_11 = sub_63d4e0(&var_14)
                        *(eax_11 + 4) += 1
                    
                    int32_t var_8_3 = 3
                    arg_4 = edi_2
                    
                    if (edi_2 != 0 && *edi_2 != 0)
                        char* eax_12 = sub_63d4e0(&arg_4)
                        *(eax_12 + 4) += 1
                    
                    int32_t var_18_1 = 2
                    var_8_3.b = 4
                    
                    if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
                        char* eax_13 = sub_63d4e0(&var_14)
                        int32_t temp2_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                    
                    var_8_3.b = 2
                    var_34 = &arg_4
                    sub_63d850(&esi[1], var_34)
                    int32_t var_8_4 = 5
                    
                    if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
                        ecx_3 = &arg_4
                        goto label_691eab
                    
                    var_8_21 = 0xffffffff
                case 9
                    goto label_692108
    else
        var_34 = sub_68d790(&var_14, esi)
        int32_t var_8_1 = 0
        sub_63d850(&esi[1], var_34)
        int32_t var_8_2 = 1
    label_691e87:
        
        if (data_cf65bc == 0)
            var_8_21 = 0xffffffff
        else
            char* eax_5 = var_14
            
            if (eax_5 == 0 || *eax_5 == 0)
                var_8_21 = 0xffffffff
            else
                ecx_3 = &var_14
            label_691eab:
                char* eax_6 = sub_63d4e0(ecx_3)
                int32_t temp0_1 = *(eax_6 + 4)
                *(eax_6 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
                
                var_8_21 = 0xffffffff
    eax_3 = esi[1]
    *arg1 = eax_3
    
    if (eax_3 != 0)
        goto label_692184
else
    *arg1 = eax_3
label_692184:
    
    if (*eax_3 != 0)
        char* eax_27 = sub_63d4e0(arg1)
        *(eax_27 + 4) += 1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
