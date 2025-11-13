// 函数: _Z12Teacher_Callv
// 地址: 0xa0c0e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CallThis()
int64_t var_c90 = 0x63
int64_t var_c50 = 0x64
int64_t var_c10 = 0x65
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Teacher_Call()::$_23, std::__ndk1::allocator<Teacher_Call()::$_23>, void ()>::VTable
    * const var_cc0 = &_vtable_for_std::__ndk1::__function::__func<Teacher_Call()::$_23, std::__ndk1::allocator<Teacher_Call()::$_23>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
int64_t var_38
void* var_cb8 = &var_38:4
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Teacher_Call()::$_24, std::__ndk1::allocator<Teacher_Call()::$_24>, void ()>::VTable
    * const var_c80 = &_vtable_for_std::__ndk1::__function::__func<Teacher_Call()::$_24, std::__ndk1::allocator<Teacher_Call()::$_24>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
void* var_c78 = &var_38:4
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Teacher_Call()::$_25, std::__ndk1::allocator<Teacher_Call()::$_25>, void ()>::VTable
    * const var_c40 = &_vtable_for_std::__ndk1::__function::__func<Teacher_Call()::$_25, std::__ndk1::allocator<Teacher_Call()::$_25>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
void* var_c38 = &var_38:4
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Teacher_Call()::$_26, std::__ndk1::allocator<Teacher_Call()::$_26>, void ()>::VTable
    * const var_c00 = &_vtable_for_std::__ndk1::__function::__func<Teacher_Call()::$_26, std::__ndk1::allocator<Teacher_Call()::$_26>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
void* var_bf8 = &var_38:4
var_38 = 0
int64_t* var_cb0 = &var_38
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Teacher_Call()::$_23, std::__ndk1::allocator<Teacher_Call()::$_23>, void ()>::VTable
    * const* var_ca0 = &var_cc0
int64_t* var_c70 = &var_38
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Teacher_Call()::$_24, std::__ndk1::allocator<Teacher_Call()::$_24>, void ()>::VTable
    * const* var_c60 = &var_c80
int64_t* var_c30 = &var_38
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Teacher_Call()::$_25, std::__ndk1::allocator<Teacher_Call()::$_25>, void ()>::VTable
    * const* var_c20 = &var_c40
int64_t* var_bf0 = &var_38
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Teacher_Call()::$_26, std::__ndk1::allocator<Teacher_Call()::$_26>, void ()>::VTable
    * const* var_be0 = &var_c00
int64_t var_bd0 = 0x66
ChooseOne(&var_cc0, 4, DOMCHOICEUI_DEFAULT)

if (&var_c00 == var_be0)
    (*var_be0)->vFunc_4()
else if (var_be0 != 0)
    (*var_be0)->j_operator delete()

if (&var_c40 == var_c20)
    (*var_c20)->vFunc_4()
else if (var_c20 != 0)
    (*var_c20)->j_operator delete()

if (&var_c80 == var_c60)
    (*var_c60)->vFunc_4()
else if (var_c60 != 0)
    (*var_c60)->j_operator delete()

if (&var_cc0 == var_ca0)
    (*var_ca0)->vFunc_4()
else if (var_ca0 != 0)
    (*var_ca0)->j_operator delete()

int64_t result = CardsSupplyTypes(&var_cc0)
uint64_t x19 = zx.q(result.d)

if (result.d s>= 1)
    int32_t i = 0
    
    do
        int32_t x20_1 = *(&var_cc0 + (sx.q(i) << 2))
        result = PileHasPlayerToken(zx.q(x20_1))
        
        if ((result.d & 1) != 0)
        label_a0c280:
            x19 = sx.q(x19.d) - 1
            int64_t i_1 = sx.q(i)
            i -= 1
            *(&var_cc0 + (i_1 << 2)) = *(&var_cc0 + (x19 << 2))
        else
            result = PileTypeIs(zx.q(x20_1), 4)
            
            if ((result.d & 1) == 0)
                goto label_a0c280
        
        i += 1
    while (i s< x19.d)

if (x19.d == 0)
    return result

uint64_t x3_1 = zx.q(var_38.d)
int128_t var_d00
__builtin_memset(&var_d00, 0, 0x30)
var_d00.d = 0x84
int128_t var_cf0
var_cf0:0xc.d = 0
int128_t var_ce0
var_ce0:8.q = 0
int64_t var_cd0_1 = 0
int32_t var_34
return MovePlayerTokenToBoardPile(zx.q(var_34), 
    zx.q(ChooseSupplyPile(&var_cc0, x19.d, &var_d00, x3_1, false)))
