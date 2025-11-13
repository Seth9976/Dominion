// 函数: _ZNSt6__ndk115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi
// 地址: 0xef06ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 0x58)
int64_t x10 = *(arg1 + 0x30)
void* x8 = arg1
int32_t entry_result
uint64_t result = zx.q(entry_result)

if (x9 u< x10)
    x9 = x10
    *(x8 + 0x58) = x10

void* x10_1 = *(x8 + 0x18)

if (*(x8 + 0x10) u< x10_1)
    if (result.d == 0xffffffff)
        *(x8 + 0x18) = x10_1 - 1
        *(x8 + 0x20) = x9
        return 0
    
    if ((zx.d(*(x8 + 0x60)) & 0x10) != 0 || zx.d(*(x10_1 - 1)) == zx.d((result.d).b))
        *(x8 + 0x18) = x10_1 - 1
        *(x8 + 0x20) = x9
        *(x10_1 - 1) = (result.d).b
        return result

return 0xffffffff
