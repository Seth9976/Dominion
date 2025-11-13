// 函数: sub_4f49c0
// 地址: 0x4f49c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?FindSegment@FairScheduleGroup@details@Concurrency@@MAEPAVScheduleGroupSegmentBase@23@PAVlocation@3@PAVSchedulingRing@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4ef660(arg3)
sub_4ebd20(sub_4edf20(arg4), arg3, 0x1899da0, arg4)
sub_4ec6a0(0x1899da0, arg4)
sub_4f1fb0(arg3, arg2)
int32_t* eax_4 = sub_4ede20(arg4, 0)
void* ecx_3 = eax_4[2]

if (ecx_3 == 0)
    void* eax_5 = operator new(0xe4)
    void* var_1c_1 = eax_5
    int32_t var_8_1 = 0
    memset(eax_5, 0, 0xe4)
    *(eax_5 + 0xd8) = 4
    int32_t var_20_1 = 4
    int32_t var_34_1 = 0x150
    int32_t eax_6 = sub_7597a2()
    int32_t var_20_2 = eax_6
    memset(eax_6, 0, 0x150)
    *(eax_5 + 0xd0) = eax_6
    int32_t var_8_2 = 0xffffffff
    eax_4[2] = eax_5
    *(eax_5 + 0xb4) = arg4
    *((arg4 << 2) + &data_1779f8c) = eax_4[2]
    sub_4f3390(eax_4, arg2)
    eax_4[2]
    sub_4f22d0(eax_4, arg2)
    eax_4[2]
    sub_4f0b20(eax_4, arg2)
    ecx_3 = eax_4[2]
else
    if (*(ecx_3 + 0xe0) != 0)
        sub_63b870(eax_4, &data_801800, "!entry->node->terminal", 
            "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0x1785, "MCTS_CreateRoot")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    *((arg4 << 2) + &data_1779f8c) = ecx_3

void* result = sub_4f1890(ecx_3)
fsbase->NtTib.ExceptionList = ExceptionList
return result
