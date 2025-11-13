// 函数: sub_4ce500
// 地址: 0x4ce500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$_Mpunct@G@std@@QAE@ABV_Locinfo@1@I_N1@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1
char* result_3 = result_1
char* esi = *(result_3 + 4)
sub_63d720(&var_14, "btnBack")
char* eax_3 = var_14
char* const result_2 = &data_801800
char* const ecx_1 = &data_801800

if (eax_3 != 0)
    ecx_1 = eax_3

int32_t ecx_3

while (true)
    char edx_1 = *ecx_1
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            ecx_3 = 0
            break
        
        edx_1 = ecx_1[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            ecx_1 = &ecx_1[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            ecx_3 = 0
            break
    
    ecx_3 = sbb.d(ecx_1, ecx_1, c_1) | 1
    break

if (ecx_3 == 0 || *(result_3 + 0x18) == 2)
    result_3.b = 1
else
    result_3.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
    char* eax_4 = sub_63d4e0(&var_14)
    int32_t temp2_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)

int32_t var_8_2 = 0xffffffff

if (result_3.b != 0)
    data_8db660 = 4

char* esi_2 = *(result_1 + 4)
sub_63d720(&result_1, "btnLeaderboard")
char* result = result_1

if (result != 0)
    result_2 = result

int32_t esi_4

while (true)
    char ecx_7 = *result_2
    char temp3_1 = *esi_2
    bool c_2 = ecx_7 u< temp3_1
    
    if (ecx_7 == temp3_1)
        if (ecx_7 == 0)
            esi_4 = 0
            break
        
        ecx_7 = result_2[1]
        char temp4_1 = esi_2[1]
        c_2 = ecx_7 u< temp4_1
        
        if (ecx_7 == temp4_1)
            result_2 = &result_2[2]
            esi_2 = &esi_2[2]
            
            if (ecx_7 != 0)
                continue
            
            esi_4 = 0
            break
    
    esi_4 = sbb.d(esi_2, esi_2, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp5_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

int32_t var_8_4 = 0xffffffff

if (esi_4 == 0)
    sub_4ce1a0()
    data_8db660 = 0xd

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
