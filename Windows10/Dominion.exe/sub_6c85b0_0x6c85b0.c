// 函数: sub_6c85b0
// 地址: 0x6c85b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_77063e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint8_t* esi = arg2
uint8_t* var_38 = esi
int32_t var_24 = 0
char const (** _Str2)[0x5] = strchr(esi, 0x2e)
char* _Str1 = strrchr(esi, 0x2e)
char* const _Str2_1 = _Str1

if (_Str1 == 0)
    sub_63d720(arg1, &data_801800)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

void* eax_5 = _Str1 - esi

if (esi == 0)
    sub_63b870(eax_5, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* const var_18 = &data_801800
sub_63db30(&var_18, esi, eax_5)
int32_t var_8_1 = 1
char* const edi_1 = var_18
char* edx = &data_801800

if (edi_1 != 0)
    edx = edi_1

char* const var_14
sub_6c4220(&var_14, edx)
var_8_1.b = 2
char** ebx_1
char const (** var_2c)[0x5]
char* const var_28

if (_stricmp(_Str1, ".xml") != 0)
    int32_t eax_30 = 0
    int32_t var_30_2 = 0
    
    while (true)
        sub_6c4a30(eax_30, &var_2c, eax_30, &var_28)
        int32_t esi_2 = 0
        
        if (var_28 s> 0)
            while (true)
                if (_stricmp(var_2c[esi_2], _Str2) != 0 && _stricmp(var_2c[esi_2], _Str2_1) != 0)
                    esi_2 += 1
                    
                    if (esi_2 s>= var_28)
                        goto label_6c8a25
                    
                    continue
                
                void* eax_40 = &data_800338
                char* ebx_3
                
                while (true)
                    if (*eax_40 == var_30_2)
                        ebx_3 = *(eax_40 + 4)
                        break
                    
                    eax_40 += 8
                    
                    if (*(eax_40 + 4) == 0)
                        ebx_3 = &data_801800
                        break
                
                char* const eax_41 = var_14
                
                if (eax_41 == 0 || *eax_41 == 0)
                    int32_t** eax_44 = sub_64bfd0(0x12)
                    eax_44[3] += 1
                    
                    if (*eax_44 == 0)
                        sub_64be70(eax_44)
                    
                    int32_t* ecx_45 = *eax_44
                    *eax_44 = *ecx_45
                    *ecx_45 = 0xfafafafa
                    ecx_45[1] = 1
                    ecx_45[2] = 1
                    ecx_45[3] = 2
                    char* ecx_46 = &data_8033d0
                    var_14 = &ecx_45[4]
                    int32_t* eax_45
                    
                    do
                        eax_45.b = *ecx_46
                        ecx_46 = &ecx_46[1]
                        ecx_46[ecx_45 + 0xff7fcc3f] = eax_45.b
                    while (eax_45.b != 0)
                else
                    char* eax_42 = sub_63d4e0(&var_14)
                    int16_t* esi_3 = *(eax_42 + 8)
                    sub_63d5e0(eax_42, esi_3 + 1, &var_14, 1)
                    *(esi_3 + var_14) = 0x2e
                
                if (*ebx_3 != 0)
                    char* const eax_46 = var_14
                    
                    if (eax_46 == 0 || *eax_46 == 0)
                        sub_63d720(&var_14, ebx_3)
                    else
                        char* esi_5 = ebx_3
                        int32_t ecx_48 = *(sub_63d4e0(&var_14) + 8)
                        char* eax_47
                        
                        do
                            eax_47.b = *esi_5
                            esi_5 = &esi_5[1]
                        while (eax_47.b != 0)
                        
                        void* esi_6 = esi_5 - &esi_5[1]
                        sub_63d5e0(eax_47, esi_6 + ecx_48, &var_14, 1)
                        memcpy(&var_14[ecx_48], ebx_3, esi_6 + 1)
                
                ebx_1 = arg1
                char* const eax_51 = var_14
                *ebx_1 = eax_51
                
                if (eax_51 != 0 && *eax_51 != 0)
                    char* eax_52 = sub_63d4e0(ebx_1)
                    *(eax_52 + 4) += 1
                    eax_51 = var_14
                
                int32_t var_24_6 = 1
                var_8_1.b = 0x11
                
                if (data_cf65bc != 0 && eax_51 != 0 && *eax_51 != 0)
                    char* eax_53 = sub_63d4e0(&var_14)
                    int32_t temp5_1 = *(eax_53 + 4)
                    *(eax_53 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_53, *(eax_53 + 0xc) + 0x10)
                        var_14 = &data_801800
                
                int32_t var_8_7 = 0x12
                break
            
            break
        
    label_6c8a25:
        eax_30 = var_30_2 + 1
        var_30_2 = eax_30
        
        if (eax_30 s>= 0x26)
            ebx_1 = arg1
            sub_63d720(ebx_1, &data_801800)
            int32_t var_24_5 = 1
            var_8_1.b = 0x13
            
            if (data_cf65bc != 0)
                char* const eax_36 = var_14
                
                if (eax_36 != 0 && *eax_36 != 0)
                    char* eax_37 = sub_63d4e0(&var_14)
                    int32_t temp1_1 = *(eax_37 + 4)
                    *(eax_37 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(eax_37, *(eax_37 + 0xc) + 0x10)
                        var_14 = &data_801800
            
            int32_t var_8_6 = 0x14
            break
else
    char* eax_7 = var_14
    char* const ecx_5 = &data_801800
    
    if (eax_7 != 0)
        ecx_5 = eax_7
    
    int32_t eax_8 = sub_6b7ef0(ecx_5)
    
    if (eax_8 != 0)
        sub_6c4a30(&var_2c, &_Str2, eax_8, &var_2c)
        
        if (var_2c != 0)
            void* const eax_15 = &data_800338
            char* ecx_13
            
            while (true)
                if (*eax_15 == eax_8)
                    ecx_13 = *(eax_15 + 4)
                    break
                
                eax_15 += 8
                
                if (*(eax_15 + 4) == 0)
                    ecx_13 = &data_801800
                    break
            
            do
                eax_15.b = *ecx_13
                ecx_13 = &ecx_13[1]
            while (eax_15.b != 0)
            
            int32_t ebx_2 = 0
            
            if (var_2c s<= 0)
            label_6c8967:
                ebx_1 = arg1
                char* const eax_27 = var_14
                *ebx_1 = eax_27
                
                if (eax_27 != 0 && *eax_27 != 0)
                    char* eax_28 = sub_63d4e0(ebx_1)
                    *(eax_28 + 4) += 1
                    eax_27 = var_14
                
                int32_t var_24_4 = 1
                var_8_1.b = 0xf
                
                if (data_cf65bc != 0 && eax_27 != 0 && *eax_27 != 0)
                    char* eax_29 = sub_63d4e0(&var_14)
                    int32_t temp4_1 = *(eax_29 + 4)
                    *(eax_29 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                        var_14 = &data_801800
                
                int32_t var_8_5 = 0x10
            else
                void* eax_17 = eax_5 - (ecx_13 - &ecx_13[1] + 1)
                void* var_30_1 = eax_17
                
                while (true)
                    var_28 = &data_801800
                    var_8_1.b = 7
                    sub_63db30(&var_28, esi, eax_17)
                    sub_63d960(&var_28, _Str2[ebx_2])
                    char* const esi_1 = var_28
                    char* edx_7 = &data_801800
                    
                    if (esi_1 != 0)
                        edx_7 = esi_1
                    
                    sub_6c4050(&_Str2_1, edx_7)
                    var_8_1.b = 8
                    char* const lpFileName = &data_801800
                    char* const eax_19 = _Str2_1
                    
                    if (eax_19 != 0)
                        lpFileName = eax_19
                    
                    if (GetFileAttributesA(lpFileName) != 0xffffffff)
                        ebx_1 = arg1
                        sub_63d720(ebx_1, &data_801800)
                        int32_t var_24_3 = 1
                        var_8_1.b = 9
                        
                        if (data_cf65bc != 0)
                            char* const _Str2_3 = _Str2_1
                            
                            if (_Str2_3 != 0 && *_Str2_3 != 0)
                                char* eax_23 = sub_63d4e0(&_Str2_1)
                                int32_t temp6_1 = *(eax_23 + 4)
                                *(eax_23 + 4) -= 1
                                
                                if (temp6_1 == 1)
                                    sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                                    _Str2_1 = &data_801800
                        
                        var_8_1.b = 0xa
                        
                        if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                            char* eax_24 = sub_63d4e0(&var_28)
                            int32_t temp8_1 = *(eax_24 + 4)
                            *(eax_24 + 4) -= 1
                            
                            if (temp8_1 == 1)
                                sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
                        
                        var_8_1.b = 0xb
                        
                        if (data_cf65bc != 0)
                            char* const eax_25 = var_14
                            
                            if (eax_25 != 0 && *eax_25 != 0)
                                char* eax_26 = sub_63d4e0(&var_14)
                                int32_t temp10_1 = *(eax_26 + 4)
                                *(eax_26 + 4) -= 1
                                
                                if (temp10_1 == 1)
                                    sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
                                    var_14 = &data_801800
                        
                        int32_t var_8_4 = 0xc
                        break
                    
                    var_8_1.b = 0xd
                    
                    if (data_cf65bc != 0)
                        char* _Str2_2 = _Str2_1
                        
                        if (_Str2_2 != 0 && *_Str2_2 != 0)
                            char* eax_21 = sub_63d4e0(&_Str2_1)
                            int32_t temp7_1 = *(eax_21 + 4)
                            *(eax_21 + 4) -= 1
                            
                            if (temp7_1 == 1)
                                sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                                _Str2_1 = &data_801800
                    
                    var_8_1.b = 0xe
                    
                    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                        char* eax_22 = sub_63d4e0(&var_28)
                        int32_t temp9_1 = *(eax_22 + 4)
                        *(eax_22 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
                    
                    ebx_2 += 1
                    var_8_1.b = 2
                    
                    if (ebx_2 s>= var_2c)
                        goto label_6c8967
                    
                    esi = var_38
                    eax_17 = var_30_1
        else
            ebx_1 = arg1
            char* const eax_12 = var_14
            *ebx_1 = eax_12
            
            if (eax_12 != 0 && *eax_12 != 0)
                char* eax_13 = sub_63d4e0(ebx_1)
                *(eax_13 + 4) += 1
                eax_12 = var_14
            
            int32_t var_24_2 = 1
            var_8_1.b = 5
            
            if (data_cf65bc != 0 && eax_12 != 0 && *eax_12 != 0)
                char* eax_14 = sub_63d4e0(&var_14)
                int32_t temp2_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                    var_14 = &data_801800
            
            int32_t var_8_3 = 6
    else
        ebx_1 = arg1
        sub_63d720(ebx_1, &data_801800)
        int32_t var_24_1 = 1
        var_8_1.b = 3
        
        if (data_cf65bc != 0)
            char* eax_9 = var_14
            
            if (eax_9 != 0 && *eax_9 != 0)
                char* eax_10 = sub_63d4e0(&var_14)
                int32_t temp0_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                    var_14 = &data_801800
        
        int32_t var_8_2 = 4

if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
    char* eax_38 = sub_63d4e0(&var_18)
    int32_t temp3_1 = *(eax_38 + 4)
    *(eax_38 + 4) -= 1
    
    if (temp3_1 == 1)
        sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx_1
