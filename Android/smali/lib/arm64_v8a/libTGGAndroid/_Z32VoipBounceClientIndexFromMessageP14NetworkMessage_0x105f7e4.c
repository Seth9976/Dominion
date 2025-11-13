// 函数: _Z32VoipBounceClientIndexFromMessageP14NetworkMessage
// 地址: 0x105f7e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = NetIdGetProtocol(zx.q(*arg1))
uint64_t x9 = zx.q(*(gVoipServer + 8))

if (x9.d != 0)
    void* result = *gVoipServer
    
    if (x0_1 == 0)
        void* i = result
        
        do
            i += 0x34
            
            while (*(i - 4) u< 0x10000)
                bool cond:0_1 = i u< result + x9 * 0x34
                i += 0x34
                
                if (not(cond:0_1))
                    return 0
            
            if ((CompareNetworkAddress(arg1 + 0xed48, i - 0x28) & 1) != 0)
                return i - 0x34
            
            result = *gVoipServer
            x9 = zx.q(*(gVoipServer + 8))
        while (result + x9 * 0x34 u> i)
    else
        int64_t x9_1 = result + x9 * 0x34
        
        while (true)
            if (zx.d(*(result + 0x32)) == 0)
                result += 0x34
                
                if (result u>= x9_1)
                    break
            else
                if (*(result + 4) == *arg1)
                    return result
                
                result += 0x34
                
                if (x9_1 u<= result)
                    break

return 0
