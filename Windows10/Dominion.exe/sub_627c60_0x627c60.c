// 函数: sub_627c60
// 地址: 0x627c60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$parse_floating_point_possible_nan@DV?$input_adapter_character_source@V?$string_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@_K@__crt_strtox@@YA?AW4floating_point_parse_result@0@AADAAV?$input_adapter_character_source@V?$string_input_adapter@D@__crt_stdio_input@@@0@_K@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(sub_64e7a0(arg1) + 0x18bc) = sub_6250f0
void* result = data_cc8d5c
char const* const var_38_1
int32_t var_34_1
char const* const var_30_1
char* ecx_1

if (result != 0)
    if (*(result + 0x5068) == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    int32_t esi_1 = data_cf6494
    void* edi_1 = &sub_4b9480()[2]
    void* eax_5 = sub_4b9680(edi_1, esi_1)
    void var_1c
    char* var_14
    sub_4b06c0(eax_5, edi_1, &var_14, eax_5, &var_1c)
    int32_t var_8_1 = 0
    int32_t var_38_2 = 0xffffffff
    sub_666380(&var_14, &data_bf0e54, arg1, &var_14)
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        char* eax_7 = var_14
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_63d4e0(&var_14)
            int32_t temp2_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                var_14 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    int32_t var_30_3 = *(data_cf6494 * 0x5dd4 + 0xcd3198)
    char* const var_18
    sub_63df30(&var_18, "%d")
    int32_t var_8_4 = 2
    int32_t var_3c_2 = 0xffffffff
    sub_666380(&var_18, &data_bf0e60, arg1, &var_18)
    int32_t var_8_5 = 3
    
    if (data_cf65bc != 0)
        char* eax_11 = var_18
        
        if (eax_11 != 0 && *eax_11 != 0)
            char* eax_12 = sub_63d4e0(&var_18)
            int32_t temp3_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
                var_18 = &data_801800
    
    int32_t var_8_6 = 0xffffffff
    int32_t eax_13 = data_cf6490
    
    if (eax_13 == 0)
        uint32_t eax_18 = sub_64e7a0(arg1)
        sub_665db0(eax_18, &data_bf10cc, eax_18, 0x3f800000, 0xffffffff, 0)
        int32_t edx_8 = data_cf6494
        int32_t var_38_5 = edx_8 * 0x5dd4 + 0xcd3198
        result = sub_6261f0(arg1, edx_8)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    result = eax_13 - 1
    
    if (eax_13 == 1)
        uint32_t eax_15 = sub_64e7a0(arg1)
        sub_665db0(eax_15, &data_bf10d8, eax_15, 0x3f800000, 0xffffffff, 0)
        int32_t edx_7 = data_cf6494
        result = sub_626d10(edx_7 * 0x5dd4 + 0xcd3198, edx_7, arg1, edx_7 * 0x5dd4 + 0xcd3198)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    var_30_1 = "ScorescreenCardsUpdate"
    var_34_1 = 0xf20d
    var_38_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_1 = "Halt"
else
    var_30_1 = "GetClient"
    var_34_1 = 0x7b
    var_38_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"

sub_63b870(result, &data_801800, ecx_1, var_38_1, var_34_1, var_30_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
