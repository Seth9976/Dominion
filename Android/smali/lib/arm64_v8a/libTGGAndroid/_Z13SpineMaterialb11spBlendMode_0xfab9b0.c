// 函数: _Z13SpineMaterialb11spBlendMode
// 地址: 0xfab9b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2

if ((zx.d(data_2422548) & 1) == 0 && __cxa_guard_acquire(&data_2422548) != 0)
    data_2422540 = AssetPtrFromPath("sys/SpineTint.material", 5)
    __cxa_guard_release(&data_2422548)

if ((zx.d(data_2422558) & 1) == 0 && __cxa_guard_acquire(&data_2422558) != 0)
    data_2422550 = AssetPtrFromPath("sys/SpineTintAdditive.material", 5)
    __cxa_guard_release(&data_2422558)

if ((zx.d(data_2422568) & 1) == 0 && __cxa_guard_acquire(&data_2422568) != 0)
    data_2422560 = AssetPtrFromPath("sys/SpineTintMultiply.material", 5)
    __cxa_guard_release(&data_2422568)

if ((zx.d(data_2422578) & 1) == 0 && __cxa_guard_acquire(&data_2422578) != 0)
    data_2422570 = AssetPtrFromPath("sys/SpineTintScreen.material", 5)
    __cxa_guard_release(&data_2422578)

if (x19 u< 4)
    return *(&data_11802a0)[sx.q(x19)]

pthread_kill(pthread_self(), 6)
int64_t* x0_10 = XNoReturn()
__cxa_guard_abort(&data_2422578)
sub_1101e04(x0_10)
noreturn
