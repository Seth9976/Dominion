// 函数: sub_50ad20
// 地址: 0x50ad20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?_mbstowcs_l_helper@@YAIPA_WPBDIAAV__crt_cached_ptd_host@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t eax_4
int32_t i_2
eax_4, i_2 = sub_58dcc0(&ExceptionList, &data_cc8de0, arg3, 0)
int32_t i = i_2
int32_t var_14 = eax_4

while (i != 0)
    int32_t i_1 = i
    
    if (arg4 == 0)
        std::_Xbad_function_call()
        noreturn
    
    if ((*(*arg4 + 8))(&i_1) != 0
            && ((*(sub_571b30(i, 0x17) + 0x9c) & 0x40) == 0 || (arg2 & 1) != 0))
        if ((*(sub_571b30(i, 0x17) + 0x9c) & 0x800) == 0)
            break
        
        if ((arg2 & 2) != 0)
            break
    
    int32_t eax_12 = *(arg3 + 0x3e8c)
    
    if (eax_12 s>= 0x320)
        sub_63b870(eax_12, &data_801800, "deck.numRejects < MAX_CARDS", 
            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x4140, "RandomizerDeck_Reject")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    *(arg3 + (eax_12 << 3) + 0x258c) = var_14
    *(arg3 + (eax_12 << 3) + 0x2590) = i
    *(arg3 + 0x3e8c) += 1
    int32_t eax_13
    int32_t i_3
    eax_13, i_3 = sub_58dcc0(eax_12, &data_cc8de0, arg3, 0)
    i = i_3
    var_14 = eax_13

sub_58dd90(arg3)
void arg_4

if (arg4 != 0)
    (*(*arg4 + 0x10))(arg4 != &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return i
