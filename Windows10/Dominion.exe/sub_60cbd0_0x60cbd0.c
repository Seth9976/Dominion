// 函数: sub_60cbd0
// 地址: 0x60cbd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Move@?$_Func_impl_no_alloc@V<lambda_1>@?1??wait_for_all@agent@Concurrency@@SAXIPAPAV34@PAW4agent_status@4@I@Z@XABI@std@@EAEPAV?$_Func_base@XABI@2@PAX@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_14 = arg3
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3 = sub_64e7a0(arg4)
*(eax_3 + 0x18bc) = sub_60ab50
int32_t edi = data_ccf6bc
char const* const var_2c
int32_t var_28
char const* const var_24
char* ecx_1

if (edi s< 1)
    var_24 = "GetLocalizedMonth"
    var_28 = 0xab5f
    ecx_1 = "month >= MONTH_JAN"
    var_2c = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else if (edi s<= 0xc)
    uint32_t edi_1 = (&data_86eca0)[edi]
    eax_3 = sub_68caf0(eax_3, nullptr, edi_1, 0)
    
    if (eax_3 != 0)
        eax_3 = *eax_3
        edi_1 = &data_801800
        
        if (eax_3 != 0)
            edi_1 = eax_3
    
    if (edi_1 != 0)
        sub_63d720(&var_14, edi_1)
        int32_t var_8_1 = 0
        int32_t var_24_1 = 0xffffffff
        sub_666380(&var_14, &data_be5db0, arg4, &var_14)
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* eax_5 = var_14
            
            if (eax_5 != 0 && *eax_5 != 0)
                char* eax_6 = sub_63d4e0(&var_14)
                int32_t temp3_1 = *(eax_6 + 4)
                *(eax_6 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
                    var_14 = &data_801800
        
        int32_t var_8_3 = 0xffffffff
        int32_t eax_7 = data_ccf6b0
        
        if (eax_7 == 0)
            uint32_t eax_14 = sub_64e7a0(arg4)
            sub_665db0(eax_14, &data_be5bb8, eax_14, 0x3f800000, 0xffffffff, 0)
            uint32_t eax_15 = sub_60b430(arg4)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_15
        
        if (eax_7 == 1)
            uint32_t eax_12 = sub_64e7a0(arg4)
            sub_665db0(eax_12, &data_be5bc4, eax_12, 0x3f800000, 0xffffffff, 0)
            struct _EXCEPTION_REGISTRATION_RECORD** eax_13 = sub_60c010(arg4)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_13
        
        eax_3 = eax_7 - 2
        
        if (eax_7 == 2)
            uint32_t eax_10 = sub_64e7a0(arg4)
            sub_665db0(eax_10, &data_be5bd0, eax_10, 0x3f800000, 0xffffffff, 0)
            int32_t* eax_11 = ___std_fs_remove@4()
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_11
        
        var_24 = "DailySeed2DlgUpdate"
        var_28 = 0xae3f
        ecx_1 = "Halt"
        var_2c = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    else
        var_24 = "XString::XString"
        var_28 = 0x94
        var_2c = "C:\x\ax2017\Engine\xString.cpp"
        ecx_1 = &data_871e0c
else
    var_24 = "GetLocalizedMonth"
    var_28 = 0xab60
    ecx_1 = "month <= MONTH_DEC"
    var_2c = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"

sub_63b870(eax_3, &data_801800, ecx_1, var_2c, var_28, var_24)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
