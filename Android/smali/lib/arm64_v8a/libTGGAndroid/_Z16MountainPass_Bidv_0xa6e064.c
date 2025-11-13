// 函数: _Z16MountainPass_Bidv
// 地址: 0xa6e064
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomLogCardNoPlayer(0x1b, zx.q(ThisCard(false, nullptr)))
int32_t var_18 = 0xffffffff
int32_t var_14 = 0
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<MountainPass_Bid()::$_25, std::__ndk1::allocator<MountainPass_Bid()::$_25>, void ()>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<MountainPass_Bid()::$_25, std::__ndk1::allocator<MountainPass_Bid()::$_25>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
int32_t* var_48 = &var_14
int32_t* var_40 = &var_18
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<MountainPass_Bid()::$_25, std::__ndk1::allocator<MountainPass_Bid()::$_25>, void ()>::VTable
    * const* var_30 = &var_50
AllPlayers(&var_50, 1)

if (&var_50 == var_30)
    (*var_30)->vFunc_4()
else if (var_30 != 0)
    (*var_30)->j_operator delete()

int64_t var_88 = 0
int32_t var_90 = 0
int32_t var_98 = 0
int32_t var_a0 = 0
NotifyEffect(*(DomGetContext() + 8), 0x2c, 0xffffffff, 0, 0, 0, 0, 0)

if (var_18 != 0xffffffff)
    bool cond:0_1 = (HasOngoing(0x2d, 0xc3d, 0) & 1) != 0
    uint64_t x0_6 = zx.q(var_18)
    int64_t x8_5
    
    x8_5 = cond:0_1 ? 0x1000000000 : 0x800000000
    
    int32_t var_70_1 = var_14
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<MountainPass_Bid()::$_26, std::__ndk1::allocator<MountainPass_Bid()::$_26>, void ()>::VTable
        * const var_80 = &_vtable_for_std::__ndk1::__function::__func<MountainPass_Bid()::$_26, std::__ndk1::allocator<MountainPass_Bid()::$_26>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    int64_t var_78_1 = x8_5 | x0_6
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<MountainPass_Bid()::$_26, std::__ndk1::allocator<MountainPass_Bid()::$_26>, void ()>::VTable
        * const* var_60_1 = &var_80
    OtherPlayer(x0_6, &var_80)
    
    if (&var_80 == var_60_1)
        (*var_60_1)->vFunc_4()
    else if (var_60_1 != 0)
        (*var_60_1)->j_operator delete()

return StoreHighestBid(0)
