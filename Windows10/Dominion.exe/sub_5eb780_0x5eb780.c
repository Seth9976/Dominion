// 函数: sub_5eb780
// 地址: 0x5eb780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = 0x13
int32_t* edi = arg1 + 0x1654
char const* const var_28_1
int32_t var_24
char const* const var_20
void* eax_1
char* ecx_1

while (true)
    int32_t ecx = *edi
    
    if (ecx == 0)
    label_5eb7b9:
        int32_t result = *(arg1 + 0x1704)
        
        if (*(arg1 + 0x16f4) == 0)
            if (result == 0)
                return result
        else if (result != 0)
            return 3
        
        int32_t edi_1 = 0xa
        void* eax_3 = &data_b821cc
        
        while (*eax_3 != 0)
            eax_3 += 0x10
            edi_1 += 1
            
            if (eax_3 s> 0xb8220c)
                break
        
        int32_t ebx_1 = 0
        void* eax_4 = &data_b8221c
        
        while (*eax_4 != 0)
            eax_4 += 0x10
            ebx_1 += 1
            
            if (eax_4 s> 0xb8225c)
                break
        
        int32_t esi_1 = 0
        void* eax_5 = &data_b8227c
        
        while (*(eax_5 - 0x10) != 0)
            if (*eax_5 == 0)
                esi_1 += 1
                break
            
            if (*(eax_5 + 0x10) == 0)
                esi_1 += 2
                break
            
            eax_5 += 0x30
            esi_1 += 3
            
            if (eax_5 s> 0xb8247c)
                break
        
        bool cond:1_1 = sub_4aec30() != 0
        eax_1 = data_cc8dc0
        
        if (eax_1 == 0)
            var_20 = "GetLocalSettings"
            var_24 = 0x5fb
            var_28_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
            ecx_1 = "gGameSettings.localSettings"
            break
        
        char var_8_1
        
        if (*(eax_1 + 0x38) == 0)
            var_8_1 = 0
        else
            eax_1 = sub_5cb070()
            var_8_1 = 1
            
            if (eax_1 != 0)
                var_8_1 = 0
        
        int32_t eax_8 = sub_5d3300(sub_5d2120(eax_1, ebx_1, edi_1, esi_1, cond:1_1, var_8_1))
        
        if (eax_8 == 1)
            return 1
        
        eax_1 = eax_8 - 2
        
        if (eax_8 == 2)
            return 2
        
        var_20 = "KingdomHasExtendedSupply"
        var_24 = 0x6672
        ecx_1 = "Halt"
    else
        eax_1 = esi - 0x13
        
        if (eax_1 s< 0xe)
            *arg2 = ecx
            esi += 1
            arg2 = &arg2[1]
            edi = &edi[4]
            
            if (esi s<= 0x21)
                continue
            
            goto label_5eb7b9
        
        var_20 = "KingdomHasExtendedSupply"
        var_24 = 0x6652
        ecx_1 = "numPiles < NUM_KINGDOM_PILES + MAX_EXTRA_KINGDOM_PILES"
    
    var_28_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    break

sub_63b870(eax_1, &data_801800, ecx_1, var_28_1, var_24, var_20)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
