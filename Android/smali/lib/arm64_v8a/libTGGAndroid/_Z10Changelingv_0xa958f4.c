// 函数: _Z10Changelingv
// 地址: 0xa958f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

TrashThis(0x3e9)
CardsSupplyTops(4, 0xffffffff)
void* __offset(
    vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
    0x10) var_ce0 = _vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>
    + 0x10
int64_t (* const var_cd8)(CardID) = CardWhatInPlay
void* __offset(
    vtable_for_std::__ndk1::__function::__func<bool (*)(CardID), std::__ndk1::allocator<bool (*)(CardID)>, bool (CardID)>, 
    0x10)* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*(*var_cc0 + 0x20))()
else if (var_cc0 != 0)
    (*(*var_cc0 + 0x28))()

CardsWhere(0x3e9)
int128_t var_2620
DomCardEnum var_25e8
void var_1968
int32_t var_28

if (ToUniqueWhats(&var_1968, &var_25e8) s<= var_28)
    __builtin_memset(&var_2620, 0, 0x30)
    var_2620.d = 0xa2
    int128_t var_2610_1
    var_2610_1:0xc.d = 0
    int128_t var_2600_1
    var_2600_1:8.q = 0
    int64_t var_25f0_1 = 0
    return GainOneOf(&var_ca8, &var_2620, 0x476, 0)

__builtin_memset(&var_2620, 0, 0x30)
var_2620.d = 0xa2
int128_t var_2610
var_2610:0xc.d = 0
int128_t var_2600
var_2600:8.q = 0
int64_t var_25f0 = 0
return MayGainOneOf(&var_ca8, &var_2620, 0x476)
