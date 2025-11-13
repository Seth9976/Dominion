// 函数: _ZNK6SoLoud6Soloud27getVoiceFromHandle_internalEj
// 地址: 0x10779fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1
uint64_t x19 = zx.q(entry_x1)
int32_t* x0 = SoLoud::Soloud::voiceGroupHandleToArray_internal(arg1)

if (x0 != 0)
    x19 = zx.q(*x0)

if (x19.d != 0)
    int64_t result = (x19 & 0xfff) - 1
    void* x8_3 = *(arg1 + (result << 3) + 0x98)
    
    if (x8_3 != 0 && (*(x8_3 + 8) & 0xfffff) == x19.d u>> 0xc)
        return result

return 0xffffffff
