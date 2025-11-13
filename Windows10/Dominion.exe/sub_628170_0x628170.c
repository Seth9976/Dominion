// 函数: sub_628170
// 地址: 0x628170
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QAE@AAV12@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1
char* result_5 = result_1
char* esi = *(result_5 + 4)
sub_63d720(&result_1, "btnLeft")
char* result_3 = result_1
char* const result_2 = &data_801800
char* const result_6 = &data_801800

if (result_3 != 0)
    result_6 = result_3

int32_t esi_2

while (true)
    char edx_1 = *result_6
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            esi_2 = 0
            break
        
        edx_1 = result_6[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            result_6 = &result_6[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            esi_2 = 0
            break
    
    esi_2 = sbb.d(esi, esi, c_1) | 1
    break

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result_3 != 0 && *result_3 != 0)
    char* eax_3 = sub_63d4e0(&result_1)
    int32_t temp2_1 = *(eax_3 + 4)
    *(eax_3 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)

int32_t var_8_2 = 0xffffffff

if (esi_2 == 0)
    data_8db670 -= 1

char* esi_3 = *(result_5 + 4)
sub_63d720(&result_1, "btnRight")
char* result_4 = result_1
char* const result_7 = &data_801800

if (result_4 != 0)
    result_7 = result_4

int32_t esi_5

while (true)
    char edx_4 = *result_7
    char temp3_1 = *esi_3
    bool c_2 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            esi_5 = 0
            break
        
        edx_4 = result_7[1]
        char temp4_1 = esi_3[1]
        c_2 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            result_7 = &result_7[2]
            esi_3 = &esi_3[2]
            
            if (edx_4 != 0)
                continue
            
            esi_5 = 0
            break
    
    esi_5 = sbb.d(esi_3, esi_3, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
    char* eax_4 = sub_63d4e0(&result_1)
    int32_t temp5_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)

int32_t var_8_4 = 0xffffffff

if (esi_5 == 0)
    data_8db670 += 1

char* esi_6 = *(result_5 + 4)
sub_63d720(&result_1, "btnBack")
char* result = result_1

if (result != 0)
    result_2 = result

int32_t ecx_10

while (true)
    int32_t ecx_8
    ecx_8.b = *result_2
    char temp6_1 = *esi_6
    bool c_3 = ecx_8.b u< temp6_1
    
    if (ecx_8.b == temp6_1)
        if (ecx_8.b == 0)
            ecx_10 = 0
            break
        
        ecx_8.b = result_2[1]
        char temp7_1 = esi_6[1]
        c_3 = ecx_8.b u< temp7_1
        
        if (ecx_8.b == temp7_1)
            result_2 = &result_2[2]
            esi_6 = &esi_6[2]
            
            if (ecx_8.b != 0)
                continue
            
            ecx_10 = 0
            break
    
    ecx_10 = sbb.d(ecx_8, ecx_8, c_3) | 1
    break

if (ecx_10 == 0 || *(result_5 + 0x18) == 2)
    result_5.b = 1
else
    result_5.b = 0

int32_t var_8_5 = 2

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp8_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

if (result_5.b != 0)
    void* const eax_5
    eax_5.b = data_8db664 != 0x7d0
    data_8db660 = eax_5 + 0x17

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
