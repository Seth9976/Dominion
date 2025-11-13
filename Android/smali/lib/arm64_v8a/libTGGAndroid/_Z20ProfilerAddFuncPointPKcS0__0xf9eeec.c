// 函数: _Z20ProfilerAddFuncPointPKcS0_
// 地址: 0xf9eeec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = *gProfilerGlobals

if (x9 == 0)
    return 0xffffffff

char** x9_2 = x9 + sx.q(*(x9 + 0xbc6608)) * 0x28 + 0xb9b688
*x9_2 = arg1
x9_2[1] = arg2
uint64_t x8 = *gProfilerGlobals
uint64_t result = zx.q(*(x8 + 0xbc6608))
*(x8 + 0xbc6608) = result.d + 1
return result
