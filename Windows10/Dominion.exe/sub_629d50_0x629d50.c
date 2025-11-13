// 函数: sub_629d50
// 地址: 0x629d50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?GetCoreCount@ResourceManager@details@Concurrency@@SAIXZ
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
    bool c_2 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            ecx_3 = 0
            break
        
        edx_1 = ecx_1[1]
        char temp1_1 = esi[1]
        c_2 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            ecx_1 = &ecx_1[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            ecx_3 = 0
            break
    
    ecx_3 = sbb.d(ecx_1, ecx_1, c_2) | 1
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
        var_14 = &data_801800

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    sub_4d46e0(5, 0)

char* ebx_1 = arg_4
char* esi_1 = *(ebx_1 + 4)
sub_63d720(&arg_4, "btnSetup")
char* eax_5 = arg_4
char* const ecx_7 = &data_801800

if (eax_5 != 0)
    ecx_7 = eax_5

int32_t c

while (true)
    char edx_4 = *ecx_7
    char temp3_1 = *esi_1
    bool c_3 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            c = 0
            break
        
        edx_4 = ecx_7[1]
        char temp4_1 = esi_1[1]
        c_3 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            ecx_7 = &ecx_7[2]
            esi_1 = &esi_1[2]
            
            if (edx_4 != 0)
                continue
            
            c = 0
            break
    
    c = sbb.d(esi_1, esi_1, c_3) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_5 != 0 && *eax_5 != 0)
    char* eax_6 = sub_63d4e0(&arg_4)
    int32_t temp5_1 = *(eax_6 + 4)
    *(eax_6 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
        arg_4 = &data_801800

int32_t var_8_4 = 0xffffffff

if (c == 0)
    memset(&data_8dbf38, c, 0x78)
    data_8dbf38 = 3
    data_8dbf40.d = c
    *(sub_4bbdb0() + 0x28) = 0x17
    sub_62b4e0()
    data_8db660 = 0x10

char* esi_3 = *(ebx_1 + 4)
sub_63d720(&arg_4, "btnSave")
char* eax_8 = arg_4
char* const ecx_12 = &data_801800

if (eax_8 != 0)
    ecx_12 = eax_8

int32_t esi_5

while (true)
    char edx_8 = *ecx_12
    char temp6_1 = *esi_3
    bool c_4 = edx_8 u< temp6_1
    
    if (edx_8 == temp6_1)
        if (edx_8 == 0)
            esi_5 = 0
            break
        
        edx_8 = ecx_12[1]
        char temp7_1 = esi_3[1]
        c_4 = edx_8 u< temp7_1
        
        if (edx_8 == temp7_1)
            ecx_12 = &ecx_12[2]
            esi_3 = &esi_3[2]
            
            if (edx_8 != 0)
                continue
            
            esi_5 = 0
            break
    
    esi_5 = sbb.d(esi_3, esi_3, c_4) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && eax_8 != 0 && *eax_8 != 0)
    char* eax_9 = sub_63d4e0(&arg_4)
    int32_t temp8_1 = *(eax_9 + 4)
    *(eax_9 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
        arg_4 = &data_801800

int32_t var_8_6 = 0xffffffff

if (esi_5 == 0)
    void* eax_10 = data_be4a38
    data_be4a3c = 1
    data_be4a40 = 0xffffffff
    
    if (eax_10 != 0 && eax_10 != &data_801800)
        if (data_cf65bc != esi_5 && *eax_10 != 0)
            char* eax_11 = sub_63d4e0(&data_be4a38)
            int32_t temp11_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp11_1 == 1)
                sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
        
        data_be4a38 = &data_801800
    
    data_8db6b0 = 0x7f0

char* esi_6 = *(ebx_1 + 4)
sub_63d720(&arg_4, "btnPinLog")
char* eax_12 = arg_4
char* const ecx_17 = &data_801800

if (eax_12 != 0)
    ecx_17 = eax_12

int32_t esi_8

while (true)
    char edx_13 = *ecx_17
    char temp9_1 = *esi_6
    bool c_5 = edx_13 u< temp9_1
    
    if (edx_13 == temp9_1)
        if (edx_13 == 0)
            esi_8 = 0
            break
        
        edx_13 = ecx_17[1]
        char temp10_1 = esi_6[1]
        c_5 = edx_13 u< temp10_1
        
        if (edx_13 == temp10_1)
            ecx_17 = &ecx_17[2]
            esi_6 = &esi_6[2]
            
            if (edx_13 != 0)
                continue
            
            esi_8 = 0
            break
    
    esi_8 = sbb.d(esi_6, esi_6, c_5) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && eax_12 != 0 && *eax_12 != 0)
    char* eax_13 = sub_63d4e0(&arg_4)
    int32_t temp12_1 = *(eax_13 + 4)
    *(eax_13 + 4) -= 1
    
    if (temp12_1 == 1)
        sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
        arg_4 = &data_801800

int32_t var_8_8 = 0xffffffff

if (esi_8 == 0)
    void* eax_14 = data_cc8dc0
    
    if (eax_14 == 0)
        sub_63b870(eax_14, &data_801800, "gGameSettings.localSettings", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 0x5fb, "GetLocalSettings")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    *(eax_14 + 0x38) = 1
    sub_4d6a20()
    sub_4d46e0(esi_8 + 5, 0)
    
    if (data_8db5c4 == 0x27)
        int32_t ecx_21 = data_8db5c8
        
        if (ecx_21 != 0)
            uint32_t eax_16 = sub_64e7a0(sub_67bd70(ecx_21, "tbl_center_holder"))
            sub_65bf00(eax_16)
            sub_65bf40(eax_16)

char* esi_9 = *(ebx_1 + 4)
sub_63d720(&arg_4, "btn_tabSetup")
char* eax_17 = arg_4
char* ecx_25 = &data_801800

if (eax_17 != 0)
    ecx_25 = eax_17

int32_t esi_11

while (true)
    char edx_17 = *ecx_25
    char temp13_1 = *esi_9
    bool c_6 = edx_17 u< temp13_1
    
    if (edx_17 == temp13_1)
        if (edx_17 == 0)
            esi_11 = 0
            break
        
        edx_17 = ecx_25[1]
        char temp14_1 = esi_9[1]
        c_6 = edx_17 u< temp14_1
        
        if (edx_17 == temp14_1)
            ecx_25 = &ecx_25[2]
            esi_9 = &esi_9[2]
            
            if (edx_17 != 0)
                continue
            
            esi_11 = 0
            break
    
    esi_11 = sbb.d(esi_9, esi_9, c_6) | 1
    break

int32_t var_8_9 = 4

if (data_cf65bc != 0 && eax_17 != 0 && *eax_17 != 0)
    char* eax_18 = sub_63d4e0(&arg_4)
    int32_t temp15_1 = *(eax_18 + 4)
    *(eax_18 + 4) -= 1
    
    if (temp15_1 == 1)
        sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)

int32_t var_8_10 = 0xffffffff

if (esi_11 == 0)
    data_1724a54 = 1
    data_1724a4c = 1
    data_1724a40 = esi_11
    data_1724a48 = 0xffffffff
    data_1724a50 = 0xffffffff

char* esi_12 = *(ebx_1 + 4)
sub_63d720(&arg_4, "btn_tabLog")
char* eax_19 = arg_4

if (eax_19 != 0)
    edi = eax_19

int32_t esi_14

while (true)
    char ecx_29 = *edi
    char temp16_1 = *esi_12
    bool c_7 = ecx_29 u< temp16_1
    
    if (ecx_29 == temp16_1)
        if (ecx_29 == 0)
            esi_14 = 0
            break
        
        ecx_29 = edi[1]
        char temp17_1 = esi_12[1]
        c_7 = ecx_29 u< temp17_1
        
        if (ecx_29 == temp17_1)
            edi = &edi[2]
            esi_12 = &esi_12[2]
            
            if (ecx_29 != 0)
                continue
            
            esi_14 = 0
            break
    
    esi_14 = sbb.d(esi_12, esi_12, c_7) | 1
    break

int32_t var_8_11 = 5

if (data_cf65bc != 0 && eax_19 != 0 && *eax_19 != 0)
    char* eax_20 = sub_63d4e0(&arg_4)
    int32_t temp18_1 = *(eax_20 + 4)
    *(eax_20 + 4) -= 1
    
    if (temp18_1 == 1)
        sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)

int32_t var_8_12 = 0xffffffff

if (esi_14 == 0)
    data_1724a54 = esi_14
    data_1724a4c = 0
    data_1724a48 = 0xffffffff
    data_1724a50 = 0xffffffff

sub_629b70(ebx_1)
char* result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
