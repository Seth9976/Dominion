// 函数: sub_6e1d60
// 地址: 0x6e1d60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771146
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
char* esi = arg2[1]

if (isalpha(sx.d(*esi)) == 0 && *esi != 0x5f)
    arg1[2] = &data_801800
    *arg1 = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

while (true)
    int32_t _C = sx.d(esi[1])
    esi = &esi[1]
    
    if (isalpha(_C) == 0)
        int32_t eax_7
        eax_7.b = *esi
        
        if (eax_7.b != 0x5f && isdigit(sx.d(eax_7.b)) == 0)
            break

int32_t edi = arg2[1]
void* eax_10 = sub_6e17c0(*arg2)
*eax_10 = 0xa
*(eax_10 + 4) = edi
*(eax_10 + 8) = esi - edi
arg2[1] = esi
sub_6e1920(arg2)
*arg1 = 3
arg1[1] = eax_10
arg1[2] = &data_801800
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
