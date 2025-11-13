// 函数: sub_4b5b20
// 地址: 0x4b5b20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$propagator_block@V?$single_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$multi_link_registry@V?$ISource@W4agent_status@Concurrency@@@Concurrency@@@2@V?$ordered_message_processor@I@2@@Concurrency@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_18
int32_t* ecx_16

if (arg3 == 0)
    void* eax_19 = sub_68caf0(eax_3, nullptr, "dom_msg_opponent_forfeit_header", 0)
    char* edi_2 = &data_801800
    char const* const ecx_17
    
    if (eax_19 != 0)
        char* eax_20 = *eax_19
        ecx_17 = &data_801800
        
        if (eax_20 != 0)
            ecx_17 = eax_20
    else
        ecx_17 = "dom_msg_opponent_forfeit_header"
    
    char** eax_22 =
        sub_68caf0(sub_63d8d0(arg5, ecx_17), nullptr, "dom_msg_opponent_forfeit_body", 0)
    char* ecx_19
    
    if (eax_22 != 0)
        char* eax_23 = *eax_22
        ecx_19 = &data_801800
        
        if (eax_23 != 0)
            ecx_19 = eax_23
    else
        ecx_19 = "dom_msg_opponent_forfeit_body"
    
    int32_t* esi_1 = arg6
    sub_63d8d0(esi_1, ecx_19)
    char* eax_24 = *esi_1
    
    if (eax_24 != 0)
        edi_2 = eax_24
    
    int32_t var_8_3 = 0
    char* var_18
    eax_18 = sub_63d850(esi_1, sub_63dfa0(eax_24, edi_2, &var_18, "[player]", arg4))
    int32_t var_8_4 = 1
    
    if (data_cf65bc != 0)
        eax_18 = var_18
        
        if (eax_18 != 0 && *eax_18 != 0)
            ecx_16 = &var_18
        label_4b5d51:
            eax_18 = sub_63d4e0(ecx_16)
            int32_t temp2_1 = eax_18[1]
            eax_18[1] -= 1
            
            if (temp2_1 == 1)
                eax_18 = sub_64c080(eax_18, eax_18[3] + 0x10)
else
    if (arg3 != 1)
        sub_63b870(eax_3, &data_801800, "Halt", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 0xdb3, "GameDismissDlgStrings")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (arg2 != 0)
        void* eax_4 = sub_68caf0(eax_3, nullptr, "dom_msg_time_expired_header", arg3 - 1)
        char* const edi = &data_801800
        char const* const ecx_2
        
        if (eax_4 != 0)
            char* eax_5 = *eax_4
            ecx_2 = &data_801800
            
            if (eax_5 != 0)
                ecx_2 = eax_5
        else
            ecx_2 = "dom_msg_time_expired_header"
        
        void* eax_7 = sub_68caf0(sub_63d8d0(arg5, ecx_2), nullptr, "dom_msg_time_expired_body", 0)
        
        if (eax_7 == 0)
            char** eax_8 = sub_63d8d0(arg6, "dom_msg_time_expired_body")
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_8
        
        char* eax_9 = *eax_7
        
        if (eax_9 != 0)
            edi = eax_9
        
        char** eax_10 = sub_63d8d0(arg6, edi)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_10
    
    void* eax_11 = sub_68caf0(eax_3, nullptr, "dom_msg_opponent_forfeit_header", arg3 - 1)
    char* const edi_1 = &data_801800
    char const* const ecx_10
    
    if (eax_11 != 0)
        char* eax_12 = *eax_11
        ecx_10 = &data_801800
        
        if (eax_12 != 0)
            ecx_10 = eax_12
    else
        ecx_10 = "dom_msg_opponent_forfeit_header"
    
    void* eax_14 = sub_68caf0(sub_63d8d0(arg5, ecx_10), nullptr, "dom_msg_opponent_forfeit_body", 0)
    char const* const ecx_12
    
    if (eax_14 != 0)
        char* eax_15 = *eax_14
        ecx_12 = &data_801800
        
        if (eax_15 != 0)
            ecx_12 = eax_15
    else
        ecx_12 = "dom_msg_opponent_forfeit_body"
    
    sub_63d8d0(arg6, ecx_12)
    char* eax_16 = *arg6
    
    if (eax_16 != 0)
        edi_1 = eax_16
    
    int32_t var_8_1 = 2
    char* var_14
    eax_18 = sub_63d850(arg6, sub_63dfa0(eax_16, edi_1, &var_14, "[player]", arg4))
    int32_t var_8_2 = 3
    
    if (data_cf65bc != 0)
        eax_18 = var_14
        
        if (eax_18 != 0 && *eax_18 != 0)
            ecx_16 = &var_14
            goto label_4b5d51
fsbase->NtTib.ExceptionList = ExceptionList
return eax_18
