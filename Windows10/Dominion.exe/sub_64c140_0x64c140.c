// 函数: sub_64c140
// 地址: 0x64c140
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$clone_impl@U?$error_info_injector@Vdomain_error@std@@@exception_detail@boost@@@exception_detail@boost@@QAE@ABV012@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void*** var_14 = arg1
*arg1 = &data_876cac
arg1[3] = &data_801800
int32_t var_8_1 = 0

for (void* i = data_147abd8; i != 0; i = *(i + 4))
    int32_t eax_3 = _stricmp(*(i + 8), arg2)
    
    if (eax_3 == 0)
        sub_63b870(eax_3, &data_801800, "StateDoesntExist(arg_name)", "C:\x\ax2017\Engine\UI2.h", 
            0xa8, "UI2StateDeclName::UI2StateDeclName")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

int32_t result = sub_4acb80(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return result
