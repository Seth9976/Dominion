// 函数: _Z18PlayerHasSmartplay9SmartPlay9PlayerWho15SmartplayOption
// 地址: 0xb22234
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = arg1
void* x0_2 = GameGetPlayer(ActiveGame() + 8, zx.q(arg2))
uint64_t x8 = zx.q(*(x0_2 + 0x228))
int32_t x0_4

if (x8.d s< 1)
label_b22284:
    x0_4 = GetSmartplayDefault(zx.q(i))
else
    void* x9_1 = x0_2 + 0x2c
    
    while (*(x9_1 - 4) != i)
        uint64_t temp0_1 = x8
        x8 -= 1
        x9_1 += 8
        
        if (temp0_1 == 1)
            goto label_b22284
    
    x0_4 = *x9_1

return zx.q(x0_4 == arg3 ? 1 : 0)
