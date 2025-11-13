// 函数: sub_7733f0
// 地址: 0x7733f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??_GSubAllocator@details@Concurrency@@QAEPAXI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 1
`eh vector vbase constructor iterator'(0x8da66c, 0xc, 0xf, sub_4ab1f0)
var_8_1.b = 2
`eh vector vbase constructor iterator'(0x8da5ac, 0xc, 0xf, sub_4ab1f0)
var_8_1.b = 3
sub_4ac220(&data_8da594)
var_8_1.b = 4
sub_4ac120(&data_8da588)
var_8_1.b = 5
sub_4ac320(&data_8da540)
var_8_1.b = 0
Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(0x8d93a0)
Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(0x8d8078)
void* result = `eh vector vbase constructor iterator'(0x8d2ff8, 0x20, 0x280, sub_4ab280)
var_8_1.b = 6

if (data_cf65bc != 0)
    result = data_8d2ff0
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&data_8d2ff0)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            data_8d2ff0 = &data_801800

fsbase->NtTib.ExceptionList = ExceptionList
return result
