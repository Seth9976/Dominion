// 函数: _ZN5Botan5Timer4stopEv
// 地址: 0xe90d34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if (*(entry_x0 + 0x70) == 0)
    return 

int64_t x8_1 = *(entry_x0 + 0x90)
void* x19_1 = entry_x0

if (x8_1 != 0)
    *(x19_1 + 0x98) += vcvtd_u64_f64(*(x19_1 + 0x40) * float.d(neg.q(x8_1)))

struct timespec tp
int64_t x8_6
int64_t x9_3

if (clock_gettime(0, &tp).d == 0)
    int64_t x8_8 = tp.tv_nsec + tp.tv_sec * 0x3b9aca00
    int64_t x9_5 = *(x19_1 + 0x70)
    x9_3 = x8_8 - x9_5
    
    if (x8_8 u> x9_5)
    label_e90d9c:
        x8_6 = *(x19_1 + 0x78)
        *(x19_1 + 0x68) += x9_3
        
        if (x8_6 == 0)
            *(x19_1 + 0x80) = x9_3
        else
            int64_t x10_3 = *(x19_1 + 0x80)
            int64_t x11_1 = *(x19_1 + 0x88)
            int64_t x10_4
            
            x10_4 = x10_3 u< x9_3 ? x9_3 : x10_3
            
            if (x9_3 u>= x11_1)
                x9_3 = x11_1
            
            *(x19_1 + 0x80) = x10_4
        
        *(x19_1 + 0x88) = x9_3
    else
        x8_6 = *(x19_1 + 0x78)
else
    int64_t x8_5 = std::__ndk1::chrono::system_clock::now() * 0x3e8
    int64_t x9_2 = *(x19_1 + 0x70)
    x9_3 = x8_5 - x9_2
    
    if (x8_5 u> x9_2)
        goto label_e90d9c
    
    x8_6 = *(x19_1 + 0x78)
*(x19_1 + 0x70) = 0
*(x19_1 + 0x78) = x8_6 + 1
