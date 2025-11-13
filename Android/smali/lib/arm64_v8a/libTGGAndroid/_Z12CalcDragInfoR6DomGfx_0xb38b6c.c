// 函数: _Z12CalcDragInfoR6DomGfx
// 地址: 0xb38b6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20

if ((IsRearranging() & 1) == 0)
    if (GetLocalControlScheme() != 2)
        int32_t x9_1 = *(gDomClient + 0x207ac)
        bool v_1
        bool z_1
        bool n_1
        
        if (*(gDomClient + 0x20758) != 2)
            v_1 = add_overflow(x9_1, 0xffffffff)
            z_1 = x9_1 == 1
            n_1 = x9_1 - 1 s< 0
        else
            n_1 = false
            z_1 = true
            v_1 = false
        
        bool z_2
        
        if (not(z_1) && n_1 == v_1)
            z_2 = *(gDomClient + 0x2074c) == 1
        else
            z_2 = false
        
        x20 = not(z_2) ? 3 : 2
    else
        x20 = 0
else
    x20 = 1

uint64_t x0_2 = zx.q(*(gDomClient + 0x20750))
uint64_t x8_2 = zx.q(x0_2.d - 9)
int64_t x22_1

if (x8_2.d u> 0xe)
    x22_1 = 0
else
    x22_1 = 0x600000000
    
    switch (x8_2)
        case 0, 5, 7, 0xe
            x22_1 = 0x100000000
        case 1, 2, 4, 6, 8, 9, 0xa, 0xb, 0xc, 0xd
            x22_1 = 0

int32_t x8_4 = *(gDomClient + 0x20758) & 0xfffffffe

if (x8_4 == 0x2c)
    *(arg1 + 0x2c) == 0 && *(arg1 + 0xa4) == 2
else if ((x8_4 != 2 || *(arg1 + 0x2c) != 0 || *(arg1 + 0xa4) != 0x3ea)
        && *(gDomClient + 0x2074c) != 8)
    CalcDragColor(x0_2)

return x22_1 | x20
