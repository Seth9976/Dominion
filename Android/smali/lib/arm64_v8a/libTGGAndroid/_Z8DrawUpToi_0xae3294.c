// 函数: _Z8DrawUpToi
// 地址: 0xae3294
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = 0
int64_t result

while (true)
    int32_t x21_1 = x8
    result = CountCards(0x3ea, 0, 0, 0xffffffff)
    
    if (result.d s>= arg1)
        break
    
    void* x0 = DomGetContext()
    int32_t var_cc8_1 = 0xc
    int32_t var_cd0_1 = 0
    int32_t var_cb8
    result = DrawCardsTo(*(x0 + 8), zx.q(*(x0 + 0x18)), 1, 0x3ea, 0, *(x0 + 0x40), 
        zx.q(*(x0 + 0x48)), &var_cb8)
    int32_t x9_2 = (result.d != 0 ? 1 : 0) & (var_cb8 != 0 ? 1 : 0)
    x8 = x21_1 | (x9_2 ^ 1)
    
    if ((x9_2 & 1) == 0)
        if (((x21_1 ^ 1) & 1) == 0)
            break

return result
