// 函数: _Z22UI2TableGetRangeTarget9UI2HandleRK5Vec2I
// 地址: 0x103188c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = zx.q(arg1)
int64_t x21 = *gUI2
UI2* x20 = x21 + mulu.dp.d(x22.d, 0x19a8)
RectF var_50
RectF var_40
UI2TableTransform(x20, 0, &var_40, &var_50, false)
int64_t result = UI2TableTransform(x20, 1, &var_40, &var_50, false)
int32_t x8 = *(x20 + 0x1528)

if (x8 == 2)
    *(x21 + x22 * 0x19a8 + 0x13ac)
    *arg2
else
    if (x8 != 1)
        pthread_kill(pthread_self(), 6)
        return UI2TableGetTop(XNoReturn()) __tailcall
    
    *(x21 + x22 * 0x19a8 + 0x13a8)
    *arg2

return result
