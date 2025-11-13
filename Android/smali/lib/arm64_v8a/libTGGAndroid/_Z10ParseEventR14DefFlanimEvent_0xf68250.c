// 函数: _Z10ParseEventR14DefFlanimEvent
// 地址: 0xf68250
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x10) != 0)
    return 

char* haystack = *arg1
char* x0_1 = strstr(haystack, "sound_play:")
void* x0_2
int64_t x1

if (x0_1 == 0)
    char* x0_4 = strstr(haystack, "sound_start:")
    
    if (x0_4 == 0)
        char* x0_6 = strstr(haystack, "sound_stop:")
        
        if (x0_6 == 0)
            char* x0_9 = strstr(haystack, "particle_play:")
            int32_t x8_2
            
            if (x0_9 == 0)
                char* x0_11 = strstr(haystack, "particle_start:")
                
                if (x0_11 == 0)
                    char* x0_13 = strstr(haystack, "particle_stop:")
                    
                    if (x0_13 == 0)
                        *(arg1 + 0x10) = 1
                        return 
                    
                    x0_2 = &x0_13[0xe]
                    x8_2 = 6
                else
                    x0_2 = &x0_11[0xf]
                    x8_2 = 5
            else
                x0_2 = &x0_9[0xe]
                x8_2 = 7
            
            *(arg1 + 0x10) = x8_2
            x1 = 0x19
        else
            x0_2 = &x0_6[0xb]
            x1 = 0x15
            *(arg1 + 0x10) = 3
    else
        x0_2 = &x0_4[0xc]
        x1 = 0x15
        *(arg1 + 0x10) = 2
else
    x0_2 = &x0_1[0xb]
    x1 = 0x15
    *(arg1 + 0x10) = 4

*(arg1 + 0x18) = AssetPtrFromPath(x0_2, x1)
