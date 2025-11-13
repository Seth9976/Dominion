// 函数: _ZN5Botan6BigInt7mod_mulEhRKS0_RNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xcd9ae0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* const x0_2

if (*(arg1 + 0x20) == 0)
    x0_2 = "*this must be positive"
else
    if ((arg2.d & 0xff) u< 0x10)
        Botan::BigInt::reduce_below(Botan::BigInt::operator*=(arg1.d), arg3)
        return arg1
    
    x0_2 = "y too large"

Botan::BigInt* x0_3
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* x1_2
x0_3, x1_2 = Botan::throw_invalid_argument(x0_2, "mod_mul", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
return Botan::BigInt::reduce_below(x0_3, x1_2) __tailcall
