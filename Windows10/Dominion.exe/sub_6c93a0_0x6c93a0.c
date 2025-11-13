// 函数: sub_6c93a0
// 地址: 0x6c93a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770715
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_147ac2c
int32_t edi = *(eax_3 + 0x20)
int32_t ebx = *(eax_3 + 0x24)
int32_t var_8_1 = 0
char* const esi = &data_801800
char* var_18
char* eax_5 = *sub_6c4050(&var_18, "sys/")
char* const ecx_1 = &data_801800

if (eax_5 != 0)
    ecx_1 = eax_5

sub_6c90b0(eax_5, edi, ecx_1, ebx)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* eax_6 = var_18
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(&var_18)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

int32_t var_8_3 = 0xffffffff
int32_t var_8_4 = 2
char* ecx_5 = &data_801800
char* eax_9 = *sub_6c4050(&var_18, "res/")

if (eax_9 != 0)
    ecx_5 = eax_9

sub_6c90b0(eax_9, edi, ecx_5, ebx)
int32_t var_8_5 = 3

if (data_cf65bc != 0)
    char* eax_10 = var_18
    
    if (eax_10 != 0 && *eax_10 != 0)
        char* eax_11 = sub_63d4e0(&var_18)
        int32_t temp1_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)

char const* const eax_12

if (data_cc8ddd != 0)
    eax_12 = "xbin/ios/"
else if (data_cc8ddc == 0)
    eax_12 = "xbin/"
else
    eax_12 = "xbin/web/"

char const* const var_30_2 = eax_12
int32_t var_8_6 = 0xffffffff
char* result_2
sub_63df30(&result_2, "%satlases/")
int32_t var_8_7 = 9
char* result_3 = result_2
char* result_4 = &data_801800

if (result_3 != 0)
    result_4 = result_3

var_8_7.b = 0xa
char* result_1
char* eax_14 = *sub_6c4050(&result_1, result_4)

if (eax_14 != 0)
    esi = eax_14

char* result = sub_6c90b0(eax_14, edi, esi, ebx)
var_8_7.b = 0xb

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp2_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp2_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

int32_t var_8_8 = 0xc

if (data_cf65bc != 0)
    result = result_2
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_2)
        int32_t temp3_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp3_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
