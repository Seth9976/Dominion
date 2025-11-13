// 函数: sub_628bc0
// 地址: 0x628bc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?AddExecutionResource@SchedulerProxy@details@Concurrency@@QAEXPAVExecutionResource@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
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
        arg_4 = &data_801800

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    sub_628ab0()

char* esi_1 = *(edi + 4)
sub_63d720(&arg_4, "btnLeft")
char* eax_5 = arg_4
char* const ecx_8 = &data_801800

if (eax_5 != 0)
    ecx_8 = eax_5

int32_t esi_3

while (true)
    char edx_4 = *ecx_8
    char temp3_1 = *esi_1
    bool c_2 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            esi_3 = 0
            break
        
        edx_4 = ecx_8[1]
        char temp4_1 = esi_1[1]
        c_2 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            ecx_8 = &ecx_8[2]
            esi_1 = &esi_1[2]
            
            if (edx_4 != 0)
                continue
            
            esi_3 = 0
            break
    
    esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
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

if (esi_3 == 0)
    data_ccf69c -= 1

char* esi_4 = *(edi + 4)
sub_63d720(&arg_4, "btnRight")
char* eax_7 = arg_4
char* const ecx_12 = &data_801800

if (eax_7 != 0)
    ecx_12 = eax_7

int32_t esi_6

while (true)
    char edx_7 = *ecx_12
    char temp6_1 = *esi_4
    bool c_3 = edx_7 u< temp6_1
    
    if (edx_7 == temp6_1)
        if (edx_7 == 0)
            esi_6 = 0
            break
        
        edx_7 = ecx_12[1]
        char temp7_1 = esi_4[1]
        c_3 = edx_7 u< temp7_1
        
        if (edx_7 == temp7_1)
            ecx_12 = &ecx_12[2]
            esi_4 = &esi_4[2]
            
            if (edx_7 != 0)
                continue
            
            esi_6 = 0
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && eax_7 != 0 && *eax_7 != 0)
    char* eax_8 = sub_63d4e0(&arg_4)
    int32_t temp8_1 = *(eax_8 + 4)
    *(eax_8 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
        arg_4 = &data_801800

int32_t var_8_6 = 0xffffffff

if (esi_6 == 0)
    data_ccf69c += 1

char* esi_7 = *(edi + 4)
sub_63d720(&arg_4, "btnItem")
char* eax_9 = arg_4
char* ecx_16 = &data_801800

if (eax_9 != 0)
    ecx_16 = eax_9

int32_t esi_9

while (true)
    char edx_10 = *ecx_16
    char temp9_1 = *esi_7
    bool c_4 = edx_10 u< temp9_1
    
    if (edx_10 == temp9_1)
        if (edx_10 == 0)
            esi_9 = 0
            break
        
        edx_10 = ecx_16[1]
        char temp10_1 = esi_7[1]
        c_4 = edx_10 u< temp10_1
        
        if (edx_10 == temp10_1)
            ecx_16 = &ecx_16[2]
            esi_7 = &esi_7[2]
            
            if (edx_10 != 0)
                continue
            
            esi_9 = 0
            break
    
    esi_9 = sbb.d(esi_7, esi_7, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && eax_9 != 0 && *eax_9 != 0)
    eax_9 = sub_63d4e0(&arg_4)
    int32_t temp11_1 = *(eax_9 + 4)
    *(eax_9 + 4) -= 1
    
    if (temp11_1 == 1)
        eax_9 = sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
        arg_4 = &data_801800

int32_t var_8_8 = 0xffffffff

if (esi_9 == 0)
    void* esi_10 = data_cc8d5c
    char const* const var_30
    int32_t var_2c
    char const* const var_28
    char* ecx_19
    
    if (esi_10 == 0)
        var_28 = "GetClient"
        var_2c = 0x7b
        var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        ecx_19 = "gClient"
    label_628efb:
        sub_63b870(eax_9, &data_801800, ecx_19, var_30, var_2c, var_28)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (*(esi_10 + 0xc) != *(esi_10 + 0x10))
        sub_63b7f0("failed to submit cardnames click, waiting")
        int32_t eax_11
        eax_11.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_11
    
    eax_9 = *(edi + 8) + data_ccf69c * 0x14
    
    if (eax_9 s< 0)
        var_28 = "CardnamesClick"
        var_2c = 0xf8cd
        ecx_19 = "idx >= 0"
    label_628ef1:
        var_30 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        goto label_628efb
    
    if (eax_9 s>= data_ccf698)
        var_28 = "CardnamesClick"
        var_2c = 0xf8ce
        ecx_19 = "idx < gCardnamesGlobals.numCardTypes"
        goto label_628ef1
    
    data_b80b68 = *((eax_9 << 2) + &data_ccea18)
    data_b80b64 = 1
    sub_5ee590(*(esi_10 + 0x7590), &data_b80af8)
    sub_628ab0()

eax_9.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
