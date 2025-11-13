// 函数: sub_629b70
// 地址: 0x629b70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$_Mpunct@G@std@@QAE@ABV_Locinfo@1@I_N1@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = *(arg1 + 4)
char* result_1
sub_63d720(&result_1, "btnItem")
char* result_3 = result_1
char* const result_4 = &data_801800

if (result_3 != 0)
    result_4 = result_3

int32_t esi_2

while (true)
    char ecx_1 = *result_4
    char temp0_1 = *esi
    bool c_1 = ecx_1 u< temp0_1
    
    if (ecx_1 == temp0_1)
        if (ecx_1 == 0)
            esi_2 = 0
            break
        
        ecx_1 = result_4[1]
        char temp1_1 = esi[1]
        c_1 = ecx_1 u< temp1_1
        
        if (ecx_1 == temp1_1)
            result_4 = &result_4[2]
            esi = &esi[2]
            
            if (ecx_1 != 0)
                continue
            
            esi_2 = 0
            break
    
    esi_2 = sbb.d(esi, esi, c_1) | 1
    break

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result_3 != 0 && *result_3 != 0)
    char* eax_3 = sub_63d4e0(&result_1)
    int32_t temp2_1 = *(eax_3 + 4)
    *(eax_3 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_2 = 0xffffffff

if (esi_2 == 0)
    int32_t eax_4 = *(arg1 + 8)
    
    if (eax_4 == data_1724a48)
        eax_4 = 0xffffffff
    
    data_1724a48 = eax_4

char* esi_3 = *(arg1 + 4)
sub_63d720(&result_1, "btn_undo")
char* result = result_1
char* result_2 = &data_801800

if (result != 0)
    result_2 = result

int32_t esi_5

while (true)
    char edx_2 = *result_2
    char temp3_1 = *esi_3
    bool c_2 = edx_2 u< temp3_1
    
    if (edx_2 == temp3_1)
        if (edx_2 == 0)
            esi_5 = 0
            break
        
        edx_2 = result_2[1]
        char temp4_1 = esi_3[1]
        c_2 = edx_2 u< temp4_1
        
        if (edx_2 == temp4_1)
            result_2 = &result_2[2]
            esi_3 = &esi_3[2]
            
            if (edx_2 != 0)
                continue
            
            esi_5 = 0
            break
    
    esi_5 = sbb.d(esi_3, esi_3, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp5_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp5_1 == 1)
        result = sub_64c080(result, *(result + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_8_4 = 0xffffffff

if (esi_5 == 0)
    uint32_t eax_5 = sub_624650()
    int32_t var_2c
    char* ecx_7
    
    if (eax_5.b == 0)
        char const* const var_28 = "LogItemClick"
        var_2c = 0xfa7a
        ecx_7 = "CanUndo()"
    label_629d33:
        sub_63b870(eax_5, &data_801800, ecx_7, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            var_2c, "LogItemClick")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    sub_4d46e0(5, 0)
    eax_5 = *(arg1 + 8) - data_1724a40
    
    if (eax_5 s>= 0x80)
        char const* const var_28_1 = "LogItemClick"
        var_2c = 0xfa7c
        ecx_7 = "info.index - gLogData.startLine < MAX_LINES"
        goto label_629d33
    
    uint32_t ecx_8 = eax_5 * 5
    result = sub_600830(*((ecx_8 << 2) + &data_1724048), *((ecx_8 << 2) + &data_1724044))

fsbase->NtTib.ExceptionList = ExceptionList
return result
