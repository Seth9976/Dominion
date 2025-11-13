// 函数: sub_4e6680
// 地址: 0x4e6680
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$throw_exception@Vrounding_error@math@boost@@@boost@@YAXABVrounding_error@math@0@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_68 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* _String_1 = arg2
int32_t* ebx = arg3
int32_t* var_28 = ebx
memset(ebx, 0, 0x5020)
char* eax_3 = *_String_1
char* const ecx = &data_801800

if (eax_3 != 0)
    ecx = eax_3

char* const var_24 = ecx

do
    eax_3.b = *ecx
    ecx = &ecx[1]
while (eax_3.b != 0)

void* var_20 = ecx - &ecx[1]
void* var_40
sub_4dc550(&var_40, &var_24)
int32_t var_58
sub_4dc900(&var_58)
char* eax_4 = var_40

if (eax_4 != var_58)
    void* edi_1 = 0x5010
    void* var_18_1 = 0x5010
    
    while (true)
        uint32_t var_3c
        
        if (eax_4 != 0 && *eax_4 == 0x2d)
            var_3c -= 3
            var_40 = &eax_4[3]
        
        uint32_t eax_6 = sub_4e6560(_String_1)
        
        if (eax_6 == 0)
            void* eax_7 = sub_4e5db0(&var_40)
            void* ecx_4 = eax_7
            char const* const var_74_2
            int32_t var_70_3
            char const* const var_6c_5
            int32_t* _Str1_1
            uint32_t _MaxCount
            char* ecx_23
            
            if (ecx_4 == 0)
                eax_7 = var_40
                
                if (eax_7 == 0)
                    var_6c_5 = "XString::XString"
                    var_70_3 = 0x9a
                    var_74_2 = "C:\x\ax2017\Engine\xString.cpp"
                    ecx_23 = &data_871e0c
                label_4e6aab:
                    sub_63b870(eax_7, &data_801800, ecx_23, var_74_2, var_70_3, var_6c_5)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                var_20 = &data_801800
                sub_63db30(&var_20, eax_7, var_3c)
                int32_t var_8_1 = 0
                char* const eax_8 = &data_801800
                void* edi_2 = var_20
                char const* const ecx_6 = "general"
                
                if (edi_2 != 0)
                    eax_8 = edi_2
                
                int32_t eax_10
                char edx_1
                
                while (true)
                    edx_1 = *eax_8
                    char const temp1_1 = *ecx_6
                    bool c_1 = edx_1 u< temp1_1
                    
                    if (edx_1 == temp1_1)
                        if (edx_1 == 0)
                            eax_10 = 0
                            break
                        
                        edx_1 = eax_8[1]
                        char temp4_1 = ecx_6[1]
                        c_1 = edx_1 u< temp4_1
                        
                        if (edx_1 == temp4_1)
                            eax_8 = &eax_8[2]
                            ecx_6 = &ecx_6[2]
                            
                            if (edx_1 != 0)
                                continue
                            
                            eax_10 = 0
                            break
                    
                    eax_10 = sbb.d(eax_8, eax_8, c_1) | 1
                    break
                
                _String_1 = _Str1_1
                
                if (eax_10 != 0 || _String_1 == 0)
                    void* eax_11 = &data_801800
                    char const* const ecx_7 = "expansion"
                    
                    if (edi_2 != 0)
                        eax_11 = edi_2
                    
                    int32_t eax_13
                    
                    while (true)
                        edx_1 = *eax_11
                        char const temp5_1 = *ecx_7
                        bool c_2 = edx_1 u< temp5_1
                        
                        if (edx_1 == temp5_1)
                            if (edx_1 == 0)
                                eax_13 = 0
                                break
                            
                            edx_1 = *(eax_11 + 1)
                            char temp6_1 = ecx_7[1]
                            c_2 = edx_1 u< temp6_1
                            
                            if (edx_1 == temp6_1)
                                eax_11 += 2
                                ecx_7 = &ecx_7[2]
                                
                                if (edx_1 != 0)
                                    continue
                                
                                eax_13 = 0
                                break
                        
                        eax_13 = sbb.d(eax_11, eax_11, c_2) | 1
                        break
                    
                    if (eax_13 == 0 && _String_1 != 0)
                        goto label_4e67f8
                else
                label_4e67f8:
                    char* const _String_2 = &data_801800
                    sub_63db30(&_String_2, _String_1, _MaxCount)
                    _String_1 = _String_2
                    char* const _String = &data_801800
                    
                    if (_String_1 != 0)
                        _String = _String_1
                    
                    ebx[2] = atoi(_String)
                    var_8_1.b = 1
                    
                    if (data_cf65bc != 0 && _String_1 != 0 && *_String_1 != 0)
                        char* eax_15 = sub_63d4e0(&_String_2)
                        int32_t temp7_1 = *(eax_15 + 4)
                        *(eax_15 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
                            _String_2 = &data_801800
                
                int32_t var_8_2 = 2
                
                if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
                    char* eax_16 = sub_63d4e0(&var_20)
                    int32_t temp8_1 = *(eax_16 + 4)
                    *(eax_16 + 4) -= 1
                    
                    if (temp8_1 == 1)
                        sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
                        var_20 = &data_801800
                
                edi_1 = var_18_1
                int32_t var_8_3 = 0xffffffff
            else if (ecx_4 s> 0x834)
                eax_7 = ecx_4 - 0x866
                
                if (eax_7 u> 0xc8)
                label_4e6a92:
                    var_6c_5 = "FromCampaignString"
                    var_70_3 = 0x1749
                label_4e6a9c:
                    ecx_23 = "Halt"
                    var_74_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp"
                    goto label_4e6aab
                
                eax_7 = zx.d(*(eax_7 + &lookup_table_4e6ad0))
                
                switch (eax_7)
                    case nullptr
                        _String_1 = edi_1 + ebx
                        edi_1 += 8
                        *_String_1 = ecx_4
                        var_18_1 = edi_1
                        _String_1[1] = sub_4e5db0(&_Str1_1)
                    case 1
                        int32_t* eax_25 = edi_1 + ebx
                        edi_1 += 8
                        *eax_25 = ecx_4
                        var_18_1 = edi_1
                    case 2
                        goto label_4e6a92
            else if (ecx_4 == 0x834)
                _String_1 = edi_1 + ebx
                edi_1 += 8
                *_String_1 = 0x834
                var_18_1 = edi_1
                _String_1[1] = sub_4e6560(_String_1)
            else if (ecx_4 s> 0x384)
                if (ecx_4 == 0x3e8)
                    _String_1 = edi_1 + ebx
                    int32_t var_6c_8 = 3
                    char* _Str1_2 = _Str1_1
                    edi_1 += 8
                    var_18_1 = edi_1
                    *_String_1 = 0x3e8
                    _String_1[1] = sub_4dd260(eax_7, _MaxCount, _Str1_2, ecx_4)
                else
                    if (ecx_4 != 0x5dc)
                        goto label_4e6a92
                    
                    _String_1 = edi_1 + ebx
                    int32_t var_6c_7 = 3
                    *_String_1 = ecx_4
                    edi_1 += 8
                    var_18_1 = edi_1
                    _String_1[1] = sub_4dd260(eax_7, _MaxCount, _Str1_1, ecx_4)
            else if (ecx_4 == 0x384)
                void* eax_18 = edi_1 + ebx
                int32_t* _Str1 = _Str1_1
                *eax_18 = 0x384
                var_18_1 = edi_1 + 8
                _String_1 = &data_77f298
                var_20 = eax_18
                
                while (true)
                    if (_strnicmp(_Str1, _String_1[1], _MaxCount) == 0)
                        ebx = var_28
                        edi_1 = var_18_1
                        *(var_20 + 4) = *_String_1
                        break
                    
                    _String_1 = &_String_1[7]
                    
                    if (_String_1 == &data_77fca8)
                        ebx = var_28
                        edi_1 = var_18_1
                        *(var_20 + 4) = 0
                        break
            else
                eax_7 = ecx_4 - 0x190
                void* temp3_1
                
                if (ecx_4 != 0x190)
                    temp3_1 = eax_7
                    eax_7 -= 0x1e
                
                if (ecx_4 != 0x190 && temp3_1 != 0x1e)
                    goto label_4e6a92
                
                ebx[0x1403] = ecx_4
                *ebx = 1
                
                if (_MaxCount != 0)
                    var_6c_5 = "ToThemes"
                    var_70_3 = 0x16da
                    goto label_4e6a9c
        else
            *ebx = 0
            ebx[1] = eax_6
            ebx[0x1403] = 0x140
        
        sub_4dc8e0(&var_40)
        eax_4 = var_40
        
        if (eax_4 == var_58)
            break

int32_t* esi = arg4
void* edi_5 = &ebx[3]
int32_t i_1 = 0xa
int32_t i

do
    sub_4e6290(edi_5, esi)
    esi = &esi[1]
    edi_5 += 0x800
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t* result

if (*var_28 != i_1)
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

result.b = var_28[1] != i_1
fsbase->NtTib.ExceptionList = ExceptionList
return result
