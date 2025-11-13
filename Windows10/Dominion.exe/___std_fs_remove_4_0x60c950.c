// 函数: ___std_fs_remove@4
// 地址: 0x60c950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$common_stat@U_stat64@@@@YAHQBDQAU_stat64@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
uint128_t xmm0 = *(eax_3 + 0x72d8)
int32_t edi = *(eax_3 + 0x72e8)
int32_t var_3c = _mm_bsrli_si128(xmm0, 4)
int32_t var_8_1 = 0
int32_t var_48 = 0xffffffff
char* var_14
sub_666380(&var_14, &data_be5fa8, sub_63df30(&var_14, "%d"), &var_14)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* eax_6 = var_14
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

int32_t var_8_3 = 0xffffffff
int32_t var_3c_1 = xmm0.d
int32_t var_8_4 = 2
int32_t var_48_1 = 0xffffffff
sub_666380(&var_14, &data_be5fb4, sub_63df30(&var_14, "%d"), &var_14)
int32_t var_8_5 = 3

if (data_cf65bc != 0)
    char* eax_9 = var_14
    
    if (eax_9 != 0 && *eax_9 != 0)
        char* eax_10 = sub_63d4e0(&var_14)
        int32_t temp1_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)

int32_t var_8_6 = 0xffffffff
int32_t var_3c_2 = xmm0:8.d
int32_t var_8_7 = 4
int32_t var_48_2 = 0xffffffff
sub_666380(&var_14, &data_be5f90, sub_63df30(&var_14, "%d"), &var_14)
int32_t var_8_8 = 5

if (data_cf65bc != 0)
    char* eax_12 = var_14
    
    if (eax_12 != 0 && *eax_12 != 0)
        char* eax_13 = sub_63d4e0(&var_14)
        int32_t temp2_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)

int32_t var_8_9 = 0xffffffff
int32_t var_3c_3 = xmm0:0xc.d
int32_t var_8_10 = 6
int32_t var_48_3 = 0xffffffff
sub_666380(&var_14, &data_be5fc0, sub_63df30(&var_14, "%d"), &var_14)
int32_t var_8_11 = 7

if (data_cf65bc != 0)
    char* eax_15 = var_14
    
    if (eax_15 != 0 && *eax_15 != 0)
        char* eax_16 = sub_63d4e0(&var_14)
        int32_t temp3_1 = *(eax_16 + 4)
        *(eax_16 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)

int32_t var_3c_4 = edi
int32_t var_8_12 = 0xffffffff
int32_t var_8_13 = 8
int32_t var_48_4 = 0xffffffff
int32_t* result_1
int32_t* result = sub_666380(&result_1, &data_be5fcc, sub_63df30(&result_1, "%d"), &result_1)
int32_t var_8_14 = 9

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp4_1 = result[1]
        result[1] -= 1
        
        if (temp4_1 == 1)
            result = sub_64c080(result, result[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
