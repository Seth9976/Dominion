// 函数: _ZN5Botan5SHA_36finishEmRNSt6__ndk16vectorImNS_16secure_allocatorImEEEEmhh
// 地址: 0xd94ba0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg1 & 0x3f) != 0)
    Botan::RandomNumberGenerator* x0_2
    Botan::Private_Key* x1_1
    Botan::Public_Key* x2_1
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x3_1
    x0_2, x1_1, x2_1, x3_1 = Botan::throw_invalid_argument("SHA-3 bitrate must be multiple of 64", 
        "finish", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    return Botan::KeyPair::encryption_consistency_check(x0_2, x1_1, x2_1, x3_1) __tailcall

int64_t* x8 = *arg2
int64_t x10 = arg3 & 0xfffffffffffffff8
*(x8 + x10) ^= zx.q(arg4) << (zx.q(arg3.d << 3) & 0x38)
void* x8_2 = (arg1 u>> 3 & 0x1ffffffffffffff8) + *arg2
*(x8_2 - 8) ^= arg5 << 0x38
return Botan::SHA_3::permute(*arg2) __tailcall
