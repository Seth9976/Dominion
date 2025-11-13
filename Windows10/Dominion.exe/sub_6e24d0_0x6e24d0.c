// 函数: sub_6e24d0
// 地址: 0x6e24d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771356
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_8c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
int32_t var_4c
sub_6e2200(&var_4c, arg2)
int32_t var_8_1 = 1
int32_t eax_3 = var_4c
int32_t* result
int32_t var_70
void* var_68

if (eax_3 == 2 || eax_3 == 3 || eax_3 == 4)
    sub_6e2090(&var_70, arg2)
    var_8_1.b = 2
    int32_t eax_69 = var_70
    
    if (eax_69 == 2 || eax_69 == 3 || eax_69 == 4)
        result = arg1
        *result = eax_69
        int32_t var_6c
        result[1] = var_6c
        void* eax_73 = var_68
        result[2] = eax_73
        
        if (eax_73 != 0 && *eax_73 != 0)
            char* eax_74 = sub_63d4e0(&result[2])
            *(eax_74 + 4) += 1
            eax_73 = var_68
        
        int32_t var_14_21 = 1
        var_8_1.b = 5
        
        if (data_cf65bc != 0 && eax_73 != 0 && *eax_73 != 0)
            char* eax_75 = sub_63d4e0(&var_68)
            int32_t temp0_1 = *(eax_75 + 4)
            *(eax_75 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_75, *(eax_75 + 0xc) + 0x10)
                var_68 = &data_801800
        
        int32_t var_8_9 = 6
    else
        result = arg1
        result[2] = &data_801800
        *result = 1
        int32_t var_14_20 = 1
        var_8_1.b = 3
        
        if (data_cf65bc != 0)
            void* eax_70 = var_68
            
            if (eax_70 != 0 && *eax_70 != 0)
                char* eax_71 = sub_63d4e0(&var_68)
                int32_t temp1_1 = *(eax_71 + 4)
                *(eax_71 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_71, *(eax_71 + 0xc) + 0x10)
                    var_68 = &data_801800
        
        int32_t var_8_8 = 4
else
    int32_t var_40
    sub_6e1e60(eax_3, arg2, &var_40, sub_6e2020)
    int32_t esi = var_40
    
    if (esi == 2 || esi == 3 || esi == 4)
        sub_6e1920(arg2)
    
    int32_t var_14_1 = 0
    var_8_1.b = 9
    char* const _String_8
    
    if (esi == 2 || esi == 3 || esi == 4)
        void* edi_1
        int32_t xmm0_1
        
        if (strncmp(U".", arg2[1], 1) == 0)
            arg2[1] += 1
            sub_6e1920(arg2)
            xmm0_1 = (data_cb2f08).d
            edi_1 = data_cb2f10
        else
            xmm0_1 = (data_cb2f14.q).d
            edi_1 = data_cb2f1c
        
        void* var_5c = edi_1
        void* var_34 = edi_1
        
        if (edi_1 != 0 && *edi_1 != 0)
            char* eax_10 = sub_63d4e0(&var_5c)
            *(eax_10 + 4) += 1
        
        int32_t var_14_3 = 4
        var_8_1.b = 0xc
        
        if (xmm0_1 == 2 || xmm0_1 == 3 || xmm0_1 == 4)
            int32_t var_58
            sub_6e1e60(xmm0_1, arg2, &var_58, sub_6e2020)
            int32_t esi_2 = var_58
            
            if (esi_2 == 2 || esi_2 == 3 || esi_2 == 4)
                sub_6e1920(arg2)
            
            int32_t var_14_5 = 0
            var_8_1.b = 0x12
            char* const var_50
            long double x87_r0
            
            if (esi_2 == 2 || esi_2 == 3 || esi_2 == 4)
                void* esi_4
                int64_t xmm0_3
                
                if (strncmp(U"es", arg2[1], 1) == 0)
                    arg2[1] += 1
                    sub_6e1920(arg2)
                    xmm0_3 = data_cb2f08
                    esi_4 = data_cb2f10
                else
                    xmm0_3 = data_cb2f14.q
                    esi_4 = data_cb2f1c
                
                var_68 = esi_4
                var_70.q = xmm0_3
                
                if (esi_4 != 0 && *esi_4 != 0)
                    char* eax_23 = sub_63d4e0(&var_68)
                    *(eax_23 + 4) += 1
                
                int32_t var_14_7 = 0x20
                var_8_1.b = 0x13
                int32_t eax_24 = var_70
                char* _String_10
                char* const _String_24
                
                if (eax_24 == 2 || eax_24 == 3 || eax_24 == 4)
                    int32_t var_7c
                    sub_6e1e60(eax_24, arg2, &var_7c, sub_6e2020)
                    int32_t esi_7 = var_7c
                    
                    if (esi_7 == 2 || esi_7 == 3 || esi_7 == 4)
                        sub_6e1920(arg2)
                    
                    int32_t var_14_11 = 0
                    var_8_1.b = 0x16
                    char* const var_74
                    
                    if (esi_7 == 2 || esi_7 == 3 || esi_7 == 4)
                        float var_30
                        sub_63d720(&var_30, U"es")
                        var_8_1.b = 0x17
                        char* var_2c
                        sub_63d720(&var_2c, U".")
                        var_8_1.b = 0x19
                        char* const _String_18 = _String_8
                        char* const _String_23 = _String_18
                        
                        if (_String_18 != 0 && *_String_18 != 0)
                            char* eax_45 = sub_63d4e0(&_String_23)
                            *(eax_45 + 4) += 1
                        
                        char* eax_46 = var_2c
                        int32_t var_14_13 = 0x800
                        char* const ecx_58 = &data_801800
                        
                        if (eax_46 != 0)
                            ecx_58 = eax_46
                        
                        sub_63d960(&_String_23, ecx_58)
                        var_8_1.b = 0x1a
                        char* _String_22 = _String_23
                        _String_10 = _String_22
                        
                        if (_String_22 != 0 && *_String_22 != 0)
                            char* eax_47 = sub_63d4e0(&_String_10)
                            *(eax_47 + 4) += 1
                        
                        char* eax_48 = var_50
                        char* ecx_61 = &data_801800
                        int32_t var_14_14 = 0x1800
                        
                        if (eax_48 != 0)
                            ecx_61 = eax_48
                        
                        sub_63d960(&_String_10, ecx_61)
                        var_8_1.b = 0x1b
                        char* _String_21 = _String_10
                        _String_24 = _String_21
                        
                        if (_String_21 != 0 && *_String_21 != 0)
                            char* eax_49 = sub_63d4e0(&_String_24)
                            *(eax_49 + 4) += 1
                        
                        char* eax_50 = var_30
                        char* ecx_64 = &data_801800
                        int32_t var_14_15 = 0x3800
                        
                        if (eax_50 != 0)
                            ecx_64 = eax_50
                        
                        sub_63d960(&_String_24, ecx_64)
                        char* _String_9
                        sub_63dde0(&_String_24, &_String_9, &var_74)
                        int32_t var_14_16 = 0x1800
                        var_8_1.b = 0x1e
                        
                        if (data_cf65bc != 0)
                            char* const _String_26 = _String_24
                            
                            if (_String_26 != 0 && *_String_26 != 0)
                                char* eax_51 = sub_63d4e0(&_String_24)
                                int32_t temp17_1 = *(eax_51 + 4)
                                *(eax_51 + 4) -= 1
                                
                                if (temp17_1 == 1)
                                    sub_64c080(eax_51, *(eax_51 + 0xc) + 0x10)
                        
                        int32_t var_14_17 = 0x800
                        var_8_1.b = 0x20
                        
                        if (data_cf65bc != 0 && _String_21 != 0 && *_String_21 != 0)
                            char* eax_52 = sub_63d4e0(&_String_10)
                            int32_t temp20_1 = *(eax_52 + 4)
                            *(eax_52 + 4) -= 1
                            
                            if (temp20_1 == 1)
                                sub_64c080(eax_52, *(eax_52 + 0xc) + 0x10)
                        
                        int32_t var_14_18 = 0
                        var_8_1.b = 0x22
                        
                        if (data_cf65bc != 0 && _String_22 != 0 && *_String_22 != 0)
                            char* eax_53 = sub_63d4e0(&_String_23)
                            int32_t temp22_1 = *(eax_53 + 4)
                            *(eax_53 + 4) -= 1
                            
                            if (temp22_1 == 1)
                                sub_64c080(eax_53, *(eax_53 + 0xc) + 0x10)
                        
                        var_8_1.b = 0x24
                        
                        if (data_cf65bc != 0)
                            char* eax_54 = var_2c
                            
                            if (eax_54 != 0 && *eax_54 != 0)
                                char* eax_55 = sub_63d4e0(&var_2c)
                                int32_t temp24_1 = *(eax_55 + 4)
                                *(eax_55 + 4) -= 1
                                
                                if (temp24_1 == 1)
                                    sub_64c080(eax_55, *(eax_55 + 0xc) + 0x10)
                        
                        var_8_1.b = 0x26
                        
                        if (data_cf65bc != 0)
                            float eax_56 = var_30
                            
                            if (eax_56 != 0 && *eax_56 != 0)
                                char* eax_57 = sub_63d4e0(&var_30)
                                int32_t temp25_1 = *(eax_57 + 4)
                                *(eax_57 + 4) -= 1
                                
                                if (temp25_1 == 1)
                                    sub_64c080(eax_57, *(eax_57 + 0xc) + 0x10)
                        
                        var_8_1.b = 0x25
                        char* const _String_1 = &data_801800
                        char* _String_7 = _String_9
                        void* esi_8 = *arg2
                        
                        if (_String_7 != 0)
                            _String_1 = _String_7
                        
                        atof(_String_1)
                        var_30 = fconvert.s(x87_r0)
                        int32_t* eax_58 = sub_6e17c0(esi_8)
                        result = arg1
                        float xmm0_5 = var_30
                        int32_t var_14_19 = 0x8001
                        *eax_58 = 3
                        eax_58[1] = xmm0_5
                        result[2] = &data_801800
                        *result = 3
                        result[1] = eax_58
                        var_8_1.b = 0x27
                        
                        if (data_cf65bc != 0)
                            char* _String_19 = _String_9
                            
                            if (_String_19 != 0 && *_String_19 != 0)
                                char* eax_59 = sub_63d4e0(&_String_9)
                                int32_t temp26_1 = *(eax_59 + 4)
                                *(eax_59 + 4) -= 1
                                
                                if (temp26_1 == 1)
                                    sub_64c080(eax_59, *(eax_59 + 0xc) + 0x10)
                                    _String_9 = &data_801800
                        
                        var_8_1.b = 0x28
                        
                        if (data_cf65bc != 0)
                            char* const eax_60 = var_74
                            
                            if (eax_60 != 0 && *eax_60 != 0)
                                char* eax_61 = sub_63d4e0(&var_74)
                                int32_t temp27_1 = *(eax_61 + 4)
                                *(eax_61 + 4) -= 1
                                
                                if (temp27_1 == 1)
                                    sub_64c080(eax_61, *(eax_61 + 0xc) + 0x10)
                                    var_74 = &data_801800
                        
                        var_8_1.b = 0x29
                        
                        if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                            char* eax_63 = sub_63d4e0(&var_68)
                            int32_t temp28_1 = *(eax_63 + 4)
                            *(eax_63 + 4) -= 1
                            
                            if (temp28_1 == 1)
                                sub_64c080(eax_63, *(eax_63 + 0xc) + 0x10)
                        
                        var_8_1.b = 0x2a
                        
                        if (data_cf65bc != 0)
                            char* const eax_64 = var_50
                            
                            if (eax_64 != 0 && *eax_64 != 0)
                                char* eax_65 = sub_63d4e0(&var_50)
                                int32_t temp29_1 = *(eax_65 + 4)
                                *(eax_65 + 4) -= 1
                                
                                if (temp29_1 == 1)
                                    sub_64c080(eax_65, *(eax_65 + 0xc) + 0x10)
                                    var_50 = &data_801800
                        
                        var_8_1.b = 0x2b
                        
                        if (data_cf65bc != 0)
                            void* eax_66 = var_34
                            
                            if (eax_66 != 0 && *eax_66 != 0)
                                char* eax_67 = sub_63d4e0(&var_5c)
                                int32_t temp30_1 = *(eax_67 + 4)
                                *(eax_67 + 4) -= 1
                                
                                if (temp30_1 == 1)
                                    sub_64c080(eax_67, *(eax_67 + 0xc) + 0x10)
                        
                        var_8_1.b = 0x2c
                        
                        if (data_cf65bc != 0)
                            char* const _String_20 = _String_8
                            
                            if (_String_20 != 0 && *_String_20 != 0)
                                char* eax_68 = sub_63d4e0(&_String_8)
                                int32_t temp31_1 = *(eax_68 + 4)
                                *(eax_68 + 4) -= 1
                                
                                if (temp31_1 == 1)
                                    sub_64c080(eax_68, *(eax_68 + 0xc) + 0x10)
                                    _String_8 = &data_801800
                        
                        int32_t var_8_7 = 0x2d
                    else
                        result = arg1
                        int32_t var_14_12 = 1
                        result[2] = &data_801800
                        *result = 1
                        var_8_1.b = 0x2e
                        
                        if (data_cf65bc != 0)
                            char* eax_37 = var_74
                            
                            if (eax_37 != 0 && *eax_37 != 0)
                                char* eax_38 = sub_63d4e0(&var_74)
                                int32_t temp10_1 = *(eax_38 + 4)
                                *(eax_38 + 4) -= 1
                                
                                if (temp10_1 == 1)
                                    sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
                                    var_74 = &data_801800
                        
                        var_8_1.b = 0x2f
                        
                        if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                            char* eax_40 = sub_63d4e0(&var_68)
                            int32_t temp12_1 = *(eax_40 + 4)
                            *(eax_40 + 4) -= 1
                            
                            if (temp12_1 == 1)
                                sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
                        
                        var_8_1.b = 0x30
                        
                        if (data_cf65bc != 0)
                            char* const eax_41 = var_50
                            
                            if (eax_41 != 0 && *eax_41 != 0)
                                char* eax_42 = sub_63d4e0(&var_50)
                                int32_t temp13_1 = *(eax_42 + 4)
                                *(eax_42 + 4) -= 1
                                
                                if (temp13_1 == 1)
                                    sub_64c080(eax_42, *(eax_42 + 0xc) + 0x10)
                                    var_50 = &data_801800
                        
                        var_8_1.b = 0x31
                        
                        if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                            char* eax_43 = sub_63d4e0(&var_5c)
                            int32_t temp15_1 = *(eax_43 + 4)
                            *(eax_43 + 4) -= 1
                            
                            if (temp15_1 == 1)
                                sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
                        
                        var_8_1.b = 0x32
                        
                        if (data_cf65bc != 0)
                            char* const _String_17 = _String_8
                            
                            if (_String_17 != 0 && *_String_17 != 0)
                                char* eax_44 = sub_63d4e0(&_String_8)
                                int32_t temp18_1 = *(eax_44 + 4)
                                *(eax_44 + 4) -= 1
                                
                                if (temp18_1 == 1)
                                    sub_64c080(eax_44, *(eax_44 + 0xc) + 0x10)
                                    _String_8 = &data_801800
                        
                        int32_t var_8_6 = 0x33
                else
                    sub_63d720(&var_34, U".")
                    var_8_1.b = 0x36
                    char* const _String_14 = _String_8
                    _String_24 = _String_14
                    
                    if (_String_14 != 0 && *_String_14 != 0)
                        char* eax_25 = sub_63d4e0(&_String_24)
                        *(eax_25 + 4) += 1
                    
                    void* esi_5 = var_34
                    int32_t var_14_8 = 0x120
                    char* eax_26 = &data_801800
                    
                    if (esi_5 != 0)
                        eax_26 = esi_5
                    
                    sub_63d960(&_String_24, eax_26)
                    sub_63dde0(&_String_24, &_String_10, &var_50)
                    int32_t var_14_9 = 0x20
                    var_8_1.b = 0x39
                    
                    if (data_cf65bc != 0)
                        char* const _String_25 = _String_24
                        
                        if (_String_25 != 0 && *_String_25 != 0)
                            char* eax_27 = sub_63d4e0(&_String_24)
                            int32_t temp9_1 = *(eax_27 + 4)
                            *(eax_27 + 4) -= 1
                            
                            if (temp9_1 == 1)
                                sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                    
                    var_8_1.b = 0x3b
                    
                    if (data_cf65bc != 0 && esi_5 != 0 && *esi_5 != 0)
                        char* eax_28 = sub_63d4e0(&var_34)
                        int32_t temp11_1 = *(eax_28 + 4)
                        *(eax_28 + 4) -= 1
                        
                        if (temp11_1 == 1)
                            sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
                    
                    var_8_1.b = 0x3a
                    char* const _String = &data_801800
                    char* _String_6 = _String_10
                    void* esi_6 = *arg2
                    
                    if (_String_6 != 0)
                        _String = _String_6
                    
                    atof(_String)
                    var_34 = fconvert.s(x87_r0)
                    void* eax_29 = sub_6e17c0(esi_6)
                    result = arg1
                    void* xmm0_4 = var_34
                    int32_t var_14_10 = 0x421
                    *eax_29 = 3
                    *(eax_29 + 4) = xmm0_4
                    result[2] = &data_801800
                    *result = 3
                    result[1] = eax_29
                    var_8_1.b = 0x3c
                    
                    if (data_cf65bc != 0)
                        char* _String_15 = _String_10
                        
                        if (_String_15 != 0 && *_String_15 != 0)
                            char* eax_30 = sub_63d4e0(&_String_10)
                            int32_t temp14_1 = *(eax_30 + 4)
                            *(eax_30 + 4) -= 1
                            
                            if (temp14_1 == 1)
                                sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)
                                _String_10 = &data_801800
                    
                    var_8_1.b = 0x3d
                    
                    if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                        char* eax_32 = sub_63d4e0(&var_68)
                        int32_t temp16_1 = *(eax_32 + 4)
                        *(eax_32 + 4) -= 1
                        
                        if (temp16_1 == 1)
                            sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                    
                    var_8_1.b = 0x3e
                    
                    if (data_cf65bc != 0)
                        char* const eax_33 = var_50
                        
                        if (eax_33 != 0 && *eax_33 != 0)
                            char* eax_34 = sub_63d4e0(&var_50)
                            int32_t temp19_1 = *(eax_34 + 4)
                            *(eax_34 + 4) -= 1
                            
                            if (temp19_1 == 1)
                                sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
                                var_50 = &data_801800
                    
                    var_8_1.b = 0x3f
                    
                    if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                        char* eax_35 = sub_63d4e0(&var_5c)
                        int32_t temp21_1 = *(eax_35 + 4)
                        *(eax_35 + 4) -= 1
                        
                        if (temp21_1 == 1)
                            sub_64c080(eax_35, *(eax_35 + 0xc) + 0x10)
                    
                    var_8_1.b = 0x40
                    
                    if (data_cf65bc != 0)
                        char* const _String_16 = _String_8
                        
                        if (_String_16 != 0 && *_String_16 != 0)
                            char* eax_36 = sub_63d4e0(&_String_8)
                            int32_t temp23_1 = *(eax_36 + 4)
                            *(eax_36 + 4) -= 1
                            
                            if (temp23_1 == 1)
                                sub_64c080(eax_36, *(eax_36 + 0xc) + 0x10)
                                _String_8 = &data_801800
                    
                    int32_t var_8_5 = 0x41
            else
                char* const _String_5 = _String_8
                char* const _String_3 = &data_801800
                void* esi_3 = *arg2
                
                if (_String_5 != 0)
                    _String_3 = _String_5
                
                atof(_String_3)
                var_34 = fconvert.s(x87_r0)
                void* eax_17 = sub_6e17c0(esi_3)
                result = arg1
                void* xmm0_2 = var_34
                int32_t var_14_6 = 0x41
                *eax_17 = 3
                *(eax_17 + 4) = xmm0_2
                result[2] = &data_801800
                *result = 3
                result[1] = eax_17
                var_8_1.b = 0x43
                
                if (data_cf65bc != 0)
                    char* eax_18 = var_50
                    
                    if (eax_18 != 0 && *eax_18 != 0)
                        char* eax_19 = sub_63d4e0(&var_50)
                        int32_t temp6_1 = *(eax_19 + 4)
                        *(eax_19 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                            var_50 = &data_801800
                
                var_8_1.b = 0x44
                
                if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                    char* eax_20 = sub_63d4e0(&var_5c)
                    int32_t temp7_1 = *(eax_20 + 4)
                    *(eax_20 + 4) -= 1
                    
                    if (temp7_1 == 1)
                        sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                
                var_8_1.b = 0x45
                
                if (data_cf65bc != 0)
                    char* const _String_13 = _String_8
                    
                    if (_String_13 != 0 && *_String_13 != 0)
                        char* eax_21 = sub_63d4e0(&_String_8)
                        int32_t temp8_1 = *(eax_21 + 4)
                        *(eax_21 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                            _String_8 = &data_801800
                
                int32_t var_8_4 = 0x46
        else
            char* const _String_4 = _String_8
            char* const _String_2 = &data_801800
            void* edi_2 = *arg2
            
            if (_String_4 != 0)
                _String_2 = _String_4
            
            int32_t eax_12 = atoi(_String_2)
            int32_t* eax_13 = sub_6e17c0(edi_2)
            int32_t var_14_4 = 0xd
            eax_13[1] = eax_12
            result = arg1
            *eax_13 = 2
            result[2] = &data_801800
            *result = 3
            result[1] = eax_13
            var_8_1.b = 0xd
            
            if (data_cf65bc != 0)
                void* eax_14 = var_34
                
                if (eax_14 != 0 && *eax_14 != 0)
                    char* eax_15 = sub_63d4e0(&var_5c)
                    int32_t temp4_1 = *(eax_15 + 4)
                    *(eax_15 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
            
            var_8_1.b = 0xe
            
            if (data_cf65bc != 0)
                char* const _String_12 = _String_8
                
                if (_String_12 != 0 && *_String_12 != 0)
                    char* eax_16 = sub_63d4e0(&_String_8)
                    int32_t temp5_1 = *(eax_16 + 4)
                    *(eax_16 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
                        _String_8 = &data_801800
            
            int32_t var_8_3 = 0xf
    else
        result = arg1
        *result = data_cb2f14
        result[1] = data_cb2f18
        void* eax_6 = data_cb2f1c
        result[2] = eax_6
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_63d4e0(&result[2])
            *(eax_7 + 4) += 1
        
        int32_t var_14_2 = 1
        var_8_1.b = 0xa
        
        if (data_cf65bc != 0)
            char* _String_11 = _String_8
            
            if (_String_11 != 0 && *_String_11 != 0)
                char* eax_8 = sub_63d4e0(&_String_8)
                int32_t temp3_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                    _String_8 = &data_801800
        
        int32_t var_8_2 = 0xb

if (data_cf65bc != 0)
    char* var_44
    char* eax_76 = var_44
    
    if (eax_76 != 0 && *eax_76 != 0)
        char* eax_77 = sub_63d4e0(&var_44)
        int32_t temp2_1 = *(eax_77 + 4)
        *(eax_77 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_77, *(eax_77 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
