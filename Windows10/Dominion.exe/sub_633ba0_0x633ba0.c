// 函数: sub_633ba0
// 地址: 0x633ba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0_Blocking_recipient@?1???$_Receive_impl@W4agent_status@Concurrency@@@Concurrency@@YA?AW4agent_status@1@PAV?$ISource@W4agent_status@Concurrency@@@1@IPBV?$function@$$A6A_NABW4agent_status@Concurrency@@@Z@std@@@Z@QAE@0ABV45@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1
int32_t* result_2 = result_1

if (result_2 != 0)
    uint32_t eax_6
    void** edx
    
    if (result_2 == 1)
        eax_6 = sub_64e7a0(arg1)
        edx = &data_bf178c
    else
        if (result_2 != 2)
            sub_63b870(result_2 - 2, &data_801800, "Halt", 
                "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x11216, "DeclarePileCount")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        eax_6 = sub_64e7a0(arg1)
        edx = &data_bf1798
    
    sub_665db0(eax_6, edx, eax_6, 0x3f800000, 0xffffffff, 0)

void** edi

switch (arg2)
    case 0
        edi = &data_bf16b4
    case 1
        edi = &data_bf16c0
    case 2
        edi = &data_bf16cc
    case 3
        edi = &data_bf16d8
    case 4
        edi = &data_bf16e4
    case 5
        edi = &data_bf16f0
    case 6
        edi = &data_bf16fc
    case 7
        edi = &data_bf1708
    case 8
        edi = &data_bf1714
    case 9
        edi = &data_bf1720
    default
        edi = &data_bf172c

uint32_t eax_7 = sub_64e7a0(arg1)
sub_665db0(eax_7, edi, eax_7, 0x3f800000, 0xffffffff, 0)
int32_t var_34 = arg2
sub_63df30(&result_1, "%d")
int32_t var_8_1 = 0
int32_t var_2c = 0xffffffff
int32_t* result = sub_666380(&result_1, &data_bf1738, arg1, &result_1)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp3_1 = result[1]
        result[1] -= 1
        
        if (temp3_1 == 1)
            result = sub_64c080(result, result[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
