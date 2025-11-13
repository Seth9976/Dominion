// 函数: sub_68b8a0
// 地址: 0x68b8a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$___dcrt_uninitialize_environments_nolock
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* i = *(arg2 + 0x50)

while (i != 0)
    int32_t* i_2 = i
    i = i[1]
    sub_64c080(i_2, 0xc)

*(arg2 + 0x58) = 0
*(arg2 + 0x50) = 0
*(arg2 + 0x54) = 0
int32_t var_8_2 = 1
int32_t* i_1 = *(arg2 + 0x44)

while (i_1 != 0)
    int32_t* i_3 = i_1
    i_1 = i_1[1]
    sub_64c080(i_3, 0xc)

*(arg2 + 0x4c) = 0
*(arg2 + 0x44) = 0
*(arg2 + 0x48) = 0
uint32_t result = zx.d(*(arg2 + 0x60))
int32_t ecx = *(arg1 + 0xc)
*(arg1 + 0xc) = result
*(arg2 + 0x60) = ecx
*(arg1 + 0x10) -= 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
