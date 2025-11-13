// 函数: _Z18RollThemeLandscapev
// 地址: 0xa451a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8_2

if (*(gCampaignSetup + 0x19b4) == 1)
    x8_2 = *(gCampaignSetup + 0x19a0) + 0x5010

int64_t x2

if (*(gCampaignSetup + 0x19b4) != 1 || *x8_2 != 0x5dc)
    x2 = 3
else if ((zx.d(*(DomDefGet(zx.q(x8_2[1]), 0x17) + 0xcd)) & 8) != 0)
    x2 = 1
else if ((zx.d(*(DomDefGet(zx.q(*(*(gCampaignSetup + 0x19a0) + 0x5014)), 0x17) + 0xcc)) & 0x40)
        == 0)
    x2 = 3
else
    x2 = 2

struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollThemeLandscape()::$_134, std::__ndk1::allocator<RollThemeLandscape()::$_134>, bool (DomCardEnum)>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<RollThemeLandscape()::$_134, std::__ndk1::allocator<RollThemeLandscape()::$_134>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollThemeLandscape()::$_134, std::__ndk1::allocator<RollThemeLandscape()::$_134>, bool (DomCardEnum)>::VTable
    * const* var_30 = &var_50
int64_t result = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_50, x2)
int32_t x19 = result.d

if (&var_50 == var_30)
    result = (*var_30)->vFunc_4(var_30)
else if (var_30 != 0)
    result = (*var_30)->j_operator delete(var_30)

int64_t x8_7 = *(gCampaignSetup + 0x19a0)
uint64_t x10 = zx.q(*(gCampaignSetup + 0x19b4))
void* x8_10

if (x10.d == 2)
    x8_10 = x8_7 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
else
    x8_10 = x8_7 + (x10 << 3) + 0x5010

*(x8_10 + 4) = x19
return result
