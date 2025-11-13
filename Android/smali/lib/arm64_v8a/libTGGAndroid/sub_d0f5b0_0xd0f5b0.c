// 函数: sub_d0f5b0
// 地址: 0xd0f5b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = arg2[8]
*arg2 = construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::DH_PublicKey + 0x190
arg2[1] = construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::DH_PublicKey + 0x90

if (x21 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x21[1])
        i = __stlxr(x9_1 - 1, &x21[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x21 + 0x10))(x21)
        std::__ndk1::__shared_weak_count::__release_weak()

void* x0_2 = arg2[2]

if (x0_2 != 0)
    int64_t x8_4 = arg2[4]
    arg2[3] = x0_2
    Botan::deallocate_memory(x0_2, (x8_4 - x0_2) s>> 2, 4)

sub_1101e04(arg1)
noreturn
