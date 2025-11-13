// 函数: sub_4b06c0
// 地址: 0x4b06c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?Release@ResourceManager@details@Concurrency@@UAEIXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_18 = arg3
*arg5 = 0xffffffff
int32_t eax_3 = *(arg4 + 0x14)
int32_t var_34

if (eax_3 s> 0x3e8)
    if (eax_3 != 0x3e9)
    label_4b0acb:
        char const* const var_30_8 = "PlayerGetNameAvatar"
        var_34 = 0x50c
    label_4b0ae4:
        sub_63b870(eax_3, &data_801800, "Halt", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", var_34, "PlayerGetNameAvatar")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t esi_3 = 0
    *arg5 = *(arg4 + 0x10)
    int32_t edx_12 = 0
    
    if (*(arg2 + 0x54) == 0x3e9)
        esi_3 = 1
        edx_12 = neg.d(sbb.d(0, 0, arg2 + 0x40 u< arg4))
    
    if (*(arg2 + 0x280) == 0x3e9)
        esi_3 += 1
        int32_t ecx_30 = edx_12 + 1
        
        if (arg2 + 0x26c u>= arg4)
            ecx_30 = edx_12
        
        edx_12 = ecx_30
    
    if (*(arg2 + 0x4ac) == 0x3e9)
        esi_3 += 1
        int32_t ecx_31 = edx_12 + 1
        
        if (arg2 + 0x498 u>= arg4)
            ecx_31 = edx_12
        
        edx_12 = ecx_31
    
    if (*(arg2 + 0x6d8) == 0x3e9)
        esi_3 += 1
        int32_t ecx_32 = edx_12 + 1
        
        if (arg2 + 0x6c4 u>= arg4)
            ecx_32 = edx_12
        
        edx_12 = ecx_32
    
    if (*(arg2 + 0x904) == 0x3e9)
        esi_3 += 1
        int32_t ecx_33 = edx_12 + 1
        
        if (arg2 + 0x8f0 u>= arg4)
            ecx_33 = edx_12
        
        edx_12 = ecx_33
    
    if (*(arg2 + 0xb30) == 0x3e9)
        esi_3 += 1
        int32_t ecx_34 = edx_12 + 1
        
        if (arg2 + 0xb1c u>= arg4)
            ecx_34 = edx_12
        
        edx_12 = ecx_34
    
    if (*(arg2 + 0xd5c) == 0x3e9)
        esi_3 += 1
        int32_t ecx_35 = edx_12 + 1
        
        if (arg2 + 0xd48 u>= arg4)
            ecx_35 = edx_12
        
        edx_12 = ecx_35
    
    if (*(arg2 + 0xf88) == 0x3e9)
        esi_3 += 1
        int32_t ecx_36 = edx_12 + 1
        
        if (arg2 + 0xf74 u>= arg4)
            ecx_36 = edx_12
        
        edx_12 = ecx_36
    
    int32_t esi_5 = neg.d(esi_3 - 1)
    char** eax_35 = sub_68caf0(edx_12 + 1, nullptr, "dom_ui_player_guest_name", 0)
    char* edx_14
    
    if (eax_35 != 0)
        char* eax_36 = *eax_35
        edx_14 = &data_801800
        
        if (eax_36 != 0)
            edx_14 = eax_36
    else
        edx_14 = "dom_ui_player_guest_name"
    
    int32_t var_30_7 = sbb.d(esi_5, esi_5, esi_3 != 1) & (edx_12 + 1)
    sub_4b02f0(arg3, edx_14)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3

if (eax_3 == 0x3e8)
    void* eax_11 = data_cc8dc8
    int32_t edx_6 = 0
    int32_t esi_1 = *(eax_11 + 0x1e1a0)
    int32_t i
    
    if (esi_1 s> 0)
        i = *(arg4 + 0x18)
        
        while (*(eax_11 + 0x42b0) != i)
            edx_6 += 1
            eax_11 += 0x7868
            
            if (edx_6 s>= esi_1)
                goto label_4b0868
    
    if (esi_1 s<= 0 || eax_11 == 0)
    label_4b0868:
        *arg5 = *(arg4 + 0x10)
        sub_63d720(arg3, arg4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    
    char* esi_2 = *sub_4d8f30(i)
    char* var_14 = esi_2
    
    if (esi_2 != 0 && *esi_2 != 0)
        char* eax_15 = sub_63d4e0(&var_14)
        *(eax_15 + 4) += 1
    
    int32_t var_8_1 = 0
    char* const ecx_23 = &data_801800
    *arg5 = *(sub_4d8f30(*(arg4 + 0x18)) + 8)
    void* eax_19 = &data_801800
    
    if (esi_2 != 0)
        eax_19 = esi_2
    
    int32_t eax_21
    
    while (true)
        int32_t* edx_9
        edx_9.b = *eax_19
        char temp2_1 = *ecx_23
        bool c_1 = edx_9.b u< temp2_1
        
        if (edx_9.b == temp2_1)
            if (edx_9.b == 0)
                eax_21 = 0
                break
            
            edx_9.b = *(eax_19 + 1)
            char temp4_1 = ecx_23[1]
            c_1 = edx_9.b u< temp4_1
            
            if (edx_9.b == temp4_1)
                eax_19 += 2
                ecx_23 = &ecx_23[2]
                
                if (edx_9.b != 0)
                    continue
                
                eax_21 = 0
                break
        
        eax_21 = sbb.d(eax_19, eax_19, c_1) | 1
        break
    
    if (eax_21 != 0)
        *arg3 = esi_2
        
        if (esi_2 != 0 && *esi_2 != 0)
            char* eax_22 = sub_63d4e0(arg3)
            *(eax_22 + 4) += 1
        
        int32_t var_8_3 = 2
    else
        sub_63d720(arg3, "Player")
        int32_t var_8_2 = 1
    
    if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
        char* eax_23 = sub_63d4e0(&var_14)
        int32_t temp5_1 = *(eax_23 + 4)
        *(eax_23 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg3
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3

if (eax_3 u> 3)
    goto label_4b0acb

switch (eax_3)
    case 0
        sub_63d720(arg3, "(Closed)")
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    case 1
        *arg5 = *(arg4 + 0x10)
        sub_63d720(arg3, arg4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    case 2
        int32_t eax_6 = *(arg4 + 0x18)
        
        if (eax_6 == 0)
            sub_63d720(arg3, "Open Seat")
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg3
        
        eax_3 = eax_6 - 1
        
        if (eax_6 == 1)
            sub_63d720(arg3, "Optional Seat")
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg3
        
        char const* const var_30_1 = "PlayerGetNameAvatar"
        var_34 = 0x4e1
        goto label_4b0ae4
    case 3
        eax_3 = *(arg4 + 0x18)
        
        if (eax_3 u> 3)
            char const* const var_30_6 = "PlayerGetNameAvatar"
            var_34 = 0x4ee
            goto label_4b0ae4
        
        switch (eax_3)
            case 0
                *arg5 = 0x166
                sub_4b03f0(0x166, arg2, arg3, arg4)
            case 1
                *arg5 = 0x167
                sub_4b03f0(0x167, arg2, arg3, arg4)
            case 2
                *arg5 = 0x168
                sub_4b03f0(0x168, arg2, arg3, arg4)
            case 3
                *arg5 = 0x169
                sub_4b03f0(0x169, arg2, arg3, arg4)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
