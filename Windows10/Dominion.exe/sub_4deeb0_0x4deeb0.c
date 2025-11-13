// 函数: sub_4deeb0
// 地址: 0x4deeb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_763ea7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* ecx
int32_t edx
ecx, edx = __chkstk(0x4cd0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_19c0 = edx
char* var_19bc = ecx
int32_t var_19b8 = 0

if (ecx == 0)
    sub_63b870(&ExceptionList, &data_801800, "setupStr", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 0xc60, "DomSetupConfigFromString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t var_24 = 1
char* const var_19b4 = &data_801800
sub_63db30(&var_19b4, ecx, var_24)
int32_t var_8_1 = 0
char* const esi = var_19b4
char* const edi = &data_801800
int32_t var_19a8 = 1
int32_t var_19b8_1 = 1
void* const ecx_2 = &data_804d6c
char* const eax_4 = &data_801800

if (esi != 0)
    eax_4 = esi

int32_t eax_6

while (true)
    char edx_1 = *eax_4
    char temp0_1 = *ecx_2
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            eax_6 = 0
            break
        
        edx_1 = eax_4[1]
        char temp1_1 = *(ecx_2 + 1)
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            eax_4 = &eax_4[2]
            ecx_2 += 2
            
            if (edx_1 != 0)
                continue
            
            eax_6 = 0
            break
    
    eax_6 = sbb.d(eax_4, eax_4, c_1) | 1
    break

char ecx_7 = 1
int32_t edx_2 = 1
int32_t ecx_9
char* ebx
char* const var_19ac
char* eax_7

if (eax_6 == 0)
    eax_7 = var_19ac
label_4defed:
    ebx.b = 1
    
    if ((ecx_7 & 2) != 0)
        goto label_4deff6
    
    ecx_9 = var_19a8
else
    uint32_t var_24_1 = 1
    var_19ac = &data_801800
    sub_63db30(&var_19ac, ecx, var_24_1)
    eax_7 = var_19ac
    int16_t* const ecx_4 = &data_807454
    var_19a8 = 3
    
    if (eax_7 != 0)
        edi = eax_7
    
    int32_t ecx_6
    
    while (true)
        char edx_3 = *edi
        char temp2_1 = *ecx_4
        bool c_2 = edx_3 u< temp2_1
        
        if (edx_3 == temp2_1)
            if (edx_3 == 0)
                ecx_6 = 0
                break
            
            edx_3 = edi[1]
            char temp3_1 = *(ecx_4 + 1)
            c_2 = edx_3 u< temp3_1
            
            if (edx_3 == temp3_1)
                edi = &edi[2]
                ecx_4 = &ecx_4[1]
                
                if (edx_3 != 0)
                    continue
                
                ecx_6 = 0
                break
        
        ecx_6 = sbb.d(ecx_4, ecx_4, c_2) | 1
        break
    
    edx_2 = 3
    
    if (ecx_6 == 0)
        ecx_7 = 3
        goto label_4defed
    
    ebx.b = 0
label_4deff6:
    ecx_9 = edx_2 & 0xfffffffd
    int32_t var_19b8_2 = ecx_9
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0 && eax_7 != 0 && *eax_7 != 0)
        char* eax_8 = sub_63d4e0(&var_19ac)
        int32_t temp4_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
        
        ecx_9 = ecx_9
int32_t var_8_3 = 0xffffffff

if ((ecx_9.b & 1) != 0)
    int32_t var_8_4 = 2
    
    if (data_cf65bc != 0 && esi != 0 && *esi != 0)
        char* eax_9 = sub_63d4e0(&var_19b4)
        int32_t temp5_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
    
    int32_t var_8_5 = 0xffffffff

uint32_t count = 0x1990
void* eax_11

if (ebx.b == 0)
    void var_19a4
    memset(&var_19a4, 0, count)
    sub_4ddbb0()
    eax_11 = &var_19a4
else
    void var_4ce0
    void var_3350
    memcpy(&var_3350, sub_4de780(&var_4ce0), count)
    eax_11 = &var_3350

memcpy(arg1, eax_11, 0x1990)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(arg1)
return arg1
