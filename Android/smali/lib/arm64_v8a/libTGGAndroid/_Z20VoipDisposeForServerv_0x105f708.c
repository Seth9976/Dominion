// 函数: _Z20VoipDisposeForServerv
// 地址: 0x105f708
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gVoipServer + 8))
void* result = *gVoipServer

if (x8.d != 0)
    int64_t x9_1 = result + x8 * 0x34
    void* result_2 = result
    
    while (true)
        int32_t x11_3 = *(result_2 + 0x30)
        
        if (x11_3 u>> 0x10 != 0)
            *(result_2 + 0x30) = *(gVoipServer + 0x10)
            result_2 += 0x34
            int32_t x11_2 = *(gVoipServer + 0x14) - 1
            *(gVoipServer + 0x10) = x11_3 & 0xffff
            *(gVoipServer + 0x14) = x11_2
            
            if (x9_1 u<= result_2)
                break
        else
            result_2 += 0x34
            
            if (result_2 u>= x9_1)
                break
    
    if (result != 0)
        int64_t x8_1 = result + x8 * 0x34
        void* result_1 = result
        
        while (true)
            int32_t x10_3 = *(result_1 + 0x30)
            
            if (x10_3 u>> 0x10 != 0)
                *(result_1 + 0x30) = *(gVoipServer + 0x10)
                result_1 += 0x34
                int32_t x10_2 = *(gVoipServer + 0x14) - 1
                *(gVoipServer + 0x10) = x10_3 & 0xffff
                *(gVoipServer + 0x14) = x10_2
                
                if (x8_1 u<= result_1)
                    break
            else
                result_1 += 0x34
                
                if (result_1 u>= x8_1)
                    break
        
        goto label_105f7c4
else if (result != 0)
label_105f7c4:
    *(gVoipServer + 8) = 0
    *(gVoipServer + 0x10) = 0
    result = XFree(result)
    *(gVoipServer + 0x20) = 0
    *(gVoipServer + 8) = 0
    *(gVoipServer + 0x10) = 0
    *gVoipServer = 0

return result
