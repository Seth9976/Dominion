// 函数: sub_5723a0
// 地址: 0x5723a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t esi = zx.d(arg2.w)

if (esi u>= 0x320)
    sub_591930()

void* ecx_1 = esi * 0x64 + arg3
void* eax_1 = *(ecx_1 + 0x1a50)
char* eax_2

if (eax_1 != 0x474)
    int32_t ebx_1 = 0
    int32_t* eax_3 = sub_5722c0(eax_1, eax_1, arg3, *(ecx_1 + 0x1a70))
    int32_t* var_c_1 = eax_3
    int32_t ecx_3 = *eax_3
    int32_t var_28
    char const* const var_24_2
    char* ecx_9
    
    if (ecx_3 == 0)
    label_57252a:
        var_24_2 = "CardRemove"
        var_28 = 0x3bd
        ecx_9 = "Halt"
    label_572543:
        sub_63b870(eax_3, &data_801800, ecx_9, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 
            var_28, var_24_2)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    uint32_t esi_1
    
    while (true)
        esi_1 = zx.d(ecx_3.w)
        
        if (ecx_3 == arg2)
            break
        
        ebx_1 = ecx_3
        
        if (esi_1 u>= 0x320)
            sub_591930()
        
        eax_3 = esi_1 * 0x64
        ecx_3 = *(eax_3 + arg3 + 0x1aa4)
        
        if (ecx_3 == 0)
            goto label_57252a
    
    char* var_8_1
    
    if (ebx_1 != 0)
        if (esi_1 u>= 0x320)
            sub_591930()
        
        uint32_t ebx_2 = zx.d(ebx_1.w)
        char* eax_7 = esi_1 * 0x64 + 0x1aa4 + arg3
        var_8_1 = eax_7
        int32_t eax_8 = *eax_7
        
        if (ebx_2 u>= 0x320)
            sub_591930()
        
        *(ebx_2 * 0x64 + arg3 + 0x1aa4) = eax_8
    else
        if (esi_1 u>= 0x320)
            sub_591930()
        
        char* ecx_6 = esi_1 * 0x64 + 0x1aa4 + arg3
        var_8_1 = ecx_6
        *var_c_1 = *ecx_6
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    eax_2 = var_8_1
    *eax_2 = 0
    
    if (arg4 != 0)
        eax_3 = eax_1 - 7
        
        if (eax_3 u> 0x1a)
            *arg4 = 0
            return eax_3
        
        int32_t esi_3 = *(ecx_1 + 0x1a50)
        
        if (esi_3 u> 0x48)
            var_24_2 = "GetPileHead"
            
            if (esi_3 s>= 0x3e8)
                var_28 = 0x33e
                ecx_9 = "who != PLAYER_NONE"
            else
                var_28 = 0x33d
                ecx_9 = "where >= START_PLAYER_PILES"
            
            goto label_572543
        
        if (esi_3 s>= 0x48)
            eax_3 = sub_591930()
        
        if (*(arg3 + esi_3 * 0x10 + 0x152c) == 0)
            *arg4 = 1
            return eax_3
        
        *arg4 = 0
        return eax_3
else
    eax_2 = arg4
    
    if (eax_2 != 0)
        *eax_2 = 0

return eax_2
