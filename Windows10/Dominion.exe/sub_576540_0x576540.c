// 函数: sub_576540
// 地址: 0x576540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* result = arg4
int32_t var_c9c = arg2
int32_t i = 0
*(result + 0x400) = 0
void* result_2 = result
char const* const var_cc8_1
int32_t var_cc4_1
char const* const var_cc0_1
char* ecx_1

if (*(arg3 + 0x19b8) s> 0)
    void* edi_1 = arg3 + 0x3b5c0
    
    do
        if (*(edi_1 - 0xc) == 3)
            char ecx = (*edi_1).b
            
            if ((ecx & 1) != 0 || *(edi_1 - 0x40) == arg2)
                if ((ecx & 2) != 0 && *(arg3 + 0x19d8) != 0)
                    result = result_2
                
                if ((ecx & 2) == 0
                        || (*(arg3 + 0x19d8) != 0 && *(arg3 + 0x19cc) == *(edi_1 - 0x44)))
                    if ((ecx & 4) == 0)
                    label_5765ed:
                        result = *(edi_1 - 0x2c) << 0x12
                        
                        if (result u>> 0x12 != *(edi_1 - 0x2c))
                            var_cc0_1 = "AbilityID::set_payload"
                            var_cc4_1 = 0x14d
                            var_cc8_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.h"
                            ecx_1 = "payload() == arg_payload"
                            goto label_57687a
                        
                        *(result_2 + (*(result_2 + 0x400) << 2)) = result
                        result = result_2
                        arg2 = var_c9c
                        *(result + 0x400) += 1
                    else if (*(arg3 + 0x19d8) != 0 && *(arg3 + 0x19cc) == arg2)
                        goto label_5765ed
                else if (*(edi_1 - 0x44) == 0xffffffff)
                    var_cc0_1 = "CollectRegisteredAllOngoing"
                    var_cc4_1 = 0xe13
                    ecx_1 = "ability.owner != PLAYER_NONE"
                    goto label_576870
        
        i += 1
        edi_1 += 0xa8
    while (i s< *(arg3 + 0x19b8))

if (arg2 != 0xffffffff)
    int32_t i_1 = 0
    
    if (*(arg3 + 0xd38) s> 0)
        void* ecx_5 = arg3 + 0x1746c
        void* var_ca0_1 = ecx_5
        
        while (i_1 != 0xffffffff)
            int32_t j = *(ecx_5 - 0x1a0)
            
            if (j != 0)
                do
                    sub_576040(result, arg3, result, arg2, i_1, j)
                    arg2 = var_c9c
                    j = *(j * 0x64 + arg3 + 0x1aa4)
                    result = result_2
                while (j != 0)
                
                ecx_5 = var_ca0_1
            
            int32_t j_1 = *ecx_5
            
            if (j_1 != 0)
                do
                    sub_576040(result, arg3, result_2, arg2, i_1, j_1)
                    arg2 = var_c9c
                    result = j_1 * 0x64
                    j_1 = *(result + arg3 + 0x1aa4)
                while (j_1 != 0)
                
                ecx_5 = var_ca0_1
            
            arg2 = var_c9c
            i_1 += 1
            ecx_5 += 0x5a30
            var_ca0_1 = ecx_5
            
            if (i_1 s>= *(arg3 + 0xd38))
                goto label_576711
            
            result = result_2
        
        var_cc0_1 = "GetPileHead"
        var_cc4_1 = 0x33e
        ecx_1 = "who != PLAYER_NONE"
        goto label_576870
    
label_576711:
    int32_t eax_5 = 0
    void* edx_3 = arg3 + 0x174c
    int32_t var_c94[0x320]
    
    for (int32_t i_2 = 0x22; i_2 s< 0x26; )
        int32_t edi_2 = *edx_3
        
        if (edi_2 != 0)
            var_c94[eax_5] = edi_2
            eax_5 += 1
        
        i_2 += 1
        edx_3 += 0x10
    
    int32_t (* edi_3)[0x320] = &var_c94
    int32_t var_14_1 = eax_5
    int32_t (* var_ca8_1)[0x320] = &var_c94
    result = &var_c94[eax_5]
    void* result_1 = result
    
    if (&var_c94 != result)
        while (true)
            int32_t i_3 = *edi_3
            result = *(*(i_3 * 0x64 + arg3 + 0x1a48) + 0x98) & 0x8000000
            
            if (result != 0)
                uint32_t ebx = zx.d(i_3.w)
                
                if (ebx u>= 0x320)
                    sub_591930()
                
                int32_t ecx_8 = *(ebx * 0x64 + arg3 + 0x1a4c)
                int32_t eax_11 = var_c9c
                int32_t var_ca0_2 = eax_11
                
                if (ecx_8 == 0xe30)
                    eax_11 = *(arg3 + 0x19cc)
                    var_ca0_2 = eax_11
                
                int32_t var_ca4
                result = sub_574a80(eax_11, eax_11, arg3, ecx_8, &var_ca4)
                
                if (result.b != 0)
                    int32_t ebx_1 = 0
                    
                    if (var_ca4 s> 0)
                        while (i_3 != 0)
                            sub_576040(result, arg3, result_2, var_c9c, var_ca0_2, i_3)
                            uint32_t edi_4 = zx.d(i_3.w)
                            
                            if (edi_4 u>= 0x320)
                                sub_591930()
                            
                            result = edi_4 * 0x64
                            ebx_1 += 1
                            i_3 = *(result + arg3 + 0x1aa4)
                            
                            if (ebx_1 s>= var_ca4)
                                goto label_57682a
                        
                        var_cc0_1 = "CollectWhileOwnedAllOngoing"
                        var_cc4_1 = 0xed0
                        ecx_1 = "card != CARDID_NULL"
                        break
            
        label_57682a:
            edi_3 = &(*var_ca8_1)[1]
            var_ca8_1 = edi_3
            
            if (edi_3 == result_1)
                goto label_576847
        
    label_576870:
        var_cc8_1 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
    label_57687a:
        sub_63b870(result, &data_801800, ecx_1, var_cc8_1, var_cc4_1, var_cc0_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

label_576847:
CookieCheckFunction(result)
return result
