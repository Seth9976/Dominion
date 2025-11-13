// 函数: sub_4b1fd0
// 地址: 0x4b1fd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?FoundAvailableVirtualProcessor@SchedulingNode@details@Concurrency@@AAE_NAAVClaimTicket@VirtualProcessor@23@Vlocation@3@K@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_11
char* const var_20
char* const var_1c
char* const var_18
char* const var_14

if (arg1 != 2)
    sub_63d720(&var_14, &data_801800)
    int32_t var_8_4 = 8
    sub_63d720(&var_18, &data_801800)
    var_8_4.b = 9
    sub_63d720(&var_1c, "An error has occured.")
    var_8_4.b = 0xa
    sub_63d720(&var_20, "Game error")
    var_8_4.b = 0xb
    data_8db6b0 = 0x20
    sub_63d850(&data_8db750, &var_20)
    sub_63d850(&data_8db754, &var_1c)
    sub_63d850(&data_8db758, &var_18)
    eax_11 = sub_63d850(&data_8db75c, &var_14)
    data_8db760 = 0
    data_8db764 = 0
    var_8_4.b = 0xc
    
    if (data_cf65bc != 0)
        eax_11 = var_20
        
        if (eax_11 != 0 && *eax_11 != 0)
            eax_11 = sub_63d4e0(&var_20)
            int32_t temp0_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp0_1 == 1)
                eax_11 = sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                var_20 = &data_801800
    
    var_8_4.b = 0xd
    
    if (data_cf65bc != 0)
        eax_11 = var_1c
        
        if (eax_11 != 0 && *eax_11 != 0)
            eax_11 = sub_63d4e0(&var_1c)
            int32_t temp2_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp2_1 == 1)
                eax_11 = sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                var_1c = &data_801800
    
    var_8_4.b = 0xe
    
    if (data_cf65bc != 0)
        eax_11 = var_18
        
        if (eax_11 != 0 && *eax_11 != 0)
            eax_11 = sub_63d4e0(&var_18)
            int32_t temp4_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp4_1 == 1)
                eax_11 = sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                var_18 = &data_801800
    
    int32_t var_8_5 = 0xf
    
    if (data_cf65bc != 0)
        eax_11 = var_14
        
        if (eax_11 != 0 && *eax_11 != 0)
            eax_11 = sub_63d4e0(&var_14)
            int32_t temp6_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp6_1 == 1)
                eax_11 = sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                var_14 = &data_801800
    
    int32_t var_8_6 = 0xffffffff
    void* esi_1 = data_cc8d5c
    
    if (esi_1 != 0)
        *(esi_1 + 0x5044) = 7
        *(esi_1 + 0x5064) = 0
        *(esi_1 + 0x5058) = arg2
        void* eax_12 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        
        if (*(eax_12 + 0x42c0) == arg2)
            *(eax_12 + 0x42c0) = 0
        label_4b2404:
            data_cc8dc8
            char* eax_17 = sub_4d8ad0(esi_1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_17
        
        if (*(eax_12 + 0x42c4) == arg2)
            *(eax_12 + 0x42c4) = 0
            goto label_4b2404
        
        if (sub_609710(esi_1 + 0x5048) != arg2)
            goto label_4b2404
        
        eax_11 = data_cc8d5c
        
        if (eax_11 != 0)
            esi_1 = sub_4badc0(&eax_11[0x75b8], &eax_11[0x5048])
            sub_4bb2f0(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x720c, esi_1)
            goto label_4b2404
else
    sub_63d720(&var_20, &data_801800)
    int32_t var_8_1 = 0
    sub_63d720(&var_1c, &data_801800)
    var_8_1.b = 1
    sub_63d720(&var_18, "An error has occured.")
    var_8_1.b = 2
    sub_63d720(&var_14, "Game error")
    var_8_1.b = 3
    data_8db6b0 = 0x20
    sub_63d850(&data_8db750, &var_14)
    sub_63d850(&data_8db754, &var_18)
    sub_63d850(&data_8db758, &var_1c)
    sub_63d850(&data_8db75c, &var_20)
    data_8db760 = 0
    data_8db764 = 0
    var_8_1.b = 4
    
    if (data_cf65bc != 0)
        char* eax_3 = var_14
        
        if (eax_3 != 0 && *eax_3 != 0)
            char* eax_4 = sub_63d4e0(&var_14)
            int32_t temp1_1 = *(eax_4 + 4)
            *(eax_4 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
                var_14 = &data_801800
    
    var_8_1.b = 5
    
    if (data_cf65bc != 0)
        char* eax_5 = var_18
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_63d4e0(&var_18)
            int32_t temp3_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
                var_18 = &data_801800
    
    var_8_1.b = 6
    
    if (data_cf65bc != 0)
        char* eax_7 = var_1c
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_63d4e0(&var_1c)
            int32_t temp5_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                var_1c = &data_801800
    
    int32_t var_8_2 = 7
    
    if (data_cf65bc != 0)
        char* eax_9 = var_20
        
        if (eax_9 != 0 && *eax_9 != 0)
            char* eax_10 = sub_63d4e0(&var_20)
            int32_t temp7_1 = *(eax_10 + 4)
            *(eax_10 + 4) -= 1
            
            if (temp7_1 == 1)
                sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                var_20 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    eax_11 = data_cc8d5c
    
    if (eax_11 != 0)
        *(eax_11 + 0x5044) = 7
        *(eax_11 + 0x5064) = 4
        *(eax_11 + 0x5058) = arg2
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_11
sub_63b870(eax_11, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
