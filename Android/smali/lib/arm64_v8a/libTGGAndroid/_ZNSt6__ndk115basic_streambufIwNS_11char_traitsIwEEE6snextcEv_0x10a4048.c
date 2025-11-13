// 函数: _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE6snextcEv
// 地址: 0x10a4048
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int32_t* x8 = entry_x0[3]
uint64_t result

if (x8 == entry_x0[4])
    result = (*(*entry_x0 + 0x50))(entry_x0)
    
    if (result.d == 0xffffffff)
        return result
else
    entry_x0[3] = &x8[1]
    result = zx.q(*x8)
    
    if (result.d == 0xffffffff)
        return result
int32_t* x8_3 = entry_x0[3]

if (x8_3 == entry_x0[4])
    jump(*(*entry_x0 + 0x48))

return zx.q(*x8_3)
