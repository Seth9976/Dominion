// 函数: _Z24Patient_OnStartOfCleanupv
// 地址: 0xaa4520
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhere(0x3ea)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Patient_OnStartOfCleanup()::$_81, std::__ndk1::allocator<Patient_OnStartOfCleanup()::$_81>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Patient_OnStartOfCleanup()::$_81, std::__ndk1::allocator<Patient_OnStartOfCleanup()::$_81>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Patient_OnStartOfCleanup()::$_81, std::__ndk1::allocator<Patient_OnStartOfCleanup()::$_81>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_19a0
__builtin_memset(&var_19a0, 0, 0x30)
var_19a0.d = 0x123
int128_t var_1990
var_1990:0xc.d = 0
int64_t var_1970 = 0
int128_t var_1980
var_1980:8.q = 0
int32_t var_28
ChooseCardsRange(&var_ca8, 0, var_28, 0x19, &var_19a0, 0x1a, 0, 0)
void var_2628
void var_1968
int64_t result = memcpy(&var_1968, &var_2628, 0xc84)
int32_t var_ce8

if (var_ce8 == 0)
    return result

MoveCardsTo(&var_1968, 0x3ea, 0x46b, 0, 0, 0, 0xb)
FromList(&var_1968)
return StartOfNextTurn(sub_aae910, nullptr, &var_2628, 0x42, 2)
