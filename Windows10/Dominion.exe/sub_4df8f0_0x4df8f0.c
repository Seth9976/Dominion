// 函数: sub_4df8f0
// 地址: 0x4df8f0
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
void* ecx = arg2
int32_t var_8_1 = 0
int32_t var_18_1 = 1
int32_t i = 0
void* esi = ecx

do
    int32_t eax_3 = *esi
    
    if (eax_3 == 0)
        break
    
    if (eax_3 == 1)
        sub_4df350(eax_3, arg1, ecx, *(esi + 4), nullptr, 0)
        ecx = arg2
    
    i += 1
    esi += 0x10
while (i s< 0xa)

int32_t i_1 = 0
void* esi_1 = ecx + 0xb0

do
    int32_t eax_4 = *(esi_1 - 0x10)
    
    if (eax_4 == 0)
        break
    
    if (eax_4 == 1)
        sub_4df350(eax_4, arg1, ecx, *(esi_1 - 0xc), esi_1, 0xe)
        ecx = arg2
    
    i_1 += 1
    esi_1 += 0x48
while (i_1 s< 4)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
