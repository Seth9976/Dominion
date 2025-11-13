// 函数: sub_757690
// 地址: 0x757690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??_G?$basic_ios@_WU?$char_traits@_W@std@@@std@@UAEPAXI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void*** result = arg1
int32_t var_8_1 = 0
*result = &data_890a70
sub_75f2d0(arg1)
int32_t eax_3 = result[0x1b]

if (eax_3 != 0)
    _aligned_free(eax_3)

sub_75f020(result)

if ((arg2 & 1) != 0)
    int32_t var_1c_2 = 0x78
    operator new(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
