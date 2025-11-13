// 函数: sub_60d3c0
// 地址: 0x60d3c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?unlink_sources@?$target_block@V?$multi_link_registry@V?$ISource@I@Concurrency@@@Concurrency@@V?$ordered_message_processor@I@2@@Concurrency@@MAEXXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_24 = arg1
int32_t var_8_1 = 0
int32_t var_1c = 0
int32_t var_40 = *(arg2 + 0x58)
char* var_20
sub_63df30(&var_20, "dom_card_achievement_title_%s")
int32_t var_8_2 = 1
int32_t var_40_1 = *(arg2 + 0x58)
char* const var_14
sub_63df30(&var_14, "dom_card_achievement_%s")
var_8_2.b = 2
*arg1 = &data_801800
arg1[1] = &data_801800
char* eax_3 = var_20
char* const esi_1 = &data_801800
int32_t var_1c_1 = 1
char* edx = &data_801800

if (eax_3 != 0)
    edx = eax_3

char* var_18
sub_4d47c0(&var_18, edx)
int32_t var_1c_2 = 3
var_8_2.b = 3
sub_63d850(arg1, &var_18)
var_8_2.b = 4

if (data_cf65bc != 0)
    char* eax_4 = var_18
    
    if (eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_63d4e0(&var_18)
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)

var_8_2.b = 2
char* eax_6 = var_14

if (eax_6 != 0)
    esi_1 = eax_6

sub_4d47c0(&var_18, esi_1)
int32_t var_1c_3 = 7
var_8_2.b = 5
sub_63d850(&arg1[1], &var_18)
var_8_2.b = 6

if (data_cf65bc != 0)
    char* eax_7 = var_18
    
    if (eax_7 != 0 && *eax_7 != 0)
        char* eax_8 = sub_63d4e0(&var_18)
        int32_t temp1_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)

var_8_2.b = 7

if (data_cf65bc != 0)
    char* eax_9 = var_14
    
    if (eax_9 != 0 && *eax_9 != 0)
        char* eax_10 = sub_63d4e0(&var_14)
        int32_t temp2_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
            var_14 = &data_801800

int32_t var_8_3 = 8

if (data_cf65bc != 0)
    char* eax_11 = var_20
    
    if (eax_11 != 0 && *eax_11 != 0)
        char* eax_12 = sub_63d4e0(&var_20)
        int32_t temp3_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
