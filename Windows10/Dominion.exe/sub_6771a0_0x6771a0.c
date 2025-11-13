// 函数: sub_6771a0
// 地址: 0x6771a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?tzset_from_environment_nolock@@YAXPA_W@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg2
int32_t* result_1 = result
int32_t i = 0
arg2.b = 0
char* const edi = &data_801800
int32_t var_2c = 0
char var_12 = 0
char var_11 = 0
char* const var_1c = &data_801800
char* const esi = &data_801800
int32_t var_8_1 = 0
char* const var_28 = &data_801800
var_8_1.b = 1
int32_t** result_2 = nullptr

if (*result s> 0)
    int32_t esi_1 = 0
    
    do
        int32_t* ecx = result[2]
        int32_t eax_3 = *(ecx + esi_1)
        void* ecx_1 = ecx + esi_1
        
        if (eax_3 == 0x69)
            result_2 = *(ecx_1 + 8)
        else if (eax_3 == 0xd5)
            var_11 = 1
            sub_63d8d0(&var_28, **(ecx_1 + 8))
        else if (eax_3 == 0xdc)
            var_12 = 1
            sub_63d8d0(&var_1c, *(ecx_1 + 8))
        
        result = result_1
        i += 1
        esi_1 += 0x10
    while (i s< *result)
    
    int32_t ebx = 0
    esi = var_28
    int32_t* eax_11
    
    if (var_11 != 0)
        char* const eax_9 = &data_801800
        char* const ecx_4 = &data_801800
        
        if (esi != 0)
            eax_9 = esi
        
        while (true)
            arg2.b = *eax_9
            char temp5_1 = *ecx_4
            bool c_1 = arg2.b u< temp5_1
            
            if (arg2.b == temp5_1)
                if (arg2.b == 0)
                    eax_11 = nullptr
                    break
                
                arg2.b = eax_9[1]
                char temp6_1 = ecx_4[1]
                c_1 = arg2.b u< temp6_1
                
                if (arg2.b == temp6_1)
                    eax_9 = &eax_9[2]
                    ecx_4 = &ecx_4[2]
                    
                    if (arg2.b != 0)
                        continue
                    
                    eax_11 = nullptr
                    break
            
            eax_11 = sbb.d(eax_9, eax_9, c_1) | 1
            break
    
    if (var_11 == 0 || eax_11 == 0)
        edi = var_1c
    else
        eax_11.b = 0
        
        if (var_12 != 0)
            edi = var_1c
        else
            char var_12_1 = 1
            sub_63d850(&var_1c, arg3)
            
            if (arg4 != 0)
                eax_11.b = var_12_1
                edi = var_1c
            else
                edi = var_1c
                char* const eax_12 = &data_801800
                
                if (edi != 0)
                    eax_12 = edi
                
                char* const var_5c_4 = eax_12
                sub_6dce10(eax_12, result_1, &data_8cae70, 0xdc)
                eax_11.b = var_12_1
        
        if (edi == 0 || *edi != 0x23)
            char* ecx_6 = &data_801800
            
            if (eax_11.b == 0)
                if (edi != 0)
                    ecx_6 = edi
                
                char* const ecx_7 = &data_801800
                char* const eax_15 = &data_801800
                
                if (sub_68caf0(eax_11, nullptr, ecx_6, 1) == 0)
                    if (edi != 0)
                        ecx_7 = edi
                    
                    if (esi != 0)
                        eax_15 = esi
                    
                    char* const var_5c_7 = eax_15
                    char* const var_60_3 = ecx_7
                    sub_63b5f0("MISS\t%s\t%s")
                else
                    if (edi != 0)
                        ecx_7 = edi
                    
                    if (esi != 0)
                        eax_15 = esi
                    
                    char* const var_5c_6 = eax_15
                    char* const var_60_2 = ecx_7
                    sub_63b5f0("\t%s\t%s")
            else
                char* const eax_13 = &data_801800
                
                if (esi != 0)
                    ecx_6 = esi
                
                char* var_5c_5 = ecx_6
                
                if (edi != 0)
                    eax_13 = edi
                
                char* const var_60_1 = eax_13
                sub_63b5f0("NEW\t%s\t%s")
    
    result = result_2
    
    if (result != 0)
        int32_t i_2 = 0
        
        if (result[2] s> 0)
            int32_t* esi_2 = nullptr
            int32_t* var_38 = nullptr
            int32_t i_1
            
            do
                if (strstr(*(esi_2 + *result), "lang_jpn") == 0)
                    char* var_34
                    sub_63d720(&var_34, U"_-")
                    var_8_1.b = 2
                    int32_t* eax_19 = *result_2
                    char* edx_1 = *(eax_19 + esi_2)
                    
                    if (edx_1 == 0)
                        sub_63b870(eax_19, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 
                            0x94, "XString::XString")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    char* var_30
                    sub_63d720(&var_30, edx_1)
                    int32_t ebx_1 = ebx | 4
                    int32_t var_2c_1 = ebx_1
                    var_8_1.b = 4
                    char* eax_21 = *arg3
                    char* var_20 = eax_21
                    
                    if (eax_21 != 0 && *eax_21 != 0)
                        char* eax_22 = sub_63d4e0(&var_20)
                        *(eax_22 + 4) += 1
                    
                    char* eax_23 = var_34
                    int32_t ebx_2 = ebx_1 | 2
                    int32_t var_2c_2 = ebx_2
                    char* const ecx_11 = &data_801800
                    
                    if (eax_23 != 0)
                        ecx_11 = eax_23
                    
                    sub_63d960(&var_20, ecx_11)
                    var_8_1.b = 5
                    char* esi_3 = var_20
                    char* var_18 = esi_3
                    
                    if (esi_3 != 0 && *esi_3 != 0)
                        char* eax_24 = sub_63d4e0(&var_18)
                        *(eax_24 + 4) += 1
                    
                    char* eax_25 = var_30
                    int32_t ebx_3 = ebx_2 | 1
                    int32_t var_2c_3 = ebx_3
                    char* const ecx_14 = &data_801800
                    
                    if (eax_25 != 0)
                        ecx_14 = eax_25
                    
                    sub_63d960(&var_18, ecx_14)
                    *result_2
                    sub_6771a0(arg4.d, eax_2)
                    int32_t ebx_4 = ebx_3 & 0xfffffffe
                    int32_t var_2c_4 = ebx_4
                    var_8_1.b = 6
                    
                    if (data_cf65bc != 0)
                        char* eax_27 = var_18
                        
                        if (eax_27 != 0 && *eax_27 != 0)
                            char* eax_28 = sub_63d4e0(&var_18)
                            int32_t temp7_1 = *(eax_28 + 4)
                            *(eax_28 + 4) -= 1
                            
                            if (temp7_1 == 1)
                                sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
                                var_18 = &data_801800
                    
                    ebx = ebx_4 & 0xfffffffd
                    var_8_1.b = 7
                    
                    if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
                        char* eax_29 = sub_63d4e0(&var_20)
                        int32_t temp8_1 = *(eax_29 + 4)
                        *(eax_29 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                            var_20 = &data_801800
                    
                    var_8_1.b = 8
                    
                    if (data_cf65bc != 0)
                        char* eax_30 = var_30
                        
                        if (eax_30 != 0 && *eax_30 != 0)
                            char* eax_31 = sub_63d4e0(&var_30)
                            int32_t temp9_1 = *(eax_31 + 4)
                            *(eax_31 + 4) -= 1
                            
                            if (temp9_1 == 1)
                                sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
                                var_30 = &data_801800
                    
                    var_8_1.b = 9
                    
                    if (data_cf65bc != 0)
                        char* eax_32 = var_34
                        
                        if (eax_32 != 0 && *eax_32 != 0)
                            char* eax_33 = sub_63d4e0(&var_34)
                            int32_t temp10_1 = *(eax_33 + 4)
                            *(eax_33 + 4) -= 1
                            
                            if (temp10_1 == 1)
                                sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
                                var_34 = &data_801800
                    
                    esi_2 = var_38
                    var_8_1.b = 1
                
                esi_2 = &esi_2[0xc]
                result = result_2
                i_1 = i_2 + 1
                i_2 = i_1
                var_38 = esi_2
            while (i_1 s< result[2])
            esi = var_28

var_8_1.b = 0xa

if (data_cf65bc != 0 && esi != 0 && *esi != 0)
    result = sub_63d4e0(&var_28)
    int32_t temp2_1 = result[1]
    result[1] -= 1
    
    if (temp2_1 == 1)
        result = sub_64c080(result, result[3] + 0x10)

int32_t var_8_2 = 0xb

if (data_cf65bc != 0 && edi != 0 && *edi != 0)
    result = sub_63d4e0(&var_1c)
    int32_t temp4_1 = result[1]
    result[1] -= 1
    
    if (temp4_1 == 1)
        result = sub_64c080(result, result[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
