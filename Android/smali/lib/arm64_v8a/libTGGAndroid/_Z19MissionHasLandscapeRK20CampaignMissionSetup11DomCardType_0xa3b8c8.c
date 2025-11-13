// 函数: _Z19MissionHasLandscapeRK20CampaignMissionSetup11DomCardType
// 地址: 0xa3b8c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = zx.q(*(arg1 + 0x28))

if (result.d != 0)
    int64_t x19_1 = arg2
    
    if ((*(DomDefGet(result, 0x17) + 0xc8) & x19_1) != 0)
        return 1
    
    result = zx.q(*(arg1 + 0x64))
    
    if (result.d != 0)
        if ((*(DomDefGet(result, 0x17) + 0xc8) & x19_1) != 0)
            return 1
        
        result = zx.q(*(arg1 + 0xa0))
        
        if (result.d != 0)
            if ((*(DomDefGet(result, 0x17) + 0xc8) & x19_1) != 0)
                return 1
            
            result = zx.q(*(arg1 + 0xdc))
            
            if (result.d != 0)
                return zx.q((*(DomDefGet(result, 0x17) + 0xc8) & x19_1) != 0 ? 1 : 0)

return result
