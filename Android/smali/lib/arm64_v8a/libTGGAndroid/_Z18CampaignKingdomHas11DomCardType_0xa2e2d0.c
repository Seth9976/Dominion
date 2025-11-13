// 函数: _Z18CampaignKingdomHas11DomCardType
// 地址: 0xa2e2d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *(gCampaignSetup + 0x19a0)
int64_t x21 = sx.q(*(gCampaignSetup + 0x19a8))
int32_t x8_1 = *(x20 + (x21 << 0xb) + 0xc)

if (x8_1 == 0)
    return 0

int64_t x19 = arg1

if ((*(DomDefGet(zx.q(x8_1), 0x17) + 0xc8) & x19) == 0)
    uint64_t result = zx.q(*(x20 + (x21 << 0xb) + 0x10))
    
    if (result.d == 0)
        return result
    
    if ((*(DomDefGet(result, 0x17) + 0xc8) & x19) == 0)
        result = zx.q(*(x20 + (x21 << 0xb) + 0x14))
        
        if (result.d == 0)
            return result
        
        if ((*(DomDefGet(result, 0x17) + 0xc8) & x19) == 0)
            result = zx.q(*(x20 + (x21 << 0xb) + 0x18))
            
            if (result.d == 0)
                return result
            
            if ((*(DomDefGet(result, 0x17) + 0xc8) & x19) == 0)
                result = zx.q(*(x20 + (x21 << 0xb) + 0x1c))
                
                if (result.d == 0)
                    return result
                
                if ((*(DomDefGet(result, 0x17) + 0xc8) & x19) == 0)
                    result = zx.q(*(x20 + (x21 << 0xb) + 0x20))
                    
                    if (result.d == 0)
                        return result
                    
                    if ((*(DomDefGet(result, 0x17) + 0xc8) & x19) == 0)
                        result = zx.q(*(x20 + (x21 << 0xb) + 0x24))
                        
                        if (result.d == 0)
                            return result
                        
                        if ((*(DomDefGet(result, 0x17) + 0xc8) & x19) == 0)
                            result = zx.q(*(x20 + (x21 << 0xb) + 0x28))
                            
                            if (result.d == 0)
                                return result
                            
                            if ((*(DomDefGet(result, 0x17) + 0xc8) & x19) == 0)
                                result = zx.q(*(x20 + (x21 << 0xb) + 0x2c))
                                
                                if (result.d == 0)
                                    return result
                                
                                if ((*(DomDefGet(result, 0x17) + 0xc8) & x19) == 0)
                                    result = zx.q(*(x20 + (x21 << 0xb) + 0x30))
                                    
                                    if (result.d != 0)
                                        return zx.q((*(DomDefGet(result, 0x17) + 0xc8) & x19) != 0
                                            ? 1 : 0)
                                    
                                    return result

return 1
