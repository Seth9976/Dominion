// 函数: sub_4bec10
// 地址: 0x4bec10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QAE@AAV12@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* arg_4
char* edi = arg_4
char* esi = *(edi + 4)
sub_63d720(&arg_4, "btnBack")
char* eax_3 = arg_4
char* const ecx_2 = &data_801800

if (eax_3 != 0)
    ecx_2 = eax_3

int32_t ecx_4

while (true)
    char edx_1 = *ecx_2
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            ecx_4 = 0
            break
        
        edx_1 = ecx_2[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            ecx_2 = &ecx_2[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            ecx_4 = 0
            break
    
    ecx_4 = sbb.d(ecx_2, ecx_2, c_1) | 1
    break

int32_t ebx

if (ecx_4 == 0 || *(edi + 0x18) == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
    char* eax_4 = sub_63d4e0(&arg_4)
    int32_t temp2_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    sub_4d46e0(7, 0)
    data_8db774(eax_2)
    int32_t eax_5
    eax_5.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

char* esi_1 = *(edi + 4)
sub_63d720(&arg_4, "BtnPaste")
char* eax_6 = arg_4
char* const ebx_1 = &data_801800
char* const ecx_10 = &data_801800

if (eax_6 != 0)
    ecx_10 = eax_6

int32_t esi_3

while (true)
    char edx_4 = *ecx_10
    char temp3_1 = *esi_1
    bool c_2 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            esi_3 = 0
            break
        
        edx_4 = ecx_10[1]
        char temp4_1 = esi_1[1]
        c_2 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            ecx_10 = &ecx_10[2]
            esi_1 = &esi_1[2]
            
            if (edx_4 != 0)
                continue
            
            esi_3 = 0
            break
    
    esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_6 != 0 && *eax_6 != 0)
    char* eax_7 = sub_63d4e0(&arg_4)
    int32_t temp5_1 = *(eax_7 + 4)
    *(eax_7 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

int32_t var_8_4 = 0xffffffff

if (esi_3 == 0)
    sub_63c340(&data_8db76c)
    BOOL eax_8
    eax_8.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8

char* esi_4 = *(edi + 4)
sub_63d720(&arg_4, "BtnOK")
char* eax_9 = arg_4
char* ecx_16 = &data_801800

if (eax_9 != 0)
    ecx_16 = eax_9

int32_t esi_6

while (true)
    char edx_7 = *ecx_16
    char temp6_1 = *esi_4
    bool c_3 = edx_7 u< temp6_1
    
    if (edx_7 == temp6_1)
        if (edx_7 == 0)
            esi_6 = 0
            break
        
        edx_7 = ecx_16[1]
        char temp7_1 = esi_4[1]
        c_3 = edx_7 u< temp7_1
        
        if (edx_7 == temp7_1)
            ecx_16 = &ecx_16[2]
            esi_4 = &esi_4[2]
            
            if (edx_7 != 0)
                continue
            
            esi_6 = 0
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && eax_9 != 0 && *eax_9 != 0)
    eax_9 = sub_63d4e0(&arg_4)
    int32_t temp8_1 = *(eax_9 + 4)
    *(eax_9 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)

int32_t var_8_6 = 0xffffffff

if (esi_6 == 0)
    sub_4d46e0(esi_6 + 7, 0)
    char* eax_10 = data_8db76c
    
    if (eax_10 != 0)
        ebx_1 = eax_10
    
    data_8db770(ebx_1, eax_2)

eax_9.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
