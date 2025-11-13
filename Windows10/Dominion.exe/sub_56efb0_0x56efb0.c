// 函数: sub_56efb0
// 地址: 0x56efb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
int32_t* ecx = *(eax_3 + 4)
int32_t edx = *(eax_3 + 0xc)
int32_t result = ecx[0x541]

if (result != 3 && result != 5 && result != 4 && result != 6 && ecx[0x540].b == 0)
    int32_t eax_4 = edx
    
    if (edx == ecx[0x673])
        eax_4 = ecx[0x674]
    
    result = sub_59f9b0(eax_4, edx, ecx, eax_4, 0x20, 0, nullptr, 0, 0, 0, 0, 0)

fsbase->NtTib.ExceptionList = ExceptionList
return result
