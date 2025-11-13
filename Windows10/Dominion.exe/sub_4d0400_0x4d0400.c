// 函数: sub_4d0400
// 地址: 0x4d0400
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Move@?$_Func_impl_no_alloc@V<lambda_1>@?1??wait_for_all@agent@Concurrency@@SAXIPAPAV34@PAW4agent_status@4@I@Z@XABI@std@@EAEPAV?$_Func_base@XABI@2@PAX@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg3
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(sub_64e7a0(arg4) + 0x18bc) = sub_4d00e0
int32_t* eax_4 = data_cf65b8
char* edx = eax_4[4]
char const* const var_2c
int32_t var_28
char const* const var_24
char* ecx_1

if (edx != 0)
    sub_63d720(&var_14, edx)
    int32_t var_8_1 = 0
    int32_t var_24_1 = 0xffffffff
    eax_4 = sub_666380(&var_14, &data_8dba6c, arg4, &var_14)
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        eax_4 = var_14
        
        if (eax_4 != 0 && *eax_4 != 0)
            eax_4 = sub_63d4e0(&var_14)
            int32_t temp0_1 = eax_4[1]
            eax_4[1] -= 1
            
            if (temp0_1 == 1)
                eax_4 = sub_64c080(eax_4, eax_4[3] + 0x10)
                var_14 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    int32_t esi_1 = data_cc8d74
    
    if (esi_1 s>= 0)
        if (esi_1 u< 8)
            uint32_t eax_6 = sub_64e7a0(arg4)
            void* result =
                sub_665db0(eax_6, &(&data_8dc7e0)[esi_1 * 3], eax_6, 0x3f800000, 0xffffffff, 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        var_24 = "GetCreditsPage"
        var_28 = 0x298c
        ecx_1 = "page < ARRAYSIZE(PAGES)"
    else
        var_24 = "GetCreditsPage"
        var_28 = 0x298b
        ecx_1 = "page >= 0"
    
    var_2c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
else
    var_24 = "XString::XString"
    var_28 = 0x94
    var_2c = "C:\x\ax2017\Engine\xString.cpp"
    ecx_1 = &data_871e0c

sub_63b870(eax_4, &data_801800, ecx_1, var_2c, var_28, var_24)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
