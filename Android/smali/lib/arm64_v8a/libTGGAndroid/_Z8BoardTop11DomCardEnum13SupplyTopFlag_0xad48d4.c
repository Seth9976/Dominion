// 函数: _Z8BoardTop11DomCardEnum13SupplyTopFlag
// 地址: 0xad48d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
void var_cb0
int32_t i_2 = CardsBoardTops(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_cb0, zx.q(arg2))

if (i_2 s>= 1)
    uint64_t i_1 = zx.q(i_2)
    void* x22_1 = &var_cb0
    uint64_t i
    
    do
        if (CardWhat(*(x0 + 8), zx.q(*x22_1)) == arg1)
            return zx.q(*x22_1)
        
        i = i_1
        i_1 -= 1
        x22_1 += 4
    while (i != 1)

return 0
