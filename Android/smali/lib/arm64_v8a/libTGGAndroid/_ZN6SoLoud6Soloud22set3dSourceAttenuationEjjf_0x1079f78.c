// 函数: _ZN6SoLoud6Soloud22set3dSourceAttenuationEjjf
// 地址: 0x1079f78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = arg1
uint32_t var_28 = arg2
int32_t var_24 = 0
uint32_t* result = SoLoud::Soloud::voiceGroupHandleToArray_internal(arg1)
uint32_t* result_1

result_1 = result == 0 ? &var_28 : result

uint64_t x10 = zx.q(*result_1)

if (x10.d != 0)
    void* x8 = &result_1[1]
    
    do
        int64_t x11_1 = x10 & 0xfff
        
        if (x11_1.d != 0 && *(x20 + (x11_1 - 1) * 0x78 + 0x2eb0) == x10.d)
            void* x10_1 = x20 + (x11_1 - 1) * 0x78
            int32_t entry_x2
            *(x10_1 + 0x2e64) = entry_x2
            *(x10_1 + 0x2e60) = arg3
        
        x10 = zx.q(*x8)
        x8 += 4
    while (x10.d != 0)

return result
