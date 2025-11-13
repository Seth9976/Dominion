// 函数: _Z22CollectAttackUnblockedP9PlayerWho
// 地址: 0xae3ba0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
GameAssert((*x0 == 2 ? 1 : 0).b)
CardIs(*(DomGetContext() + 8), zx.q(x0[7]), 0x20)
DomGame* x0_4 = *(x0 + 8)
int32_t x8_1 = *(x0_4 + 0xd40)
int32_t x21_1

if (x8_1 s< 2)
    x21_1 = 0
else
    x21_1 = 0
    int32_t x23_1 = 1
    
    do
        int32_t x22_1 = (x23_1 + x0[6]) s% x8_1
        
        if ((HasOngoing(x0_4, zx.q(x22_1), 0, 0, 0) & 1) == 0)
            *(arg1 + (sx.q(x21_1) << 2)) = x22_1
            x21_1 += 1
        
        x0_4 = *(x0 + 8)
        x23_1 += 1
        x8_1 = *(x0_4 + 0xd40)
    while (x23_1 s< x8_1)

return zx.q(x21_1)
