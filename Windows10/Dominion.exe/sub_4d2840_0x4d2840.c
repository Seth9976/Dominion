// 函数: sub_4d2840
// 地址: 0x4d2840
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
char* arg_4
char* ebx = arg_4
char* esi = *(ebx + 4)
sub_63d720(&var_14, "btnBack")
char* eax_3 = var_14
char* const edi = &data_801800
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

if (ecx_3 == 0 || *(ebx + 0x18) == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
    char* eax_4 = sub_63d4e0(&var_14)
    int32_t temp2_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    data_8db660 = 3

char* ebx_1 = arg_4
char* esi_1 = *(ebx_1 + 4)
sub_63d720(&arg_4, "btn_store")
char* eax_5 = arg_4

if (eax_5 != 0)
    edi = eax_5

int32_t esi_3

while (true)
    char ecx_7 = *edi
    char temp3_1 = *esi_1
    bool c_2 = ecx_7 u< temp3_1
    
    if (ecx_7 == temp3_1)
        if (ecx_7 == 0)
            esi_3 = 0
            break
        
        ecx_7 = edi[1]
        char temp4_1 = esi_1[1]
        c_2 = ecx_7 u< temp4_1
        
        if (ecx_7 == temp4_1)
            edi = &edi[2]
            esi_1 = &esi_1[2]
            
            if (ecx_7 != 0)
                continue
            
            esi_3 = 0
            break
    
    esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_5 != 0 && *eax_5 != 0)
    eax_5 = sub_63d4e0(&arg_4)
    int32_t temp5_1 = *(eax_5 + 4)
    *(eax_5 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)

int32_t var_8_4 = 0xffffffff

if (esi_3 != 0)
    char* var_28 = ebx_1
    sub_4d0900()
    char* eax_6
    eax_6.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

data_cc8d80 = esi_3
eax_5.b = 1
data_cc8d84 = 4
data_cc8d88 = esi_3
data_8db660 = 0x15
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
