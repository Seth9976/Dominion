// 函数: sub_d8b1a0
// 地址: 0xd8b1a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *arg5

if (x0 != 0)
    int64_t x8_1 = arg2[0xe]
    arg2[0xd] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

int64_t* x0_1 = *arg3
*arg3 = 0

if (x0_1 != 0)
    (*(*x0_1 + 0x10))()

*arg2 = arg4 + 0x10
std::__ndk1::recursive_mutex::~recursive_mutex()
sub_1101e04(arg1)
noreturn
