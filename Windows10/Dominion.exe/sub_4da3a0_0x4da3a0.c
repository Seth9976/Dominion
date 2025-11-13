// 函数: sub_4da3a0
// 地址: 0x4da3a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_763bd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3ac = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = *(arg1 + 0x1c) - 0x64

if (result u<= 0x19)
    result.b = 0
else
    if (arg2 == 0x7fffffff)
        sub_63b870(result, &data_801800, "gameId != GAMEIDX_UNSAVED", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 0x69c, "LocalGameSaveXML")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t var_3b0_1 = arg2
    int32_t var_3b4_1 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42b0)
    int32_t var_3b8_1 = sub_63c090()
    int32_t var_8_1 = 0
    void var_39c
    char* result_1
    void var_1d4
    __builtin_memcpy(&var_1d4, 
        sub_4d7100(&var_39c, sub_63df30(&result_1, "%sgamelocal_%d_%d.xml"), arg1 + 8, &var_39c), 
        0x1c0)
    int32_t* esi_2 = data_1597da0
    int32_t* eax_8 = sub_6a2fa0()
    sub_6a6290(esi_2, nullptr)
    char* result_2 = result_1
    char* const result_5 = &data_801800
    char* const result_4 = &data_801800
    
    if (result_2 != 0)
        result_4 = result_2
    
    if (sub_6a6650(result_2, data_1597da0, eax_8, result_4) != 0)
        sub_6a3220(eax_8)
        int32_t var_8_3 = 2
        
        if (data_cf65bc != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(result, *(result + 0xc) + 0x10)
        
        result.b = 1
    else
        char* result_3 = result_1
        
        if (result_3 != 0)
            result_5 = result_3
        
        char* const result_6 = result_5
        sub_63b5f0("Failed to write file: '%s'")
        sub_6a3220(eax_8)
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp1_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(result, *(result + 0xc) + 0x10)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
