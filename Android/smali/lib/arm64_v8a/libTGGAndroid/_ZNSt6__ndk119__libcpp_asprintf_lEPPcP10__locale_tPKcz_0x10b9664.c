// 函数: _ZNSt6__ndk119__libcpp_asprintf_lEPPcP10__locale_tPKcz
// 地址: 0x10b9664
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x3
int64_t var_b8 = x3
int64_t x4
int64_t var_b0 = x4
int64_t x5
int64_t var_a8 = x5
int64_t x6
int64_t var_a0 = x6
int64_t x7
int64_t var_98 = x7
int128_t entry_v0
int128_t var_140 = entry_v0
int128_t entry_v1
int128_t var_130 = entry_v1
int128_t entry_v2
int128_t var_120 = entry_v2
int128_t entry_v3
int128_t var_110 = entry_v3
int128_t entry_v4
int128_t var_100 = entry_v4
int128_t entry_v5
int128_t var_f0 = entry_v5
int128_t entry_v6
int128_t var_e0 = entry_v6
int128_t entry_v7
int128_t var_d0 = entry_v7
uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
void var_c0
void* var_58 = &var_c0
int64_t var_50 = -0x7f00000028
void arg_0
void* var_68 = &arg_0
int128_t var_90
int128_t* var_60 = &var_90
locale_t newloc
int128_t v0
int128_t v1
newloc, v0, v1 = uselocale(arg2)
var_90 = var_68.o
int128_t var_80 = var_58.o
int32_t x0_2 = vasprintf(arg1, arg3)

if (newloc != 0)
    uselocale(newloc)

if (*(x22 + 0x28) == x8)
    return zx.q(x0_2)

__stack_chk_fail()
noreturn
