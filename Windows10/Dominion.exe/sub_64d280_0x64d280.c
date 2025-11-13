// 函数: sub_64d280
// 地址: 0x64d280
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?find_next_state@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@ABE?AW4state@2@DW432@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = arg1
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2c)(void* arg1) = sub_64ca90
int32_t var_8_1 = 0
int32_t var_14 = 0
`eh vector constructor iterator'(&arg1[2], 0x34, 2, sub_64ca70)
int32_t var_8_2 = 0
arg1[1] = 0
*arg1 = 2
int32_t var_14_1 = 1
arg1[4] = arg2
sub_63d850(&arg1[8], &arg1[3])
arg1[9] = arg1[4]
arg1[9] = arg1[4]
*(arg1 + 0x24) = *(arg1 + 0x10)
*(arg1 + 0x24) = *(arg1 + 0x10)
arg1[0xb] = arg1[6]
int32_t ecx_1 = arg1[5]
arg1[9] = arg1[4]
arg1[0xa] = ecx_1
arg1[9] = arg1[4]
arg1[9] = arg1[4]
arg1[0x1c] = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
