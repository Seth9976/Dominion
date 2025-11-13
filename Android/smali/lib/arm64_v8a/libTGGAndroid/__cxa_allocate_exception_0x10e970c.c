// 函数: __cxa_allocate_exception
// 地址: 0x10e970c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t x19 = (arg1 + 0x8f) & 0xfffffffffffffff0
void* x0_1 = sub_10ff3f4(x19)

if (x0_1 == 0)
    std::terminate()
    noreturn

memset(x0_1, 0, x19)
return x0_1 + 0x80
