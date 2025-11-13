// 函数: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6snextcEv
// 地址: 0x10a3910
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x9 = entry_x0[3]
int64_t x8 = entry_x0[4]
char* x9_1

if (x9 == x8)
    uint64_t result = (*(*entry_x0 + 0x50))(entry_x0)
    
    if (result.d == 0xffffffff)
        return result
    
    x9_1 = entry_x0[3]
    
    if (x9_1 != entry_x0[4])
        return zx.q(*x9_1)
else
    x9_1 = x9 + 1
    entry_x0[3] = x9_1
    
    if (x9_1 != x8)
        return zx.q(*x9_1)
jump(*(*entry_x0 + 0x48))
