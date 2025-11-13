// 函数: ??$_Deallocate_plain@V?$allocator@U_Container_proxy@std@@@std@@@std@@YAXAAV?$allocator@U_Container_proxy@std@@@0@QAU_Container_proxy@0@@Z
// 地址: 0x635a10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = `eh vector vbase constructor iterator'(arg1, 0x10, 6, sub_5a0bf0)
fsbase->NtTib.ExceptionList = ExceptionList
return result
