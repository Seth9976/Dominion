// 函数: sub_610ef0
// 地址: 0x610ef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
uint32_t result = *(arg1 + 0x2c)

if (result == 0)
    uint32_t esi_2 = zx.d((*(arg1 + 0x98)).w)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    if (*(esi_2 * 0x64 + &data_b82524) == arg2)
        result.b = 1
        return result
else if (result == 3)
    if (*(arg1 + 0x30) == arg2)
        result.b = 1
        return result
    
    int32_t ecx_1 = *(arg1 + 0x70)
    
    if (ecx_1 != 0)
        result = sub_5cba00(ecx_1)
        
        if (result != 0)
            if (*(result + 0x2c) != 0)
                sub_63b870(result, &data_801800, "gfx.type == DOMGFX_CARD", 
                    "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x8b1, "CardIs")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            uint32_t esi_4 = zx.d((*(result + 0x98)).w)
            
            if (esi_4 u>= 0x320)
                sub_591930()
            
            if (*(esi_4 * 0x64 + &data_b82524) != arg2)
                result.b = arg2 == 0
                return result
            
            result.b = 1
            return result

result.b = 0
return result
