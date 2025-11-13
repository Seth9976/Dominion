// 函数: _Z22HasDivineWindTriggeredR7DomGame
// 地址: 0xb15a00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomBoardPile(arg1, 0x22)
int32_t x0_2 = CardIs(arg1, zx.q(*x0), 0x80000000000)
int32_t x0_4

if ((x0_2 & 1) != 0 && *x0 == 0x121c)
    x0_4 = CountTokensPile(arg1, 0xffffffff, 0x1200, 0x22)

if ((x0_2 & 1) == 0 || *x0 != 0x121c || x0_4 != 0)
    int32_t* x0_6 = DomBoardPile(arg1, 0x23)
    int32_t x0_8 = CardIs(arg1, zx.q(*x0_6), 0x80000000000)
    int32_t x0_10
    
    if ((x0_8 & 1) != 0 && *x0_6 == 0x121c)
        x0_10 = CountTokensPile(arg1, 0xffffffff, 0x1200, 0x23)
    
    if ((x0_8 & 1) == 0 || *x0_6 != 0x121c || x0_10 != 0)
        int32_t* x0_12 = DomBoardPile(arg1, 0x24)
        int32_t x0_14 = CardIs(arg1, zx.q(*x0_12), 0x80000000000)
        int32_t x0_16
        
        if ((x0_14 & 1) != 0 && *x0_12 == 0x121c)
            x0_16 = CountTokensPile(arg1, 0xffffffff, 0x1200, 0x24)
        
        if ((x0_14 & 1) == 0 || *x0_12 != 0x121c || x0_16 != 0)
            int32_t* x0_18 = DomBoardPile(arg1, 0x25)
            int32_t x0_20 = CardIs(arg1, zx.q(*x0_18), 0x80000000000)
            int32_t x0_22
            
            if ((x0_20 & 1) != 0 && *x0_18 == 0x121c)
                x0_22 = CountTokensPile(arg1, 0xffffffff, 0x1200, 0x25)
            
            if ((x0_20 & 1) == 0 || *x0_18 != 0x121c || x0_22 != 0)
                return 0

return 1
