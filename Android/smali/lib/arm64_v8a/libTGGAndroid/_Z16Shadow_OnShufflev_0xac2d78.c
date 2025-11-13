// 函数: _Z16Shadow_OnShufflev
// 地址: 0xac2d78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhere(0x44d)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Shadow_OnShuffle()::$_10, std::__ndk1::allocator<Shadow_OnShuffle()::$_10>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Shadow_OnShuffle()::$_10, std::__ndk1::allocator<Shadow_OnShuffle()::$_10>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Shadow_OnShuffle()::$_10, std::__ndk1::allocator<Shadow_OnShuffle()::$_10>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

MoveCardsTo(&var_ca8, 0x44d, 0x450, 4, 0, 0, 0xb)
CardsWhere(0x44f)
int32_t var_ce8
uint64_t x8_4 = zx.q(var_ce8)
int128_t var_19a0
int32_t var_1968[0x252]

if (x8_4.d s>= 2)
    int64_t x9_1 = 1
    
    while (x8_4 != x9_1)
        int32_t x11_1 = var_1968[x9_1]
        x9_1 += 1
        
        if (x11_1 != var_1968[0])
            if (x9_1 - 1 u< x8_4)
                __builtin_memset(&var_19a0, 0, 0x30)
                var_19a0.d = 0x125
                int128_t var_1990
                var_1990:0xc.d = 0
                int128_t var_1980
                var_1980:8.q = 0
                int64_t var_1970_1 = 0
                ChooseOrder(&var_1968, &var_19a0, 0xe)
            
            break

int64_t result = CardsWhere(0x450)
uint64_t x8_5 = zx.q(var_ce8)

if (x8_5.d s>= 2)
    int64_t x9_3 = 1
    
    while (x8_5 != x9_3)
        int32_t x11_2 = var_1968[x9_3]
        x9_3 += 1
        
        if (x11_2 != var_1968[0])
            if (x9_3 - 1 u>= x8_5)
                break
            
            __builtin_memset(&var_19a0, 0, 0x30)
            var_19a0.d = 0x126
            int128_t var_1990_1
            var_1990_1:0xc.d = 0
            int128_t var_1980_1
            var_1980_1:8.q = 0
            int64_t var_1970_2 = 0
            return ChooseOrder(&var_1968, &var_19a0, 0x3a)

return result
