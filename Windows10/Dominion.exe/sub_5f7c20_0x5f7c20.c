// 函数: sub_5f7c20
// 地址: 0x5f7c20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$parse_floating_point_possible_nan@_WV?$input_adapter_character_source@V?$console_input_adapter@_W@__crt_stdio_input@@@__crt_strtox@@_K@__crt_strtox@@YA?AW4floating_point_parse_result@0@AA_WAAV?$input_adapter_character_source@V?$console_input_adapter@_W@__crt_stdio_input@@@0@_K@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(sub_64e7a0(arg1) + 0x18bc) = sub_5f7910
void* eax_4 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
void* eax_5 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t ecx_6 = *(eax_5 + 0x71fc) & 1
void** edi

if (ecx_6 == 0)
    edi = &data_be4738
else
    if (ecx_6 != 1)
        sub_63b870(eax_5, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0x8489, "DomMatchmakingAsynchSettingsUpdate")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    edi = &data_be4744

uint32_t eax_6 = sub_64e7a0(arg1)
sub_665db0(eax_6, edi, eax_6, 0x3f800000, 0xffffffff, 0)
int32_t edi_1 = *(eax_4 + 0x71f8)

if (edi_1 s< 1)
    edi_1 = 1

int32_t var_38 = edi_1
char* var_18
sub_63df30(&var_18, "%d")
int32_t var_8_1 = 0
int32_t var_44 = 0xffffffff
sub_666380(&var_18, &data_be4714, arg1, &var_18)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* eax_8 = var_18
    
    if (eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_63d4e0(&var_18)
        int32_t temp2_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)

int32_t var_8_3 = 0xffffffff
int32_t var_1c
sub_4c59c0(&var_1c, &var_18)
void* var_30 = &var_18[var_1c]
void* result_1
sub_63df30(&result_1, "%d")
int32_t var_8_4 = 2
int32_t var_3c = 0xffffffff
void* result = sub_666380(&result_1, &data_be4708, arg1, &result_1)
int32_t var_8_5 = 3

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp3_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp3_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            result_1 = &data_801800

int32_t var_8_6 = 0xffffffff
uint32_t eax_13

if (edi_1 u<= 1)
    eax_13 = sub_64e7a0(arg1)
    result = sub_665db0(eax_13, &data_be4720, eax_13, 0x3f800000, 0xffffffff, 0)
else if (edi_1 == 0x20)
    eax_13 = sub_64e7a0(arg1)
    result = sub_665db0(eax_13, &data_be472c, eax_13, 0x3f800000, 0xffffffff, 0)
fsbase->NtTib.ExceptionList = ExceptionList
return result
