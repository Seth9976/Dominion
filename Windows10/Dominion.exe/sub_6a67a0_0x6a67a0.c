// 函数: sub_6a67a0
// 地址: 0x6a67a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f7c5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = data_147ac64
esi[3] += 1

if (*esi == 0)
    sub_6a64c0(esi)

int32_t* ecx_1 = *esi
*esi = *ecx_1
ecx_1[3] = 0
ecx_1[4] = 0
ecx_1[5] = 0
*ecx_1 = &data_801800
ecx_1[1] = &data_801800
ecx_1[2] = &data_801800
int32_t* eax_4 = sub_64bfd0(0xc)
eax_4[3] += 1

if (*eax_4 == 0)
    sub_64be70(eax_4)

int32_t* ecx_3 = *eax_4
int32_t* edx = ecx_1
*eax_4 = *ecx_3
ecx_3[2] = 0
*ecx_3 = edx
ecx_3[1] = 0
ecx_3[2] = arg1[2]
void* eax_7 = arg1[2]

if (eax_7 == 0)
    arg1[1] = ecx_3
else
    *(eax_7 + 4) = ecx_3

arg1[3] += 1
arg1[2] = ecx_3

if (*(arg2 + 4) != 3)
    goto label_6a687a

char const* const var_3c_4
int32_t (* eax_13)(char const* _Str1, char const* _Str2, uint32_t _MaxCount)

if (sub_7076e0(arg2) == 0)
label_6a6c38:
    char* eax_37 = *arg1
    char* const ecx_40 = &data_801800
    
    if (eax_37 != 0)
        ecx_40 = eax_37
    
    char* const var_38_12 = ecx_40
    var_3c_4 = "failed to read open block '%s'"
else
    edx = ecx_1
label_6a687a:
    
    if (*(arg2 + 4) != 1)
        goto label_6a6c38
    
    char* eax_9 = *edx
    void* var_1c_1 = arg2 + 0xc
    
    if (eax_9 != 0)
        var_1c_1 = arg2 + 0xc
        
        if (eax_9 != &data_801800)
            if (data_cf65bc != 0 && *eax_9 != 0)
                char* eax_10 = sub_63d4e0(edx)
                int32_t temp0_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                
                edx = ecx_1
            
            *edx = &data_801800
            var_1c_1 = arg2 + 0xc
    
    void* eax_11 = *(arg2 + 0x10)
    
    if (eax_11 s> 0)
        sub_63da70(edx, *(arg2 + 0xc), eax_11)
    
    if (sub_7076e0(arg2) == 0)
        goto label_6a6c38
    
    eax_13 = *(arg2 + 4)
    char* const esi_3 = &data_801800
    
    if (eax_13 != 1)
        int32_t (* ecx_10)(char const* _Str1, char const* _Str2, uint32_t _MaxCount) = eax_13
        
        while (true)
            char* const esi_4
            char* const _Str1
            bool cond:2_1
            
            if (eax_13 == 3)
                char** edi_3 = ecx_1
                char eax_35
                
                if (ecx_10 == 3)
                    char* eax_32 = edi_3[1]
                    
                    if (eax_32 != 0 && eax_32 != &data_801800)
                        if (data_cf65bc != 0 && *eax_32 != 0)
                            char* eax_33 = sub_63d4e0(&edi_3[1])
                            int32_t temp1_1 = *(eax_33 + 4)
                            *(eax_33 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
                        
                        edi_3[1] = &data_801800
                    
                    void* eax_34 = *(arg2 + 0x10)
                    
                    if (eax_34 s> 0)
                        sub_63da70(&edi_3[1], *(arg2 + 0xc), eax_34)
                    
                    eax_35 = sub_7076e0(arg2)
                
                if (ecx_10 != 3 || eax_35 == 0)
                    char* eax_36 = *edi_3
                    char* ecx_37 = &data_801800
                    
                    if (eax_36 != 0)
                        ecx_37 = eax_36
                    
                    char* var_38_11 = ecx_37
                    var_3c_4 = "failed to read value '%s'"
                    goto label_6a6c4b
                
                char* _Str1_2 = *edi_3
                esi_4 = &data_801800
                _Str1 = &data_801800
                
                if (_Str1_2 != 0)
                    _Str1 = _Str1_2
                
                cond:2_1 = *(arg2 + 4) != 3
            else
                esi_4 = &data_801800
                
                if (eax_13 != 4)
                    if (eax_13 != 2)
                        char* eax_26 = *ecx_1
                        
                        if (eax_26 != 0)
                            esi_4 = eax_26
                        
                        char* const var_38_7 = esi_4
                        var_3c_4 = "bad block '%s'"
                        goto label_6a6c4b
                    
                    char* const var_20 = &data_801800
                    int32_t var_8_1 = 0
                    
                    if (ecx_10 == eax_13)
                        void* eax_14 = *(var_1c_1 + 4)
                        
                        if (eax_14 s> 0)
                            sub_63da70(&var_20, *var_1c_1, eax_14)
                            esi_4 = var_20
                        
                        char* const edi_1 = &data_801800
                        char* const var_18 = &data_801800
                        var_8_1.b = 1
                        char* const edx_5 = &data_801800
                        
                        if (esi_4 != 0)
                            edx_5 = esi_4
                        
                        if (sub_7077c0(arg2, edx_5).b != 0)
                            void* eax_15 = *(var_1c_1 + 4)
                            
                            if (eax_15 s> 0)
                                sub_63da70(&var_18, *var_1c_1, eax_15)
                                edi_1 = var_18
                            
                            if (sub_7076e0(arg2).b != 0)
                                char* const eax_16 = &data_801800
                                char const* const ecx_17 = "label"
                                
                                if (esi_4 != 0)
                                    eax_16 = esi_4
                                
                                int32_t eax_18
                                
                                while (true)
                                    char edx_6 = *eax_16
                                    char const temp4_1 = *ecx_17
                                    bool c_1 = edx_6 u< temp4_1
                                    
                                    if (edx_6 == temp4_1)
                                        if (edx_6 == 0)
                                            eax_18 = 0
                                            break
                                        
                                        edx_6 = eax_16[1]
                                        char temp5_1 = ecx_17[1]
                                        c_1 = edx_6 u< temp5_1
                                        
                                        if (edx_6 == temp5_1)
                                            eax_16 = &eax_16[2]
                                            ecx_17 = &ecx_17[2]
                                            
                                            if (edx_6 != 0)
                                                continue
                                            
                                            eax_18 = 0
                                            break
                                    
                                    eax_18 = sbb.d(eax_16, eax_16, c_1) | 1
                                    break
                                
                                if (eax_18 == 0)
                                    sub_63d850(&ecx_1[2], &var_18)
                                
                                var_8_1.b = 4
                                
                                if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                                    char* eax_19 = sub_63d4e0(&var_18)
                                    int32_t temp6_1 = *(eax_19 + 4)
                                    *(eax_19 + 4) -= 1
                                    
                                    if (temp6_1 == 1)
                                        sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                                
                                int32_t var_8_2 = 5
                                
                                if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                                    char* eax_20 = sub_63d4e0(&var_20)
                                    int32_t temp7_1 = *(eax_20 + 4)
                                    *(eax_20 + 4) -= 1
                                    
                                    if (temp7_1 == 1)
                                        sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                                
                                int32_t var_8_3 = 0xffffffff
                                eax_13 = *(arg2 + 4)
                                ecx_10 = eax_13
                                
                                if (eax_13 != 1)
                                    continue
                                
                                esi_3 = &data_801800
                                break
                        
                        var_8_1.b = 2
                        
                        if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                            eax_13 = sub_63d4e0(&var_18)
                            int32_t temp3_1 = *(eax_13 + 4)
                            *(eax_13 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                    
                    int32_t var_8_4 = 3
                    
                    if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                        eax_13 = sub_63d4e0(&var_20)
                        int32_t temp2_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                            int32_t* eax_24
                            eax_24.b = 0
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return eax_24
                    
                    goto label_6a6c53
                
                _Str1 = &data_801800
                char* _Str1_1 = *ecx_1
                
                if (_Str1_1 != 0)
                    _Str1 = _Str1_1
                
                cond:2_1 = ecx_10 != 3
            
            char eax_28
            
            if (not(cond:2_1))
                eax_28 = sub_7076e0(arg2)
            
            if ((cond:2_1 || eax_28 != 0) && *(arg2 + 4) == 4
                    && _strnicmp(_Str1, *(arg2 + 0xc), *(arg2 + 0x10)) == 0
                    && sub_7076e0(arg2) != 0)
                goto label_6a6c29
            
            char* eax_31 = *ecx_1
            
            if (eax_31 != 0)
                esi_4 = eax_31
            
            char* const var_38_9 = esi_4
            var_3c_4 = "failed to read close tag '%s'"
            goto label_6a6c4b
    
    int32_t* eax_21 = sub_6a2fa0()
    ecx_1[3] = eax_21
    sub_63d850(eax_21, ecx_1)
    
    if (sub_6a6c70(ecx_1[3], arg2) != 0)
    label_6a6c29:
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    char* eax_23 = *ecx_1
    
    if (eax_23 != 0)
        esi_3 = eax_23
    
    char* const var_38_6 = esi_3
    var_3c_4 = "failed to read block '%s'"

label_6a6c4b:
sub_6a6740(arg2, var_3c_4)
label_6a6c53:
eax_13.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_13
