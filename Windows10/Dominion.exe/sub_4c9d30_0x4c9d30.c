// 函数: sub_4c9d30
// 地址: 0x4c9d30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??2@YAPAXIABUnothrow_t@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = sub_4be4c0(arg1)
int32_t var_34_2

switch (eax_3)
    case nullptr
        int32_t var_30_1 = arg1[1]
        int32_t var_34_1 = *arg1
        eax_3 = sub_63b7f0("trying to buy already owned dlc %d %d")
        char const* const var_30_2 = "StoreItemAction"
        var_34_2 = 0x2125
        goto label_4c9ec2
    case 1
        eax_3 = sub_571c40(arg1)
        
        if (data_bf23b8 == 1)
            int32_t ebx
            ebx.b = eax_3[7].b
            int32_t edi_1 = eax_3[2]
            
            if ((*(**SteamInternal_ContextInit(&data_cb4524, eax_2) + 0x44))() != 0)
                if (ebx.b == 0)
                    (*(**SteamInternal_ContextInit(&data_cb453c) + 0x7c))(edi_1, 1)
                else
                    int32_t var_30_3 = edi_1
                    char* var_14
                    sub_63df30(&var_14, "https://store.steampowered.com/bundle/%d")
                    int32_t var_8_1 = 0
                    char* const edx_1 = &data_801800
                    int32_t* ecx_4 = *SteamInternal_ContextInit(&data_cb453c)
                    char* eax_9 = var_14
                    
                    if (eax_9 != 0)
                        edx_1 = eax_9
                    
                    (*(*ecx_4 + 0x78))(edx_1, 1)
                    int32_t var_8_2 = 1
                    
                    if (data_cf65bc != 0)
                        char* eax_11 = var_14
                        
                        if (eax_11 != 0 && *eax_11 != 0)
                            char* eax_12 = sub_63d4e0(&var_14)
                            int32_t temp1_1 = *(eax_12 + 4)
                            *(eax_12 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
                
                eax_3 = 1
            else
                eax_3 = 3
            
            data_bf23dc = eax_3
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
    case 2, 5
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
    case 4
        HINSTANCE eax_16 =
            ShellExecuteA(nullptr, "open", sub_571c40(arg1)[0x10], nullptr, nullptr, SW_SHOWNORMAL)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_16
    default
        char const* const var_30_4 = "StoreItemAction"
        var_34_2 = 0x2147
    label_4c9ec2:
        sub_63b870(eax_3, &data_801800, "Halt", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", var_34_2, "StoreItemAction")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
