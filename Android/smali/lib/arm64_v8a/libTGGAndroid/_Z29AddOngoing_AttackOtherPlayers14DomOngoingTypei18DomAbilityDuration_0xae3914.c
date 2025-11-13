// 函数: _Z29AddOngoing_AttackOtherPlayers14DomOngoingTypei18DomAbilityDuration
// 地址: 0xae3914
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
CardIs(*(DomGetContext() + 8), zx.q(*(x0 + 0x1c)), 0x20)
DomGame* result = *(x0 + 8)
int32_t x8 = *(result + 0xd40)

if (x8 s>= 1)
    int32_t x24_1 = 0
    
    do
        int32_t x23_1 = (x24_1 + *(result + 0x19d4)) s% x8
        
        if (x23_1 != *(x0 + 0x18) && (HasOngoing(result, zx.q(x23_1), 0, 0, 0) & 1) == 0)
            int32_t var_48_1 = 0
            int32_t var_50_1 = 0
            AddOngoing(*(x0 + 8), zx.q(x23_1), zx.q(arg1), zx.q(arg2), zx.q(arg3), 0, 0, 
                zx.q(*(x0 + 0x18)))
        
        result = *(x0 + 8)
        x24_1 += 1
        x8 = *(result + 0xd40)
    while (x24_1 s< x8)

return result
