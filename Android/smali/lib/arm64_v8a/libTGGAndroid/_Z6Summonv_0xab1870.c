// 函数: _Z6Summonv
// 地址: 0xab1870
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsSupplyTops(4, 0xffffffff)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Summon()::$_14, std::__ndk1::allocator<Summon()::$_14>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Summon()::$_14, std::__ndk1::allocator<Summon()::$_14>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Summon()::$_14, std::__ndk1::allocator<Summon()::$_14>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_1970
__builtin_memset(&var_1970, 0, 0x30)
var_1970.d = 0x104
int128_t var_1960
var_1960:0xc.d = 0
int128_t var_1950
var_1950:8.q = 0
int64_t var_1940 = 0
int64_t result = GainOneOf(&var_ca8, &var_1970, 0x476, 0)

if (result.d != 0)
    int32_t x19_1 = result.d
    int64_t x0_3 = CardGainedToWhereEx(result)
    result = CardWhereEx(zx.q(x19_1))
    
    if (x0_3.d == result.d && (x0_3 u>> 0x20).d == (result u>> 0x20).d)
        result = MoveCardTo(zx.q(x19_1), zx.q(CardGainedToWhere(zx.q(x19_1))), 0x45e, 0, 0, 0xb, 0)
        
        if ((result.d & 1) != 0)
            FromSingle(zx.q(x19_1))
            return StartOfNextTurn(sub_ab1dc0, nullptr, &var_1970, 1, 2)

return result
