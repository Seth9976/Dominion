// 函数: sub_773bc0
// 地址: 0x773bc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??1ScopedCriticalRegion@ContextBase@details@Concurrency@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* result = data_cf65bc

if (result != 0)
    int32_t* ecx_1 = data_b80a20
    
    if (ecx_1 != 0)
        int32_t eax_3 = data_b80a28
        data_b80a24 = 0
        sub_64c080(ecx_1, eax_3 * 0x38)
        result = data_cf65bc
        data_b80a28 = 0

int32_t var_8_2 = 1

if (result != 0)
    int32_t* ecx_2 = data_b80a10
    
    if (ecx_2 != 0)
        int32_t edx_5 = data_b80a18 << 6
        data_b80a14 = 0
        sub_64c080(ecx_2, edx_5)
        result = data_cf65bc
        data_b80a18 = 0

int32_t var_8_3 = 2

if (result != 0)
    int32_t* ecx_3 = data_b809fc
    
    if (ecx_3 != 0)
        int32_t eax_4 = data_b80a04
        data_b80a00 = 0
        result = sub_64c080(ecx_3, eax_4 << 3)

fsbase->NtTib.ExceptionList = ExceptionList
return result
