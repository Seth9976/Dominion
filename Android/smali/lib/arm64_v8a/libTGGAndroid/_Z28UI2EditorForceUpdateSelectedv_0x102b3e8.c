// 函数: _Z28UI2EditorForceUpdateSelectedv
// 地址: 0x102b3e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gUI2 + 8))

if (x9.d == 0)
    return 

void* i = *gUI2
int64_t x9_1 = i + x9 * 0x19a8

do
    if (zx.d(*(i + 0x19a2)) != 0)
        while (i != 0xffffffff)
            *(i + 0x1378) = 2
            i += 0x19a8
            
            if (x9_1 u<= i)
                break
            
            while (zx.d(*(i + 0x19a2)) == 0)
                i += 0x19a8
                
                if (i u>= x9_1)
                    return 
        
        break
    
    i += 0x19a8
while (i u< x9_1)
