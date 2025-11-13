// 函数: sub_a58600
// 地址: 0xa58600
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(gCampaignSetup + 0x19a0)
void* x10 = x9 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb)
int32_t x8_3

if (*(x10 + 0x34) == 0)
    x8_3 = 1
else
    x8_3 = *(x10 + 0x70) == 0 ? 1 : 0

uint64_t x11 = zx.q(*(gCampaignSetup + 0x19b4))
void* x9_3

if (x11.d == 2)
    x9_3 = x10 + 0x540
else
    x9_3 = x9 + (x11 << 3) + 0x5010

uint64_t x8_4 = zx.q(x8_3) | zx.q(*(x9_3 + 4)) << 0x20
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<RollCategoryCard(DomCardCategory, bool)::$_113, std::__ndk1::allocator<RollCategoryCard(DomCardCategory, bool)::$_113>, bool (DomCardEnum)>::VTable
    * const var_50
int64_t* var_30 = &var_50
var_50 = &_vtable_for_std::__ndk1::__function::__func<RollCategoryCard(DomCardCategory, bool)::$_113, std::__ndk1::allocator<RollCategoryCard(DomCardCategory, bool)::$_113>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
uint64_t var_48 = x8_4
int32_t x0_1
char* x1_1
x0_1, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_50, 0)

if (&var_50 == var_30)
    x1_1 = (*(*var_30 + 0x20))(var_30)
else if (var_30 != 0)
    x1_1 = (*(*var_30 + 0x28))(var_30)

int64_t x3

if (*(gCampaignSetup + 0x19b4) == 0)
    x3 = 3
else
    x3 = 5

return CampaignKingdomAdd(zx.q(x0_1), x1_1, 2, x3)
