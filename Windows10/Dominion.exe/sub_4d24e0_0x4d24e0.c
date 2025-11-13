// 函数: sub_4d24e0
// 地址: 0x4d24e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$clone_impl@U?$error_info_injector@Vrounding_error@math@boost@@@exception_detail@boost@@@exception_detail@boost@@QAE@ABV012@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(sub_64e7a0(arg1) + 0x18bc) = sub_4d2350
char const* const var_34_1
int32_t var_30_1
char const* const var_2c_1
int32_t* eax_7
char* ecx_2
int32_t var_18

if (sub_4b9370() == 0)
label_4d2656:
    void** esi_3 = &data_8dc8a0
    
    if (sub_4aebd0() != 0)
        esi_3 = &data_8dc8ac
    
    uint32_t eax_13 = sub_64e7a0(arg1)
    sub_665db0(eax_13, esi_3, eax_13, 0x3f800000, 0xffffffff, 0)
    eax_7 = data_cc8d5c
    
    if (eax_7 == 0)
        goto label_4d2578
    
    if (eax_7[0x1d64] != 0xffffffff)
        int32_t* eax_15 = sub_4b9480()
        void* edx_4 = data_cc8d5c
        
        if (edx_4 == 0)
            sub_63b870(eax_15, &data_801800, "gClient", 
                "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        void* eax_16 = sub_4b9680(&eax_15[2], *(edx_4 + 0x7590))
        char* var_14
        sub_4b06c0(eax_16, &eax_15[2], &var_14, eax_16, &var_18)
        int32_t var_8_1 = 0
        int32_t var_34_2 = 0xffffffff
        sub_666380(&var_14, &data_8db820, arg1, &var_14)
        void* eax_18 = sub_624450(var_18)
        uint32_t eax_19 = sub_64e7a0(arg1)
        sub_665db0(eax_19, eax_18, eax_19, 0x3f800000, 0xffffffff, 0)
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* eax_20 = var_14
            
            if (eax_20 != 0 && *eax_20 != 0)
                char* eax_21 = sub_63d4e0(&var_14)
                int32_t temp3_1 = *(eax_21 + 4)
                *(eax_21 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                    var_14 = &data_801800
        
        int32_t var_8_3 = 0xffffffff
    else
        uint32_t eax_14 = sub_64e7a0(arg1)
        sub_665db0(eax_14, &data_8dc8e4, eax_14, 0x3f800000, 0xffffffff, 0)
    
    int32_t eax_22 = data_cc8d70
    uint32_t eax_25
    void** edx_10
    
    if (eax_22 == 0)
        eax_25 = sub_64e7a0(arg1)
        edx_10 = &data_8dc908
    label_4d27c5:
        void* result = sub_665db0(eax_25, edx_10, eax_25, 0x3f800000, 0xffffffff, 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if (eax_22 == 1)
        eax_25 = sub_64e7a0(arg1)
        edx_10 = &data_8dc914
        goto label_4d27c5
    
    eax_7 = eax_22 - 2
    
    if (eax_22 == 2)
        eax_25 = sub_64e7a0(arg1)
        edx_10 = &data_8dc920
        goto label_4d27c5
    
    var_2c_1 = "NextPlayerScreenUpdate"
    var_30_1 = 0x2c86
    var_34_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
    ecx_2 = "Halt"
else
    if (data_b824dc == 0)
        int32_t* eax_5 = sub_4b9480()
        int32_t ecx_1 = 0
        int32_t esi_1 = eax_5[0x46a]
        
        if (esi_1 s> 0)
            void* edx_1 = &eax_5[0x1a]
            
            do
                int32_t eax_6 = *edx_1
                
                if (eax_6 == 0x3e9)
                    goto label_4d256a
                
                if (eax_6 == 0x3ec)
                    goto label_4d256a
                
                if (eax_6 == 0x3ed)
                    goto label_4d256a
                
                ecx_1 += 1
                edx_1 += 0x22c
            while (ecx_1 s< esi_1)
        
        goto label_4d25a1
    
label_4d256a:
    sub_4b9480()
    eax_7 = data_cc8d5c
    
    if (eax_7 != 0)
        if (eax_7[0x141a] == 2)
            goto label_4d2656
        
    label_4d25a1:
        
        if (sub_5a0c70(0xffffffff, &var_18) == 0xffffffff)
            goto label_4d2656
        
        eax_7 = sub_4b9480()
        void* ecx_3 = data_cc8d5c
        
        if (ecx_3 == 0)
            goto label_4d2578
        
        if (*(ecx_3 + 0x5068) != 0)
            int32_t eax_9 = sub_4e3a30(0xbdfb60)
            
            if (eax_9 != 0)
                int32_t esi_2 = var_18
                
                if ((eax_9 != 1 || esi_2 != 2) && ((eax_7[8].b & 4) == 0 || esi_2 != 2))
                    uint32_t eax_10 = sub_64e7a0(arg1)
                    sub_665db0(eax_10, &data_8dc8f0, eax_10, 0x3f800000, 0xffffffff, 0)
                    
                    if (esi_2 == 2)
                        uint32_t eax_11 = sub_64e7a0(arg1)
                        sub_665db0(eax_11, &data_8dc8fc, eax_11, 0x3f800000, 0xffffffff, 0)
            
            goto label_4d2656
        
        var_2c_1 = "GetActiveConfig"
        var_30_1 = 0x33b6
        var_34_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx_2 = "c.activeGame.gameType != GAME_NONE"
    else
    label_4d2578:
        var_2c_1 = "GetClient"
        var_30_1 = 0x7b
        var_34_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        ecx_2 = "gClient"
sub_63b870(eax_7, &data_801800, ecx_2, var_34_1, var_30_1, var_2c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
