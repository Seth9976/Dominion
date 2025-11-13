// 函数: sub_6f9a30
// 地址: 0x6f9a30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$__acrt_lowio_lock_fh_and_call@V<lambda_afd29ecc65a4e7b0e2f475dc0df91fbc>@@@@YAHH$$QAV<lambda_afd29ecc65a4e7b0e2f475dc0df91fbc>@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
int32_t* arg_4
int32_t* esi = arg_4
char* const eax_3 = &data_801800
void* const edx = &data_874250
char* ebx = *esi

if (ebx != 0)
    eax_3 = ebx

int32_t eax_5

while (true)
    arg1.b = *eax_3
    char temp0_1 = *edx
    bool c_1 = arg1.b u< temp0_1
    
    if (arg1.b == temp0_1)
        if (arg1.b == 0)
            eax_5 = 0
            break
        
        arg1.b = eax_3[1]
        char temp1_1 = *(edx + 1)
        c_1 = arg1.b u< temp1_1
        
        if (arg1.b == temp1_1)
            eax_3 = &eax_3[2]
            edx += 2
            
            if (arg1.b != 0)
                continue
            
            eax_5 = 0
            break
    
    eax_5 = sbb.d(eax_3, eax_3, c_1) | 1
    break

int32_t* esi_3
int32_t* result

if (eax_5 != 0)
    char* const eax_15 = &data_801800
    char const* const ecx_8 = "states"
    
    if (ebx != 0)
        eax_15 = ebx
    
    int32_t eax_17
    
    while (true)
        edx.b = *eax_15
        char const temp2_1 = *ecx_8
        bool c_3 = edx.b u< temp2_1
        
        if (edx.b == temp2_1)
            if (edx.b == 0)
                eax_17 = 0
                break
            
            edx.b = eax_15[1]
            char temp3_1 = ecx_8[1]
            c_3 = edx.b u< temp3_1
            
            if (edx.b == temp3_1)
                eax_15 = &eax_15[2]
                ecx_8 = &ecx_8[2]
                
                if (edx.b != 0)
                    continue
                
                eax_17 = 0
                break
        
        eax_17 = sbb.d(eax_15, eax_15, c_3) | 1
        break
    
    if (eax_17 != 0)
        int32_t** esi_6 = *edi
        
        if (esi_6 != 0)
            while (true)
                result = *esi_6
                esi_6 = esi_6[1]
                char* ecx_13 = &data_801800
                
                if (ebx != 0)
                    ecx_13 = ebx
                
                char* const edx_5 = &data_801800
                char* eax_25 = *result
                
                if (eax_25 != 0)
                    edx_5 = eax_25
                
                int32_t eax_27
                
                while (true)
                    eax_25.b = *edx_5
                    char temp4_1 = *ecx_13
                    bool c_5 = eax_25.b u< temp4_1
                    
                    if (eax_25.b == temp4_1)
                        if (eax_25.b == 0)
                            eax_27 = 0
                            break
                        
                        eax_25.b = edx_5[1]
                        char temp5_1 = ecx_13[1]
                        c_5 = eax_25.b u< temp5_1
                        
                        if (eax_25.b == temp5_1)
                            edx_5 = &edx_5[2]
                            ecx_13 = &ecx_13[2]
                            
                            if (eax_25.b != 0)
                                continue
                            
                            eax_27 = 0
                            break
                    
                    eax_27 = sbb.d(eax_25, eax_25, c_5) | 1
                    break
                
                if (eax_27 == 0)
                    break
                
                if (esi_6 == 0)
                    goto label_6f9df6
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    else
        void* esi_4 = esi[3]
        
        if (esi_4 != 0)
            int32_t* esi_5 = *(esi_4 + 4)
            
            if (esi_5 != 0)
                int32_t* edi_7
                
                while (true)
                    edi_7 = *esi_5
                    char* const _Str1_2 = &data_801800
                    esi_5 = esi_5[1]
                    char* _Str1_6 = *edi_7
                    
                    if (_Str1_6 != 0)
                        _Str1_2 = _Str1_6
                    
                    if (_stricmp(_Str1_2, "stateName") == 0)
                        break
                    
                    if (esi_5 == 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 0
                
                if (edi_7 != 0)
                    esi_3 = edi_7[1]
                    arg_4 = esi_3
                    
                    if (esi_3 != 0 && *esi_3 != 0)
                        char* eax_20 = sub_63d4e0(&arg_4)
                        *(eax_20 + 4) += 1
                    
                    int32_t var_8_3 = 2
                    int32_t** edi_9 = edi[1]
                    
                    if (edi_9 == 0)
                    label_6f9d84:
                        result = nullptr
                    else
                        while (true)
                            int32_t* result_2 = *edi_9
                            int32_t** edi_10 = edi_9[2]
                            void* edi_11 = result_2[3]
                            
                            if (edi_11 != 0)
                                int32_t* edi_12 = *(edi_11 + 4)
                                
                                if (edi_12 != 0)
                                    int32_t* ebx_2
                                    
                                    while (true)
                                        ebx_2 = *edi_12
                                        char* const _Str1_3 = &data_801800
                                        edi_12 = edi_12[1]
                                        char* _Str1_7 = *ebx_2
                                        
                                        if (_Str1_7 != 0)
                                            _Str1_3 = _Str1_7
                                        
                                        if (_stricmp(_Str1_3, "stateName") == 0)
                                            break
                                        
                                        if (edi_12 == 0)
                                            goto label_6f9d79
                                    
                                    if (ebx_2 != 0)
                                        char* eax_22 = ebx_2[1]
                                        int32_t* ecx_12 = &data_801800
                                        char* const edx_4 = &data_801800
                                        
                                        if (esi_3 != 0)
                                            ecx_12 = esi_3
                                        
                                        if (eax_22 != 0)
                                            edx_4 = eax_22
                                        
                                        int32_t eax_24
                                        
                                        while (true)
                                            eax_22.b = *edx_4
                                            char temp9_1 = *ecx_12
                                            bool c_4 = eax_22.b u< temp9_1
                                            
                                            if (eax_22.b == temp9_1)
                                                if (eax_22.b == 0)
                                                    eax_24 = 0
                                                    break
                                                
                                                eax_22.b = edx_4[1]
                                                char temp10_1 = *(ecx_12 + 1)
                                                c_4 = eax_22.b u< temp10_1
                                                
                                                if (eax_22.b == temp10_1)
                                                    edx_4 = &edx_4[2]
                                                    ecx_12 += 2
                                                    
                                                    if (eax_22.b != 0)
                                                        continue
                                                    
                                                    eax_24 = 0
                                                    break
                                            
                                            eax_24 = sbb.d(eax_22, eax_22, c_4) | 1
                                            break
                                        
                                        if (eax_24 == 0)
                                            result = result_2
                                            break
                            
                        label_6f9d79:
                            edi_9 = edi_10
                            
                            if (edi_9 == 0)
                                goto label_6f9d84
                    
                    int32_t var_8_4 = 3
                label_6f9bd2:
                    
                    if (data_cf65bc == 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
                    
                    if (esi_3 != 0 && *esi_3 != 0)
                        char* eax_13 = sub_63d4e0(&arg_4)
                        int32_t temp6_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return result
else
    void* esi_1 = esi[3]
    
    if (esi_1 != 0)
        int32_t* esi_2 = *(esi_1 + 4)
        
        if (esi_2 != 0)
            int32_t* edi_1
            
            while (true)
                edi_1 = *esi_2
                char* const _Str1 = &data_801800
                esi_2 = esi_2[1]
                char* _Str1_4 = *edi_1
                
                if (_Str1_4 != 0)
                    _Str1 = _Str1_4
                
                if (_stricmp(_Str1, "name") == 0)
                    break
                
                if (esi_2 == 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 0
            
            if (edi_1 != 0)
                esi_3 = edi_1[1]
                arg_4 = esi_3
                
                if (esi_3 != 0 && *esi_3 != 0)
                    char* eax_8 = sub_63d4e0(&arg_4)
                    *(eax_8 + 4) += 1
                
                int32_t var_8_1 = 0
                int32_t* edi_3 = *edi
                
                if (edi_3 == 0)
                label_6f9bc9:
                    result = nullptr
                else
                    while (true)
                        int32_t* result_1 = *edi_3
                        int32_t* edi_4 = edi_3[1]
                        void* edi_5 = result_1[3]
                        
                        if (edi_5 != 0)
                            int32_t* edi_6 = *(edi_5 + 4)
                            
                            if (edi_6 != 0)
                                int32_t* ebx_1
                                
                                while (true)
                                    ebx_1 = *edi_6
                                    char* const _Str1_1 = &data_801800
                                    edi_6 = edi_6[1]
                                    char* _Str1_5 = *ebx_1
                                    
                                    if (_Str1_5 != 0)
                                        _Str1_1 = _Str1_5
                                    
                                    if (_stricmp(_Str1_1, "name") == 0)
                                        break
                                    
                                    if (edi_6 == 0)
                                        goto label_6f9bbe
                                
                                if (ebx_1 != 0)
                                    char* eax_10 = ebx_1[1]
                                    char* const ecx_3 = &data_801800
                                    char* const edx_1 = &data_801800
                                    
                                    if (esi_3 != 0)
                                        ecx_3 = esi_3
                                    
                                    if (eax_10 != 0)
                                        edx_1 = eax_10
                                    
                                    int32_t eax_12
                                    
                                    while (true)
                                        eax_10.b = *edx_1
                                        char temp7_1 = *ecx_3
                                        bool c_2 = eax_10.b u< temp7_1
                                        
                                        if (eax_10.b == temp7_1)
                                            if (eax_10.b == 0)
                                                eax_12 = 0
                                                break
                                            
                                            eax_10.b = edx_1[1]
                                            char temp8_1 = ecx_3[1]
                                            c_2 = eax_10.b u< temp8_1
                                            
                                            if (eax_10.b == temp8_1)
                                                edx_1 = &edx_1[2]
                                                ecx_3 = &ecx_3[2]
                                                
                                                if (eax_10.b != 0)
                                                    continue
                                                
                                                eax_12 = 0
                                                break
                                        
                                        eax_12 = sbb.d(eax_10, eax_10, c_2) | 1
                                        break
                                    
                                    if (eax_12 == 0)
                                        result = result_1
                                        break
                        
                    label_6f9bbe:
                        edi_3 = edi_4
                        
                        if (edi_3 == 0)
                            goto label_6f9bc9
                
                int32_t var_8_2 = 1
                goto label_6f9bd2
label_6f9df6:
fsbase->NtTib.ExceptionList = ExceptionList
return 0
