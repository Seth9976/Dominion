// 函数: sub_50f5e0
// 地址: 0x50f5e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = 0

while (true)
    int32_t result = 0
    
    while (true)
        if (result s>= 0x280)
            sub_63b870(result, &data_801800, "Halt", 
                "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x242, "CampaignAddExtra")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t* ecx_2 = (data_cca784 << 0xb) + data_cca780 + 0x58c + result
        
        if (*ecx_2 == 0)
            esi += 1
            *ecx_2 = 0xdb4
            ecx_2[1] = 0xf46
            ecx_2[2] = 0xffffffff
            ecx_2[3] = 0
            ecx_2[4] = 0
            
            if (esi s< 3)
                break
            
            return result
        
        result += 0x14
