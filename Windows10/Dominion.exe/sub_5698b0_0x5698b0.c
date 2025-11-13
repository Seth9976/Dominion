// 函数: sub_5698b0
// 地址: 0x5698b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??1?$propagator_block@V?$multi_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$multi_link_registry@V?$ISource@I@Concurrency@@@2@V?$ordered_message_processor@I@2@@Concurrency@@UAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg3
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* eax_3 = sub_573400()
int32_t edx = *eax_3
char const* const var_28
int32_t var_24
char const* const var_20_2
char* ecx_5

if (edx != 2)
    if (edx == 3)
        sub_573260(eax_3, arg3, *(eax_3 + 4), *(eax_3 + 0x10))
        goto label_569911
    
    var_20_2 = "OtherPlayer"
    var_24 = 0xc7a
    var_28 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx_5 = "Halt"
else
    sub_573050(eax_3, arg3, *(eax_3 + 4), eax_3 + 0x10)
label_569911:
    
    if (arg4 == 0)
        std::_Xbad_function_call()
        noreturn
    
    (*(*arg4 + 8))(eax_2)
    void* ecx_4 = *fsbase->ThreadLocalStoragePointer
    eax_3 = *(ecx_4 + 0xf010)
    
    if (eax_3 s> 0)
        void* result = eax_3 - 1
        *(ecx_4 + 0xf010) = result
        void arg_4
        
        if (arg4 != 0)
            result = (*(*arg4 + 0x10))(arg4 != &arg_4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    var_20_2 = "DomPopContext"
    var_24 = 0x792
    var_28 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
    ecx_5 = "cs.numContexts > 0"

sub_63b870(eax_3, &data_801800, ecx_5, var_28, var_24, var_20_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
