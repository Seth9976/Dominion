// 函数: _Z17GainNonsupplyCard11DomCardEnumi16TriggerEventFlag7LogFlag
// 地址: 0xa3257c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_1 = arg2
int32_t x22 = arg1
int64_t result = BoardPileWhere(*(DomGetContext() + 8), zx.q(x22))
int32_t x23

if (result.d != 0)
    x23 = result.d
else
    x23 = 1

if (i_1 s>= 1)
    int32_t i
    
    do
        result = GainCard(CreateCard(zx.q(x22), zx.q(x23)), 0x476, zx.q(arg4), zx.q(arg3), 4)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
