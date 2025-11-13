// 函数: _Z21AnimationGetSingleSetP9Structure
// 地址: 0xc7a4a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x38)

if (x8 != 0)
    int64_t* i = *(x8 + 8)
    
    if (i != 0)
        do
            void* result = *i
            i = i[1]
            
            if (not(*(result + 0x20) f< 0f))
                int32_t x9_1 = *(result + 0x28)
                
                if (x9_1 != 4 && x9_1 != 2)
                    return result
        while (i != 0)

return nullptr
