// 函数: _Z15GetFirstWayCardv
// 地址: 0xb129b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0_1 = DomBoardPile(gDomClient + 0x20728, 0x22)
int32_t x20 = *x0_1

if (x20 != 0)
    if (*(GetClient() + 0x5068) == 0)
        if ((zx.d(*(DomDefGet(zx.q(x20), 0x18) + 0xcb)) & 0x10) != 0)
            return zx.q(x0_1[2])
    else if ((zx.d(*(DomDefGet(zx.q(x20), zx.q(*(ActiveGame() + 0x30))) + 0xcb)) & 0x10) != 0)
        return zx.q(x0_1[2])
    
    int32_t* x0_9 = DomBoardPile(gDomClient + 0x20728, 0x23)
    int32_t x20_1 = *x0_9
    
    if (x20_1 != 0)
        if (*(GetClient() + 0x5068) == 0)
            if ((zx.d(*(DomDefGet(zx.q(x20_1), 0x18) + 0xcb)) & 0x10) != 0)
                return zx.q(x0_9[2])
        else if ((zx.d(*(DomDefGet(zx.q(x20_1), zx.q(*(ActiveGame() + 0x30))) + 0xcb)) & 0x10) != 0)
            return zx.q(x0_9[2])
        
        int32_t* x0_17 = DomBoardPile(gDomClient + 0x20728, 0x24)
        int32_t x20_2 = *x0_17
        
        if (x20_2 != 0)
            if (*(GetClient() + 0x5068) == 0)
                if ((zx.d(*(DomDefGet(zx.q(x20_2), 0x18) + 0xcb)) & 0x10) != 0)
                    return zx.q(x0_17[2])
            else if ((zx.d(*(DomDefGet(zx.q(x20_2), zx.q(*(ActiveGame() + 0x30))) + 0xcb)) & 0x10)
                    != 0)
                return zx.q(x0_17[2])
            
            int32_t* x0_25 = DomBoardPile(gDomClient + 0x20728, 0x25)
            int32_t x20_3 = *x0_25
            
            if (x20_3 != 0)
                uint64_t x1_4
                
                if (*(GetClient() + 0x5068) == 0)
                    x1_4 = 0x18
                else
                    x1_4 = zx.q(*(ActiveGame() + 0x30))
                
                if ((zx.d(*(DomDefGet(zx.q(x20_3), x1_4) + 0xcb)) & 0x10) != 0)
                    return zx.q(x0_25[2])
                
                int32_t* x0_31 = DomBoardPile(gDomClient + 0x20728, 0x26)
                int32_t x20_4 = *x0_31
                
                if (x20_4 != 0)
                    uint64_t x1_5
                    
                    if (*(GetClient() + 0x5068) == 0)
                        x1_5 = 0x18
                    else
                        x1_5 = zx.q(*(ActiveGame() + 0x30))
                    
                    uint32_t x8_13 = zx.d(*(DomDefGet(zx.q(x20_4), x1_5) + 0xcb))
                    return zx.q(x0_31[2]) & zx.q(x8_13 << 0x1b s>> 0x1f)

return 0
