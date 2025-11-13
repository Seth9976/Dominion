// 函数: _Z6Banishv
// 地址: 0xa8beb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsHand()
bool var_1940[0x910]
int64_t result = ChooseCardsSame(&var_1940, 0x1b, 0xd0, 0x17)
int32_t var_38
int64_t x8 = sx.q(var_38)

if (x8.d != 0)
    void var_cb8
    void* x20_1 = &var_cb8
    int64_t i_1 = x8 << 2
    int64_t i
    
    do
        int32_t x19_1 = *x20_1
        result = MoveCardToPlayer(zx.q(x19_1), 0x3ea, zx.q(*(DomGetContext() + 0x18)), 0x462, 0, 0, 
            &var_1940, 0xc)
        
        if (zx.d(var_1940[0]) != 0)
            result = TriggerEvent(0x13, zx.q(x19_1), 0)
        
        i = i_1
        i_1 -= 4
        x20_1 += 4
    while (i != 4)

return result
