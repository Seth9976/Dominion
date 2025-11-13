// 函数: sub_773a40
// 地址: 0x773a40
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
    int32_t* ecx_1 = data_1597e44
    
    if (ecx_1 != 0)
        int32_t eax_3 = data_1597e4c
        data_1597e48 = 0
        sub_64c080(ecx_1, eax_3 << 3)
        result = data_cf65bc
        data_1597e4c = 0

int32_t var_8_2 = 1

if (result != 0)
    int32_t* ecx_2 = data_1597e38
    
    if (ecx_2 != 0)
        int32_t edx_3 = data_1597e40 << 4
        data_1597e3c = 0
        sub_64c080(ecx_2, edx_3)
        result = data_cf65bc
        data_1597e40 = 0

int32_t var_8_3 = 2

if (result != 0)
    int32_t* ecx_3 = data_1597e2c
    
    if (ecx_3 != 0)
        int32_t edx_5 = data_1597e34 << 6
        data_1597e30 = 0
        result = sub_64c080(ecx_3, edx_5)
        data_1597e34 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
