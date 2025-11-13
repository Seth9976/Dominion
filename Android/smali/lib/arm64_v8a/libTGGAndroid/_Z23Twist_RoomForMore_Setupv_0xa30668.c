// 函数: _Z23Twist_RoomForMore_Setupv
// 地址: 0xa30668
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Twist_RoomForMore_Setup()::$_60, std::__ndk1::allocator<Twist_RoomForMore_Setup()::$_60>, bool (DomCardEnum)>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<Twist_RoomForMore_Setup()::$_60, std::__ndk1::allocator<Twist_RoomForMore_Setup()::$_60>, bool (DomCardEnum)>{for `std::__ndk1::__function::__base<bool (DomCardEnum)>'}
struct std::__ndk1::__function::__base<bool (DomCardEnum)>::std::__ndk1::__function::__func<Twist_RoomForMore_Setup()::$_60, std::__ndk1::allocator<Twist_RoomForMore_Setup()::$_60>, bool (DomCardEnum)>::VTable
    * const* var_30 = &var_50
int32_t x0_1 = RandomizerDeck_DrawOneFilter(gCampaignSetup + 0x19b8, &var_50, 0)

if (&var_50 == var_30)
    (*var_30)->vFunc_4(var_30)
else if (var_30 != 0)
    (*var_30)->j_operator delete(var_30)

*(*(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x2cc) = x0_1
return RollKingdom_SetupPile(zx.q(x0_1), 0)
