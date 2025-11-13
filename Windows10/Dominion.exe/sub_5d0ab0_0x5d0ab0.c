// 函数: sub_5d0ab0
// 地址: 0x5d0ab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = data_b7d434
int32_t ebx
ebx.b = arg2

if (result != *(arg1 + 0x1c28))
    result = sub_5cb070()
    
    if (ebx.b != 0 || result == 0 || *(result + 0xc) == 0x11)
        void var_9
        
        if (sub_5e3790(arg1, &var_9) != 0)
        label_5d0b1e:
            int32_t eax_1 = *(arg1 + 0x2c)
            
            if (eax_1 == 0 || eax_1 == 1)
                return sub_5cffd0()
            
            sub_63b870(eax_1, &data_801800, 
                "gfx.type == DOMGFX_CARD || gfx.type == DOMGFX_CARD_PLACEHOLDER", 
                "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x17d0, "DomZoomCard")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t ecx_1 = *(arg1 + 0xa4)
        
        if (ecx_1 == 2)
            goto label_5d0b1e
        
        result = data_b604e0
        
        if (result == 0xffffffff)
            result = nullptr
        
        if (*(arg1 + 0xa0) == result && ecx_1 != 0x3eb && ecx_1 != 0x3ed)
            goto label_5d0b1e

return result
