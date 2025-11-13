// 函数: sub_4df830
// 地址: 0x4df830
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0ResourceManager@details@Concurrency@@AAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_1c = arg1
int32_t var_18 = 0
*arg1 = &data_801800
int32_t var_8_1 = 0
int32_t i = 0
int32_t var_18_1 = 1

do
    char* eax_3 = *(arg2 + (i << 2))
    
    if (eax_3 == 0)
        break
    
    sub_4df630(eax_3, arg1, arg2, eax_3, nullptr, 0)
    i += 1
while (i s< 0xa)

int32_t i_2 = 0
int32_t* esi = arg2 + 0x2c
int32_t i_1

do
    char* eax_4 = esi[-1]
    
    if (eax_4 == 0)
        break
    
    sub_4df630(eax_4, arg1, arg2, eax_4, esi, 0xe)
    i_1 = i_2 + 1
    esi = &esi[0xf]
    i_2 = i_1
while (i_1 s< 4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
