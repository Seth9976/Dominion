// 函数: __cxa_begin_catch
// 地址: 0x10e9900
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *arg1
void** x0 = __cxa_get_globals()

if (0x434c4e47432b2b != x20 u>> 8)
    if (*x0 != 0)
        std::terminate()
        noreturn
    
    *x0 = arg1 - 0x60
    return &arg1[4]

int32_t x9 = arg1[-5].d
int32_t x9_1

if (x9 s< 0)
    x9_1 = neg.d(x9)
else
    x9_1 = x9

arg1[-5].d = x9_1 + 1
void* x9_3 = *x0

if (x9_3 != arg1 - 0x60)
    arg1[-6] = x9_3
    *x0 = arg1 - 0x60

x0[1].d -= 1
return arg1[-1]
