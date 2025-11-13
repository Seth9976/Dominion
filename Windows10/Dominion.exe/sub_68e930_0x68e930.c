// 函数: sub_68e930
// 地址: 0x68e930
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?find_next_state@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@ABE?AW4state@2@DW432@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_18 = arg3
char* const esi = &data_801800
int32_t var_8_1 = 0
int32_t var_14 = 0
sub_63d720(arg3, &data_801800)
int32_t var_8_2 = 0
char* eax_3 = *arg2
int32_t var_14_1 = 1

if (eax_3 != 0)
    esi = eax_3

sub_63d9d0(arg3, esi, arg5)
sub_63d9d0(arg3, arg6, 1)
char* eax_4 = *arg2
char* eax_6

if (eax_4 == 0 || *eax_4 == 0)
    eax_6 = nullptr
else
    eax_6 = *(sub_63d4e0(arg2) + 8)

sub_63d9d0(arg3, arg4 + 1, eax_6)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
