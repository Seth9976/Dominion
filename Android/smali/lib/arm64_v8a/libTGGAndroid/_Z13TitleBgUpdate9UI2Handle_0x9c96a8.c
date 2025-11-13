// 函数: _Z13TitleBgUpdate9UI2Handle
// 地址: 0x9c96a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
UI2StateDecl* x1

if ((ExtraTallAspectRatio() & 1) != 0)
    x1 = UIS_EXTRA_TALL_ASPECT_RATIO
else
    x1 = UIS_EXTRA_WIDE_ASPECT_RATIO

UI2SetState(zx.q(x19), x1, 0xffffffff, 0)
int32_t x8 = *(GetLocalSettings() + 0xc)

if (x8 == 1)
    UI2SetState(zx.q(x19), UIS_GFX_LOW, 0xffffffff, 0)
else if (x8 == 0)
    UI2SetState(zx.q(x19), UIS_GFX_HIGH, 0xffffffff, 0)

return GameSpecific_BgUpdate(zx.q(x19)) __tailcall
