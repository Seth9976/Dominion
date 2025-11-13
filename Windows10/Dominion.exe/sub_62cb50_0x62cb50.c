// 函数: sub_62cb50
// 地址: 0x62cb50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$parse_floating_point_possible_nan@_WV?$input_adapter_character_source@V?$stream_input_adapter@_W@__crt_stdio_input@@@__crt_strtox@@_K@__crt_strtox@@YA?AW4floating_point_parse_result@0@AA_WAAV?$input_adapter_character_source@V?$stream_input_adapter@_W@__crt_stdio_input@@@0@_K@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_3 = *arg2

if (eax_3 != 0 && eax_3 != &data_801800)
    if (data_cf65bc != 0 && *eax_3 != 0)
        char* eax_4 = sub_63d4e0(arg2)
        int32_t temp0_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
    
    *arg2 = &data_801800

int32_t* arg_4
int32_t* ebx_1 = arg_4
char* eax_5 = *ebx_1

if (eax_5 != 0 && eax_5 != &data_801800)
    if (data_cf65bc != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(ebx_1)
        int32_t temp1_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
    
    *ebx_1 = &data_801800

char* eax_7 = *arg4

if (eax_7 != 0 && eax_7 != &data_801800)
    if (data_cf65bc != 0 && *eax_7 != 0)
        char* eax_8 = sub_63d4e0(arg4)
        int32_t temp2_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
    
    *arg4 = &data_801800

char* eax_9 = *arg3
char* const ecx_6 = &data_801800

if (eax_9 != 0)
    ecx_6 = eax_9

uint8_t* _Str1 = strstr(ecx_6, &data_86d2b4)
char const* const var_38_1
int32_t var_34_2
char const* const var_30
int32_t eax_11
char* ecx_7
int32_t edi_1
char* _Str1_1

if (_Str1 == 0)
    char* eax_12 = *arg3
    char* const ecx_8 = &data_801800
    
    if (eax_12 != 0)
        ecx_8 = eax_12
    
    _Str1 = strstr(ecx_8, &data_86d2b8)
    
    if (_Str1 == 0)
        uint8_t* eax_14 = *arg3
        uint8_t* ecx_9 = &data_801800
        
        if (eax_14 != 0)
            ecx_9 = eax_14
        
        edi_1 = strstr(ecx_9, &data_86d2c8)
        char* ecx_11 = *arg3
        
        if (edi_1 != 0)
            char* const ebx_3 = &data_801800
            
            if (ecx_11 != 0)
                ebx_3 = ecx_11
            
            if (edi_1 - 1 - ebx_3 s>= 1)
                for (_Str1 = edi_1 - 2; _Str1 u>= ebx_3; _Str1 -= 1)
                    if (strncmp(_Str1, U"|", 1) == 0)
                        goto label_62cd2c
            
            _Str1 = nullptr
            goto label_62cd2c
        
        char* eax_17 = &data_801800
        
        if (ecx_11 != 0)
            eax_17 = ecx_11
        
        eax_11 = strstr(eax_17, &data_86d2d8)
        
        if (eax_11 == 0)
            goto label_62cd68
        
        while (true)
            _Str1_1 = eax_11 + 1
            
            if (*(eax_11 + 1) == 0)
                int32_t esi_1 = eax_11 - 1
                char* const ebx_4 = &data_801800
                char* eax_19 = *arg3
                
                if (eax_19 != 0)
                    ebx_4 = eax_19
                
                if (esi_1 - ebx_4 s>= 1)
                    _Str1 = esi_1 - 1
                
                if (esi_1 - ebx_4 s< 1 || _Str1 u< ebx_4)
                label_62cdba:
                    _Str1 = nullptr
                else
                    while (strncmp(_Str1, U"|", 1) != 0)
                        _Str1 -= 1
                        
                        if (_Str1 u< ebx_4)
                            goto label_62cdba
                
                break
            
            eax_11 = strstr(_Str1_1, &data_86d2d8)
            
            if (eax_11 == 0)
                goto label_62cd68
        
        goto label_62cdbe
    
    eax_11 = strstr(_Str1, &data_86d2cc)
    edi_1 = eax_11
    
    if (edi_1 != 0)
        goto label_62cd2c
    
    var_30 = "FindItem"
    var_34_2 = 0x10714
    var_38_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_7 = &data_8656ac
else
    eax_11 = strstr(_Str1, &data_86d2b0)
    edi_1 = eax_11
    
    if (edi_1 != 0)
    label_62cd2c:
        _Str1_1 = edi_1 + 1
    label_62cdbe:
        
        if (_Str1_1 != 0)
            void* _Str1_2 = &_Str1_1[7]
            
            if (strncmp(_Str1_1, "//---//", 7) != 0)
                _Str1_2 = _Str1_1
            
            _Str1_1 = _Str1_2
            
            if (strncmp(_Str1_1, "////", 4) != 0)
                if (strncmp(_Str1_1, "//", 2) == 0)
                    _Str1_1 = &_Str1_1[2]
            else
                _Str1_1 = &_Str1_1[4]
        
        if (_Str1 == 0)
        label_62cd68:
            eax_11.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_11
        
        char* const var_14 = &data_801800
        sub_63db30(&var_14, _Str1, _Str1_1 - _Str1)
        int32_t var_8_1 = 0
        sub_63d850(arg2, &var_14)
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* const eax_24 = var_14
            
            if (eax_24 != 0 && *eax_24 != 0)
                char* eax_25 = sub_63d4e0(&var_14)
                int32_t temp3_1 = *(eax_25 + 4)
                *(eax_25 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                    var_14 = &data_801800
        
        int32_t var_8_3 = 0xffffffff
        char* const eax_27 = *arg3
        uint32_t esi_2
        
        if (eax_27 != 0)
            esi_2 = _Str1 - eax_27
        else
            esi_2 = _Str1 - &data_801800
            eax_27 = &data_801800
        
        var_14 = &data_801800
        sub_63db30(&var_14, eax_27, esi_2)
        int32_t var_8_4 = 2
        sub_63d850(arg_4, &var_14)
        int32_t var_8_5 = 3
        
        if (data_cf65bc != 0)
            char* const eax_28 = var_14
            
            if (eax_28 != 0 && *eax_28 != 0)
                char* eax_29 = sub_63d4e0(&var_14)
                int32_t temp4_1 = *(eax_29 + 4)
                *(eax_29 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                    var_14 = &data_801800
        
        int32_t var_8_6 = 0xffffffff
        char* const esi_3 = *arg3
        int32_t eax_31
        
        if (esi_3 == 0)
            esi_3 = &data_801800
            eax_31 = 0
        else if (*esi_3 == 0)
            eax_31 = 0
        else
            eax_31 = *(sub_63d4e0(arg3) + 8)
        
        eax_11 = eax_31 - _Str1_1 + esi_3
        
        if (_Str1_1 != 0)
            arg_4 = &data_801800
            sub_63db30(&arg_4, _Str1_1, eax_11)
            int32_t var_8_7 = 4
            sub_63d850(arg4, &arg_4)
            int32_t var_8_8 = 5
            char* eax_34
            
            if (data_cf65bc != 0)
                eax_34 = arg_4
                
                if (eax_34 != 0 && *eax_34 != 0)
                    eax_34 = sub_63d4e0(&arg_4)
                    int32_t temp5_1 = *(eax_34 + 4)
                    *(eax_34 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
            
            eax_34.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_34
        
        var_30 = "XString::XString"
        var_34_2 = 0x9a
        var_38_1 = "C:\x\ax2017\Engine\xString.cpp"
        ecx_7 = &data_871e0c
    else
        var_30 = "FindItem"
        var_34_2 = 0x1070e
        var_38_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx_7 = &data_8656ac
sub_63b870(eax_11, &data_801800, ecx_7, var_38_1, var_34_2, var_30)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
