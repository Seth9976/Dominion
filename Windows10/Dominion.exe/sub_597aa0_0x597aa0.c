// 函数: sub_597aa0
// 地址: 0x597aa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?unlink_targets@?$source_block@V?$multi_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$ordered_message_processor@I@2@@Concurrency@@UAEXXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_60 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
void* eax_3 = sub_4b9680(arg2 + 8, arg4)
void* var_48
char* _Str1_2
sub_4b06c0(eax_3, arg2 + 8, &_Str1_2, eax_3, &var_48)
int32_t var_18_1 = 0x40
int32_t var_8_1 = 1
char* _Str1_3 = _Str1_2
char* const _Str1_11 = &data_801800

if (_Str1_3 != 0)
    _Str1_11 = _Str1_3

char i

do
    i = *_Str1_11
    _Str1_11 = &_Str1_11[1]
while (i != 0)

var_48 = _Str1_11 - &_Str1_11[1]
char* eax_4

if (_Str1_3 != 0 && *_Str1_3 != i)
    eax_4 = sub_63d4e0(&_Str1_2)

char** result

if (_Str1_3 == 0 || *_Str1_3 == i || *(eax_4 + 8) == 0)
    result = arg3
    sub_63d720(result, &data_801800)
    int32_t var_18_5 = 0x41
    int32_t var_8_3 = 2
    
    if (data_cf65bc != 0)
        char* _Str1_8 = _Str1_2
        
        if (_Str1_8 != 0 && *_Str1_8 != 0)
            char* eax_54 = sub_63d4e0(&_Str1_2)
            int32_t temp0_1 = *(eax_54 + 4)
            *(eax_54 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_54, *(eax_54 + 0xc) + 0x10)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
else
    char* const var_40 = &data_801800
    char* const var_34 = &data_801800
    var_8_1.b = 4
    char* _Str1_4 = _Str1_2
    char* _Str1_9 = &data_801800
    
    if (_Str1_4 != 0)
        _Str1_9 = _Str1_4
    
    sub_597890(&var_34, &var_40, _Str1_9, &var_34)
    char* var_1c
    sub_63d720(&var_1c, &data_801800)
    int32_t edi_1 = 0
    var_8_1.b = 5
    int32_t ebx_1
    char* const esi_1
    char* const edi_2
    
    if (*(arg2 + 0x11a8) s<= 0)
    label_597bd0:
        sub_63d850(&var_1c, &var_40)
        esi_1 = var_1c
        ebx_1 = 0x40
        edi_2 = var_34
    else
        int32_t eax_6 = arg4
        void* _Str2 = arg2 + 0x48
        void* ecx_4 = arg2
        
        while (true)
            if (*(_Str2 + 0x1c) != eax_6)
                char* _Str1_1 = _Str1_2
                char* _Str1 = &data_801800
                
                if (_Str1_1 != 0)
                    _Str1 = _Str1_1
                
                if (strncmp(_Str1, _Str2, 1) == 0)
                    int32_t edi_3 = 0
                    
                    if (*(arg2 + 0x11a8) s<= 0)
                    label_597d67:
                        esi_1 = var_1c
                        char* const ecx_19 = &data_801800
                        edi_2 = var_34
                        char* const eax_19 = &data_801800
                        
                        if (esi_1 != 0)
                            eax_19 = esi_1
                        
                        if (edi_2 != 0)
                            ecx_19 = edi_2
                        
                        if (eax_19 != ecx_19)
                            if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                                char* eax_20 = sub_63d4e0(&var_1c)
                                int32_t temp5_1 = *(eax_20 + 4)
                                *(eax_20 + 4) -= 1
                                
                                if (temp5_1 == 1)
                                    sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                            
                            esi_1 = edi_2
                            var_1c = esi_1
                            
                            if (edi_2 != 0 && *edi_2 != 0)
                                char* eax_21 = sub_63d4e0(&var_1c)
                                *(eax_21 + 4) += 1
                        
                        ebx_1 = var_18_1
                    else
                        char* const esi_2 = var_34
                        void* ebx_2 = arg2 + 8
                        int32_t ecx_6 = arg4
                        void* eax_9 = arg2 + 0x64
                        void* var_44_1 = ebx_2
                        void* var_3c = eax_9
                        
                        while (true)
                            int32_t edx_4 = *eax_9
                            
                            if (edx_4 != ecx_6)
                                void* eax_10 = sub_4b9680(ebx_2, edx_4)
                                char* const var_38
                                char* var_28
                                sub_4b06c0(eax_10, ebx_2, &var_28, eax_10, &var_38)
                                var_18_1 |= 0x20
                                char* var_24 = &data_801800
                                var_38 = &data_801800
                                var_8_1.b = 8
                                char* eax_11 = var_28
                                char* ecx_9 = &data_801800
                                
                                if (eax_11 != 0)
                                    ecx_9 = eax_11
                                
                                sub_597890(&var_38, &var_24, ecx_9, &var_38)
                                char* const eax_13 = var_38
                                char* const ecx_10 = &data_801800
                                char* const edx_7 = &data_801800
                                
                                if (esi_2 != 0)
                                    ecx_10 = esi_2
                                
                                if (eax_13 != 0)
                                    edx_7 = eax_13
                                
                                int32_t ecx_12
                                
                                while (true)
                                    char ebx_3 = *edx_7
                                    char temp6_1 = *ecx_10
                                    bool c_1 = ebx_3 u< temp6_1
                                    
                                    if (ebx_3 == temp6_1)
                                        if (ebx_3 == 0)
                                            ecx_12 = 0
                                            break
                                        
                                        ebx_3 = edx_7[1]
                                        char temp7_1 = ecx_10[1]
                                        c_1 = ebx_3 u< temp7_1
                                        
                                        if (ebx_3 == temp7_1)
                                            edx_7 = &edx_7[2]
                                            ecx_10 = &ecx_10[2]
                                            
                                            if (ebx_3 != 0)
                                                continue
                                            
                                            ecx_12 = 0
                                            break
                                    
                                    ecx_12 = sbb.d(ecx_10, ecx_10, c_1) | 1
                                    break
                                
                                if (ecx_12 == 0)
                                    var_8_1.b = 9
                                    
                                    if (data_cf65bc != 0 && eax_13 != 0 && *eax_13 != 0)
                                        char* eax_30 = sub_63d4e0(&var_38)
                                        int32_t temp8_1 = *(eax_30 + 4)
                                        *(eax_30 + 4) -= 1
                                        
                                        if (temp8_1 == 1)
                                            sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)
                                    
                                    var_8_1.b = 0xa
                                    
                                    if (data_cf65bc != 0)
                                        char* eax_31 = var_24
                                        
                                        if (eax_31 != 0 && *eax_31 != 0)
                                            char* eax_32 = sub_63d4e0(&var_24)
                                            int32_t temp10_1 = *(eax_32 + 4)
                                            *(eax_32 + 4) -= 1
                                            
                                            if (temp10_1 == 1)
                                                sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                                    
                                    var_8_1.b = 0xb
                                    
                                    if (data_cf65bc != 0)
                                        char* eax_33 = var_28
                                        
                                        if (eax_33 != 0 && *eax_33 != 0)
                                            char* eax_34 = sub_63d4e0(&var_28)
                                            int32_t temp12_1 = *(eax_34 + 4)
                                            *(eax_34 + 4) -= 1
                                            
                                            if (temp12_1 == 1)
                                                sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
                                    
                                    void* ebx_5 = 1
                                    var_8_1.b = 5
                                    char var_11_1 = 1
                                    var_3c = 1
                                    
                                    if (var_48 s>= 1)
                                        void* eax_35 = arg2
                                        void* esi_3 = eax_35 + 8
                                        void* ecx_40 = eax_35 + 0x64
                                        
                                        while (true)
                                            int32_t edi_4 = 0
                                            
                                            if (*(eax_35 + 0x11a8) s> 0)
                                                void* eax_36 = ecx_40
                                                void* var_44_2 = ecx_40
                                                
                                                while (true)
                                                    void* eax_37 = sub_4b9680(esi_3, *eax_36)
                                                    void var_4c
                                                    sub_4b06c0(eax_37, esi_3, &var_28, eax_37, 
                                                        &var_4c)
                                                    var_18_1 |= 8
                                                    var_8_1.b = 0xf
                                                    char* eax_38 = var_28
                                                    char* const esi_4 = &data_801800
                                                    char* edx_33 = &data_801800
                                                    
                                                    if (eax_38 != 0)
                                                        edx_33 = eax_38
                                                    
                                                    sub_5976c0(eax_38, edx_33, &var_24, ebx_5)
                                                    var_8_1.b = 0x10
                                                    char* _Str1_6 = _Str1_2
                                                    char* _Str1_10 = &data_801800
                                                    
                                                    if (_Str1_6 != 0)
                                                        _Str1_10 = _Str1_6
                                                    
                                                    sub_5976c0(_Str1_6, _Str1_10, &var_38, ebx_5)
                                                    char* eax_39 = var_24
                                                    char* const ecx_45 = var_38
                                                    char* const edx_34 = &data_801800
                                                    
                                                    if (eax_39 != 0)
                                                        esi_4 = eax_39
                                                    
                                                    if (ecx_45 != 0)
                                                        edx_34 = ecx_45
                                                    
                                                    int32_t edx_36
                                                    
                                                    while (true)
                                                        ebx_5.b = *edx_34
                                                        char temp16_1 = *esi_4
                                                        bool c_2 = ebx_5.b u< temp16_1
                                                        
                                                        if (ebx_5.b == temp16_1)
                                                            if (ebx_5.b == 0)
                                                                edx_36 = 0
                                                                break
                                                            
                                                            ebx_5.b = edx_34[1]
                                                            char temp17_1 = esi_4[1]
                                                            c_2 = ebx_5.b u< temp17_1
                                                            
                                                            if (ebx_5.b == temp17_1)
                                                                edx_34 = &edx_34[2]
                                                                esi_4 = &esi_4[2]
                                                                
                                                                if (ebx_5.b != 0)
                                                                    continue
                                                                
                                                                edx_36 = 0
                                                                break
                                                        
                                                        edx_36 = sbb.d(edx_34, edx_34, c_2) | 1
                                                        break
                                                    
                                                    if (edx_36 == 0)
                                                        var_11_1 = 0
                                                        var_8_1.b = 0x11
                                                        
                                                        if (data_cf65bc != 0 && ecx_45 != 0
                                                                && *ecx_45 != 0)
                                                            char* eax_50 = sub_63d4e0(&var_38)
                                                            int32_t temp18_1 = *(eax_50 + 4)
                                                            *(eax_50 + 4) -= 1
                                                            
                                                            if (temp18_1 == 1)
                                                                sub_64c080(eax_50, 
                                                                    *(eax_50 + 0xc) + 0x10)
                                                                var_38 = &data_801800
                                                            
                                                            eax_39 = var_24
                                                        
                                                        var_8_1.b = 0x12
                                                        
                                                        if (data_cf65bc != 0 && eax_39 != 0
                                                                && *eax_39 != 0)
                                                            char* eax_51 = sub_63d4e0(&var_24)
                                                            int32_t temp20_1 = *(eax_51 + 4)
                                                            *(eax_51 + 4) -= 1
                                                            
                                                            if (temp20_1 == 1)
                                                                sub_64c080(eax_51, 
                                                                    *(eax_51 + 0xc) + 0x10)
                                                                var_24 = &data_801800
                                                        
                                                        var_8_1.b = 0x13
                                                        
                                                        if (data_cf65bc != 0)
                                                            char* eax_52 = var_28
                                                            
                                                            if (eax_52 != 0 && *eax_52 != 0)
                                                                char* eax_53 = sub_63d4e0(&var_28)
                                                                int32_t temp22_1 = *(eax_53 + 4)
                                                                *(eax_53 + 4) -= 1
                                                                
                                                                if (temp22_1 == 1)
                                                                    sub_64c080(eax_53, 
                                                                        *(eax_53 + 0xc) + 0x10)
                                                                    var_28 = &data_801800
                                                        
                                                        var_8_1.b = 5
                                                        ebx_5 = var_3c
                                                        goto label_598116
                                                    
                                                    var_8_1.b = 0x14
                                                    
                                                    if (data_cf65bc != 0 && ecx_45 != 0
                                                            && *ecx_45 != 0)
                                                        char* eax_40 = sub_63d4e0(&var_38)
                                                        int32_t temp19_1 = *(eax_40 + 4)
                                                        *(eax_40 + 4) -= 1
                                                        
                                                        if (temp19_1 == 1)
                                                            sub_64c080(eax_40, 
                                                                *(eax_40 + 0xc) + 0x10)
                                                            var_38 = &data_801800
                                                        
                                                        eax_39 = var_24
                                                    
                                                    var_8_1.b = 0x15
                                                    
                                                    if (data_cf65bc != 0 && eax_39 != 0
                                                            && *eax_39 != 0)
                                                        char* eax_41 = sub_63d4e0(&var_24)
                                                        int32_t temp21_1 = *(eax_41 + 4)
                                                        *(eax_41 + 4) -= 1
                                                        
                                                        if (temp21_1 == 1)
                                                            sub_64c080(eax_41, 
                                                                *(eax_41 + 0xc) + 0x10)
                                                            var_24 = &data_801800
                                                    
                                                    var_8_1.b = 0x16
                                                    
                                                    if (data_cf65bc != 0)
                                                        char* eax_42 = var_28
                                                        
                                                        if (eax_42 != 0 && *eax_42 != 0)
                                                            char* eax_43 = sub_63d4e0(&var_28)
                                                            int32_t temp23_1 = *(eax_43 + 4)
                                                            *(eax_43 + 4) -= 1
                                                            
                                                            if (temp23_1 == 1)
                                                                sub_64c080(eax_43, 
                                                                    *(eax_43 + 0xc) + 0x10)
                                                                var_28 = &data_801800
                                                    
                                                    edi_4 += 1
                                                    var_8_1.b = 5
                                                    eax_36 = var_44_2 + 0x22c
                                                    ebx_5 = var_3c
                                                    esi_3 = arg2 + 8
                                                    var_44_2 = eax_36
                                                    
                                                    if (edi_4 s>= *(arg2 + 0x11a8))
                                                        break
                                            
                                            if (var_11_1 != 0)
                                                break
                                            
                                        label_598116:
                                            eax_35 = arg2
                                            ebx_5 += 1
                                            var_3c = ebx_5
                                            esi_3 = eax_35 + 8
                                            ecx_40 = eax_35 + 0x64
                                            
                                            if (ebx_5 s> var_48)
                                                break
                                    
                                    char* _Str1_7 = _Str1_2
                                    char* _Str1_12 = &data_801800
                                    
                                    if (_Str1_7 != 0)
                                        _Str1_12 = _Str1_7
                                    
                                    int32_t esi_5 = 0
                                    var_8_1.b = 0x17
                                    char* _Str1_13 = _Str1_12
                                    
                                    if (ebx_5 s> 0)
                                        while (*_Str1_13 != 0)
                                            _Str1_13 = sub_5a0db0(_Str1_13)
                                            esi_5 += 1
                                            
                                            if (esi_5 s>= ebx_5)
                                                break
                                    
                                    var_3c = &data_801800
                                    int32_t ebx_7 = var_18_1 | 0x10
                                    int32_t var_18_3 = ebx_7
                                    sub_63da70(&var_3c, _Str1_12, _Str1_13 - _Str1_12)
                                    esi_1 = var_1c
                                    void* ecx_55 = &data_801800
                                    void* edi_5 = var_3c
                                    char* const eax_46 = &data_801800
                                    
                                    if (esi_1 != 0)
                                        eax_46 = esi_1
                                    
                                    if (edi_5 != 0)
                                        ecx_55 = edi_5
                                    
                                    if (eax_46 != ecx_55)
                                        if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                                            char* eax_47 = sub_63d4e0(&var_1c)
                                            int32_t temp15_1 = *(eax_47 + 4)
                                            *(eax_47 + 4) -= 1
                                            
                                            if (temp15_1 == 1)
                                                sub_64c080(eax_47, *(eax_47 + 0xc) + 0x10)
                                        
                                        esi_1 = edi_5
                                        var_1c = esi_1
                                        
                                        if (edi_5 != 0 && *edi_5 != 0)
                                            char* eax_48 = sub_63d4e0(&var_1c)
                                            *(eax_48 + 4) += 1
                                    
                                    ebx_1 = ebx_7 & 0xffffffef
                                    int32_t var_18_4 = ebx_1
                                    var_8_1.b = 0x18
                                    
                                    if (data_cf65bc != 0 && edi_5 != 0 && *edi_5 != 0)
                                        char* eax_49 = sub_63d4e0(&var_3c)
                                        int32_t temp14_1 = *(eax_49 + 4)
                                        *(eax_49 + 4) -= 1
                                        
                                        if (temp14_1 == 1)
                                            sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
                                    
                                    var_8_1.b = 5
                                    edi_2 = var_34
                                    break
                                
                                var_8_1.b = 0xc
                                
                                if (data_cf65bc != 0 && eax_13 != 0 && *eax_13 != 0)
                                    char* eax_14 = sub_63d4e0(&var_38)
                                    int32_t temp9_1 = *(eax_14 + 4)
                                    *(eax_14 + 4) -= 1
                                    
                                    if (temp9_1 == 1)
                                        sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                                
                                var_8_1.b = 0xd
                                
                                if (data_cf65bc != 0)
                                    char* eax_15 = var_24
                                    
                                    if (eax_15 != 0 && *eax_15 != 0)
                                        char* eax_16 = sub_63d4e0(&var_24)
                                        int32_t temp11_1 = *(eax_16 + 4)
                                        *(eax_16 + 4) -= 1
                                        
                                        if (temp11_1 == 1)
                                            sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
                                
                                var_8_1.b = 0xe
                                
                                if (data_cf65bc != 0)
                                    char* eax_17 = var_28
                                    
                                    if (eax_17 != 0 && *eax_17 != 0)
                                        char* eax_18 = sub_63d4e0(&var_28)
                                        int32_t temp13_1 = *(eax_18 + 4)
                                        *(eax_18 + 4) -= 1
                                        
                                        if (temp13_1 == 1)
                                            sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                                            var_28 = &data_801800
                                
                                ecx_6 = arg4
                                ebx_2 = var_44_1
                                var_8_1.b = 5
                                eax_9 = var_3c
                            
                            edi_3 += 1
                            eax_9 += 0x22c
                            var_3c = eax_9
                            
                            if (edi_3 s>= *(arg2 + 0x11a8))
                                goto label_597d67
                    
                    break
                
                eax_6 = arg4
                ecx_4 = arg2
            
            edi_1 += 1
            _Str2 += 0x22c
            
            if (edi_1 s>= *(ecx_4 + 0x11a8))
                goto label_597bd0
    
    *arg3 = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        char* eax_23 = sub_63d4e0(arg3)
        *(eax_23 + 4) += 1
    
    int32_t var_18_2 = ebx_1 | 1
    var_8_1.b = 0x19
    
    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_24 = sub_63d4e0(&var_1c)
        int32_t temp1_1 = *(eax_24 + 4)
        *(eax_24 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
    
    var_8_1.b = 0x1a
    
    if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
        char* eax_25 = sub_63d4e0(&var_34)
        int32_t temp2_1 = *(eax_25 + 4)
        *(eax_25 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
    
    var_8_1.b = 0x1b
    
    if (data_cf65bc != 0)
        char* const eax_26 = var_40
        
        if (eax_26 != 0 && *eax_26 != 0)
            char* eax_27 = sub_63d4e0(&var_40)
            int32_t temp3_1 = *(eax_27 + 4)
            *(eax_27 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
    
    int32_t var_8_2 = 0x1c
    
    if (data_cf65bc != 0)
        char* _Str1_5 = _Str1_2
        
        if (_Str1_5 != 0 && *_Str1_5 != 0)
            char* eax_28 = sub_63d4e0(&_Str1_2)
            int32_t temp4_1 = *(eax_28 + 4)
            *(eax_28 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
    
    result = arg3

fsbase->NtTib.ExceptionList = ExceptionList
return result
