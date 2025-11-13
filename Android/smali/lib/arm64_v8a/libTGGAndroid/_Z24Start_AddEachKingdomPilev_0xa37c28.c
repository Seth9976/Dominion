// 函数: _Z24Start_AddEachKingdomPilev
// 地址: 0xa37c28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsSupplyTops(0, 0xffffffff)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Start_AddEachKingdomPile()::$_42, std::__ndk1::allocator<Start_AddEachKingdomPile()::$_42>, bool (CardID)>::VTable
    * const var_cf0 = &_vtable_for_std::__ndk1::__function::__func<Start_AddEachKingdomPile()::$_42, std::__ndk1::allocator<Start_AddEachKingdomPile()::$_42>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Start_AddEachKingdomPile()::$_42, std::__ndk1::allocator<Start_AddEachKingdomPile()::$_42>, bool (CardID)>::VTable
    * const* var_cd0 = &var_cf0
CardIDs var_cb8
FilterCards(&var_cf0, &var_cb8, nullptr)

if (&var_cf0 == var_cd0)
    (*var_cd0)->vFunc_4()
else if (var_cd0 != 0)
    (*var_cd0)->j_operator delete()

void* result = DomGetContext()
int32_t var_38
int64_t x8_4 = sx.q(var_38)

if (x8_4.d != 0)
    void* result_1 = result
    CardIDs* x20_1 = &var_cb8
    int64_t i_1 = x8_4 << 2
    int64_t i
    
    do
        uint64_t x0_2 = zx.q(*x20_1)
        x20_1 += 4
        int32_t x0_3 = CardWhat(x0_2)
        result = CardCreate(*(result_1 + 8), zx.q(x0_3), 0x3eb, zx.q(*(result_1 + 0x18)), 0)
        i = i_1
        i_1 -= 4
    while (i != 4)

return result
