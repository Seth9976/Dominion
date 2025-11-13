// 函数: sub_61cff0
// 地址: 0x61cff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b310
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ebx
void* var_624 = ebx
int32_t var_628 = arg1
int32_t __saved_ebp
int32_t var_630 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1
sub_63d720(&result_1, "btnBack")
void* edi = arg2
char* const result_8 = &data_801800
char* result_3 = result_1

if (result_3 != 0)
    result_8 = result_3

char* edx = *(edi + 4)
int32_t ecx_2

while (true)
    ebx.b = *edx
    char temp0_1 = *result_8
    bool c_1 = ebx.b u< temp0_1
    
    if (ebx.b == temp0_1)
        if (ebx.b == 0)
            ecx_2 = 0
            break
        
        ebx.b = edx[1]
        char temp1_1 = result_8[1]
        c_1 = ebx.b u< temp1_1
        
        if (ebx.b == temp1_1)
            edx = &edx[2]
            result_8 = &result_8[2]
            
            if (ebx.b != 0)
                continue
            
            ecx_2 = 0
            break
    
    ecx_2 = sbb.d(result_8, result_8, c_1) | 1
    break

if (ecx_2 == 0 || *(edi + 0x18) == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result_3 != 0 && *result_3 != 0)
    int32_t* eax_3 = sub_63d4e0(&result_1)
    int32_t temp2_1 = eax_3[1]
    eax_3[1] -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, eax_3[3] + 0x10)
        result_1 = &data_801800

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    edx.b = 0
    sub_4d46e0(5, edx.b)
    data_8db660 = 0xe

sub_63d720(&result_1, "btnItem")
char* result_4 = result_1
char* const result_9 = &data_801800
char* edx_3 = *(edi + 4)

if (result_4 != 0)
    result_9 = result_4

int32_t esi

while (true)
    ebx.b = *edx_3
    char temp3_1 = *result_9
    bool c_2 = ebx.b u< temp3_1
    
    if (ebx.b == temp3_1)
        if (ebx.b == 0)
            esi = 0
            break
        
        ebx.b = edx_3[1]
        char temp4_1 = result_9[1]
        c_2 = ebx.b u< temp4_1
        
        if (ebx.b == temp4_1)
            edx_3 = &edx_3[2]
            result_9 = &result_9[2]
            
            if (ebx.b != 0)
                continue
            
            esi = 0
            break
    
    esi = sbb.d(arg1, arg1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
    char* eax_4 = sub_63d4e0(&result_1)
    int32_t temp5_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_4 = 0xffffffff

if (esi == 0)
    sub_5e3ec0(*((*(edi + 8) + data_cd3190 * 6) * 0xec + &data_7e7d30), data_cd318c)

sub_63d720(&result_1, "btnLeft")
char* result_5 = result_1
char* const result_10 = &data_801800
char* edx_7 = *(edi + 4)

if (result_5 != 0)
    result_10 = result_5

int32_t esi_2

while (true)
    ebx.b = *edx_7
    char temp6_1 = *result_10
    bool c_3 = ebx.b u< temp6_1
    
    if (ebx.b == temp6_1)
        if (ebx.b == 0)
            esi_2 = 0
            break
        
        ebx.b = edx_7[1]
        char temp7_1 = result_10[1]
        c_3 = ebx.b u< temp7_1
        
        if (ebx.b == temp7_1)
            edx_7 = &edx_7[2]
            result_10 = &result_10[2]
            
            if (ebx.b != 0)
                continue
            
            esi_2 = 0
            break
    
    esi_2 = sbb.d(esi, esi, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
    char* eax_8 = sub_63d4e0(&result_1)
    int32_t temp8_1 = *(eax_8 + 4)
    *(eax_8 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_6 = 0xffffffff

if (esi_2 == 0)
    data_cd3190 -= 1

sub_63d720(&result_1, "btnRight")
char* result_6 = result_1
char* const result_11 = &data_801800
char* edx_10 = *(edi + 4)

if (result_6 != 0)
    result_11 = result_6

int32_t esi_4

while (true)
    ebx.b = *edx_10
    char temp9_1 = *result_11
    bool c_4 = ebx.b u< temp9_1
    
    if (ebx.b == temp9_1)
        if (ebx.b == 0)
            esi_4 = 0
            break
        
        ebx.b = edx_10[1]
        char temp10_1 = result_11[1]
        c_4 = ebx.b u< temp10_1
        
        if (ebx.b == temp10_1)
            edx_10 = &edx_10[2]
            result_11 = &result_11[2]
            
            if (ebx.b != 0)
                continue
            
            esi_4 = 0
            break
    
    esi_4 = sbb.d(esi_2, esi_2, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && result_6 != 0 && *result_6 != 0)
    char* eax_9 = sub_63d4e0(&result_1)
    int32_t temp11_1 = *(eax_9 + 4)
    *(eax_9 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_8 = 0xffffffff

if (esi_4 == 0)
    data_cd3190 += 1

sub_63d720(&result_1, "btnDefaults")
char* result_7 = result_1
char* result_12 = &data_801800
char* edx_13 = *(edi + 4)

if (result_7 != 0)
    result_12 = result_7

int32_t esi_6

while (true)
    ebx.b = *edx_13
    char temp12_1 = *result_12
    bool c_5 = ebx.b u< temp12_1
    
    if (ebx.b == temp12_1)
        if (ebx.b == 0)
            esi_6 = 0
            break
        
        ebx.b = edx_13[1]
        char temp13_1 = result_12[1]
        c_5 = ebx.b u< temp13_1
        
        if (ebx.b == temp13_1)
            edx_13 = &edx_13[2]
            result_12 = &result_12[2]
            
            if (ebx.b != 0)
                continue
            
            esi_6 = 0
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_5) | 1
    break

int32_t var_8_9 = 4

if (data_cf65bc != 0 && result_7 != 0 && *result_7 != 0)
    char* eax_10 = sub_63d4e0(&result_1)
    int32_t temp14_1 = *(eax_10 + 4)
    *(eax_10 + 4) -= 1
    
    if (temp14_1 == 1)
        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_10 = 0xffffffff
void var_218
int32_t var_18

if (esi_6 == 0)
    void* eax_11 = sub_5e3c60(data_cd318c)
    void var_41c
    esi_6 = __builtin_memcpy(&var_218, sub_4b1150(&var_41c), 0x204)
    *(eax_11 + 0x200) = var_18
    
    if (var_18 s< 0)
        sub_63b870(var_18, &data_801800, "source.numSmartplays >= 0", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 0x640, "CopySmartplays")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    memcpy(eax_11, &var_218, var_18 << 3)
    sub_5e3da0(data_cd318c)
    edi = arg2

sub_63d720(&result_1, "btnClear")
char* result = result_1
char* result_2 = &data_801800
void* edx_16 = *(edi + 4)

if (result != 0)
    result_2 = result

int32_t esi_9

while (true)
    ebx.b = *edx_16
    char temp15_1 = *result_2
    bool c_6 = ebx.b u< temp15_1
    
    if (ebx.b == temp15_1)
        if (ebx.b == 0)
            esi_9 = 0
            break
        
        ebx.b = *(edx_16 + 1)
        char temp16_1 = result_2[1]
        c_6 = ebx.b u< temp16_1
        
        if (ebx.b == temp16_1)
            edx_16 += 2
            result_2 = &result_2[2]
            
            if (ebx.b != 0)
                continue
            
            esi_9 = 0
            break
    
    esi_9 = sbb.d(esi_6, esi_6, c_6) | 1
    break

int32_t var_8_11 = 5

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp17_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp17_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_12 = 0xffffffff

if (esi_9 == 0)
    void* eax_15 = sub_5e3c60(data_cd318c)
    void var_620
    __builtin_memcpy(&var_218, sub_4b10e0(&var_620), 0x204)
    *(eax_15 + 0x200) = var_18
    
    if (var_18 s< 0)
        sub_63b870(var_18, &data_801800, "source.numSmartplays >= 0", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 0x640, "CopySmartplays")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    memcpy(eax_15, &var_218, var_18 << 3)
    sub_5e3da0(data_cd318c)

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
