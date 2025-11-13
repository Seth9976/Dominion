// 函数: sub_4c5b90
// 地址: 0x4c5b90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?_Reallocate_exactly@?$vector@IV?$allocator@I@std@@@std@@AAEXI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result

if (*arg1 != 0xffffffff)
    int32_t eax_8 = sub_4b50b0(arg1[1])
    
    if (eax_8 == 0)
        int32_t var_30_5 = arg1[1]
        result = sub_63b5f0("GameCreateDlgHandleJoinByCodeResponse couldn't find game %d")
    else if (*arg1 != 1)
        memset(&data_8dbf38, 0, 0x78)
        data_8dbf48 = eax_8
        data_8dbf38 = 2
        data_8dbf40.d = 0
        *(sub_4bbdb0() + 0x28) = 0x17
        result = sub_62b4e0()
        data_8db660 = 0x10
    else
        result = sub_4b0e60(eax_8)
else
    int32_t var_8_1 = 0
    char* result_1
    char* result_2
    sub_4d48c0(sub_4d47c0(&result_1, "dom_msg_gamecode_error_header"), 
        "dom_msg_gamecode_error_body", &result_2, "[code]", &data_8dc144)
    var_8_1.b = 1
    char* var_1c
    sub_63d720(&var_1c, &data_801800)
    var_8_1.b = 2
    char* var_18
    sub_63d720(&var_18, &data_801800)
    var_8_1.b = 3
    data_8db6b0 = 0x20
    sub_63d850(&data_8db750, &result_1)
    sub_63d850(&data_8db754, &result_2)
    sub_63d850(&data_8db758, &var_18)
    sub_63d850(&data_8db75c, &var_1c)
    data_8db760 = 0
    data_8db764 = 0
    var_8_1.b = 4
    
    if (data_cf65bc != 0)
        char* eax_4 = var_18
        
        if (eax_4 != 0 && *eax_4 != 0)
            char* eax_5 = sub_63d4e0(&var_18)
            int32_t temp0_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
    
    var_8_1.b = 5
    
    if (data_cf65bc != 0)
        char* eax_6 = var_1c
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_63d4e0(&var_1c)
            int32_t temp1_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
    
    var_8_1.b = 1
    result = data_8dc144
    
    if (result != 0 && result != &data_801800)
        if (data_cf65bc != 0 && *result != 0)
            result = sub_63d4e0(&data_8dc144)
            int32_t temp3_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp3_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)
        
        data_8dc144 = &data_801800
    
    var_8_1.b = 6
    
    if (data_cf65bc != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_2)
            int32_t temp2_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp2_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)
                result_2 = &data_801800
    
    int32_t var_8_2 = 7
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp4_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp4_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)

data_8dc148 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
