// 函数: sub_4db4c0
// 地址: 0x4db4c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_NewCollection@_AsyncTaskCollection@details@Concurrency@@SAPAV123@PAV_CancellationTokenState@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg1 != 0)
    int32_t ebx_1 = 0
    int32_t edx_1
    
    do
        int32_t* i = *(*arg1 + (ebx_1 << 2))
        
        while (i != 0)
            int32_t* i_1 = i
            i = i[0x26]
            sub_64c080(i_1, 0x9c)
        
        *(*arg1 + (ebx_1 << 2)) = 0
        ebx_1 += 1
        edx_1 = arg1[1]
    while (ebx_1 u<= edx_1)
    
    int32_t* ecx = *arg1
    arg1[2] = 0
    result = sub_64c080(ecx, (edx_1 << 2) + 4)
    *arg1 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
