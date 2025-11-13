// 函数: _Z17KingdomViewScrollR11KingdomViewRK4Vec2b
// 地址: 0xb1dcd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 1) = 1
int64_t v8
v8.d = *(arg2 + 4)
KingdomView& x19 = arg1
float v0

if ((arg3.d & 1) == 0)
    v0, arg1 = expf((fabs(v8.d) + float.s(0xc47a0000)) / float.s(0x447a0000) * float.s(0x40935d8e)
        + float.s(0xc0135d8e))
else
    v8.d = v8.d f* fconvert.s(0.5f)
    v0 = float.s(0x358637bd)

*(x19 + 0xc) = v8.d
*(x19 + 0x14) = v0
