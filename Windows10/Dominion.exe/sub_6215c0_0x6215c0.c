// 函数: sub_6215c0
// 地址: 0x6215c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b6a6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_ac = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(sub_64e7a0(arg1) + 0x18bc) = sub_621140

if (*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x4240) == 0)
    uint32_t eax_5 = sub_64e7a0(arg1)
    sub_665db0(eax_5, &data_bf014c, eax_5, 0x3f800000, 0xffffffff, 0)

char* const var_8c = &data_801800
int32_t var_8_1 = 0
sub_621360(&var_8c)
char* const esi = var_8c
char const* const var_88
int32_t* i = &var_88
var_88 = "log_white"
char const* const var_84 = "log_blue"
char const* const var_80 = "log_red"
char const* const var_7c = "log_green"
char const* const var_78 = "log_yellow"
char const* const var_74 = "log_orange"
char const* const var_70 = "log_white"
char const* const var_6c = "log_reaction"
char const* const var_68 = "log_duration"
char const* const var_64 = "log_victory"
char const* const var_60 = "log_ally"
char const* const var_5c = "log_treasure"
char const* const var_58 = "log_night"
char const* const var_54 = "log_reserve"
char const* const var_50 = "log_action"
char const* const var_4c = "log_curse"
char const* const var_48 = "log_shuffle"
char const* const var_44 = "log_boon"
char const* const var_40 = "log_hex"
char const* const var_3c = "log_way"
char const* const var_38 = "log_artifact"
char const* const var_34 = "log_state"
char const* const var_30 = "log_event"
char const* const var_2c = "log_landmark"
char const* const var_28 = "log_project"
char const* const var_24 = "log_trait"
char const* const var_20 = "log_prophecy"
char const* const var_1c = "log_twist"
char const* const var_18 = "log_stamp"

do
    int32_t var_b0_1 = *i
    var_8_1.b = 1
    char* const ecx_6 = &data_801800
    char* const var_94
    char* eax_7 = *sub_63df30(&var_94, "{%s}")
    char* edx_1 = &data_801800
    
    if (eax_7 != 0)
        ecx_6 = eax_7
    
    if (esi != 0)
        edx_1 = esi
    
    char* var_90
    char** eax_8 = sub_63dfa0(eax_7, edx_1, &var_90, ecx_6, &data_801800)
    var_8_1.b = 2
    char* ecx_9 = *eax_8
    char* const edi_1 = &data_801800
    
    if (esi != 0)
        edi_1 = esi
    
    char* edx_2 = &data_801800
    
    if (ecx_9 != 0)
        edx_2 = ecx_9
    
    if (edi_1 != edx_2)
        if (data_cf65bc != 0 && esi != 0 && *esi != 0)
            char* eax_9 = sub_63d4e0(&var_8c)
            int32_t temp1_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
        
        esi = *eax_8
        var_8c = esi
        
        if (esi != 0 && *esi != 0)
            char* eax_10 = sub_63d4e0(&var_8c)
            *(eax_10 + 4) += 1
    
    var_8_1.b = 3
    
    if (data_cf65bc != 0)
        char* eax_11 = var_90
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_12 = sub_63d4e0(&var_90)
            int32_t temp0_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
                var_90 = &data_801800
    
    var_8_1.b = 4
    
    if (data_cf65bc != 0)
        char* eax_13 = var_94
        
        if (eax_13 != 0 && *eax_13 != 0)
            char* eax_14 = sub_63d4e0(&var_94)
            int32_t temp2_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                var_94 = &data_801800
    
    i = &i[1]
    var_8_1.b = 0
while (i != &var_14)

int32_t var_b0_2 = 0xffffffff
int32_t* result = sub_666380(&var_8c, &data_bf0158, arg1, &var_8c)
int32_t var_8_2 = 5

if (data_cf65bc != 0 && esi != 0 && *esi != 0)
    result = sub_63d4e0(&var_8c)
    int32_t temp3_1 = result[1]
    result[1] -= 1
    
    if (temp3_1 == 1)
        result = sub_64c080(result, result[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
