// 函数: _Z32Landmod_Event_Stamp_GotItAlreadyv
// 地址: 0xa317e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
uint64_t x5 = zx.q(*(DomGetContext() + 0x1c))
int64_t var_ce8 = 0
int32_t var_cf0 = 0
int32_t var_cf8 = 0
int32_t var_d00 = 0
NotifyEffect(*(x0 + 8), 0x1b, 0xffffffff, 0x14, 0x24, x5, 0, 0)
int32_t x19_1 = *(DomGetContext() + 0x1c)
int64_t var_cb0

if (CardsLandscapeTops(*(DomGetContext() + 8), &var_cb0) == 0)
    pthread_kill(pthread_self(), 6)
    return StampSetIcon(XNoReturn()) __tailcall

int64_t x21 = 0
int32_t x0_8

do
    x0_8 = CardIs(zx.q(*(&var_cb0 + (x21 << 2))), zx.q(x19_1))
    x21 += 1
while ((x0_8 & 1) == 0)
int32_t x20 = *(&var_cb0 + (zx.q(x21.d - 1) << 2))
void* x0_9 = DomGetContext()
DomGame* x21_1 = *(x0_9 + 8)
var_cb0 = ToCardRef(x21_1, zx.q(x20))
DomPushContext(x21_1, 0xffffffff, &var_cb0)
*(*(x0_9 + 8) + 0x19ec) = 0xffffffff
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Landmod_Event_Stamp_GotItAlready()::$_12, std::__ndk1::allocator<Landmod_Event_Stamp_GotItAlready()::$_12>, void ()>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Landmod_Event_Stamp_GotItAlready()::$_12, std::__ndk1::allocator<Landmod_Event_Stamp_GotItAlready()::$_12>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Landmod_Event_Stamp_GotItAlready()::$_12, std::__ndk1::allocator<Landmod_Event_Stamp_GotItAlready()::$_12>, void ()>::VTable
    * const* var_cc0 = &var_ce0
AllPlayers(&var_ce0, 0)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

*(*(x0_9 + 8) + 0x19ec) = 0
return DomPopContext()
