// 函数: sub_61ce00
// 地址: 0x61ce00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t result = 0

for (void* const i = &data_7e7d30; i != 0x7e9700; i += 0xec)
    int32_t j = 0
    void* esi_1 = i + 4
    
    do
        int32_t ecx = *esi_1
        
        if (ecx == 0)
            break
        
        if (ecx == arg1)
            if (result s< 4)
                *(arg2 + (result << 2)) = i
                result += 1
                break
            
            sub_63b870(j, &data_801800, "numDefs < MAX_LANDSCAPE_CARDS", 
                "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xddb6, "GetSmartplayDefs")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        j += 1
        esi_1 += 4
    while (j s< 0x20)

return result
