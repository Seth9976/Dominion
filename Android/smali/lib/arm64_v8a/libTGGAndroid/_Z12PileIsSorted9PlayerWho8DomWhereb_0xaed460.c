// 函数: _Z12PileIsSorted9PlayerWho8DomWhereb
// 地址: 0xaed460
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int32_t x8 = 1

if (arg2 s> 0x3e9)
    if (x19 != 0x3ea)
        if (x19 == 0x3eb)
            int32_t x8_1 = GetZoomPileStyle(zx.q(*(gDomClient + 0x20758))) - 1
            return zx.q(x8_1 u> 4 ? 1 : 0) | zx.q((0x19 u>> x8_1 & 1) == 0 ? 1 : 0)
                | zx.q(*(gDomClient + 0x2079c) != arg1 ? 1 : 0)
        
    label_aed514:
        x8 = arg3.d
        
        if (x19 - 7 u<= 0x40)
            if (*DomBoardPile(gDomClient + 0x20728, x19) != 0x1128)
                if (*DomBoardPile(gDomClient + 0x20728, x19) != 0xd3d
                        && *DomBoardPile(gDomClient + 0x20728, x19) != 0xd30)
                    return zx.q(*DomBoardPile(gDomClient + 0x20728, x19) == 0x1301 ? 1 : 0) & 1
                
                return 1
            
            x8 = 1
else if (x19 != 2)
    if (x19 == 0x3e9)
        return 0
    
    goto label_aed514

return zx.q(x8) & 1
