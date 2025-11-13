// 函数: sub_705410
// 地址: 0x705410
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?dump_all_object_since_nolock@@YAXQBU_CrtMemState@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_6c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0
void* _Str1_4 = arg3

if (arg2 == 0)
    sub_63b870(&ExceptionList, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_63d720(&_Str1_4, arg2)
char* _Str1_26
sub_6a0010(&_Str1_26)
int32_t var_8_1 = 1
char* _Str1_41
sub_6a2a20(&_Str1_41, arg2)
char* _Str1_38 = _Str1_41
char* _Str1_36 = _Str1_38
char** result

if (_Str1_38 == 0 || *_Str1_38 == 0)
    _Str1_4 = arg2
    sub_63b5f0("OpenGl shader failed to read file: %s")
    result = arg3
    *result = &data_801800
    int32_t var_1c_7 = 1
    var_8_1.b = 3
    
    if (data_cf65bc != 0)
        char* _Str1_43 = _Str1_41
        
        if (_Str1_43 != 0 && *_Str1_43 != 0)
            char* eax_50 = sub_63d4e0(&_Str1_41)
            int32_t temp0_1 = *(eax_50 + 4)
            *(eax_50 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_50, *(eax_50 + 0xc) + 0x10)
                _Str1_41 = &data_801800
    
    int32_t var_8_3 = 4
else
    char* const var_18 = &data_801800
    var_8_1.b = 5
    char* var_50 = 1
    char* const var_38
    
    if (arg4 != 0)
        char* _Str1_18 = _Str1_26
        char* const _Str1_8 = &data_801800
        
        if (_Str1_18 != 0)
            _Str1_8 = _Str1_18
        
        _Str1_4 = _Str1_8
        int32_t var_74_1 = 0
        var_8_1.b = 6
        char* _Str1_9 = &data_801800
        char* _Str1_19 = *sub_63df30(&var_38, "#line %d "%s"\n")
        
        if (_Str1_19 != 0)
            _Str1_9 = _Str1_19
        
        _Str1_4 = _Str1_9
        sub_63d960(&var_18, _Str1_4)
        var_8_1.b = 7
        
        if (data_cf65bc != 0)
            char* eax_5 = var_38
            
            if (eax_5 != 0 && *eax_5 != 0)
                char* eax_6 = sub_63d4e0(&var_38)
                int32_t temp2_1 = *(eax_6 + 4)
                *(eax_6 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
                    var_38 = &data_801800
        
        var_8_1.b = 5
    
    void* _Str1_16
    _Str1_4 = sub_6c4220(&_Str1_16, arg2)
    var_8_1.b = 8
    void* _Str1_5 = _Str1_16
    _Str1_4 = _Str1_5
    
    if (_Str1_5 != 0 && *_Str1_5 != 0)
        char* eax_7 = sub_63d4e0(&_Str1_4)
        *(eax_7 + 4) += 1
    
    char* const _Str1_37
    sub_6c5250(&_Str1_37)
    var_8_1.b = 9
    char* edi_2 = *data_147d094
    char* var_54 = edi_2
    
    if (edi_2 != 0 && *edi_2 != 0)
        char* eax_8 = sub_63d4e0(&var_54)
        *(eax_8 + 4) += 1
    
    int32_t ebx_1 = 0x10
    int32_t var_14_1 = 0x10
    int32_t var_1c_1 = 0x10
    var_8_1.b = 0xa
    char* _Str1_35 = _Str1_37
    char* const _Str1_25 = _Str1_35
    
    if (_Str1_35 != 0 && *_Str1_35 != 0)
        char* eax_9 = sub_63d4e0(&_Str1_25)
        *(eax_9 + 4) += 1
    
    var_8_1.b = 0xb
    int32_t* ecx_12 = data_147d094
    _Str1_4 = &_Str1_25
    sub_63d850(ecx_12, _Str1_4)
    var_8_1.b = 0xc
    
    if (data_cf65bc != 0 && _Str1_35 != 0 && *_Str1_35 != 0)
        char* eax_10 = sub_63d4e0(&_Str1_25)
        int32_t temp3_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
            _Str1_25 = &data_801800
    
    var_8_1.b = 0xa
    char* const* ecx_15
    ecx_15.b = *_Str1_36
    
    if (ecx_15.b != 0)
        while (true)
            void* _Str1_14 = nullptr
            char* _Str1_40 = _Str1_36
            char* const _Str1_34 = _Str1_36
            void* _Str1_29
            
            do
                _Str1_29 = &_Str1_34[1]
                
                if (ecx_15.b == 0xd && *_Str1_29 == 0xa)
                    _Str1_14 = _Str1_34 - _Str1_36
                    _Str1_34 = &_Str1_34[2]
                    _Str1_25 = _Str1_34
                    break
                
                if (*_Str1_34 == 0xa)
                    _Str1_25 = _Str1_29
                    _Str1_14 = _Str1_34 - _Str1_36
                    _Str1_34 = _Str1_29
                    break
                
                _Str1_34 = _Str1_29
                _Str1_25 = _Str1_34
                ecx_15.b = *_Str1_34
            while (ecx_15.b != 0)
            
            _Str1_36 = _Str1_34
            
            if (_Str1_40 == 0)
                _Str1_4 = "XString::XString"
                sub_63b870(_Str1_29, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, 
                    _Str1_4)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            _Str1_4 = _Str1_14
            char* const _Str1_2 = &data_801800
            sub_63db30(&_Str1_2, _Str1_40, _Str1_4)
            int32_t eax_12 = var_14_1 | 2
            int32_t var_14_2 = eax_12
            int32_t var_1c_2 = eax_12
            var_8_1.b = 0xd
            char* const _Str1 = &data_801800
            char* const _Str1_1 = _Str1_2
            
            if (_Str1_1 != 0)
                _Str1 = _Str1_1
            
            eax_12.b = *_Str1
            
            if (eax_12.b != 0)
                while (eax_12.b == 0x20 || *_Str1 == 9)
                    eax_12.b = _Str1[1]
                    _Str1 = &_Str1[1]
                    
                    if (eax_12.b == 0)
                        break
            
            _Str1_4 = 8
            int32_t eax_13
            void* _Str1_10
            eax_13, _Str1_10 = strncmp(_Str1, "#include", _Str1_4)
            void* _Str1_17
            void* _Str1_15
            
            if (eax_13 == 0)
                _Str1_10.b = _Str1[8]
                void* esi_1 = &_Str1[8]
                
                if (_Str1_10.b != 0)
                    eax_13.b = _Str1_10.b
                    
                    while (_Str1_10.b == 0x20 || eax_13.b == 9)
                        eax_13.b = *(esi_1 + 1)
                        esi_1 += 1
                        _Str1_10.b = eax_13.b
                        
                        if (eax_13.b == 0)
                            break
                
                eax_13.b = *esi_1
                
                if (eax_13.b == 0x22 || eax_13.b == 0x3c)
                    _Str1_4 = &data_88d308
                    _Str1_17 = esi_1 + 1
                    uint32_t _Str1_6
                    _Str1_6, _Str1_10 = strcspn(esi_1 + 1, _Str1_4)
                    _Str1_10.b = *(esi_1 + 1 + _Str1_6)
                    
                    if (_Str1_10.b == 0x22 || _Str1_10.b == 0x3e)
                        char* _Str1_27 = _Str1_17
                        
                        if (_Str1_27 == 0)
                            _Str1_4 = "XString::XString"
                            sub_63b870(_Str1_27, &data_801800, "str", 
                                "C:\x\ax2017\Engine\xString.cpp", 0x9a, _Str1_4)
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        _Str1_4 = _Str1_6
                        _Str1_17 = &data_801800
                        _Str1_10 = sub_63db30(&_Str1_17, _Str1_27, _Str1_4)
                        _Str1_15 = _Str1_17
                    else
                        _Str1_15 = &data_801800
                        _Str1_17 = &data_801800
                else
                    _Str1_15 = &data_801800
                    _Str1_17 = &data_801800
            else
                _Str1_15 = &data_801800
                _Str1_17 = &data_801800
            
            int32_t eax_15 = var_14_2 | 4
            int32_t var_1c_3 = eax_15
            var_14_1 = eax_15
            var_8_1.b = 0xe
            
            if (_Str1_15 == 0 || *_Str1_15 == 0)
                char* const _Str1_3 = &data_801800
                
                if (_Str1_1 != 0)
                    _Str1_3 = _Str1_1
                
                _Str1_4 = _Str1_3
                sub_63d960(&var_18, _Str1_4)
                char* const eax_33 = var_18
                
                if (eax_33 == 0 || *eax_33 == 0)
                    char* const _Str1_33 = sub_64bfd0(0x12)
                    _Str1_25 = _Str1_33
                    *(_Str1_33 + 0xc) += 1
                    
                    if (*_Str1_33 == 0)
                        sub_64be70(_Str1_33)
                        _Str1_33 = _Str1_25
                    
                    int32_t* ecx_34 = *_Str1_33
                    *_Str1_33 = *ecx_34
                    *ecx_34 = 0xfafafafa
                    ecx_34[1] = 1
                    ecx_34[2] = 1
                    ecx_34[3] = 2
                    ecx_15 = &data_808894
                    var_18 = &ecx_34[4]
                    int32_t eax_37
                    
                    do
                        eax_37.b = *ecx_15
                        ecx_15 += 1
                        *(ecx_34 - "%s->%d" + ecx_15 - 1) = eax_37.b
                    while (eax_37.b != 0)
                else
                    char* eax_34 = sub_63d4e0(&var_18)
                    _Str1_4 = 1
                    int16_t* ebx_2 = *(eax_34 + 8)
                    sub_63d5e0(eax_34, ebx_2 + 1, &var_18, _Str1_4.b)
                    *(ebx_2 + var_18) = 0xa
                    _Str1_34 = _Str1_25
            else
                _Str1_4 = _Str1_10
                _Str1_4 = _Str1_15
                
                if (*_Str1_15 != 0)
                    char* eax_16 = sub_63d4e0(&_Str1_4)
                    *(eax_16 + 4) += 1
                
                sub_6a1bf0(&var_38)
                var_8_1.b = 0xf
                char* _Str1_24
                sub_63d720(&_Str1_24, U"\n")
                var_8_1.b = 0x10
                var_8_1.b = 0x12
                char* _Str1_30 = *sub_705410(arg4.d)
                _Str1_25 = _Str1_30
                
                if (_Str1_30 != 0 && *_Str1_30 != 0)
                    char* eax_19 = sub_63d4e0(&_Str1_25)
                    *(eax_19 + 4) += 1
                
                char* const _Str1_11 = &data_801800
                int32_t eax_21 = var_14_1 | 8
                int32_t var_1c_4 = eax_21
                char* _Str1_20 = _Str1_24
                
                if (_Str1_20 != 0)
                    _Str1_11 = _Str1_20
                
                _Str1_4 = _Str1_11
                sub_63d960(&_Str1_25, _Str1_4)
                char* const _Str1_23 = _Str1_25
                char* const _Str1_7 = &data_801800
                
                if (_Str1_23 != 0)
                    _Str1_7 = _Str1_23
                
                _Str1_4 = _Str1_7
                sub_63d960(&var_18, _Str1_4)
                int32_t eax_23 = eax_21 & 0xfffffff7
                var_14_1 = eax_23
                int32_t var_1c_5 = eax_23
                var_8_1.b = 0x13
                
                if (data_cf65bc != 0 && _Str1_23 != 0 && *_Str1_23 != 0)
                    char* eax_24 = sub_63d4e0(&_Str1_25)
                    int32_t temp12_1 = *(eax_24 + 4)
                    *(eax_24 + 4) -= 1
                    
                    if (temp12_1 == 1)
                        sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
                        _Str1_25 = &data_801800
                
                var_8_1.b = 0x14
                
                if (data_cf65bc != 0)
                    char* var_48
                    char* eax_25 = var_48
                    
                    if (eax_25 != 0 && *eax_25 != 0)
                        char* eax_26 = sub_63d4e0(&var_48)
                        int32_t temp13_1 = *(eax_26 + 4)
                        *(eax_26 + 4) -= 1
                        
                        if (temp13_1 == 1)
                            sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
                            var_48 = &data_801800
                
                var_8_1.b = 0x15
                
                if (data_cf65bc != 0)
                    char* _Str1_31 = _Str1_24
                    
                    if (_Str1_31 != 0 && *_Str1_31 != 0)
                        char* eax_27 = sub_63d4e0(&_Str1_24)
                        int32_t temp14_1 = *(eax_27 + 4)
                        *(eax_27 + 4) -= 1
                        
                        if (temp14_1 == 1)
                            sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                            _Str1_24 = &data_801800
                
                var_8_1.b = 0xf
                
                if (arg4 != 0)
                    char* _Str1_21 = _Str1_26
                    char* const _Str1_12 = &data_801800
                    
                    if (_Str1_21 != 0)
                        _Str1_12 = _Str1_21
                    
                    _Str1_4 = _Str1_12
                    char* var_74_6 = var_50
                    var_8_1.b = 0x16
                    char* _Str1_13 = &data_801800
                    char* var_4c
                    char* _Str1_22 = *sub_63df30(&var_4c, "#line %d "%s"\n")
                    
                    if (_Str1_22 != 0)
                        _Str1_13 = _Str1_22
                    
                    _Str1_4 = _Str1_13
                    sub_63d960(&var_18, _Str1_4)
                    var_8_1.b = 0x17
                    
                    if (data_cf65bc != 0)
                        char* eax_29 = var_4c
                        
                        if (eax_29 != 0 && *eax_29 != 0)
                            char* eax_30 = sub_63d4e0(&var_4c)
                            int32_t temp16_1 = *(eax_30 + 4)
                            *(eax_30 + 4) -= 1
                            
                            if (temp16_1 == 1)
                                sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)
                                var_4c = &data_801800
                
                var_8_1.b = 0x18
                
                if (data_cf65bc != 0)
                    char* const eax_31 = var_38
                    
                    if (eax_31 != 0 && *eax_31 != 0)
                        char* eax_32 = sub_63d4e0(&var_38)
                        int32_t temp15_1 = *(eax_32 + 4)
                        *(eax_32 + 4) -= 1
                        
                        if (temp15_1 == 1)
                            sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                            var_38 = &data_801800
                
                _Str1_1 = _Str1_2
            
            var_50 = &var_50[1]
            var_8_1.b = 0x19
            
            if (data_cf65bc != 0 && _Str1_15 != 0 && *_Str1_15 != 0)
                char* eax_38 = sub_63d4e0(&_Str1_17)
                int32_t temp10_1 = *(eax_38 + 4)
                *(eax_38 + 4) -= 1
                
                if (temp10_1 == 1)
                    sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
                    _Str1_17 = &data_801800
            
            var_8_1.b = 0x1a
            
            if (data_cf65bc != 0 && _Str1_1 != 0 && *_Str1_1 != 0)
                char* eax_39 = sub_63d4e0(&_Str1_2)
                int32_t temp11_1 = *(eax_39 + 4)
                *(eax_39 + 4) -= 1
                
                if (temp11_1 == 1)
                    sub_64c080(eax_39, *(eax_39 + 0xc) + 0x10)
                    _Str1_2 = &data_801800
            
            var_8_1.b = 0xa
            ecx_15.b = *_Str1_34
            
            if (ecx_15.b == 0)
                ebx_1 = var_14_1
                break
    
    var_50 = edi_2
    
    if (edi_2 != 0 && *edi_2 != 0)
        char* eax_40 = sub_63d4e0(&var_50)
        *(eax_40 + 4) += 1
    
    var_8_1.b = 0x1b
    int32_t* ecx_38 = data_147d094
    _Str1_4 = &var_50
    sub_63d850(ecx_38, _Str1_4)
    var_8_1.b = 0x1c
    
    if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
        char* eax_41 = sub_63d4e0(&var_50)
        int32_t temp4_1 = *(eax_41 + 4)
        *(eax_41 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_64c080(eax_41, *(eax_41 + 0xc) + 0x10)
    
    var_8_1.b = 0xa
    result = arg3
    char* const eax_42 = var_18
    *result = eax_42
    
    if (eax_42 != 0 && *eax_42 != 0)
        char* eax_43 = sub_63d4e0(result)
        *(eax_43 + 4) += 1
    
    int32_t var_1c_6 = ebx_1 | 1
    var_8_1.b = 0x1d
    
    if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
        char* eax_44 = sub_63d4e0(&var_54)
        int32_t temp5_1 = *(eax_44 + 4)
        *(eax_44 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_44, *(eax_44 + 0xc) + 0x10)
    
    var_8_1.b = 0x1e
    
    if (data_cf65bc != 0)
        char* _Str1_39 = _Str1_37
        
        if (_Str1_39 != 0 && *_Str1_39 != 0)
            char* eax_45 = sub_63d4e0(&_Str1_37)
            int32_t temp6_1 = *(eax_45 + 4)
            *(eax_45 + 4) -= 1
            
            if (temp6_1 == 1)
                sub_64c080(eax_45, *(eax_45 + 0xc) + 0x10)
                _Str1_37 = &data_801800
    
    var_8_1.b = 0x1f
    
    if (data_cf65bc != 0)
        void* _Str1_28 = _Str1_16
        
        if (_Str1_28 != 0 && *_Str1_28 != 0)
            char* eax_46 = sub_63d4e0(&_Str1_16)
            int32_t temp7_1 = *(eax_46 + 4)
            *(eax_46 + 4) -= 1
            
            if (temp7_1 == 1)
                sub_64c080(eax_46, *(eax_46 + 0xc) + 0x10)
                _Str1_16 = &data_801800
    
    var_8_1.b = 0x20
    
    if (data_cf65bc != 0)
        char* const eax_47 = var_18
        
        if (eax_47 != 0 && *eax_47 != 0)
            char* eax_48 = sub_63d4e0(&var_18)
            int32_t temp8_1 = *(eax_48 + 4)
            *(eax_48 + 4) -= 1
            
            if (temp8_1 == 1)
                sub_64c080(eax_48, *(eax_48 + 0xc) + 0x10)
    
    var_8_1.b = 0x21
    
    if (data_cf65bc != 0)
        char* _Str1_42 = _Str1_41
        
        if (_Str1_42 != 0 && *_Str1_42 != 0)
            char* eax_49 = sub_63d4e0(&_Str1_41)
            int32_t temp9_1 = *(eax_49 + 4)
            *(eax_49 + 4) -= 1
            
            if (temp9_1 == 1)
                sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
                _Str1_41 = &data_801800
    
    int32_t var_8_2 = 0x22

if (data_cf65bc != 0)
    char* _Str1_32 = _Str1_26
    
    if (_Str1_32 != 0 && *_Str1_32 != 0)
        char* eax_51 = sub_63d4e0(&_Str1_26)
        int32_t temp1_1 = *(eax_51 + 4)
        *(eax_51 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_51, *(eax_51 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
