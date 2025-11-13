// 函数: _Z17backtraceToLogcatv
// 地址: 0x1061e84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_150[0x1e]
struct Dl_info info
info.dli_fname = &var_150
info.dli_fbase = &info
int64_t result = sub_110626c(sub_1061cd4, &info)
char const* dli_fname = info.dli_fname
int64_t x8 = dli_fname - &var_150

if (dli_fname != &var_150)
    int64_t x10_1
    
    x10_1 = x8 s>= 0 ? x8 : -1
    
    int64_t x9 = &var_150 - dli_fname
    int64_t x10_2
    
    x10_2 = x10_1 s< 1 ? x10_1 : 1
    
    int64_t x8_1
    
    x8_1 = x9 s> x8 ? x9 : x8
    
    int64_t i = 0
    
    do
        dladdr(var_150[i], &info)
        result = XLog("%d: %0X %s")
        i += 1
    while (x10_2 * (x8_1 u>> 3) != i)

return result
