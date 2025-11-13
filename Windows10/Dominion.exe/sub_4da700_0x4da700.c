// 函数: sub_4da700
// 地址: 0x4da700
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_763c4b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ecx
int32_t* edx
ecx, edx = __chkstk(0x1378)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (*ecx != 1)
    sub_63b870(&ExceptionList, &data_801800, "handle.gameType == GAME_LOCAL", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 0x6db, "LocalGameLoadSetup")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void var_1384
sub_4d8d70(&var_1384, ecx[1])
int32_t var_8_1 = 0
int32_t* edi = data_1597da0
int32_t* result = sub_6a6e70(edi, &var_1384)
int32_t* result_1

if (result == 0)
    int32_t var_8_3 = 1
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                sub_64c080(result, result[3] + 0x10)
    
    result.b = 0
else
    void var_1d4
    sub_6a4770(result, edi, &var_1d4, result, 0)
    sub_6a3220(result)
    var_8_1.b = 2
    sub_4b4ab0(edx, sub_4d7240(result))
    void var_1374
    Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(&var_1374)
    int32_t var_8_2 = 3
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp1_1 = result[1]
            result[1] -= 1
            
            if (temp1_1 == 1)
                sub_64c080(result, result[3] + 0x10)
    
    result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
