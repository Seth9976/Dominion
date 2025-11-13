// 函数: sub_524b90
// 地址: 0x524b90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0Etw@details@Concurrency@@AAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3
char ecx
eax_3, ecx = sub_56b800()
int32_t var_20 = 0
sub_566dc0(eax_3, 0x3ea, eax_3, 0xb, ecx)
sub_56ef50(&var_14:3)
int32_t var_8_1 = 0
uint32_t eax_4 = sub_563590(0x106)

if (eax_4 != 0)
    void* eax_5 = sub_573400()
    sub_583720(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), eax_4, 0x476, nullptr, 0x476, 0, 0, 4)

int32_t result = sub_56efb0()
fsbase->NtTib.ExceptionList = ExceptionList
return result
