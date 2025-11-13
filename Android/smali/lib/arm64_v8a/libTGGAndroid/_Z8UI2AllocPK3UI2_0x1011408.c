// 函数: _Z8UI2AllocPK3UI2
// 地址: 0x1011408
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_1

if (*(gUI2 + 0xc) != *(gUI2 + 0x14))
    x8_1 = zx.q(*(gUI2 + 8))
else
    XTrace("dump ui")
    x8_1 = zx.q(*(gUI2 + 8))
    
    if (x8_1.d != 0)
        void* i = *gUI2
        int64_t x10_1 = i + x8_1 * 0x19a8
        
        do
            if (zx.d(*(i + 0x19a2)) != 0)
                while (i != 0xffffffff)
                    *(i + 8)
                    XString::GetString()
                    XTrace("%s %s")
                    x8_1 = zx.q(*(gUI2 + 8))
                    i += 0x19a8
                    int64_t x9_5 = *gUI2 + x8_1 * 0x19a8
                    
                    if (x9_5 u<= i)
                        break
                    
                    while (zx.d(*(i + 0x19a2)) == 0)
                        i += 0x19a8
                        
                        if (i u>= x9_5)
                            goto label_1011474
                
                break
            
            i += 0x19a8
        while (i u< x10_1)

label_1011474:
uint64_t x24 = zx.q(*(gUI2 + 0x10))
int32_t x9_1
int64_t x21_1
uint64_t x23_1

if (x24.d != x8_1.d)
    x21_1 = *gUI2
    x23_1 = x24
    x9_1 = *(x21_1 + x24 * 0x19a8 + 0x19a0)
else
    x21_1 = *gUI2
    x9_1 = x8_1.d + 1
    *(gUI2 + 8) = x9_1
    x23_1 = zx.q(x8_1.d)

void* result = x21_1 + x23_1 * 0x19a8
*(gUI2 + 0x10) = x9_1
memset(result, 0, 0x19a0)
int128_t v0
int128_t v1
v0, v1 = UI2::UI2()
*(result + 0x19a0) = x24.d | *(gUI2 + 0x18) << 0x10
v0 = data_71bd90
int32_t x8_5 = *(gUI2 + 0x18)
v1 = *gRgbaWhite
int32_t x8_6

if (x8_5 == 0xffff)
    x8_6 = 1
else
    x8_6 = x8_5 + 1

*(gUI2 + 0x14) += 1
*(gUI2 + 0x18) = x8_6
*(result + 0x1704) = v1
*(result + 0x1354) = v0
*(result + 0x17d0) = arg1
void* result_1

if (arg1 == 0)
    result_1 = result
else
    result_1 = *(arg1 + 0x17c8)

*(x21_1 + x23_1 * 0x19a8 + 0x17c8) = result_1
void* i_1 = result

do
    *(i_1 + 0x1378) = 2
    i_1 = *(i_1 + 0x17d0)
while (i_1 != 0)

return result
