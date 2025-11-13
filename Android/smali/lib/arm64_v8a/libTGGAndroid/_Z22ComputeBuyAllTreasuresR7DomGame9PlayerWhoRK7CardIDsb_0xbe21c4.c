// 函数: _Z22ComputeBuyAllTreasuresR7DomGame9PlayerWhoRK7CardIDsb
// 地址: 0xbe21c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardIDs* entry_x8
memcpy(entry_x8, arg3, 0xc84)

if ((arg4.d & 1) != 0)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<ComputeBuyAllTreasures(DomGame&, PlayerWho, CardIDs const&, bool)::$_4, std::__ndk1::allocator<ComputeBuyAllTreasures(DomGame&, PlayerWho, CardIDs const&, bool)::$_4>, bool (CardID)>::VTable
        * const var_50 = &_vtable_for_std::__ndk1::__function::__func<ComputeBuyAllTreasures(DomGame&, PlayerWho, CardIDs const&, bool)::$_4, std::__ndk1::allocator<ComputeBuyAllTreasures(DomGame&, PlayerWho, CardIDs const&, bool)::$_4>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    DomGame& var_48_1 = arg1
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<ComputeBuyAllTreasures(DomGame&, PlayerWho, CardIDs const&, bool)::$_4, std::__ndk1::allocator<ComputeBuyAllTreasures(DomGame&, PlayerWho, CardIDs const&, bool)::$_4>, bool (CardID)>::VTable
        * const* var_30_1 = &var_50
    FilterCards(&var_50, entry_x8, nullptr)
    
    if (&var_50 == var_30_1)
        (*var_30_1)->vFunc_4()
    else if (var_30_1 != 0)
        (*var_30_1)->j_operator delete()

struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<ComputeBuyAllTreasures(DomGame&, PlayerWho, CardIDs const&, bool)::$_5, std::__ndk1::allocator<ComputeBuyAllTreasures(DomGame&, PlayerWho, CardIDs const&, bool)::$_5>, bool (CardID)>::VTable
    * const var_80 = &_vtable_for_std::__ndk1::__function::__func<ComputeBuyAllTreasures(DomGame&, PlayerWho, CardIDs const&, bool)::$_5, std::__ndk1::allocator<ComputeBuyAllTreasures(DomGame&, PlayerWho, CardIDs const&, bool)::$_5>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
DomGame& var_78 = arg1
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<ComputeBuyAllTreasures(DomGame&, PlayerWho, CardIDs const&, bool)::$_5, std::__ndk1::allocator<ComputeBuyAllTreasures(DomGame&, PlayerWho, CardIDs const&, bool)::$_5>, bool (CardID)>::VTable
    * const* result = &var_80
FilterCards(&var_80, entry_x8, nullptr)
int64_t (* const x8_4)(void* arg1)

if (&var_80 == result)
    x8_4 = (*result)->vFunc_4
else
    if (result == 0)
        return result
    
    x8_4 = (*result)->j_operator delete

return x8_4()
