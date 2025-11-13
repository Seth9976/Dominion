// 函数: sub_4dd080
// 地址: 0x4dd080
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??1?$multi_link_registry@V?$ISource@W4agent_status@Concurrency@@@Concurrency@@@Concurrency@@UAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* const var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char const* const var_30_1
int32_t var_2c_1
char const* const var_28_1
char* ecx

if (data_1597dc0 != 0)
    int32_t edx = 0
    
    if (arg2 != 0)
        uint32_t i_3 = arg2
        char* esi_1 = arg1
        uint32_t i
        
        do
            char eax_3 = *esi_1
            esi_1 = &esi_1[1]
            edx = edx u>> 8 ^ *(((zx.d(eax_3) ^ zx.d(edx.b)) << 2) + &data_7ffd70)
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    result = data_1597db8
    
    for (int32_t* i_1 = result[data_1597dbc & edx]; i_1 != 0; i_1 = i_1[3])
        if (arg2 == i_1[1])
            result = strncmp(arg1, *i_1, arg2)
            
            if (result == 0)
                result = &i_1[2]
                
                if (result != 0)
                    goto label_4dd1cd
                
                goto label_4dd12e
    
label_4dd12e:
    
    if (arg1 != 0)
        var_14 = &data_801800
        sub_63db30(&var_14, arg1, arg2)
        int32_t var_8_1 = 0
        sub_63e470(&var_14)
        char* const esi_2 = var_14
        char* const ecx_5 = &data_801800
        
        if (esi_2 != 0)
            ecx_5 = esi_2
        
        int32_t eax_7 = sub_69c4d0(ecx_5, 0) & data_1597dc8
        
        for (int32_t* i_2 = *(data_1597dc4 + (eax_7 << 2)); i_2 != 0; i_2 = i_2[2])
            if (sub_63d7f0(&var_14, i_2) == 0)
                if (i_2 == 0xfffffffc)
                    break
                
                int32_t var_8_3 = 1
                
                if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
                    char* eax_10 = sub_63d4e0(&var_14)
                    int32_t temp3_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return &i_2[1]
        
        int32_t var_8_2 = 2
        
        if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
            char* eax_9 = sub_63d4e0(&var_14)
            int32_t temp2_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
        
        result = nullptr
    label_4dd1cd:
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    var_28_1 = "XString::XString"
    var_2c_1 = 0x9a
    var_30_1 = "C:\x\ax2017\Engine\xString.cpp"
    ecx = &data_871e0c
else
    var_28_1 = "CardLookupExact"
    var_2c_1 = 0x89d
    var_30_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp"
    ecx = "!gCardLookup.hashTableBase.IsEmpty()"

sub_63b870(result, &data_801800, ecx, var_30_1, var_2c_1, var_28_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
