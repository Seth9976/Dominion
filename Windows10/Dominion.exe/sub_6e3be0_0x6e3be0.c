// 函数: sub_6e3be0
// 地址: 0x6e3be0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?common_fseek_binary_mode_read_only_fast_track_nolock@@YA_NV__crt_stdio_stream@@_JH@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_5c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
int128_t xmm0 = *arg2
int32_t var_2c
sub_6e24d0(&var_2c, arg2)
int32_t var_8_1 = 1
int32_t eax_3 = var_2c
int32_t* result
int32_t var_28
char* var_24
char* eax_5

if (eax_3 == 2 || eax_3 == 3 || eax_3 == 4)
    sub_6e1920(arg2)
    int32_t var_20
    sub_6e24d0(&var_20, arg2)
    var_8_1.b = 3
    int32_t eax_7 = var_20
    int32_t var_1c
    char* var_18
    
    if (eax_7 == 2 || eax_7 == 3 || eax_7 == 4)
        sub_6e1920(arg2)
        char* eax_12
        eax_12.b = **(arg2 + 4)
        
        if (eax_12.b == 0 || eax_12.b == 0x5d || eax_12.b == 0x2c || eax_12.b == 0x24)
            void* eax_60 = sub_6e17c0(*arg2)
            result = arg1
            int32_t var_14_8 = 1
            *eax_60 = 7
            *(eax_60 + 0xc) = var_28
            *(eax_60 + 0x10) = var_1c
            result[2] = &data_801800
            *result = 3
            result[1] = eax_60
            var_8_1.b = 6
            
            if (data_cf65bc != 0)
                char* eax_63 = var_18
                
                if (eax_63 != 0 && *eax_63 != 0)
                    char* eax_64 = sub_63d4e0(&var_18)
                    int32_t temp0_1 = *(eax_64 + 4)
                    *(eax_64 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_64, *(eax_64 + 0xc) + 0x10)
                        var_18 = &data_801800
            
            int32_t var_8_9 = 7
        else
            int32_t var_38
            sub_6e24d0(&var_38, arg2)
            var_8_1.b = 8
            int32_t eax_13 = var_38
            int32_t var_34
            char* var_30
            
            if (eax_13 == 2 || eax_13 == 3 || eax_13 == 4)
                sub_6e1920(arg2)
                char* eax_20
                eax_20.b = **(arg2 + 4)
                
                if (eax_20.b == 0 || eax_20.b == 0x5d || eax_20.b == 0x2c || eax_20.b == 0x24)
                    void* eax_52 = sub_6e17c0(*arg2)
                    result = arg1
                    int32_t var_14_7 = 1
                    *eax_52 = 8
                    *(eax_52 + 0xc) = var_28
                    *(eax_52 + 0x10) = var_1c
                    *(eax_52 + 0x14) = var_34
                    result[2] = &data_801800
                    *result = 3
                    result[1] = eax_52
                    var_8_1.b = 0xc
                    
                    if (data_cf65bc != 0)
                        char* eax_56 = var_30
                        
                        if (eax_56 != 0 && *eax_56 != 0)
                            char* eax_57 = sub_63d4e0(&var_30)
                            int32_t temp3_1 = *(eax_57 + 4)
                            *(eax_57 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_64c080(eax_57, *(eax_57 + 0xc) + 0x10)
                                var_30 = &data_801800
                    
                    var_8_1.b = 0xd
                    
                    if (data_cf65bc != 0)
                        char* eax_58 = var_18
                        
                        if (eax_58 != 0 && *eax_58 != 0)
                            char* eax_59 = sub_63d4e0(&var_18)
                            int32_t temp4_1 = *(eax_59 + 4)
                            *(eax_59 + 4) -= 1
                            
                            if (temp4_1 == 1)
                                sub_64c080(eax_59, *(eax_59 + 0xc) + 0x10)
                                var_18 = &data_801800
                    
                    int32_t var_8_8 = 0xe
                else
                    int32_t var_44
                    sub_6e24d0(&var_44, arg2)
                    var_8_1.b = 0xf
                    int32_t eax_21 = var_44
                    int32_t var_40
                    char* var_3c
                    
                    if (eax_21 == 2 || eax_21 == 3 || eax_21 == 4)
                        sub_6e1920(arg2)
                        char* eax_30
                        eax_30.b = **(arg2 + 4)
                        
                        if (eax_30.b == 0 || eax_30.b == 0x5d || eax_30.b == 0x2c
                                || eax_30.b == 0x24)
                            void* eax_41 = sub_6e17c0(*arg2)
                            result = arg1
                            int32_t var_14_6 = 1
                            *eax_41 = 9
                            *(eax_41 + 0xc) = var_28
                            *(eax_41 + 0x10) = var_1c
                            *(eax_41 + 0x14) = var_34
                            *(eax_41 + 0x18) = var_40
                            result[2] = &data_801800
                            *result = 3
                            result[1] = eax_41
                            var_8_1.b = 0x14
                            
                            if (data_cf65bc != 0)
                                char* eax_46 = var_3c
                                
                                if (eax_46 != 0 && *eax_46 != 0)
                                    char* eax_47 = sub_63d4e0(&var_3c)
                                    int32_t temp7_1 = *(eax_47 + 4)
                                    *(eax_47 + 4) -= 1
                                    
                                    if (temp7_1 == 1)
                                        sub_64c080(eax_47, *(eax_47 + 0xc) + 0x10)
                                        var_3c = &data_801800
                            
                            var_8_1.b = 0x15
                            
                            if (data_cf65bc != 0)
                                char* eax_48 = var_30
                                
                                if (eax_48 != 0 && *eax_48 != 0)
                                    char* eax_49 = sub_63d4e0(&var_30)
                                    int32_t temp8_1 = *(eax_49 + 4)
                                    *(eax_49 + 4) -= 1
                                    
                                    if (temp8_1 == 1)
                                        sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
                                        var_30 = &data_801800
                            
                            var_8_1.b = 0x16
                            
                            if (data_cf65bc != 0)
                                char* eax_50 = var_18
                                
                                if (eax_50 != 0 && *eax_50 != 0)
                                    char* eax_51 = sub_63d4e0(&var_18)
                                    int32_t temp9_1 = *(eax_51 + 4)
                                    *(eax_51 + 4) -= 1
                                    
                                    if (temp9_1 == 1)
                                        sub_64c080(eax_51, *(eax_51 + 0xc) + 0x10)
                                        var_18 = &data_801800
                            
                            int32_t var_8_7 = 0x17
                        else
                            *arg2 = xmm0
                            result = arg1
                            *result = data_cb2f14
                            result[1] = data_cb2f18
                            void* eax_33 = data_cb2f1c
                            result[2] = eax_33
                            
                            if (eax_33 != 0 && *eax_33 != 0)
                                char* eax_34 = sub_63d4e0(&result[2])
                                *(eax_34 + 4) += 1
                            
                            int32_t var_14_5 = 1
                            var_8_1.b = 0x18
                            
                            if (data_cf65bc != 0)
                                char* eax_35 = var_3c
                                
                                if (eax_35 != 0 && *eax_35 != 0)
                                    char* eax_36 = sub_63d4e0(&var_3c)
                                    int32_t temp12_1 = *(eax_36 + 4)
                                    *(eax_36 + 4) -= 1
                                    
                                    if (temp12_1 == 1)
                                        sub_64c080(eax_36, *(eax_36 + 0xc) + 0x10)
                                        var_3c = &data_801800
                            
                            var_8_1.b = 0x19
                            
                            if (data_cf65bc != 0)
                                char* eax_37 = var_30
                                
                                if (eax_37 != 0 && *eax_37 != 0)
                                    char* eax_38 = sub_63d4e0(&var_30)
                                    int32_t temp14_1 = *(eax_38 + 4)
                                    *(eax_38 + 4) -= 1
                                    
                                    if (temp14_1 == 1)
                                        sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
                                        var_30 = &data_801800
                            
                            var_8_1.b = 0x1a
                            
                            if (data_cf65bc != 0)
                                char* eax_39 = var_18
                                
                                if (eax_39 != 0 && *eax_39 != 0)
                                    char* eax_40 = sub_63d4e0(&var_18)
                                    int32_t temp15_1 = *(eax_40 + 4)
                                    *(eax_40 + 4) -= 1
                                    
                                    if (temp15_1 == 1)
                                        sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
                                        var_18 = &data_801800
                            
                            int32_t var_8_6 = 0x1b
                    else
                        *arg2 = xmm0
                        result = arg1
                        *result = eax_21
                        result[1] = var_40
                        char* eax_23 = var_3c
                        result[2] = eax_23
                        
                        if (eax_23 != 0 && *eax_23 != 0)
                            char* eax_24 = sub_63d4e0(&result[2])
                            *(eax_24 + 4) += 1
                            eax_23 = var_3c
                        
                        int32_t var_14_4 = 1
                        var_8_1.b = 0x10
                        
                        if (data_cf65bc != 0 && eax_23 != 0 && *eax_23 != 0)
                            char* eax_25 = sub_63d4e0(&var_3c)
                            int32_t temp10_1 = *(eax_25 + 4)
                            *(eax_25 + 4) -= 1
                            
                            if (temp10_1 == 1)
                                sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                                var_3c = &data_801800
                        
                        var_8_1.b = 0x11
                        
                        if (data_cf65bc != 0)
                            char* eax_26 = var_30
                            
                            if (eax_26 != 0 && *eax_26 != 0)
                                char* eax_27 = sub_63d4e0(&var_30)
                                int32_t temp11_1 = *(eax_27 + 4)
                                *(eax_27 + 4) -= 1
                                
                                if (temp11_1 == 1)
                                    sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                                    var_30 = &data_801800
                        
                        var_8_1.b = 0x12
                        
                        if (data_cf65bc != 0)
                            char* eax_28 = var_18
                            
                            if (eax_28 != 0 && *eax_28 != 0)
                                char* eax_29 = sub_63d4e0(&var_18)
                                int32_t temp13_1 = *(eax_29 + 4)
                                *(eax_29 + 4) -= 1
                                
                                if (temp13_1 == 1)
                                    sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                                    var_18 = &data_801800
                        
                        int32_t var_8_5 = 0x13
            else
                *arg2 = xmm0
                result = arg1
                *result = eax_13
                result[1] = var_34
                char* eax_15 = var_30
                result[2] = eax_15
                
                if (eax_15 != 0 && *eax_15 != 0)
                    char* eax_16 = sub_63d4e0(&result[2])
                    *(eax_16 + 4) += 1
                    eax_15 = var_30
                
                int32_t var_14_3 = 1
                var_8_1.b = 9
                
                if (data_cf65bc != 0 && eax_15 != 0 && *eax_15 != 0)
                    char* eax_17 = sub_63d4e0(&var_30)
                    int32_t temp5_1 = *(eax_17 + 4)
                    *(eax_17 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                        var_30 = &data_801800
                
                var_8_1.b = 0xa
                
                if (data_cf65bc != 0)
                    char* eax_18 = var_18
                    
                    if (eax_18 != 0 && *eax_18 != 0)
                        char* eax_19 = sub_63d4e0(&var_18)
                        int32_t temp6_1 = *(eax_19 + 4)
                        *(eax_19 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                            var_18 = &data_801800
                
                int32_t var_8_4 = 0xb
    else
        *arg2 = xmm0
        result = arg1
        *result = eax_7
        result[1] = var_1c
        char* eax_9 = var_18
        result[2] = eax_9
        
        if (eax_9 != 0 && *eax_9 != 0)
            char* eax_10 = sub_63d4e0(&result[2])
            *(eax_10 + 4) += 1
            eax_9 = var_18
        
        int32_t var_14_2 = 1
        var_8_1.b = 4
        
        if (data_cf65bc != 0 && eax_9 != 0 && *eax_9 != 0)
            char* eax_11 = sub_63d4e0(&var_18)
            int32_t temp1_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                var_18 = &data_801800
        
        int32_t var_8_3 = 5
    
    if (data_cf65bc != 0)
        eax_5 = var_24
    label_6e42e3:
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_65 = sub_63d4e0(&var_24)
            int32_t temp2_1 = *(eax_65 + 4)
            *(eax_65 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_65, *(eax_65 + 0xc) + 0x10)
else
    result = arg1
    *result = eax_3
    result[1] = var_28
    eax_5 = var_24
    result[2] = eax_5
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(&result[2])
        *(eax_6 + 4) += 1
        eax_5 = var_24
    
    int32_t var_14_1 = 1
    int32_t var_8_2 = 2
    
    if (data_cf65bc != 0)
        goto label_6e42e3
fsbase->NtTib.ExceptionList = ExceptionList
return result
