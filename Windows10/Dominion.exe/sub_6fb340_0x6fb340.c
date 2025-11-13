// 函数: sub_6fb340
// 地址: 0x6fb340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$construct_environment_block@D@@YAHQBQBDQAPAD@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_9c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_147d368 != 0)
    WINDOWPLACEMENT lpwndpl
    lpwndpl.length = 0x2c
    WINDOWPLACEMENT lpwndpl_1
    lpwndpl_1.length = 0x2c
    GetWindowPlacement(data_147b084, &lpwndpl)
    GetWindowPlacement(data_147d46c, &lpwndpl_1)
    void* eax_3 = data_147dcb4
    char* const var_88
    int32_t* ecx_1 = &var_88
    char* edx_1 = &data_801800
    
    if (eax_3 != 0)
        char* eax_4 = *(eax_3 + 0x20)
        
        if (eax_4 != 0)
            edx_1 = eax_4
        
        sub_6c4050(ecx_1, edx_1)
    else
        sub_63d720(ecx_1, &data_801800)
    
    int32_t var_8_1 = 0
    char* const edi_1 = var_88
    
    if (edi_1 == 0)
        edi_1 = &data_801800
    
    char* const esi_1 = edi_1
    void* ecx_2 = &esi_1[1]
    char i
    
    do
        i = *esi_1
        esi_1 = &esi_1[1]
    while (i != 0)
    int32_t eax_5 = sub_687730(esi_1 - ecx_2 + 1)
    int32_t var_84 = eax_5
    memcpy(eax_5, edi_1, esi_1 - ecx_2 + 1)
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        char* eax_6 = var_88
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_63d4e0(&var_88)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                var_88 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    char* const* ecx_6 = &var_88
    void* eax_8 = data_147dcb8
    char* edx_4 = &data_801800
    
    if (eax_8 != 0)
        char* eax_9 = *(eax_8 + 0x20)
        
        if (eax_9 != 0)
            edx_4 = eax_9
        
        sub_6c4050(ecx_6, edx_4)
    else
        sub_63d720(ecx_6, &data_801800)
    
    int32_t var_8_4 = 2
    char* const edi_2 = var_88
    
    if (edi_2 == 0)
        edi_2 = &data_801800
    
    char* const esi_4 = edi_2
    void* ecx_7 = &esi_4[1]
    char i_1
    
    do
        i_1 = *esi_4
        esi_4 = &esi_4[1]
    while (i_1 != 0)
    int32_t eax_10 = sub_687730(esi_4 - ecx_7 + 1)
    int32_t var_7c_1 = eax_10
    memcpy(eax_10, edi_2, esi_4 - ecx_7 + 1)
    int32_t var_8_5 = 3
    
    if (data_cf65bc != 0)
        char* const eax_11 = var_88
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_12 = sub_63d4e0(&var_88)
            int32_t temp1_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
                var_88 = &data_801800
    
    int32_t var_8_6 = 0xffffffff
    char* const var_8c
    int32_t* ecx_11 = &var_8c
    void* eax_13 = data_147dcbc
    char* edx_7 = &data_801800
    
    if (eax_13 != 0)
        char* eax_14 = *(eax_13 + 0x20)
        
        if (eax_14 != 0)
            edx_7 = eax_14
        
        sub_6c4050(ecx_11, edx_7)
    else
        sub_63d720(ecx_11, &data_801800)
    
    int32_t var_8_7 = 4
    char* const edi_3 = var_8c
    
    if (edi_3 == 0)
        edi_3 = &data_801800
    
    char* const esi_7 = edi_3
    void* ecx_12 = &esi_7[1]
    char i_2
    
    do
        i_2 = *esi_7
        esi_7 = &esi_7[1]
    while (i_2 != 0)
    int32_t eax_15 = sub_687730(esi_7 - ecx_12 + 1)
    int32_t var_74_1 = eax_15
    memcpy(eax_15, edi_3, esi_7 - ecx_12 + 1)
    int32_t var_8_8 = 5
    
    if (data_cf65bc != 0)
        char* eax_16 = var_8c
        
        if (eax_16 != 0 && *eax_16 != 0)
            char* eax_17 = sub_63d4e0(&var_8c)
            int32_t temp2_1 = *(eax_17 + 4)
            *(eax_17 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                var_8c = &data_801800
    
    int32_t var_8_9 = 0xffffffff
    int32_t* esi_10 = data_177758c
    int32_t* eax_18 = sub_6a2fa0()
    sub_6a6650(sub_6a6290(esi_10, nullptr), data_177758c, eax_18, &data_147d368)
    result = sub_69ce80(sub_6a3220(eax_18), data_177758c, &var_84, 0)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
