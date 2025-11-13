// 函数: sub_5e73e0
// 地址: 0x5e73e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76a1ae
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_24 = ebx
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
char* esi = *(arg1 + 4)
char* var_18
sub_63d720(&var_18, "btn_settings")
char* eax_3 = var_18
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
    eax_3 = sub_63d4e0(&var_18)
    int32_t temp2_1 = *(eax_3 + 4)
    *(eax_3 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_2 = 0xffffffff

if (esi_2 == 0)
    eax_3.b = 1
    data_b7d418 = data_b7d418 == 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

sub_63d720(&var_18, "btnItem")
char* eax_4 = var_18
char* const ecx_7 = &data_801800
char* edx_4 = *(arg1 + 4)

if (eax_4 != 0)
    ecx_7 = eax_4

int32_t esi_3

while (true)
    ebx.b = *edx_4
    char temp3_1 = *ecx_7
    bool c_2 = ebx.b u< temp3_1
    
    if (ebx.b == temp3_1)
        if (ebx.b == 0)
            esi_3 = 0
            break
        
        ebx.b = edx_4[1]
        char temp4_1 = ecx_7[1]
        c_2 = ebx.b u< temp4_1
        
        if (ebx.b == temp4_1)
            edx_4 = &edx_4[2]
            ecx_7 = &ecx_7[2]
            
            if (ebx.b != 0)
                continue
            
            esi_3 = 0
            break
    
    esi_3 = sbb.d(esi_2, esi_2, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_4 != 0 && *eax_4 != 0)
    char* eax_5 = sub_63d4e0(&var_18)
    int32_t temp5_1 = *(eax_5 + 4)
    *(eax_5 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_4 = 0xffffffff

if (esi_3 == 0)
    sub_5e3ec0(esi_3 + 7, esi_3 + 1)
    char* eax_6
    eax_6.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

sub_63d720(&var_18, "btn_apply_allgames")
char* eax_7 = var_18
char* const ecx_14 = &data_801800
char* edx_8 = *(arg1 + 4)

if (eax_7 != 0)
    ecx_14 = eax_7

int32_t esi_5

while (true)
    ebx.b = *edx_8
    char temp6_1 = *ecx_14
    bool c_3 = ebx.b u< temp6_1
    
    if (ebx.b == temp6_1)
        if (ebx.b == 0)
            esi_5 = 0
            break
        
        ebx.b = edx_8[1]
        char temp7_1 = ecx_14[1]
        c_3 = ebx.b u< temp7_1
        
        if (ebx.b == temp7_1)
            edx_8 = &edx_8[2]
            ecx_14 = &ecx_14[2]
            
            if (ebx.b != 0)
                continue
            
            esi_5 = 0
            break
    
    esi_5 = sbb.d(esi_3, esi_3, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && eax_7 != 0 && *eax_7 != 0)
    char* eax_8 = sub_63d4e0(&var_18)
    int32_t temp8_1 = *(eax_8 + 4)
    *(eax_8 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_6 = 0xffffffff

if (esi_5 == 0)
    void* eax_9 = sub_5e3c60(esi_5 + 1)
    int32_t eax_10
    void* edx_11
    eax_10, edx_11 = sub_61cee0()
    int32_t esi_7 = *(eax_9 + 0x200)
    int32_t ecx_19 = 0
    
    if (esi_7 s> 0)
        do
            edx_11 = eax_9 + (ecx_19 << 3)
            
            if (*(eax_9 + (ecx_19 << 3)) == 7)
                eax_10 = *(edx_11 + 4)
                break
            
            ecx_19 += 1
        while (ecx_19 s< esi_7)
    
    sub_5e3e50(eax_10, edx_11, 7, eax_10)
    char* eax_11
    eax_11.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_11

char* edi_2 = *(arg1 + 4)
char* var_1c
sub_63d720(&var_1c, "btn_icon")
int32_t var_8_7 = 3
char* esi_8 = var_1c
char* const eax_12 = &data_801800
int32_t var_20_1 = 1

if (esi_8 != 0)
    eax_12 = esi_8

int32_t eax_14

while (true)
    char ecx_23 = *eax_12
    char temp9_1 = *edi_2
    bool c_4 = ecx_23 u< temp9_1
    
    if (ecx_23 == temp9_1)
        if (ecx_23 == 0)
            eax_14 = 0
            break
        
        ecx_23 = eax_12[1]
        char temp10_1 = edi_2[1]
        c_4 = ecx_23 u< temp10_1
        
        if (ecx_23 == temp10_1)
            eax_12 = &eax_12[2]
            edi_2 = &edi_2[2]
            
            if (ecx_23 != 0)
                continue
            
            eax_14 = 0
            break
    
    eax_14 = sbb.d(eax_12, eax_12, c_4) | 1
    break

char ecx_28 = 1
int32_t edx_12 = 1
char var_11
char* eax_15

if (eax_14 == 0)
    eax_15 = var_18
label_5e76fb:
    var_11 = 1
    
    if ((ecx_28 & 2) != 0)
        goto label_5e7709
else
    char* edi_4 = *(arg1 + 4)
    sub_63d720(&var_18, "btn_bg")
    eax_15 = var_18
    char* ecx_25 = &data_801800
    
    if (eax_15 != 0)
        ecx_25 = eax_15
    
    int32_t ecx_27
    
    while (true)
        char edx_13 = *ecx_25
        char temp11_1 = *edi_4
        bool c_5 = edx_13 u< temp11_1
        
        if (edx_13 == temp11_1)
            if (edx_13 == 0)
                ecx_27 = 0
                break
            
            edx_13 = ecx_25[1]
            char temp12_1 = edi_4[1]
            c_5 = edx_13 u< temp12_1
            
            if (edx_13 == temp12_1)
                ecx_25 = &ecx_25[2]
                edi_4 = &edi_4[2]
                
                if (edx_13 != 0)
                    continue
                
                ecx_27 = 0
                break
        
        ecx_27 = sbb.d(ecx_25, ecx_25, c_5) | 1
        break
    
    edx_12 = 3
    
    if (ecx_27 == 0)
        ecx_28 = 3
        goto label_5e76fb
    
    var_11 = 0
label_5e7709:
    int32_t var_20_2 = edx_12 & 0xfffffffd
    int32_t var_8_8 = 4
    
    if (data_cf65bc != 0 && eax_15 != 0 && *eax_15 != 0)
        eax_15 = sub_63d4e0(&var_18)
        int32_t temp14_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp14_1 == 1)
            sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
            var_18 = &data_801800

int32_t var_8_9 = 0xffffffff
int32_t var_8_10 = 5

if (data_cf65bc != 0 && esi_8 != 0 && *esi_8 != 0)
    eax_15 = sub_63d4e0(&var_1c)
    int32_t temp13_1 = *(eax_15 + 4)
    *(eax_15 + 4) -= 1
    
    if (temp13_1 == 1)
        sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
        var_1c = &data_801800

int32_t var_8_11 = 0xffffffff

if (var_11 != 0)
    uint32_t eax_17 = sub_5cba00(*(arg1 + 0x1c))
    
    if (*(eax_17 + 0x2c) != 3)
        sub_63b870(eax_17, &data_801800, "gfx.type == DOMGFX_PILE", 
            "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x518e, "PodClick")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* ecx_34 = *(eax_17 + 0x5c)
    
    if (ecx_34 == 0x3ee || ecx_34 == 3 || ecx_34 - 0x44c u<= 0x27 || ecx_34 == 0x3e9)
        sub_5ce8b0(eax_17)

eax_15.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_15
