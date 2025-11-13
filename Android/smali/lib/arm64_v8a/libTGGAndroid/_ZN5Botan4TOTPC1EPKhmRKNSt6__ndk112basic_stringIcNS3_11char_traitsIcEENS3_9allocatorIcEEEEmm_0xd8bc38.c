// 函数: _ZN5Botan4TOTPC1EPKhmRKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEmm
// 地址: 0xd8bc38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::HOTP::HOTP(arg1, arg2, arg3, arg4)
int128_t v0 = data_71bd20
int64_t entry_x5
*(arg1 + 0x10) = entry_x5
int64_t var_30 = 0
int128_t var_40 = v0
int64_t result = Botan::calendar_point::to_std_timepoint()
int64_t x8 = *(arg1 + 0x10)
*(arg1 + 0x18) = result

if (x8 - 1 u< 0x12b)
    return result

int64_t* x0 = Botan::throw_invalid_argument("Invalid TOTP time step", "TOTP", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
int64_t* x0_1 = *arg1
*arg1 = 0

if (x0_1 != 0)
    (*(*x0_1 + 0x10))()

sub_1101e04(x0)
noreturn
