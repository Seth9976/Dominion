// 函数: sub_5e4040
// 地址: 0x5e4040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_769ff0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_24 = ebx
int32_t var_28 = arg1
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18
sub_63d720(&var_18, "btn_way")
char* const ecx_1 = &data_801800
char* eax_3 = var_18

if (eax_3 != 0)
    ecx_1 = eax_3

char* edx = *(arg2 + 4)
int32_t esi

while (true)
    ebx.b = *edx
    char temp0_1 = *ecx_1
    bool c_1 = ebx.b u< temp0_1
    
    if (ebx.b == temp0_1)
        if (ebx.b == 0)
            esi = 0
            break
        
        ebx.b = edx[1]
        char temp1_1 = ecx_1[1]
        c_1 = ebx.b u< temp1_1
        
        if (ebx.b == temp1_1)
            edx = &edx[2]
            ecx_1 = &ecx_1[2]
            
            if (ebx.b != 0)
                continue
            
            esi = 0
            break
    
    esi = sbb.d(arg1, arg1, c_1) | 1
    break

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
    char* eax_4 = sub_63d4e0(&var_18)
    int32_t temp2_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_2 = 0xffffffff

if (esi == 0)
    int32_t ecx_4 = *(arg2 + 0x1c)
    uint32_t eax_5 = sub_5cba00(ecx_4)
    int32_t var_34_1 = 1
    sub_617bb0(eax_5, &data_7ffb14, eax_5, 1, ecx_4)
    uint32_t eax_6
    eax_6.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

sub_63d720(&var_18, "btn_settings")
char* eax_7 = var_18
char* const ecx_9 = &data_801800
char* edx_3 = *(arg2 + 4)

if (eax_7 != 0)
    ecx_9 = eax_7

int32_t esi_3

while (true)
    ebx.b = *edx_3
    char temp3_1 = *ecx_9
    bool c_2 = ebx.b u< temp3_1
    
    if (ebx.b == temp3_1)
        if (ebx.b == 0)
            esi_3 = 0
            break
        
        ebx.b = edx_3[1]
        char temp4_1 = ecx_9[1]
        c_2 = ebx.b u< temp4_1
        
        if (ebx.b == temp4_1)
            edx_3 = &edx_3[2]
            ecx_9 = &ecx_9[2]
            
            if (ebx.b != 0)
                continue
            
            esi_3 = 0
            break
    
    esi_3 = sbb.d(esi, esi, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_7 != 0 && *eax_7 != 0)
    char* eax_8 = sub_63d4e0(&var_18)
    int32_t temp5_1 = *(eax_8 + 4)
    *(eax_8 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_4 = 0xffffffff

if (esi_3 == 0)
    data_b7d418 = data_b7d418 == 0

sub_63d720(&var_18, "btnItem")
char* eax_9 = var_18
char* const ecx_13 = &data_801800
char* edx_6 = *(arg2 + 4)

if (eax_9 != 0)
    ecx_13 = eax_9

int32_t esi_5

while (true)
    ebx.b = *edx_6
    char temp6_1 = *ecx_13
    bool c_3 = ebx.b u< temp6_1
    
    if (ebx.b == temp6_1)
        if (ebx.b == 0)
            esi_5 = 0
            break
        
        ebx.b = edx_6[1]
        char temp7_1 = ecx_13[1]
        c_3 = ebx.b u< temp7_1
        
        if (ebx.b == temp7_1)
            edx_6 = &edx_6[2]
            ecx_13 = &ecx_13[2]
            
            if (ebx.b != 0)
                continue
            
            esi_5 = 0
            break
    
    esi_5 = sbb.d(esi_3, esi_3, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && eax_9 != 0 && *eax_9 != 0)
    char* eax_10 = sub_63d4e0(&var_18)
    int32_t temp8_1 = *(eax_10 + 4)
    *(eax_10 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_6 = 0xffffffff

if (esi_5 != 0)
    goto label_5e428b

void var_1c
int32_t eax_13 = sub_61ce00(sub_5cbb20(sub_5cba00(data_b7d434)), &var_1c)
int32_t ecx_19 = *(arg2 + 8)
int32_t var_38_1

if (ecx_19 s< eax_13)
    sub_5e3ec0(**(&var_1c + (ecx_19 << 2)), 1)
label_5e428b:
    sub_63d720(&var_18, "btn_apply_allgames")
    char* eax_14 = var_18
    char* ecx_23 = &data_801800
    char* edx_10 = *(arg2 + 4)
    
    if (eax_14 != 0)
        ecx_23 = eax_14
    
    int32_t esi_7
    
    while (true)
        ebx.b = *edx_10
        char temp9_1 = *ecx_23
        bool c_4 = ebx.b u< temp9_1
        
        if (ebx.b == temp9_1)
            if (ebx.b == 0)
                esi_7 = 0
                break
            
            ebx.b = edx_10[1]
            char temp10_1 = ecx_23[1]
            c_4 = ebx.b u< temp10_1
            
            if (ebx.b == temp10_1)
                edx_10 = &edx_10[2]
                ecx_23 = &ecx_23[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_7 = 0
                break
        
        esi_7 = sbb.d(esi_5, esi_5, c_4) | 1
        break
    
    int32_t var_8_7 = 3
    
    if (data_cf65bc != 0 && eax_14 != 0 && *eax_14 != 0)
        eax_14 = sub_63d4e0(&var_18)
        int32_t temp11_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp11_1 == 1)
            sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
            var_18 = &data_801800
    
    int32_t var_8_8 = 0xffffffff
    
    if (esi_7 != 0)
    label_5e4378:
        eax_14.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_14
    
    eax_13 = sub_61ce00(sub_5cbb20(sub_5cba00(data_b7d434)), &var_1c)
    int32_t ecx_29 = *(arg2 + 8)
    
    if (ecx_29 s< eax_13)
        int32_t edi_1 = **(&var_1c + (ecx_29 << 2))
        void* eax_18 = sub_5e3c60(esi_7 + 1)
        int32_t eax_19
        void* edx_14
        eax_19, edx_14 = sub_61cee0()
        int32_t esi_9 = *(eax_18 + 0x200)
        int32_t ecx_32 = 0
        
        if (esi_9 s> 0)
            do
                edx_14 = eax_18 + (ecx_32 << 3)
                
                if (*(eax_18 + (ecx_32 << 3)) == edi_1)
                    eax_19 = *(edx_14 + 4)
                    break
                
                ecx_32 += 1
            while (ecx_32 s< esi_9)
        
        int32_t eax_21 = *(arg2 + 8)
        sub_5e3e50(eax_21, edx_14, **(&var_1c + (eax_21 << 2)), eax_19)
        goto label_5e4378
    
    char const* const var_34_4 = "CardClick"
    var_38_1 = 0x4c95
else
    char const* const var_34_2 = "CardClick"
    var_38_1 = 0x4c8c

sub_63b870(eax_13, &data_801800, "info.index < numSettings", 
    "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_38_1, "CardClick")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
