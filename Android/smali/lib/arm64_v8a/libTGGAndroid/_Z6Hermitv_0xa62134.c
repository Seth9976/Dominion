// 函数: _Z6Hermitv
// 地址: 0xa62134
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LookThroughDiscard()
CardsDiscard()
CardsHand()
int32_t var_1940[0x244]
int32_t var_cb8[0xd2]
operator+=(&var_cb8, &var_1940)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Hermit()::$_3, std::__ndk1::allocator<Hermit()::$_3>, bool (CardID)>::VTable
    * const var_1970 = &_vtable_for_std::__ndk1::__function::__func<Hermit()::$_3, std::__ndk1::allocator<Hermit()::$_3>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Hermit()::$_3, std::__ndk1::allocator<Hermit()::$_3>, bool (CardID)>::VTable
    * const* var_1950 = &var_1970
FilterCards(&var_1970, &var_cb8, nullptr)

if (&var_1970 == var_1950)
    (*var_1950)->vFunc_4()
else if (var_1950 != 0)
    (*var_1950)->j_operator delete()

int32_t var_38

if (var_38 s>= 1)
    int64_t i = 0
    
    do
        i += 1
        var_1940[i] = CardWhere(zx.q(var_cb8[i]))
    while (i s< sx.q(var_38))

MayTrashOneOf(&var_cb8, &var_1940, 0x68)
return GainUpTo(3, 0x476, 0)
