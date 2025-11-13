// 函数: sub_588650
// 地址: 0x588650
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*arg2 s< 0x40)
    int32_t ecx = *(arg3 + 0xd40)
    
    if (ecx != 0 && (*(arg3 + 0xd44) & 0x80) == 0)
        int32_t eax = sub_5b06a0(ecx)
        void* ecx_1 = arg3 + 0x1594
        int32_t* esi = 7
        int32_t var_20
        char const* const var_1c
        int32_t eax_4
        char* ecx_5
        
        while (true)
            int32_t var_8
            
            if (*ecx_1 == 0x1128 || *(ecx_1 + 4) == 0x1128)
                int32_t eax_3 = *arg2
                eax_4 = eax_3 + 1
                var_8 = *(eax + (eax_3 << 2) + 0x18b8)
                *arg2 = eax_4
                
                if (esi u> 0x48)
                    var_1c = "GetPileHead"
                    
                    if (esi s>= 0x3e8)
                        var_20 = 0x33e
                        ecx_5 = "who != PLAYER_NONE"
                    else
                        var_20 = 0x33d
                        ecx_5 = "where >= START_PLAYER_PILES"
                    
                    break
            else
                esi += 1
                ecx_1 += 0x10
                
                if (esi s< 0x48)
                    continue
                else
                    int32_t eax_1 = *arg2
                    esi = nullptr
                    var_8 = *(eax + (eax_1 << 2) + 0x18b8)
                    *arg2 = eax_1 + 1
            
            if (esi s>= 0x48)
                sub_591930()
            
            eax_4 = esi * 2
            int32_t i = *(arg3 + (eax_4 << 3) + 0x152c)
            
            if (i != 0)
                int32_t ecx_4 = var_8
                
                do
                    uint32_t ebx_1 = zx.d(i.w)
                    
                    if (ebx_1 u>= 0x320)
                        sub_591930()
                        ecx_4 = var_8
                    
                    eax_4 = ebx_1 * 0x64
                    
                    if (*(eax_4 + arg3 + 0x1a4c) == ecx_4)
                        sub_572660(sub_5723a0(eax_4, i, arg3, nullptr), i, arg3, esi, 0xffffffff)
                        *arg4 = i
                        int32_t* eax_7
                        eax_7.b = i != 0
                        return eax_7
                    
                    i = *(eax_4 + arg3 + 0x1aa4)
                while (i != 0)
            
            var_1c = "TryDoCampaignLootDraw"
            var_20 = 0x3617
            ecx_5 = "Halt"
            break
        
        sub_63b870(eax_4, &data_801800, ecx_5, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 
            var_20, var_1c)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

arg1.b = 0
return arg1
