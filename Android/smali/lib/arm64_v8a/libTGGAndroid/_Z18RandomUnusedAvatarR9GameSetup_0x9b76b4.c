// 函数: _Z18RandomUnusedAvatarR9GameSetup
// 地址: 0x9b76b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = GameSpecific_GetAvatarRange(1)
int32_t x20 = x0.d
uint32_t x22 = (x0 u>> 0x20).d
int32_t var_930[0x23c]
int32_t x21

if (x20 s>= x22)
    x21 = 0
else
    x21 = 0
    
    do
        if ((IsAvatarUsed(arg1, zx.q(x20)) & 1) == 0)
            var_930[sx.q(x21)] = x20
            x21 += 1
        
        x20 += 1
    while (x22 != x20)

return zx.q(var_930[sx.q(RandomInt(gRNG, x21))])
