// 函数: _Z18Farmland_OnGain_2Ev
// 地址: 0xa7d590
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = TrashOne(9, 0)

if (result.d == 0)
    return result

int32_t var_18 = Cost(result)
int32_t var_28 = operator+(&var_18, 2)
void* x0_3 = DomGetContext()
CardID var_cb0
int32_t var_30_1 = CardsSupplyTops(*(x0_3 + 8), zx.q(*(x0_3 + 0x18)), &var_cb0, 4)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Farmland_OnGain_2E()::$_15, std::__ndk1::allocator<Farmland_OnGain_2E()::$_15>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Farmland_OnGain_2E()::$_15, std::__ndk1::allocator<Farmland_OnGain_2E()::$_15>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_cd8_1 = &var_28
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Farmland_OnGain_2E()::$_15, std::__ndk1::allocator<Farmland_OnGain_2E()::$_15>, bool (CardID)>::VTable
    * const* var_cc0_1 = &var_ce0
FilterCards(&var_ce0, &var_cb0, nullptr)

if (&var_ce0 == var_cc0_1)
    (*var_cc0_1)->vFunc_4()
else if (var_cc0_1 != 0)
    (*var_cc0_1)->j_operator delete()

int32_t x8_5 = var_28
int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0xa
int128_t var_d10
var_d10:0xc.d = x8_5
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0_1 = 0
return GainOneOf(&var_cb0, &var_d20, 0x476, 0)
