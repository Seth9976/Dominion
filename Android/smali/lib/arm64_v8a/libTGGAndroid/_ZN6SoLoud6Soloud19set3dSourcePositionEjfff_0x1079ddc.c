// 函数: _ZN6SoLoud6Soloud19set3dSourcePositionEjfff
// 地址: 0x1079ddc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = arg1
int32_t entry_x1
int32_t var_28 = entry_x1
int32_t var_24 = 0
int32_t* result = SoLoud::Soloud::voiceGroupHandleToArray_internal(arg1)
int32_t* result_1

result_1 = result == 0 ? &var_28 : result

uint64_t x10 = zx.q(*result_1)

if (x10.d != 0)
    void* x8 = &result_1[1]
    
    do
        int64_t x11_1 = x10 & 0xfff
        
        if (x11_1.d != 0 && *(x19 + (x11_1 - 1) * 0x78 + 0x2eb0) == x10.d)
            void* x10_1 = x19 + (x11_1 - 1) * 0x78
            *(x10_1 + 0x2e40) = arg2
            *(x10_1 + 0x2e44) = arg3
            *(x10_1 + 0x2e48) = arg4
        
        x10 = zx.q(*x8)
        x8 += 4
    while (x10.d != 0)

return result
