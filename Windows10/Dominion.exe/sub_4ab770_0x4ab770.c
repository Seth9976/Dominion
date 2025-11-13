// 函数: sub_4ab770
// 地址: 0x4ab770
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$_SyncOriginator@W4agent_status@Concurrency@@@details@Concurrency@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** arg_4
struct _EXCEPTION_REGISTRATION_RECORD*** esi = arg_4
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = esi[1]
void* ecx_1

if (eax_3 s< 0x7d0)
    ecx_1 = &arg_4:3
    
    if (eax_3 s< 0x5dc)
        sub_4ab4a0(ecx_1)
        int32_t var_8_1 = 0
        sub_4b5dc0(esi)
        sub_4ab510()
        struct _EXCEPTION_REGISTRATION_RECORD** eax_4
        eax_4.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    sub_4ab5b0(ecx_1)
    sub_4ab620()
else if (eax_3 == 0xfa0)
    sub_4ab5b0(&arg_4:3)
    sub_4ab620()
else if (eax_3 s>= 0x1388)
    ecx_1 = &arg_4:3
    
    if (eax_3 s< 0xf42a4)
        sub_4ab4a0(ecx_1)
        int32_t var_8_2 = 1
        sub_4b5dc0(esi)
        sub_4ab510()
        struct _EXCEPTION_REGISTRATION_RECORD** eax_5
        eax_5.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    sub_4ab5b0(ecx_1)
    sub_4ab620()
eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
