// 函数: sub_624070
// 地址: 0x624070
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) =
    __ehhandler$?_Process_message_helper@?$ordered_message_processor@I@Concurrency@@AAEJXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** i = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char const* const var_60_1
int32_t var_5c
char const* const var_58
char* ecx

if (*(arg3 + 0x30) s>= 0xb)
    i = sub_5d0e60()
    data_cf64a8 = 0xffffffff
    
    if ((arg5 & 1) != 0)
        goto label_6240ff
    
    if (data_cc8d5c != 0)
        i = data_cc8d5c
        i[0x1d65] = 0xffffffff
    label_6240ff:
        bool cond:1_1 = data_8db5c4 != 0x27
        data_b604dc = 0xffffffff
        data_b809b4 = 0
        
        if (not(cond:1_1))
            int32_t ecx_1 = data_8db5c8
            
            if (ecx_1 != 0)
                uint32_t eax_4 = sub_64e7a0(sub_67bd70(ecx_1, "tbl_center_holder"))
                sub_65bf00(eax_4)
                i = sub_65bf40(eax_4)
        
        if ((*(arg3 + 0x20) & 8) != 0)
            i = sub_59f9b0(i, 0xffffffff, 0xb80ad8, 0xffffffff, 0x3f, 0, nullptr, 0, 0, 0, 0, 0)
        
        if ((*(arg3 + 0x20) & 4) != 0)
            i = sub_59f9b0(i, 0xffffffff, 0xb80ad8, 0xffffffff, 0x40, 0, nullptr, 0, 0, 0, 0, 0)
        
        if ((*(arg3 + 0x20) & 1) != 0)
            sub_59f9b0(i, 0xffffffff, 0xb80ad8, 0xffffffff, 0x41, 0, nullptr, 0, 0, 0, 0, 0)
        
        if (*(arg3 + 0x1c) - 0x64 u<= 0x19)
            data_b809d4 = 0
            data_8db610 = 0x24
        
        i = nullptr
        
        if (*(arg3 + 0x11a8) s> 0)
            void* ecx_4 = arg3 + 0x11cc
            
            do
                *ecx_4 = 0
                ecx_4 += 0x18
                i += 1
            while (i s< *(arg3 + 0x11a8))
        
        bool cond:2_1 = data_cc8d5c == 0
        data_b809cc = 0xffffffff
        data_b809d0 = 0xffffffff
        
        if (not(cond:2_1))
            void* eax_7 = data_cc8d5c
            void* var_28 = eax_7
            *(eax_7 + 0x7590) = 0xffffffff
            data_b604e0 = 0xffffffff
            void var_48
            int32_t* eax_8 = sub_5e9c80(&__saved_ebp, arg3, arg2, &var_48, arg2)
            *arg4 = *eax_8
            arg4[1].q = *(eax_8 + 0x10)
            
            if (*arg4 != 1)
                char* const i_1 = nullptr
                char* const i_2 = nullptr
                
                if (*(arg3 + 0x11a8) s> 0)
                    void* edi_1 = arg3 + 0x60
                    
                    do
                        if (*(edi_1 - 4) == 3 || data_cc8d6d != 0)
                            int32_t ecx_7 = *(edi_1 + 4)
                            int32_t var_58_2 = ecx_7
                            sub_5ca510(i_1, arg3, (ecx_7 << 4) + 0xb80a74, 0xb80ad8, ecx_7, *edi_1)
                            i_1 = i_2
                        
                        i_1 = &i_1[1]
                        edi_1 += 0x22c
                        i_2 = i_1
                    while (i_1 s< *(arg3 + 0x11a8))
                
                void* eax_9 = var_28
                data_b809dc = 1
                
                if (*(eax_9 + 0x7590) == 0xffffffff)
                    sub_4b0b30(sub_5e99a0(arg3, data_b80b44))
                
                int32_t* edi_2 = &data_b809e0
                void* eax_11 = data_b809e0
                int32_t* var_2c_1 = &data_b809e0
                void* ecx_13 = data_b809e4 * 0x1c30 + eax_11
                
                if (eax_11 u>= ecx_13)
                label_624325:
                    eax_11 = 0xffffffff
                else
                    while ((*(eax_11 + 0x1c28) & 0xffff0000) == 0)
                        eax_11 += 0x1c30
                        
                        if (eax_11 u>= ecx_13)
                            goto label_624325
                
                var_28 = eax_11
                
                if (eax_11 != 0xffffffff)
                    while (true)
                        if (*(eax_11 + 0x2c) == 3)
                            *(eax_11 + 0x84) = 0
                            sub_5cdee0(eax_11, 0, eax_11, 1)
                        
                        sub_6376d0(edi_2, &var_28)
                        eax_11 = var_28
                        
                        if (eax_11 == 0xffffffff)
                            break
                        
                        edi_2 = var_2c_1
                
                if (*(sub_4b9680(arg3 + 8, data_b80b48) + 0x14) != 3)
                    sub_5eab70(&data_b80af8)
                
                void* ecx_17 = data_cc8dc8
                data_b8099c = 2
                
                if (*(sub_4d8f30(*(ecx_17 + 0x1e1a4)) + 0x4240) == 0 && (arg5 & 6) == 0)
                    i_2 = &data_801800
                    int32_t var_14_1 = 0
                    
                    if (sub_621360(&i_2) != 0)
                        data_8db660 = 0x7e4
                    
                    int32_t var_14_2 = 1
                    
                    if (data_cf65bc != 0)
                        char* const i_3 = i_2
                        
                        if (i_3 != 0 && *i_3 != 0)
                            char* eax_15 = sub_63d4e0(&i_2)
                            int32_t temp0_1 = *(eax_15 + 4)
                            *(eax_15 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg4
    
    var_58 = "GetClient"
    var_5c = 0x7b
    ecx = "gClient"
    var_60_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
else
    var_58 = "GameSpecific_Load"
    var_5c = 0xe92b
    var_60_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx = "save.setup.config.version >= GameMinimumVersion(GameSpecific_GameType(), false)"

sub_63b870(i, &data_801800, ecx, var_60_1, var_5c, var_58)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
