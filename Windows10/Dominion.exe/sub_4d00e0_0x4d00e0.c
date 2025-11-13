// 函数: sub_4d00e0
// 地址: 0x4d00e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_hermite@12
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

char* result_4 = result_1
char* esi_1 = *(result_4 + 4)
sub_63d720(&var_14, "btnRight")
char* eax_5 = var_14
char* const ecx_7 = &data_801800

if (eax_5 != 0)
    ecx_7 = eax_5

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

if (data_cf65bc != 0 && eax_5 != 0 && *eax_5 != 0)
    char* eax_6 = sub_63d4e0(&var_14)
    int32_t temp5_1 = *(eax_6 + 4)
    *(eax_6 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)

int32_t var_8_4 = 0xffffffff

if (esi_3 == 0)
    data_cc8d74 += 1

char* esi_4 = *(result_4 + 4)
sub_63d720(&var_14, "btnLeft")
char* eax_7 = var_14
char* const ecx_11 = &data_801800

if (eax_7 != 0)
    ecx_11 = eax_7

int32_t esi_6

while (true)
    char edx_7 = *ecx_11
    char temp6_1 = *esi_4
    bool c_3 = edx_7 u< temp6_1
    
    if (edx_7 == temp6_1)
        if (edx_7 == 0)
            esi_6 = 0
            break
        
        edx_7 = ecx_11[1]
        char temp7_1 = esi_4[1]
        c_3 = edx_7 u< temp7_1
        
        if (edx_7 == temp7_1)
            ecx_11 = &ecx_11[2]
            esi_4 = &esi_4[2]
            
            if (edx_7 != 0)
                continue
            
            esi_6 = 0
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && eax_7 != 0 && *eax_7 != 0)
    char* eax_8 = sub_63d4e0(&var_14)
    int32_t temp8_1 = *(eax_8 + 4)
    *(eax_8 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)

int32_t var_8_6 = 0xffffffff

if (esi_6 == 0)
    data_cc8d74 -= 1

char* esi_7 = *(result_4 + 4)
sub_63d720(&var_14, "btnMPL")
char* eax_9 = var_14
char* const ecx_15 = &data_801800

if (eax_9 != 0)
    ecx_15 = eax_9

int32_t esi_9

while (true)
    char edx_10 = *ecx_15
    char temp9_1 = *esi_7
    bool c_4 = edx_10 u< temp9_1
    
    if (edx_10 == temp9_1)
        if (edx_10 == 0)
            esi_9 = 0
            break
        
        edx_10 = ecx_15[1]
        char temp10_1 = esi_7[1]
        c_4 = edx_10 u< temp10_1
        
        if (edx_10 == temp10_1)
            ecx_15 = &ecx_15[2]
            esi_7 = &esi_7[2]
            
            if (edx_10 != 0)
                continue
            
            esi_9 = 0
            break
    
    esi_9 = sbb.d(esi_7, esi_7, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && eax_9 != 0 && *eax_9 != 0)
    char* eax_10 = sub_63d4e0(&var_14)
    int32_t temp11_1 = *(eax_10 + 4)
    *(eax_10 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)

int32_t var_8_8 = 0xffffffff

if (esi_9 == 0)
    ShellExecuteA(nullptr, "open", "https://www.mozilla.org/en-US/MPL/2.0/", nullptr, nullptr, 
        SW_SHOWNORMAL)

char* esi_11 = *(result_1 + 4)
sub_63d720(&result_1, "btnEigen")
char* result = result_1

if (result != 0)
    result_2 = result

PSTR esi_13

while (true)
    char ecx_19 = *result_2
    char temp12_1 = *esi_11
    bool c_5 = ecx_19 u< temp12_1
    
    if (ecx_19 == temp12_1)
        if (ecx_19 == 0)
            esi_13 = nullptr
            break
        
        ecx_19 = result_2[1]
        char temp13_1 = esi_11[1]
        c_5 = ecx_19 u< temp13_1
        
        if (ecx_19 == temp13_1)
            result_2 = &result_2[2]
            esi_11 = &esi_11[2]
            
            if (ecx_19 != 0)
                continue
            
            esi_13 = nullptr
            break
    
    esi_13 = sbb.d(esi_11, esi_11, c_5) | 1
    break

int32_t var_8_9 = 4

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp14_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp14_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

if (esi_13 == 0)
    ShellExecuteA(esi_13, "open", "https://eigen.tuxfamily.org", esi_13, esi_13, SW_SHOWNORMAL)

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
