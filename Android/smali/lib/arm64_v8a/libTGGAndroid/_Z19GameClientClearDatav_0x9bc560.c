// 函数: _Z19GameClientClearDatav
// 地址: 0x9bc560
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = GetClient()
int32_t* x21 = result + 0x5028
*x21 = 0
void* i_1 = *(result + 0x5080)
void* result_1 = result
uint64_t x8_2 = zx.q(neg.d(*V2I1)) | zx.q(neg.d(*(V2I1 + 4))) << 0x20
*(result + 0x5030) = x8_2
*(result + 0x5038) = x8_2
uint64_t x8_3 = zx.q(x21[0x18])

if (x8_3.d != 0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x1332)) != 0)
            while (i != 0xffffffff)
                result = NetworkGameDispose(i)
                i_1 = *(result_1 + 0x5080)
                x8_3 = zx.q(x21[0x18])
                i += 0x1338
                int64_t x9_2 = i_1 + x8_3 * 0x1338
                
                if (x9_2 u<= i)
                    break
                
                while (zx.d(*(i + 0x1332)) == 0)
                    i += 0x1338
                    
                    if (i u>= x9_2)
                        goto label_9bc628
            
            break
        
        i += 0x1338
    while (i u< i_1 + x8_3 * 0x1338)

label_9bc628:

if (x8_3.d != 0)
    void* x8_4 = i_1 + mulu.dp.d(x8_3.d, 0x1338)
    
    while (true)
        if (zx.d(*(i_1 + 0x1332)) != 0)
            XString::~XString()
            XString::~XString()
            result = XString::~XString()
            int32_t x9_4 = x21[0x1a]
            x21[0x1a] = zx.d(*(i_1 + 0x1330))
            *(i_1 + 0x1330) = x9_4
            uint64_t x9_5 = zx.q(x21[0x18])
            i_1 += 0x1338
            x21[0x1b] -= 1
            x8_4 = *(result_1 + 0x5080) + x9_5 * 0x1338
            
            if (x8_4 u<= i_1)
                break
        else
            i_1 += 0x1338
            
            if (i_1 u>= x8_4)
                break

x21[0x18] = 0
x21[0x1a] = 0
return result
