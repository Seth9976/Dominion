// 函数: _Z30ClientHandleServerNotificationR21ServerNotificationMsg
// 地址: 0x9b3e50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = GetClient()
uint64_t x10 = zx.q(*(result + 0x78f8))
void* i_1 = *(result + 0x78f0)

if (x10.d != 0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0xa)) != 0)
            if (i != 0xffffffff)
                int64_t x13_2 = i_1 + x10 * 0xc
                
                do
                    if (*i == *arg1)
                        *(i + 4) = *(arg1 + 4)
                        return result
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0xc
                    
                    if (i u>= x13_2)
                        break
                    
                    while (zx.d(*(i + 0xa)) == 0)
                        i += 0xc
                        
                        if (i u>= x13_2)
                            goto label_9b3ef0
                while (i != 0xffffffff)
            
            break
        
        i += 0xc
    while (i u< i_1 + x10 * 0xc)

label_9b3ef0:
uint64_t x11_1 = zx.q(*(result + 0x7900))
int32_t x12_3

if (x11_1.d != x10.d)
    x12_3 = *(i_1 + x11_1 * 0xc + 8)
    x10 = x11_1
else
    x12_3 = x10.d + 1
    *(result + 0x78f8) = x12_3

*(result + 0x7900) = x12_3
int64_t* x9 = i_1 + x10 * 0xc
*x9 = 0
x9[1].d = x11_1.d | *(result + 0x7908) << 0x10
int32_t x10_4 = *(result + 0x7908)
int32_t x10_5

if (x10_4 == 0xffff)
    x10_5 = 1
else
    x10_5 = x10_4 + 1

*(result + 0x7904) += 1
*(result + 0x7908) = x10_5
*x9 = *arg1
*(x9 + 4) = *(arg1 + 4)
return result
