// 函数: sub_4cb410
// 地址: 0x4cb410
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_hermite@12
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
    eax_3 = sub_63d4e0(&var_14)
    int32_t temp2_1 = *(eax_3 + 4)
    *(eax_3 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    data_8db660 = 4
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

char* ebx_1 = arg_4
char* esi_1 = *(ebx_1 + 4)
sub_63d720(&arg_4, "btn_tut")
char* eax_4 = arg_4
char* const ecx_9 = &data_801800

if (eax_4 != 0)
    ecx_9 = eax_4

int32_t esi_3

while (true)
    char edx_4 = *ecx_9
    char temp3_1 = *esi_1
    bool c_2 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            esi_3 = 0
            break
        
        edx_4 = ecx_9[1]
        char temp4_1 = esi_1[1]
        c_2 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            ecx_9 = &ecx_9[2]
            esi_1 = &esi_1[2]
            
            if (edx_4 != 0)
                continue
            
            esi_3 = 0
            break
    
    esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_4 != 0 && *eax_4 != 0)
    eax_4 = sub_63d4e0(&arg_4)
    int32_t temp5_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)

int32_t var_8_4 = 0xffffffff

if (esi_3 == 0)
    data_8db660 = 0x23
    eax_4.b = 0
    data_cc8d7c = 0x19
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

char* esi_4 = *(ebx_1 + 4)
sub_63d720(&arg_4, "btn_rules")
char* eax_5 = arg_4
char* const ecx_15 = &data_801800

if (eax_5 != 0)
    ecx_15 = eax_5

int32_t esi_6

while (true)
    char edx_7 = *ecx_15
    char temp6_1 = *esi_4
    bool c_3 = edx_7 u< temp6_1
    
    if (edx_7 == temp6_1)
        if (edx_7 == 0)
            esi_6 = 0
            break
        
        edx_7 = ecx_15[1]
        char temp7_1 = esi_4[1]
        c_3 = edx_7 u< temp7_1
        
        if (edx_7 == temp7_1)
            ecx_15 = &ecx_15[2]
            esi_4 = &esi_4[2]
            
            if (edx_7 != 0)
                continue
            
            esi_6 = 0
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && eax_5 != 0 && *eax_5 != 0)
    eax_5 = sub_63d4e0(&arg_4)
    int32_t temp8_1 = *(eax_5 + 4)
    *(eax_5 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)

int32_t var_8_6 = 0xffffffff

if (esi_6 == 0)
    data_8db660 = 0x17
    eax_5.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

char* esi_7 = *(ebx_1 + 4)
sub_63d720(&arg_4, "btn_rules_pdf")
char* eax_6 = arg_4
char* const ecx_21 = &data_801800

if (eax_6 != 0)
    ecx_21 = eax_6

int32_t esi_9

while (true)
    char edx_10 = *ecx_21
    char temp9_1 = *esi_7
    bool c_4 = edx_10 u< temp9_1
    
    if (edx_10 == temp9_1)
        if (edx_10 == 0)
            esi_9 = 0
            break
        
        edx_10 = ecx_21[1]
        char temp10_1 = esi_7[1]
        c_4 = edx_10 u< temp10_1
        
        if (edx_10 == temp10_1)
            ecx_21 = &ecx_21[2]
            esi_7 = &esi_7[2]
            
            if (edx_10 != 0)
                continue
            
            esi_9 = 0
            break
    
    esi_9 = sbb.d(esi_7, esi_7, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && eax_6 != 0 && *eax_6 != 0)
    eax_6 = sub_63d4e0(&arg_4)
    int32_t temp11_1 = *(eax_6 + 4)
    *(eax_6 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)

int32_t var_8_8 = 0xffffffff

if (esi_9 != 0)
    char* esi_10 = *(ebx_1 + 4)
    sub_63d720(&arg_4, "btn_video")
    eax_6 = arg_4
    
    if (eax_6 != 0)
        edi = eax_6
    
    PSTR esi_12
    
    while (true)
        char ecx_25 = *edi
        char temp12_1 = *esi_10
        bool c_5 = ecx_25 u< temp12_1
        
        if (ecx_25 == temp12_1)
            if (ecx_25 == 0)
                esi_12 = nullptr
                break
            
            ecx_25 = edi[1]
            char temp13_1 = esi_10[1]
            c_5 = ecx_25 u< temp13_1
            
            if (ecx_25 == temp13_1)
                edi = &edi[2]
                esi_10 = &esi_10[2]
                
                if (ecx_25 != 0)
                    continue
                
                esi_12 = nullptr
                break
        
        esi_12 = sbb.d(esi_10, esi_10, c_5) | 1
        break
    
    int32_t var_8_9 = 4
    
    if (data_cf65bc != 0 && eax_6 != 0 && *eax_6 != 0)
        eax_6 = sub_63d4e0(&arg_4)
        int32_t temp14_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp14_1 == 1)
            sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
    
    if (esi_12 == 0)
        ShellExecuteA(esi_12, "open", "https://www.templegatesgames.com/how-to-play-video/", 
            esi_12, esi_12, SW_SHOWNORMAL)

eax_6.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
