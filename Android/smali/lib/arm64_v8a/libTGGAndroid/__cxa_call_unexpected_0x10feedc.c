// 函数: __cxa_call_unexpected
// 地址: 0x10feedc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    sub_10feeac(arg1.d, nullptr)
    noreturn

int64_t* x20 = arg1
__cxa_begin_catch(arg1)
int64_t x0_2

if ((sub_10e96e8(x20) & 1) == 0)
    std::get_terminate()
    x0_2 = std::get_unexpected()
else
    x0_2 = x20[-8]
    x20[-7]
    x20[-3]
    *(x20 - 0x24)

sub_10ea2f0(x0_2)
noreturn
