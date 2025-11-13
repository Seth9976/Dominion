// 函数: sub_4cc890
// 地址: 0x4cc890
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Getfmt@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AAVios_base@2@AAHPAUtm@@PBD@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0
uint32_t eax_3 = sub_64e7a0(arg3)
sub_665db0(eax_3, &data_8dc518, eax_3, 0x3f800000, 0xffffffff, 0)
int32_t var_3c = arg4
int32_t var_8_1 = 0
char* const var_18
sub_63df30(&var_18, "%d")
int32_t var_1c_1 = 2
int32_t var_48 = arg2
var_8_1.b = 1
char* const var_14
sub_63df30(&var_14, "%d")
int32_t var_1c_2 = 6
var_8_1.b = 2
int32_t* var_54 = &var_18
char* result_1
sub_4d4980(&var_14, "dom_ui_store_bundle_owned_expansions", &result_1, 0x801c54, &var_14, 0x804a04)
int32_t var_1c_3 = 7
var_8_1.b = 3

if (data_cf65bc != 0)
    char* eax_5 = var_14
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
            var_14 = &data_801800

var_8_1.b = 4

if (data_cf65bc != 0)
    char* eax_7 = var_18
    
    if (eax_7 != 0 && *eax_7 != 0)
        char* eax_8 = sub_63d4e0(&var_18)
        int32_t temp1_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
            var_18 = &data_801800

var_8_1.b = 0
int32_t var_34 = 0xffffffff
char* result = sub_666380(&result_1, &data_8dc524, arg3, &result_1)
int32_t var_8_2 = 5

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp2_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp2_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
