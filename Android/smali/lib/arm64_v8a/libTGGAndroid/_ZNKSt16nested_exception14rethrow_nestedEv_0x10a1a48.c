// 函数: _ZNKSt16nested_exception14rethrow_nestedEv
// 地址: 0x10a1a48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *(arg1 + 8)
__cxa_decrement_exception_refcount(0)

if (x20 == 0)
    std::terminate()
    noreturn

int64_t x19_1 = *(arg1 + 8)
int64_t var_28 = x19_1
__cxa_increment_exception_refcount(x19_1)
std::rethrow_exception(&var_28)
noreturn
