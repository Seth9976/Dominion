// 函数: _Z23UI2EditorForceUpdateAllv
// 地址: 0x102b360
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*(gUI2 + 8))

if (x10.d == 0)
    return 

void* i_1 = *gUI2
void* i = i_1

do
    if (zx.d(*(i + 0x19a2)) != 0)
        if (i != 0xffffffff)
            int64_t x10_1 = i_1 + x10 * 0x19a8
            
            do
                *(i + 0x1378) = 2
                i += 0x19a8
                
                if (x10_1 u<= i)
                    break
                
                while (zx.d(*(i + 0x19a2)) == 0)
                    i += 0x19a8
                    
                    if (i u>= x10_1)
                        return 
            while (i != 0xffffffff)
        
        break
    
    i += 0x19a8
while (i u< i_1 + x10 * 0x19a8)
