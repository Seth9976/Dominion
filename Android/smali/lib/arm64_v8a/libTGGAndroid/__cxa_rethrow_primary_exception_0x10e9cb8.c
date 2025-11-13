// 函数: __cxa_rethrow_primary_exception
// 地址: 0x10e9cb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

void* x0 = sub_10ff3f4(0x80)

if (x0 == 0)
    std::terminate()
    noreturn

__builtin_memset(x0, 0, 0x80)
*(x0 + 8) = arg1
int32_t i

do
    i = __stlxr(__ldaxr(arg1 - 0x78) + 1, arg1 - 0x78)
while (i != 0)
*(x0 + 0x10) = arg1[-0xe]
*(x0 + 0x20) = std::get_unexpected()
int64_t x0_2 = std::get_terminate()
*(x0 + 0x60) = 0x434c4e47432b2b01
*(x0 + 0x28) = x0_2
void* x0_3 = __cxa_get_globals()
*(x0_3 + 8) += 1
*(x0 + 0x68) = sub_10e9ddc
sub_1101c08(x0 + 0x60)
int64_t x20_4 = *(x0 + 0x60)
arg1 = __cxa_get_globals()

if ((x20_4 & 0xffffffffffffff00) != 0x434c4e47432b2b00)
    if (*arg1 != 0)
        std::terminate()
        noreturn
    
    *arg1 = x0
    return 

int32_t x8_6 = *(x0 + 0x38)
int32_t x8_7

if (x8_6 s< 0)
    x8_7 = neg.d(x8_6)
else
    x8_7 = x8_6

*(x0 + 0x38) = x8_7 + 1
void* x8_9 = *arg1

if (x8_9 != x0)
    *(x0 + 0x30) = x8_9
    *arg1 = x0

arg1[1].d -= 1
