// 函数: _Z16Theme_ExpansionCv
// 地址: 0xa4314c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = sx.q(*(gCampaignSetup + 0x19a8))
int64_t x8 = *(gCampaignSetup + 0x19a0)
uint64_t x9 = zx.q(*(gCampaignSetup + 0x19b4))
uint64_t x8_1 = zx.q(x19.d - 2)
void* x21

if (x9.d == 2)
    x21 = x8 + (x19 << 0xb) + 0x540
else
    x21 = x8 + (x9 << 3) + 0x5010

if (x8_1.d u<= 7)
    switch (x8_1)
        case 0, 6
            CampaignAddExpStamp(zx.q(*(x21 + 4)))
        case 2, 7
            CampaignAddTwist(zx.q(*(sx.q(*(x21 + 4)) * 0xa8 + 0x1135084)))
            
            if (x19.d == 8)
                CampaignAddExpStamp(zx.q(*(x21 + 4)))

int64_t x8_5 = *(gCampaignSetup + 0x19a0)
uint64_t x10_2 = zx.q(*(gCampaignSetup + 0x19b4))
void* x21_1

if (x10_2.d == 2)
    x21_1 = x8_5 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
else
    x21_1 = x8_5 + (x10_2 << 3) + 0x5010

int32_t var_58 = *(x21_1 + 4)
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddExpCard(DomExpansion)::$_107, std::__ndk1::allocator<CampaignAddExpCard(DomExpansion)::$_107>, bool (DomCardEnum)>::VTable
    * const var_60 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddExpCard(DomExpansion)::$_107, std::__ndk1::allocator<CampaignAddExpCard(DomExpansion)::$_107>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddExpCard(DomExpansion)::$_107, std::__ndk1::allocator<CampaignAddExpCard(DomExpansion)::$_107>, bool (DomCardEnum)>::VTable
    * const* var_40 = &var_60
int32_t x0_4
char* x1_1
x0_4, x1_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_60, 0)

if (&var_60 == var_40)
    x1_1 = (*var_40)->vFunc_4(var_40)
else if (var_40 != 0)
    x1_1 = (*var_40)->j_operator delete(var_40)

CampaignKingdomAdd(zx.q(x0_4), x1_1, 0, 1)
int32_t var_74 = x0_4
int32_t x8_10 = *(x21_1 + 4)
var_60 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddExpCard(DomExpansion)::$_107, std::__ndk1::allocator<CampaignAddExpCard(DomExpansion)::$_107>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddExpCard(DomExpansion)::$_107, std::__ndk1::allocator<CampaignAddExpCard(DomExpansion)::$_107>, bool (DomCardEnum)>::VTable
    * const* var_40_1 = &var_60
int32_t var_58_1 = x8_10
int32_t x0_8
char* x1_3
x0_8, x1_3 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_60, 0)

if (&var_60 == var_40_1)
    x1_3 = (*var_40_1)->vFunc_4(var_40_1)
else if (var_40_1 != 0)
    x1_3 = (*var_40_1)->j_operator delete(var_40_1)

CampaignKingdomAdd(zx.q(x0_8), x1_3, 0, 1)
int32_t var_70 = x0_8
int32_t x8_12 = *(x21_1 + 4)
var_60 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddExpCard(DomExpansion)::$_107, std::__ndk1::allocator<CampaignAddExpCard(DomExpansion)::$_107>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddExpCard(DomExpansion)::$_107, std::__ndk1::allocator<CampaignAddExpCard(DomExpansion)::$_107>, bool (DomCardEnum)>::VTable
    * const* var_40_2 = &var_60
int32_t var_58_2 = x8_12
int32_t x0_12
char* x1_5
x0_12, x1_5 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_60, 0)

if (&var_60 == var_40_2)
    x1_5 = (*var_40_2)->vFunc_4(var_40_2)
else if (var_40_2 != 0)
    x1_5 = (*var_40_2)->j_operator delete(var_40_2)

CampaignKingdomAdd(zx.q(x0_12), x1_5, 0, 1)
int32_t var_6c = x0_12
int32_t x8_14 = *(x21_1 + 4)
var_60 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddExpCard(DomExpansion)::$_107, std::__ndk1::allocator<CampaignAddExpCard(DomExpansion)::$_107>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddExpCard(DomExpansion)::$_107, std::__ndk1::allocator<CampaignAddExpCard(DomExpansion)::$_107>, bool (DomCardEnum)>::VTable
    * const* var_40_3 = &var_60
int32_t var_58_3 = x8_14
int32_t x0_16
char* x1_7
x0_16, x1_7 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_60, 0)

if (&var_60 == var_40_3)
    x1_7 = (*var_40_3)->vFunc_4(var_40_3)
else if (var_40_3 != 0)
    x1_7 = (*var_40_3)->j_operator delete(var_40_3)

CampaignKingdomAdd(zx.q(x0_16), x1_7, 0, 1)
int32_t var_68 = x0_16
int32_t x8_16 = *(x21_1 + 4)
var_60 = &_vtable_for_std::__ndk1::__function::__func<CampaignAddExpCard(DomExpansion)::$_107, std::__ndk1::allocator<CampaignAddExpCard(DomExpansion)::$_107>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<CampaignAddExpCard(DomExpansion)::$_107, std::__ndk1::allocator<CampaignAddExpCard(DomExpansion)::$_107>, bool (DomCardEnum)>::VTable
    * const* var_40_4 = &var_60
int32_t var_58_4 = x8_16
int32_t x0_20
char* x1_9
x0_20, x1_9 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_60, 0)

if (&var_60 == var_40_4)
    x1_9 = (*var_40_4)->vFunc_4(var_40_4)
else if (var_40_4 != 0)
    x1_9 = (*var_40_4)->j_operator delete(var_40_4)

CampaignKingdomAdd(zx.q(x0_20), x1_9, 0, 1)
int32_t var_64 = x0_20
int64_t x0_26
char* x1_10
x0_26, x1_10 = CampaignDrawRandomCombo(zx.q((&var_74)[sx.q(RandomInt(gCampaignSetup, 5))]))
return CampaignKingdomAdd(x0_26, x1_10, 2, 0)
