// 函数: _Z8HasTrait11DomCardEnum
// 地址: 0xa410dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *(gCampaignSetup + 0x19a0)
int64_t x21 = sx.q(*(gCampaignSetup + 0x19a8))
int32_t x8 = *(x20 + (x21 << 0xb) + 0x34)

if (x8 != 0)
    int32_t x19_1 = arg1
    
    if ((zx.d(*(DomDefGet(zx.q(x8), 0x17) + 0xcd)) & 1) != 0
            && *(x20 + (x21 << 0xb) + 0x34) == x19_1)
        return 1
    
    uint64_t result = zx.q(*(x20 + (x21 << 0xb) + 0x70))
    
    if (result.d == 0)
        return result
    
    if ((zx.d(*(DomDefGet(result, 0x17) + 0xcd)) & 1) != 0 && *(x20 + (x21 << 0xb) + 0x70) == x19_1)
        return 1
    
    result = zx.q(*(x20 + (x21 << 0xb) + 0xac))
    
    if (result.d == 0)
        return result
    
    if ((zx.d(*(DomDefGet(result, 0x17) + 0xcd)) & 1) != 0 && *(x20 + (x21 << 0xb) + 0xac) == x19_1)
        return 1
    
    result = zx.q(*(x20 + (x21 << 0xb) + 0xe8))
    
    if (result.d == 0)
        return result
    
    if ((zx.d(*(DomDefGet(result, 0x17) + 0xcd)) & 1) != 0 && *(x20 + (x21 << 0xb) + 0xe8) == x19_1)
        return 1

return 0
