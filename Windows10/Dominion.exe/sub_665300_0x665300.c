// 函数: sub_665300
// 地址: 0x665300
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??1_Cancellation_beacon@details@Concurrency@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = *(arg1 + 8)
uint32_t result = *(esi + 8)

if (result != 0)
    uint32_t ecx = zx.d(result.w)
    
    if (ecx u< data_c23bc8)
        void* edi_2 = ecx * 0x248 + data_c23bc4
        
        if (*(edi_2 + 0x244) == result && edi_2 != 0)
            int32_t var_8_1 = 0
            `eh vector vbase constructor iterator'(edi_2 + 0xc, 0x34, 2, sub_64ca90)
            result = zx.d(*(edi_2 + 0x244))
            int32_t ecx_1 = data_c23bd0
            data_c23bd0 = result
            *(edi_2 + 0x244) = ecx_1
            data_c23bd4 -= 1

*(esi + 8) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
