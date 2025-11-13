// 函数: _Z12PileHasTrait14DomGameVersionPK13LandscapeData
// 地址: 0xa32378
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2

if (x8 == 0)
    return 0

int32_t x19_1 = arg1

if ((zx.d(*(DomDefGet(zx.q(x8), zx.q(x19_1)) + 0xcd)) & 1) == 0)
    uint64_t result = zx.q(*(arg2 + 0x3c))
    
    if (result.d == 0)
        return result
    
    if ((zx.d(*(DomDefGet(result, zx.q(x19_1)) + 0xcd)) & 1) == 0)
        result = zx.q(*(arg2 + 0x78))
        
        if (result.d == 0)
            return result
        
        if ((zx.d(*(DomDefGet(result, zx.q(x19_1)) + 0xcd)) & 1) == 0)
            result = zx.q(*(arg2 + 0xb4))
            
            if (result.d != 0)
                return zx.q(*(DomDefGet(result, zx.q(x19_1)) + 0xcd)) & 1
            
            return result

return 1
