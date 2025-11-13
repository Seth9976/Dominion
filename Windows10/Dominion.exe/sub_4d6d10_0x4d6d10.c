// 函数: sub_4d6d10
// 地址: 0x4d6d10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?Dequeue@?$SafeSQueue@VRealizedChore@details@Concurrency@@V_HyperNonReentrantLock@23@@details@Concurrency@@QAEPAVRealizedChore@23@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4db4c0(&arg1[0x1cc1])
int32_t var_8_1 = 0

if (arg1[0x1cbe] != 0)
    sub_4db480(&arg1[0x1cbe])
    sub_64c080(arg1[0x1cbe], (arg1[0x1cbf] << 2) + 4)
    arg1[0x1cbe] = 0

int32_t var_8_2 = 1

if (arg1[0x1cbb] != 0)
    sub_4db3e0(&arg1[0x1cbb])
    sub_64c080(arg1[0x1cbb], (arg1[0x1cbc] << 2) + 4)
    arg1[0x1cbb] = 0

int32_t var_8_3 = 2
`eh vector vbase constructor iterator'(&arg1[0x1c87], 0xc, 0xf, sub_4ab1f0)
int32_t var_8_4 = 3

if (arg1[0x1c83] != 0)
    sub_4db340(&arg1[0x1c83])
    sub_64c080(arg1[0x1c83], (arg1[0x1c84] << 2) + 4)
    arg1[0x1c83] = 0

int32_t var_8_5 = 4

if (arg1[0x1c80] != 0)
    sub_4db340(&arg1[0x1c80])
    sub_64c080(arg1[0x1c80], (arg1[0x1c81] << 2) + 4)
    arg1[0x1c80] = 0

int32_t var_8_6 = 5
`eh vector vbase constructor iterator'(&arg1[0x1bb7], 0xc, 0x40, sub_4d6960)
int32_t var_8_7 = 6

if (arg1[0x15b7] != 0)
    sub_4db340(&arg1[0x15b7])
    sub_64c080(arg1[0x15b7], (arg1[0x15b8] << 2) + 4)
    arg1[0x15b7] = 0

int32_t var_8_8 = 0xffffffff
`eh vector vbase constructor iterator'(&arg1[0x10b6], 0x28, 0x80, sub_4d6880)
sub_4d67d0(&arg1[0x10a4])
int32_t var_8_9 = 7

if (data_cf65bc != 0)
    char* eax_11 = arg1[0x1096]
    
    if (eax_11 != 0 && *eax_11 != 0)
        char* eax_12 = sub_63d4e0(&arg1[0x1096])
        int32_t temp0_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
            arg1[0x1096] = &data_801800

int32_t var_8_10 = 8

if (data_cf65bc != 0)
    char* eax_13 = arg1[0x1095]
    
    if (eax_13 != 0 && *eax_13 != 0)
        char* eax_14 = sub_63d4e0(&arg1[0x1095])
        int32_t temp1_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
            arg1[0x1095] = &data_801800

int32_t var_8_11 = 9

if (data_cf65bc != 0)
    char* eax_15 = arg1[0x1092]
    
    if (eax_15 != 0 && *eax_15 != 0)
        char* eax_16 = sub_63d4e0(&arg1[0x1092])
        int32_t temp2_1 = *(eax_16 + 4)
        *(eax_16 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
            arg1[0x1092] = &data_801800

int32_t var_8_12 = 0xa

if (data_cf65bc != 0)
    char* eax_17 = arg1[0x1091]
    
    if (eax_17 != 0 && *eax_17 != 0)
        char* eax_18 = sub_63d4e0(&arg1[0x1091])
        int32_t temp3_1 = *(eax_18 + 4)
        *(eax_18 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
            arg1[0x1091] = &data_801800

int32_t var_8_13 = 0xffffffff
`eh vector vbase constructor iterator'(&arg1[0xd44], 4, 0xa, sub_63d770)
int32_t var_8_14 = 0xb

if (data_cf65bc != 0)
    char* eax_20 = arg1[0xd43]
    
    if (eax_20 != 0 && *eax_20 != 0)
        char* eax_21 = sub_63d4e0(&arg1[0xd43])
        int32_t temp4_1 = *(eax_21 + 4)
        *(eax_21 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
            arg1[0xd43] = &data_801800

int32_t var_8_15 = 0xffffffff
char* result = `eh vector vbase constructor iterator'(&arg1[4], 0x11a8, 3, sub_4ab080)
int32_t var_8_16 = 0xc

if (data_cf65bc != 0)
    result = arg1[1]
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&arg1[1])
        int32_t temp5_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp5_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            arg1[1] = &data_801800

int32_t var_8_17 = 0xd

if (data_cf65bc != 0)
    result = *arg1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(arg1)
        int32_t temp6_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp6_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            *arg1 = &data_801800

fsbase->NtTib.ExceptionList = ExceptionList
return result
