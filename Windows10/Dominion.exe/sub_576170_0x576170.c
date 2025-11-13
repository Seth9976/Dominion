// 函数: sub_576170
// 地址: 0x576170
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* i = nullptr
int32_t var_ca0 = arg2
void* i_3 = nullptr
*(arg4 + 0x400) = 0
char const* const var_cc4_4
int32_t var_cc0_1
char const* const var_cbc_1
char* ecx_2

if (*(arg3 + 0x19b8) s> 0)
    void* ebx_1 = arg3 + 0x3b5b8
    
    do
        if (*(ebx_1 - 4) == 3 && *ebx_1 == arg5)
            char ecx_1 = (*(ebx_1 + 8)).b
            
            if ((ecx_1 & 1) != 0 || *(ebx_1 - 0x38) == arg2)
                if ((ecx_1 & 2) != 0 && *(arg3 + 0x19d8) != 0)
                    i = i_3
                
                if ((ecx_1 & 2) == 0
                        || (*(arg3 + 0x19d8) != 0 && *(arg3 + 0x19cc) == *(ebx_1 - 0x3c)))
                    if ((ecx_1 & 4) == 0)
                    label_57622d:
                        
                        if (arg6 == 0 || *(ebx_1 + 0x30) == arg6)
                            i = *(ebx_1 - 0x24) << 0x12
                            
                            if (i u>> 0x12 != *(ebx_1 - 0x24))
                                var_cbc_1 = "AbilityID::set_payload"
                                var_cc0_1 = 0x14d
                                var_cc4_4 = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
                                ecx_2 = "payload() == arg_payload"
                                goto label_576523
                            
                            arg2 = var_ca0
                            *(arg4 + (*(arg4 + 0x400) << 2)) = i
                            *(arg4 + 0x400) += 1
                            i = i_3
                    else if (*(arg3 + 0x19d8) != 0 && *(arg3 + 0x19cc) == arg2)
                        goto label_57622d
                else if (*(ebx_1 - 0x3c) == 0xffffffff)
                    var_cbc_1 = "CollectRegisteredOngoing"
                    var_cc0_1 = 0xdee
                    ecx_2 = "ability.owner != PLAYER_NONE"
                    goto label_576519
        
        i += 1
        ebx_1 += 0xa8
        i_3 = i
    while (i s< *(arg3 + 0x19b8))

if (arg2 != 0xffffffff)
    i = nullptr
    void* i_4 = nullptr
    
    if (*(arg3 + 0xd38) s> 0)
        void* ecx_7 = arg3 + 0x1746c
        void* var_c9c_1 = ecx_7
        
        while (i != 0xffffffff)
            int32_t j = *(ecx_7 - 0x1a0)
            
            if (j != 0)
                do
                    void* eax_4 = sub_575f10(i, arg2, arg3, i, j, arg5)
                    
                    if (eax_4 != 0xffffffff)
                        *(arg4 + (*(arg4 + 0x400) << 2)) = eax_4
                        *(arg4 + 0x400) += 1
                    
                    arg2 = var_ca0
                    j = *(j * 0x64 + arg3 + 0x1aa4)
                    i = i_4
                while (j != 0)
                
                ecx_7 = var_c9c_1
            
            int32_t j_1 = *ecx_7
            
            if (j_1 != 0)
                do
                    void* eax_6 = sub_575f10(i, arg2, arg3, i, j_1, arg5)
                    
                    if (eax_6 != 0xffffffff)
                        *(arg4 + (*(arg4 + 0x400) << 2)) = eax_6
                        *(arg4 + 0x400) += 1
                    
                    arg2 = var_ca0
                    j_1 = *(j_1 * 0x64 + arg3 + 0x1aa4)
                    i = i_4
                while (j_1 != 0)
                
                ecx_7 = var_c9c_1
            
            arg2 = var_ca0
            i += 1
            ecx_7 += 0x5a30
            i_4 = i
            var_c9c_1 = ecx_7
            
            if (i s>= *(arg3 + 0xd38))
                goto label_576378
        
        var_cbc_1 = "GetPileHead"
        var_cc0_1 = 0x33e
        ecx_2 = "who != PLAYER_NONE"
        goto label_576519
    
label_576378:
    int32_t eax_8 = 0
    void* edx = arg3 + 0x174c
    int32_t var_c94[0x320]
    
    for (int32_t i_1 = 0x22; i_1 s< 0x26; )
        int32_t ebx_2 = *edx
        
        if (ebx_2 != 0)
            var_c94[eax_8] = ebx_2
            eax_8 += 1
        
        i_1 += 1
        edx += 0x10
    
    int32_t (* ebx_3)[0x320] = &var_c94
    int32_t var_14_1 = eax_8
    int32_t (* var_ca8_1)[0x320] = &var_c94
    void* eax_9 = &var_c94[eax_8]
    
    if (&var_c94 != eax_9)
        while (true)
            int32_t i_2 = *ebx_3
            
            if ((*(*(i_2 * 0x64 + arg3 + 0x1a48) + 0x98) & 0x8000000) != 0)
                uint32_t eax_15 = zx.d(i_2.w)
                
                if (eax_15 u>= 0x320)
                    sub_591930()
                
                int32_t ecx_12 = var_ca0
                int32_t var_c9c_3 = ecx_12
                int32_t eax_17 = *(eax_15 * 0x64 + arg3 + 0x1a4c)
                
                if (eax_17 == 0xe30)
                    ecx_12 = *(arg3 + 0x19cc)
                    var_c9c_3 = ecx_12
                
                int32_t var_ca4
                i = sub_574a80(eax_17, ecx_12, arg3, eax_17, &var_ca4)
                
                if (i.b != 0)
                    void* i_5 = nullptr
                    
                    if (var_ca4 s> 0)
                        while (i_2 != 0)
                            void* eax_18 = sub_575f10(i, var_ca0, arg3, var_c9c_3, i_2, arg5)
                            
                            if (eax_18 != 0xffffffff)
                                *(arg4 + (*(arg4 + 0x400) << 2)) = eax_18
                                *(arg4 + 0x400) += 1
                            
                            uint32_t ebx_4 = zx.d(i_2.w)
                            
                            if (ebx_4 u>= 0x320)
                                sub_591930()
                            
                            i_2 = *(ebx_4 * 0x64 + arg3 + 0x1aa4)
                            i = i_5 + 1
                            i_5 = i
                            
                            if (i s>= var_ca4)
                                goto label_5764bb
                        
                        var_cbc_1 = "CollectWhileOwnedOngoing"
                        var_cc0_1 = 0xeb1
                        ecx_2 = "card != CARDID_NULL"
                        break
            
        label_5764bb:
            ebx_3 = &(*var_ca8_1)[1]
            var_ca8_1 = ebx_3
            
            if (ebx_3 == eax_9)
                goto label_5764da
        
    label_576519:
        var_cc4_4 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
    label_576523:
        sub_63b870(i, &data_801800, ecx_2, var_cc4_4, var_cc0_1, var_cbc_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

label_5764da:
CookieCheckFunction(arg4)
return arg4
