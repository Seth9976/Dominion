// 函数: sub_5dab40
// 地址: 0x5dab40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??1event@Concurrency@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* arg_4
char* ebx = arg_4
char* esi = *(ebx + 4)
sub_63d720(&arg_4, "btn_settings")
char* eax_3 = arg_4
char* const edi = &data_801800
char* const ecx_1 = &data_801800

if (eax_3 != 0)
    ecx_1 = eax_3

int32_t esi_2

while (true)
    char edx_1 = *ecx_1
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            esi_2 = 0
            break
        
        edx_1 = ecx_1[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            ecx_1 = &ecx_1[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            esi_2 = 0
            break
    
    esi_2 = sbb.d(esi, esi, c_1) | 1
    break

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
    eax_3 = sub_63d4e0(&arg_4)
    int32_t temp2_1 = *(eax_3 + 4)
    *(eax_3 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)

int32_t var_8_2 = 0xffffffff

if (esi_2 == 0)
    eax_3.b = 1
    data_b7d418 = data_b7d418 == 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

char* esi_3 = *(ebx + 4)
sub_63d720(&arg_4, "btnItem")
char* eax_4 = arg_4
char* const ecx_7 = &data_801800

if (eax_4 != 0)
    ecx_7 = eax_4

int32_t esi_5

while (true)
    char edx_4 = *ecx_7
    char temp3_1 = *esi_3
    bool c_2 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            esi_5 = 0
            break
        
        edx_4 = ecx_7[1]
        char temp4_1 = esi_3[1]
        c_2 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            ecx_7 = &ecx_7[2]
            esi_3 = &esi_3[2]
            
            if (edx_4 != 0)
                continue
            
            esi_5 = 0
            break
    
    esi_5 = sbb.d(esi_3, esi_3, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_4 != 0 && *eax_4 != 0)
    char* eax_5 = sub_63d4e0(&arg_4)
    int32_t temp5_1 = *(eax_5 + 4)
    *(eax_5 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)

int32_t var_8_4 = 0xffffffff

if (esi_5 == 0)
    sub_5e3ec0(esi_5 + 0x16, esi_5 + 1)
    char* eax_6
    eax_6.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

char* esi_6 = *(ebx + 4)
sub_63d720(&arg_4, "btn_apply_allgames")
char* eax_7 = arg_4

if (eax_7 != 0)
    edi = eax_7

int32_t esi_8

while (true)
    char ecx_14 = *edi
    char temp6_1 = *esi_6
    bool c_3 = ecx_14 u< temp6_1
    
    if (ecx_14 == temp6_1)
        if (ecx_14 == 0)
            esi_8 = 0
            break
        
        ecx_14 = edi[1]
        char temp7_1 = esi_6[1]
        c_3 = ecx_14 u< temp7_1
        
        if (ecx_14 == temp7_1)
            edi = &edi[2]
            esi_6 = &esi_6[2]
            
            if (ecx_14 != 0)
                continue
            
            esi_8 = 0
            break
    
    esi_8 = sbb.d(esi_6, esi_6, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && eax_7 != 0 && *eax_7 != 0)
    eax_7 = sub_63d4e0(&arg_4)
    int32_t temp8_1 = *(eax_7 + 4)
    *(eax_7 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

int32_t var_8_6 = 0xffffffff

if (esi_8 == 0)
    void* eax_8 = sub_5e3c60(esi_8 + 1)
    int32_t eax_9
    void* edx_10
    eax_9, edx_10 = sub_61cee0()
    int32_t esi_9 = *(eax_8 + 0x200)
    int32_t ecx_19 = 0
    
    if (esi_9 s> 0)
        do
            edx_10 = eax_8 + (ecx_19 << 3)
            
            if (*(eax_8 + (ecx_19 << 3)) == 0x16)
                eax_9 = *(edx_10 + 4)
                break
            
            ecx_19 += 1
        while (ecx_19 s< esi_9)
    
    sub_5e3e50(eax_9, edx_10, 0x16, eax_9)

eax_7.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
