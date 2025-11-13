// 函数: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5uflowEv
// 地址: 0x10a3df8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
uint64_t result = (*(*entry_x0 + 0x48))()

if (result.d == 0xffffffff)
    return result

char* x8_2 = entry_x0[3]
entry_x0[3] = &x8_2[1]
return zx.q(*x8_2)
