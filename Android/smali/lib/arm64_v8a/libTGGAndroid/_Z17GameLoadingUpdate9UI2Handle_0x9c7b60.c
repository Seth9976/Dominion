// 函数: _Z17GameLoadingUpdate9UI2Handle
// 地址: 0x9c7b60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
UI2StateDecl* x1

if ((ExtraTallAspectRatio() & 1) != 0)
    x1 = UIS_EXTRA_TALL_ASPECT_RATIO
else
    x1 = UIS_EXTRA_WIDE_ASPECT_RATIO

UI2SetState(zx.q(x19), x1, 0xffffffff, 0)
return UI2SetStateFractional(zx.q(x19), &data_11cff98, 0xffffffff, fconvert.s(1f)) __tailcall
