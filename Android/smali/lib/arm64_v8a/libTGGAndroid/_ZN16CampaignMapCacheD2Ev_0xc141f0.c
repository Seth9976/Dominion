// 函数: _ZN16CampaignMapCacheD2Ev
// 地址: 0xc141f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* result = *(entry_x0 + 0x28)

if (result != 0)
    void* i
    
    do
        i = *(result + 8)
        XPooledFree(result, 0x18)
        result = i
    while (i != 0)

__builtin_memset(entry_x0 + 0x28, 0, 0x14)
return result
