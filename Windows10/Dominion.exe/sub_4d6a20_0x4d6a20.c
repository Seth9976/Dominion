// 函数: sub_4d6a20
// 地址: 0x4d6a20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??2@YAPAXIABUnothrow_t@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_cc8dc0 == 0)
    sub_63b870(&ExceptionList, &data_801800, "gGameSettings.localSettings", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 0x5fb, "GetLocalSettings")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t var_30 = sub_63c090()
char* result_1
sub_63df30(&result_1, "%slocalsettings.xml")
int32_t var_8_1 = 0
int32_t* esi = data_1597d80
int32_t* eax_5 = sub_6a2fa0()
char** eax_6 = sub_6a6290(esi, nullptr)
char* result_3 = result_1
char* const result_5 = &data_801800
char* const result_4 = &data_801800

if (result_3 != 0)
    result_4 = result_3

if (sub_6a6650(eax_6, data_1597d80, eax_5, result_4) == 0)
    char* result_2 = result_1
    
    if (result_2 != 0)
        result_5 = result_2
    
    char* const result_6 = result_5
    sub_63b5f0("Failed to write file: '%s'")

char* result = sub_6a3220(eax_5)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
