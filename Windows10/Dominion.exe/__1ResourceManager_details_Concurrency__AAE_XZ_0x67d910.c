// 函数: ??1ResourceManager@details@Concurrency@@AAE@XZ
// 地址: 0x67d910
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0VirtualProcessorRoot@details@Concurrency@@QAE@PAVSchedulerProxy@12@PAUSchedulerNode@12@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = nullptr
label_67d943:

if (esi != 0)
    esi += 0x248
else
    esi = *arg1

int32_t result = *arg1 + arg1[1] * 0x248

if (esi u>= result)
    arg1[3] = 0
else
    do
        if ((*(esi + 0x244) & 0xffff0000) != 0)
            int32_t var_8_1 = 0
            `eh vector vbase constructor iterator'(esi + 0xc, 0x34, 2, sub_64ca90)
            int32_t var_8_2 = 0xffffffff
            int32_t ecx_1 = arg1[3]
            arg1[3] = zx.d(*(esi + 0x244))
            *(esi + 0x244) = ecx_1
            arg1[4] -= 1
            goto label_67d943
        
        esi += 0x248
    while (esi u< result)
    
    arg1[3] = 0

arg1[1] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
