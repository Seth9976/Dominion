// 函数: sub_609960
// 地址: 0x609960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?GetDefaultScheduler@SchedulerBase@details@Concurrency@@CAPAV123@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1
char* result_3 = result_1
char* esi = *(result_3 + 4)
char* var_14
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
    int32_t eax_5 = 0x7ea
    
    if (data_ccf6c8 == 0)
        eax_5 = 0x29
    
    data_8db660 = eax_5

char* result_4 = result_1
char* esi_1 = *(result_4 + 4)
sub_63d720(&var_14, "btnStoreItem")
char* eax_6 = var_14
char* ecx_7 = &data_801800

if (eax_6 != 0)
    ecx_7 = eax_6

int32_t esi_3

while (true)
    char edx_4 = *ecx_7
    char temp3_1 = *esi_1
    bool c_2 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            esi_3 = 0
            break
        
        edx_4 = ecx_7[1]
        char temp4_1 = esi_1[1]
        c_2 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            ecx_7 = &ecx_7[2]
            esi_1 = &esi_1[2]
            
            if (edx_4 != 0)
                continue
            
            esi_3 = 0
            break
    
    esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_6 != 0 && *eax_6 != 0)
    char* eax_7 = sub_63d4e0(&var_14)
    int32_t temp5_1 = *(eax_7 + 4)
    *(eax_7 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

int32_t var_8_4 = 0xffffffff

if (esi_3 == 0)
    int32_t edx_7 = sub_609870(*(result_4 + 8))
    void* eax_8 = data_cc8d94
    
    if (eax_8 == 0)
        eax_8 = sub_4acc60()
        data_cc8d94 = eax_8
    
    data_cc8d98 = 0
    data_cc8d9c = edx_7
    data_cc8d90 = 0
    data_cc8da0 = 0x7f5
    data_cc8da4 = 0
    sub_4add50(eax_8)
    result_4 = result_1
    data_8db660 = 0x16

char* esi_4 = *(result_4 + 4)
sub_63d720(&result_1, "btn_callToAction")
char* result = result_1

if (result != 0)
    result_2 = result

int32_t esi_6

while (true)
    char ecx_13 = *result_2
    char temp6_1 = *esi_4
    bool c_3 = ecx_13 u< temp6_1
    
    if (ecx_13 == temp6_1)
        if (ecx_13 == 0)
            esi_6 = 0
            break
        
        ecx_13 = result_2[1]
        char temp7_1 = esi_4[1]
        c_3 = ecx_13 u< temp7_1
        
        if (ecx_13 == temp7_1)
            result_2 = &result_2[2]
            esi_4 = &esi_4[2]
            
            if (ecx_13 != 0)
                continue
            
            esi_6 = 0
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp8_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

int32_t var_8_6 = 0xffffffff

if (esi_6 == 0)
    char* edx_10 = sub_609870(*(result_4 + 8))
    int32_t var_18 = 0
    var_14 = edx_10
    sub_4c9d30(&var_18)

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
