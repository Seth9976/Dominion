// 函数: _Z13PileIsStacked9PlayerWho8DomWherei
// 地址: 0xaeccf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
int64_t result = 1

if (arg2 - 0x44d u<= 0x15)
    if ((1 << (arg2 - 0x44d) & 0x3d0001) != 0)
        return result
    
    if (arg2 == 0x451)
        return 0

uint64_t x8_1 = zx.q(arg2 - 0x3e9)

if (x8_1.d u<= 3)
    switch (x8_1)
        case 0, 3
            return result
        case 1
            if ((zx.d(*(GetActiveProfile() + 0x432c)) & 1) == 0)
                int64_t (* x8_4)()
                
                if (x20 == 0xffffffff)
                    x8_4 = gDomClient + 0x48
                else
                    x8_4 = gDomClient + 0x48 + muls.dp.d(x20, 0x4d48)
                
                if (zx.d(*(x8_4 + 0x4d24)) == 0)
                    if (arg3 s< 8)
                        return 0
                    
                    *(x8_4 + 0x4d24) = 1
        case 2
            if (*(gDomClient + 0x2079c) == x20)
                int32_t x8_7 = GetZoomPileStyle(zx.q(*(gDomClient + 0x20758))) - 1
                
                if (x8_7 u< 5)
                    return zx.q(6 u>> x8_7) & 1
else if (arg2 != 2)
    if (arg2 - 0x452 u>= 0x22)
        if (arg2 - 7 u<= 0x41)
            return zx.q(*DomBoardPile(gDomClient + 0x20728, arg2) == 0x1128 ? 1 : 0)
        
        return 0
else if (*(gDomClient + 0x20758) == 0x2b)
    int32_t x9_5 = *(gDomClient + 0x38)
    int32_t x9_6
    
    x9_6 = x9_5 == 0xffffffff ? 0 : x9_5
    
    if (*(gDomClient + 0x2079c) == x9_6)
        return 0

return 1
