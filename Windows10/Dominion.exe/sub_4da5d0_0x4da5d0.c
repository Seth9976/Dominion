// 函数: sub_4da5d0
// 地址: 0x4da5d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$_Source_link_iterator@V?$multi_link_registry@V?$ISource@W4agent_status@Concurrency@@@Concurrency@@@Concurrency@@@Concurrency@@QAE@PAV?$source_link_manager@V?$multi_link_registry@V?$ISource@W4agent_status@Concurrency@@@Concurrency@@@Concurrency@@@1@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg1 != 1)
    sub_63b870(&ExceptionList, &data_801800, "handle.gameType == GAME_LOCAL", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 0x6cc, "LocalGameExists")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void var_20
sub_4d8d70(&var_20, arg1[1])
int32_t var_28 = 0
int32_t var_8_1 = 0
FILE* var_1c
FILE* _Stream

if (sub_69dec0(&_Stream).b == 0)
    int32_t var_8_2 = 1
    FILE* eax_4
    
    if (data_cf65bc != 0)
        eax_4 = var_1c
        
        if (eax_4 != 0 && eax_4->_Placeholder.b != 0)
            eax_4 = sub_63d4e0(&var_1c)
            
            if (eax_4 == 1)
                sub_64c080(eax_4 - 1, eax_4 + 0xf)
    
    eax_4.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

fclose(_Stream)
int32_t var_8_3 = 2
char* eax_5

if (data_cf65bc != 0)
    eax_5 = var_1c
    
    if (eax_5 != 0 && *eax_5 != 0)
        eax_5 = sub_63d4e0(&var_1c)
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)

eax_5.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
