// 函数: sub_683cc0
// 地址: 0x683cc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76dcbd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_5c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void var_54
int128_t* eax_3 = sub_6836a0(&var_54)
int128_t var_34 = *eax_3
int128_t var_24 = eax_3[1]
sub_683220(&var_34)
void* esi = *fsbase->ThreadLocalStoragePointer

if (data_1a9a040 s> *(esi + 8))
    sub_75970e(&data_1a9a040)
    
    if (data_1a9a040 == 0xffffffff)
        int32_t var_8_1 = 0
        data_1a9a044 = sub_69f030("sys/sprite_3d_no_zread.material", 5)
        int32_t var_8_2 = 0xffffffff
        __Init_thread_footer(&data_1a9a040)

if (data_1a9a048 s> *(esi + 8))
    sub_75970e(&data_1a9a048)
    
    if (data_1a9a048 == 0xffffffff)
        int32_t var_8_3 = 1
        data_1a9a04c = sub_69f030("sys/SpineTint.material", 5)
        __Init_thread_footer(&data_1a9a048)

uint32_t result = data_147b06c
*(result + 0x2dc) = data_1a9a04c
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
