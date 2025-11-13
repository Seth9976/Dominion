// 函数: sub_4e6f90
// 地址: 0x4e6f90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?GetSubAllocator@SchedulerBase@details@Concurrency@@SAPAVSubAllocator@23@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_18 = arg3
int32_t var_30 = arg4
int32_t var_8_1 = 0
int32_t var_34 = arg2
int32_t var_14 = 0
sub_63df30(arg3, "%s_%d")
int32_t var_8_2 = 0
int32_t var_14_1 = 1
uint32_t eax_3 = sub_4c89a0()
char* edx = *arg3
char* const ebx = &data_801800
char* ecx = &data_801800

if (edx != 0)
    ecx = edx

void* eax_4 = sub_68c730(ecx, eax_3, arg3)

if (eax_4 != 0)
label_4e7026:
    
    if (*arg5 != 0 && *(eax_4 + 0x14) == 1)
        *arg5 = 0
else
    *arg5 = 0
    char* eax_5 = *arg3
    
    if (eax_5 != 0)
        ebx = eax_5
    
    eax_4 = sub_68c730(ebx, 1, arg3)
    
    if (eax_4 != 0)
        goto label_4e7026
    
    *arg5 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
