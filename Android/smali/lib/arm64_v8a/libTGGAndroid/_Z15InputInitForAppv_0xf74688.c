// 函数: _Z15InputInitForAppv
// 地址: 0xf74688
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = XPooledCalloc(0x48)
__builtin_memset(x0, 0, 0x14)
__builtin_memset(x0 + 0x20, 0, 0x14)
*gInputGameGlobals = x0
int64_t result = mutex_create()
*(*gInputGameGlobals + 0x18) = result
return result
