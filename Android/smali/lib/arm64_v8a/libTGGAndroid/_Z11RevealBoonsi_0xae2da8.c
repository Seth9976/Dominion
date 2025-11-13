// 函数: _Z11RevealBoonsi
// 地址: 0xae2da8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1 - 1
void* entry_x8
*(entry_x8 + 0xc80) = 0

if (arg1 s< 1)
    return 

int32_t x22_1 = 0

while (true)
    void* x0 = DomGetContext()
    char var_40_1 = 0
    int32_t x0_2 = DrawFateTo(*(x0 + 8), 0xd30, zx.q(*(x0 + 0x18)), 0x3ee, 0xffffffff, 
        *(x0 + 0x40), zx.q(*(x0 + 0x48)), 0)
    GameAssert((x22_1 s< 0x320 ? 1 : 0).b)
    *(entry_x8 + 0xc80) = x22_1 + 1
    *(entry_x8 + (sx.q(x22_1) << 2)) = x0_2
    
    if (x21 == 0)
        break
    
    x22_1 = *(entry_x8 + 0xc80)
    x21 -= 1
