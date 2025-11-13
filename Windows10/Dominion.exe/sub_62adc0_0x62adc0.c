// 函数: sub_62adc0
// 地址: 0x62adc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?AddExecutionResource@SchedulerProxy@details@Concurrency@@QAEXPAVExecutionResource@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1
char* result_5 = result_1
char* esi = *(result_5 + 4)
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

if (ecx_3 == 0 || *(result_5 + 0x18) == 2)
    result_5.b = 1
else
    result_5.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
    char* eax_4 = sub_63d4e0(&var_14)
    int32_t temp2_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)

int32_t var_8_2 = 0xffffffff

if (result_5.b != 0)
    sub_4d46e0(7, 0)

char* result_6 = result_1
char* esi_1 = *(result_6 + 4)
sub_63d720(&result_1, "BtnResign")
char* result_3 = result_1
char* const result_7 = &data_801800

if (result_3 != 0)
    result_7 = result_3

int32_t esi_3

while (true)
    char edx_4 = *result_7
    char temp3_1 = *esi_1
    bool c_2 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            esi_3 = 0
            break
        
        edx_4 = result_7[1]
        char temp4_1 = esi_1[1]
        c_2 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            result_7 = &result_7[2]
            esi_1 = &esi_1[2]
            
            if (edx_4 != 0)
                continue
            
            esi_3 = 0
            break
    
    esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && result_3 != 0 && *result_3 != 0)
    char* eax_5 = sub_63d4e0(&result_1)
    int32_t temp5_1 = *(eax_5 + 4)
    *(eax_5 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)

int32_t var_8_4 = 0xffffffff

if (esi_3 == 0)
    sub_4d46e0(esi_3 + 7, 0)
    sub_4c43f0()
    sub_4c44f0()

char* esi_4 = *(result_6 + 4)
sub_63d720(&result_1, "BtnDiscord")
char* result_4 = result_1
char* const result_8 = &data_801800

if (result_4 != 0)
    result_8 = result_4

PSTR esi_6

while (true)
    char edx_7 = *result_8
    char temp6_1 = *esi_4
    bool c_3 = edx_7 u< temp6_1
    
    if (edx_7 == temp6_1)
        if (edx_7 == 0)
            esi_6 = nullptr
            break
        
        edx_7 = result_8[1]
        char temp7_1 = esi_4[1]
        c_3 = edx_7 u< temp7_1
        
        if (edx_7 == temp7_1)
            result_8 = &result_8[2]
            esi_4 = &esi_4[2]
            
            if (edx_7 != 0)
                continue
            
            esi_6 = nullptr
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
    char* eax_6 = sub_63d4e0(&result_1)
    int32_t temp8_1 = *(eax_6 + 4)
    *(eax_6 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)

int32_t var_8_6 = 0xffffffff

if (esi_6 == 0)
    sub_4d46e0(&esi_6[7], 0)
    ShellExecuteA(esi_6, "open", 
        "https://discord.com/channels/609163450077151233/1245133481877704945", esi_6, esi_6, 
        SW_SHOWNORMAL)

char* esi_7 = *(result_6 + 4)
sub_63d720(&result_1, "BtnCustomize")
char* result = result_1

if (result != 0)
    result_2 = result

int32_t esi_9

while (true)
    char ecx_15 = *result_2
    char temp9_1 = *esi_7
    bool c_4 = ecx_15 u< temp9_1
    
    if (ecx_15 == temp9_1)
        if (ecx_15 == 0)
            esi_9 = 0
            break
        
        ecx_15 = result_2[1]
        char temp10_1 = esi_7[1]
        c_4 = ecx_15 u< temp10_1
        
        if (ecx_15 == temp10_1)
            result_2 = &result_2[2]
            esi_7 = &esi_7[2]
            
            if (ecx_15 != 0)
                continue
            
            esi_9 = 0
            break
    
    esi_9 = sbb.d(esi_7, esi_7, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp11_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

int32_t var_8_8 = 0xffffffff

if (esi_9 == 0)
    sub_4d46e0(esi_9 + 7, 0)
    data_8db6b0 = 0x7f1
    data_ccf6e0 = 1

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
