// 函数: sub_4d9500
// 地址: 0x4d9500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_763b4d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_8c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = data_cc8dc8
int32_t ecx = *(edx + 0x1e1a0)
*(edx + 0x1e1a0) = ecx + 1
void* result_3 = ecx * 0x7868 + edx
void* result_1 = result_3
memset(result_3, 0, 0x7868)
sub_4d6430(result_3)
void var_44

for (int32_t i = 0; i s< 0x18; i += 1)
    *(&var_44 + i) = (modu.dp.d(0:(sub_63eb70()), 0x1a)).b + 0x41

void* result = result_1
char* edx_3 = *(result + 0x4248)
void* ecx_2 = result + 0x4248
char var_2c = 0

if (edx_3 == 0 || edx_3 != &var_44)
    void* esi = &var_44
    void var_43
    result_1 = &var_43
    void* eax_6
    
    do
        eax_6.b = *esi
        esi += 1
    while (eax_6.b != 0)
    
    int32_t esi_1 = esi - result_1
    
    if (esi != result_1)
        sub_63d5e0(eax_6, esi_1, ecx_2, 0)
        memcpy(*(result + 0x4248), &var_44, esi_1 + 1)
    else
        if (data_cf65bc != esi_1 && edx_3 != 0 && *edx_3 != eax_6.b)
            char* eax_7 = sub_63d4e0(ecx_2)
            int32_t temp6_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp6_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
            
            ecx_2 = result + 0x4248
        
        *ecx_2 = &data_801800

*(result + 0x4250) = 0
*(result + 0x424c) = 0
*(result + 0x425c) = 0
*(result + 0x56d8) = 0
char* eax_9 = *(result + 0x4254)

if (eax_9 != 0 && eax_9 != &data_801800)
    if (data_cf65bc != 0 && *eax_9 != 0)
        char* eax_10 = sub_63d4e0(result + 0x4254)
        int32_t temp5_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
    
    *(result + 0x4254) = &data_801800

char* eax_11 = *(result + 0x4244)

if (eax_11 != 0 && eax_11 != &data_801800)
    if (data_cf65bc != 0 && *eax_11 != 0)
        char* eax_12 = sub_63d4e0(result + 0x4244)
        int32_t temp8_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
    
    *(result + 0x4244) = &data_801800

sub_4db340(result + 0x720c)
sub_4db340(result + 0x7200)
sub_4db480(result + 0x72f8)
sub_4db3e0(result + 0x72ec)
sub_4db340(result + 0x720c)
sub_4db340(result + 0x56dc)
sub_4db260(result + 0x4290)
sub_4db2a0(result + 0x429c)
*(result + 0x42a8) = 0
*(result + 0x42ac) = 0
*(result + 0x7450) = 0
*(result + 0x58e8) = 0
*(result + 0x6ed0) = 0
*(result + 0x63dc) = 0
*(result + 0x6ed4) = 0
*(result + 0x6ed8) = 0
*(result + 0x71dc) = 0
*(result + 0x7218) = 2
*(result + 0x71e8) = 2
*(result + 0x71ec) = 2
sub_63d720(&result_1, &data_801800)
int32_t var_14_1 = 0
sub_63d850(result, &result_1)
*(result + 8) = sub_4b8ca0()
*(result + 0x11d8) = 4
int128_t var_80
memset(&var_80, 0, 0x30)
*(result + 0x4260) = var_80
int128_t var_70
*(result + 0x4270) = var_70
int128_t var_60
*(result + 0x4280) = var_60
int32_t ecx_18 = *(edx + 0x1e1a8)
*(edx + 0x1e1a8) = ecx_18 + 1
*(result + 0x42b0) = ecx_18
*(data_cc8dc8 + 0x1e1a4) = ecx_18
sub_4d9160(result)
int32_t var_14_2 = 1

if (data_cf65bc != 0)
    void* result_2 = result_1
    
    if (result_2 != 0 && *result_2 != 0)
        char* eax_16 = sub_63d4e0(&result_1)
        int32_t temp7_1 = *(eax_16 + 4)
        *(eax_16 + 4) -= 1
        
        if (temp7_1 == 1)
            sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
