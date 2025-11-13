// 函数: sub_4dfe00
// 地址: 0x4dfe00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??1_Blocking_recipient@?1???$_Receive_impl@W4agent_status@Concurrency@@@Concurrency@@YA?AW4agent_status@1@PAV?$ISource@W4agent_status@Concurrency@@@1@IPBV?$function@$$A6A_NABW4agent_status@Concurrency@@@Z@std@@@Z@UAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_1c = arg1
int32_t var_18 = 0
*arg1 = &data_801800
int32_t var_8_1 = 0
int32_t var_18_1 = 1
int32_t var_24 = 0
int32_t var_20 = 2
char* var_14
sub_63d720(&var_14, "Landscapes")
int32_t var_8_2 = 1
int32_t* var_38 = &var_24
sub_4dfa10(&var_14, arg2 + 0xbc8, arg1, &var_14)
int32_t var_8_3 = 2

if (data_cf65bc != 0)
    char* eax_4 = var_14
    
    if (eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)

var_8_3.b = 0
var_24 = 0
int32_t var_20_1 = 2
sub_63d720(&var_14, "Events")
int32_t var_8_4 = 3
int32_t* var_38_1 = &var_24
sub_4dfa10(&var_14, arg2 + 0xbd0, arg1, &var_14)
int32_t var_8_5 = 4

if (data_cf65bc != 0)
    char* eax_7 = var_14
    
    if (eax_7 != 0 && *eax_7 != 0)
        char* eax_8 = sub_63d4e0(&var_14)
        int32_t temp1_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)

var_8_5.b = 0
var_24 = 0
int32_t var_20_2 = 2
sub_63d720(&var_14, "Landmarks")
int32_t var_8_6 = 5
int32_t* var_38_2 = &var_24
sub_4dfa10(&var_14, arg2 + 0xbd8, arg1, &var_14)
int32_t var_8_7 = 6

if (data_cf65bc != 0)
    char* eax_10 = var_14
    
    if (eax_10 != 0 && *eax_10 != 0)
        char* eax_11 = sub_63d4e0(&var_14)
        int32_t temp2_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)

var_8_7.b = 0
var_24 = 0
int32_t var_20_3 = 2
sub_63d720(&var_14, "Projects")
int32_t var_8_8 = 7
int32_t* var_38_3 = &var_24
sub_4dfa10(&var_14, arg2 + 0xbe0, arg1, &var_14)
int32_t var_8_9 = 8

if (data_cf65bc != 0)
    char* eax_13 = var_14
    
    if (eax_13 != 0 && *eax_13 != 0)
        char* eax_14 = sub_63d4e0(&var_14)
        int32_t temp3_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)

var_8_9.b = 0
var_24 = 0
int32_t var_20_4 = 1
sub_63d720(&var_14, "Ways")
int32_t var_8_10 = 9
int32_t* var_38_4 = &var_24
sub_4dfa10(&var_14, arg2 + 0xbe8, arg1, &var_14)
int32_t var_8_11 = 0xa

if (data_cf65bc != 0)
    char* eax_16 = var_14
    
    if (eax_16 != 0 && *eax_16 != 0)
        char* eax_17 = sub_63d4e0(&var_14)
        int32_t temp4_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)

var_8_11.b = 0
var_24 = 0
int32_t var_20_5 = 2
sub_63d720(&var_14, "Traits")
int32_t var_8_12 = 0xb
int32_t* var_38_5 = &var_24
sub_4dfa10(&var_14, arg2 + 0xbf0, arg1, &var_14)
int32_t var_8_13 = 0xc

if (data_cf65bc != 0)
    char* eax_19 = var_14
    
    if (eax_19 != 0 && *eax_19 != 0)
        char* eax_20 = sub_63d4e0(&var_14)
        int32_t temp5_1 = *(eax_20 + 4)
        *(eax_20 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)

var_8_13.b = 0
sub_63d720(&var_14, "Ally")
int32_t var_8_14 = 0xd
sub_4df9b0(&var_14, *(arg2 + 0xbf8), arg1, &var_14)
int32_t var_8_15 = 0xe

if (data_cf65bc != 0)
    char* eax_22 = var_14
    
    if (eax_22 != 0 && *eax_22 != 0)
        char* eax_23 = sub_63d4e0(&var_14)
        int32_t temp6_1 = *(eax_23 + 4)
        *(eax_23 + 4) -= 1
        
        if (temp6_1 == 1)
            sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)

var_8_15.b = 0
sub_63d720(&var_14, "Prophecy")
int32_t var_8_16 = 0xf
sub_4df9b0(&var_14, *(arg2 + 0xbf9), arg1, &var_14)
int32_t var_8_17 = 0x10

if (data_cf65bc != 0)
    char* eax_25 = var_14
    
    if (eax_25 != 0 && *eax_25 != 0)
        char* eax_26 = sub_63d4e0(&var_14)
        int32_t temp7_1 = *(eax_26 + 4)
        *(eax_26 + 4) -= 1
        
        if (temp7_1 == 1)
            sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
