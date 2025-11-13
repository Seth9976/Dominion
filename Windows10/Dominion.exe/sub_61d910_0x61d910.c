// 函数: sub_61d910
// 地址: 0x61d910
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b361
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_5c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_48 = arg1
int32_t* var_4c = arg1
int32_t var_44 = 0
int32_t eax_3 = data_1723ff4

if (eax_3 == 0)
    char* eax_10 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + (arg2 << 2) + 0x3510)
    *arg1 = eax_10
    
    if (eax_10 != 0 && *eax_10 != 0)
        char* eax_11 = sub_63d4e0(arg1)
        *(eax_11 + 4) += 1
else
    void* eax_5 = eax_3 - 1
    
    if (eax_3 != 1)
        sub_63b870(eax_5, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0xdedb, "CampaignGetMissionSetup")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* ecx = data_cc8d5c
    char const* const var_68
    int32_t var_64_1
    char const* const var_60_1
    char* ecx_1
    
    if (ecx == 0)
        var_60_1 = "GetClient"
        var_64_1 = 0x7b
        var_68 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        ecx_1 = "gClient"
    label_61dab0:
        sub_63b870(eax_5, &data_801800, ecx_1, var_68, var_64_1, var_60_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_5 = sub_4bae20(ecx + 0x75c4, &data_1723ffc)
    
    if (eax_5 == 0)
        var_60_1 = "CampaignGetMissionSetup"
        var_64_1 = 0xded4
        ecx_1 = "data"
    label_61daa6:
        var_68 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        goto label_61dab0
    
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_60_2)(struct 
        _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_63d770
    void var_40
    int32_t ecx_3
    int32_t edx
    ecx_3, edx = `eh vector constructor iterator'(&var_40, 4, 0xb, 0x5a0be0)
    int32_t var_60_3 = ecx_3
    int32_t var_8_1 = 1
    eax_5 = sub_61d5b0(&var_40, edx, eax_5 + 4, &var_40)
    
    if (eax_5 != 0xb)
        var_60_1 = "CampaignGetMissionSetup"
        var_64_1 = 0xded7
        ecx_1 = "num == 11"
        goto label_61daa6
    
    int32_t var_3c[0xa]
    char* eax_7 = var_3c[arg2]
    *arg1 = eax_7
    
    if (eax_7 != 0 && *eax_7 != 0)
        char* eax_8 = sub_63d4e0(arg1)
        *(eax_8 + 4) += 1
    
    int32_t var_44_1 = 1
    var_8_1.b = 0
    `eh vector vbase constructor iterator'(&var_40, 4, 0xb, sub_63d770)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(arg1)
return arg1
