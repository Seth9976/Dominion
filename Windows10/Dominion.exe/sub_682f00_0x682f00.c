// 函数: sub_682f00
// 地址: 0x682f00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76dc31
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_1a99fc8 s> *(*fsbase->ThreadLocalStoragePointer + 8))
    sub_75970e(&data_1a99fc8)
    
    if (data_1a99fc8 == 0xffffffff)
        int32_t var_14_1 = 0
        data_1a99fcc = sub_69f030("sys\white_pixel.texture", 3)
        int32_t var_14_2 = 0xffffffff
        __Init_thread_footer(&data_1a99fc8)

int128_t xmm0 = data_8934e0
int32_t* ecx = data_1a99fcc
int32_t var_2c = *arg2
int32_t var_28 = 0
int128_t var_3c = xmm0
int32_t result = sub_682a60(&var_3c, arg1, ecx, &var_3c, &var_2c, nullptr)
fsbase->NtTib.ExceptionList = ExceptionList
return result
