// 函数: _Z9HasOneWayv
// 地址: 0xb12c04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *DomBoardPile(gDomClient + 0x20728, 0x22)
int32_t x20

if (x19 == 0)
    x20 = 0
else
    uint64_t x1_1
    
    if (*(GetClient() + 0x5068) == 0)
        x1_1 = 0x18
    else
        x1_1 = zx.q(*(ActiveGame() + 0x30))
    
    x20 = *(DomDefGet(zx.q(x19), x1_1) + 0xc8) u>> 0x1c & 1
    int32_t x19_1 = *DomBoardPile(gDomClient + 0x20728, 0x23)
    
    if (x19_1 != 0)
        uint64_t x1_2
        
        if (*(GetClient() + 0x5068) == 0)
            x1_2 = 0x18
        else
            x1_2 = zx.q(*(ActiveGame() + 0x30))
        
        x20 += *(DomDefGet(zx.q(x19_1), x1_2) + 0xc8) u>> 0x1c & 1
        int32_t x19_2 = *DomBoardPile(gDomClient + 0x20728, 0x24)
        
        if (x19_2 != 0)
            uint64_t x1_3
            
            if (*(GetClient() + 0x5068) == 0)
                x1_3 = 0x18
            else
                x1_3 = zx.q(*(ActiveGame() + 0x30))
            
            x20 += *(DomDefGet(zx.q(x19_2), x1_3) + 0xc8) u>> 0x1c & 1
            int32_t x19_3 = *DomBoardPile(gDomClient + 0x20728, 0x25)
            
            if (x19_3 != 0)
                uint64_t x1_4
                
                if (*(GetClient() + 0x5068) == 0)
                    x1_4 = 0x18
                else
                    x1_4 = zx.q(*(ActiveGame() + 0x30))
                
                x20 += *(DomDefGet(zx.q(x19_3), x1_4) + 0xc8) u>> 0x1c & 1
                int32_t x19_4 = *DomBoardPile(gDomClient + 0x20728, 0x26)
                
                if (x19_4 != 0)
                    uint64_t x1_5
                    
                    if (*(GetClient() + 0x5068) == 0)
                        x1_5 = 0x18
                    else
                        x1_5 = zx.q(*(ActiveGame() + 0x30))
                    
                    x20 += *(DomDefGet(zx.q(x19_4), x1_5) + 0xc8) u>> 0x1c & 1

return zx.q(x20 == 1 ? 1 : 0)
