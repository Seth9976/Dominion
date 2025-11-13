// 函数: _Z12Theme_StampCv
// 地址: 0xa42754
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(gCampaignSetup + 0x19a0)
uint64_t x10 = zx.q(*(gCampaignSetup + 0x19b4))
void* x22

if (x10.d == 2)
    x22 = x8 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
else
    x22 = x8 + (x10 << 3) + 0x5010

int32_t var_24 = *(x22 + 4)
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>::VTable
    * const var_60 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
int64_t var_58 = 1
int32_t* var_50 = &var_24
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>::VTable
    * const* var_40 = &var_60
int32_t x0_1
char* x1_1
x0_1, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_60, 0)

if (&var_60 == var_40)
    x1_1 = (*var_40)->vFunc_4(var_40)
else if (var_40 != 0)
    x1_1 = (*var_40)->j_operator delete(var_40)

if (x0_1 != 0)
    CampaignKingdomAdd(zx.q(x0_1), x1_1, 0, 0)
    CampaignAddExtra(zx.q(var_24), zx.q(x0_1), 0xffffffff, 0, 0)

int32_t x8_5 = *(x22 + 4)
var_60 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
int64_t var_58_1 = 1
int32_t* var_50_1 = &var_24
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>::VTable
    * const* var_40_1 = &var_60
var_24 = x8_5
int32_t x0_6
char* x1_4
x0_6, x1_4 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_60, 0)

if (&var_60 == var_40_1)
    x1_4 = (*var_40_1)->vFunc_4(var_40_1)
else if (var_40_1 != 0)
    x1_4 = (*var_40_1)->j_operator delete(var_40_1)

if (x0_6 != 0)
    CampaignKingdomAdd(zx.q(x0_6), x1_4, 0, 0)
    CampaignAddExtra(zx.q(var_24), zx.q(x0_6), 0xffffffff, 0, 0)

int32_t x8_7 = *(x22 + 4)
var_60 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
int64_t var_58_2 = 1
int32_t* var_50_2 = &var_24
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111, std::__ndk1::allocator<CampaignAddStampedCard(CampaignPiece*, int32_t)::$_111>, bool (DomCardEnum)>::VTable
    * const* var_40_2 = &var_60
var_24 = x8_7
int64_t result
char* x1_7
result, x1_7 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_60, 0)
int32_t x19_2 = result.d

if (&var_60 == var_40_2)
    result, x1_7 = (*var_40_2)->vFunc_4(var_40_2)
else if (var_40_2 != 0)
    result, x1_7 = (*var_40_2)->j_operator delete(var_40_2)

if (x19_2 == 0)
    return result

CampaignKingdomAdd(zx.q(x19_2), x1_7, 0, 0)
return CampaignAddExtra(zx.q(var_24), zx.q(x19_2), 0xffffffff, 0, 0)
