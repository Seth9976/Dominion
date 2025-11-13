// 函数: sub_6c7000
// 地址: 0x6c7000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_77054d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_5c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t i = zx.d(arg2.w)
int32_t var_14_1 = 0
int128_t var_4c
__builtin_memset(&var_4c, 0, 0x20)
var_4c.d = arg4
uint32_t edi_1 = zx.d(GetKeyState(0x10)) u>> 0xf
uint32_t ecx_1 = edi_1 | 2

if (GetKeyState(0x11) s>= 0)
    ecx_1 = edi_1

uint32_t edx_1 = ecx_1 | 4
int32_t* result = arg3

if (GetKeyState(0x12) s>= 0)
    edx_1 = ecx_1

var_4c:8.d = edx_1
var_4c:4.d = result

if ((arg2 & 0x40000000) != 0 && arg4 == 1)
    var_4c:8.d = edx_1 | 0x20

while (i != 0)
    i -= 1
    
    if (data_147abe8 != 0)
        result = sub_69e480(&var_4c)

int32_t var_14_2 = 1

if (data_cf65bc != 0)
    int128_t var_3c
    result = var_3c:8.d
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&var_3c:8)
        int32_t temp0_1 = result[1]
        result[1] -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, result[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
