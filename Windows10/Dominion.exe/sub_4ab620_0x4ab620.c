// 函数: sub_4ab620
// 地址: 0x4ab620
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c
char* ecx

if (data_cc8d5c == 0)
    if (data_cc8d58 != 0)
        data_cc8d58 = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    char const* const var_18_1 = "ExitServer"
    var_1c = 0xa4
    ecx = "gServer != NULL"
else
    char const* const var_18 = "ExitServer"
    var_1c = 0xa3
    ecx = "gClient == NULL"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", var_1c, 
    "ExitServer")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
