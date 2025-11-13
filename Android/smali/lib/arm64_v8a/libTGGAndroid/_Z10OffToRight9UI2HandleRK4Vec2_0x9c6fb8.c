// 函数: _Z10OffToRight9UI2HandleRK4Vec2
// 地址: 0x9c6fb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t v0
int32_t v1
float v2
float v3
v0, v1, v2, v3 = UI2GetRect(arg1)
int32_t v4 = *arg2

if (v0 f<= v4)
    v0 = *(arg2 + 4)
    
    if (not(v3 f< v0) && not(v2 + float.s(0x47c35000) f< v4) && not(v1 f> v0))
        return 1

return 0
