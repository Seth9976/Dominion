// 函数: _ZN5Botan18Cipher_Mode_Filter14buffered_blockEPKhm
// 地址: 0xd78ce0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (entry_x2 == 0)
    return 

int64_t x19_1 = entry_x2
uint64_t x22_1 = arg2
void* x21_1 = &arg1[0xa8]
int64_t x24_1
int64_t temp1_1

do
    uint8_t* x23_1 = x22_1
    int64_t x0_3 = (*(**(arg1 + 0x88) + 0x50))()
    
    x24_1 = x19_1 u< x0_3 ? x19_1 : x0_3
    
    x22_1 += x24_1
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(x21_1, 
        x23_1)
    int64_t* x0_5 = *(arg1 + 0x88)
    int64_t x1_3 = *(arg1 + 0xa8)
    int64_t x0_6 = (*(*x0_5 + 0x38))(x0_5, x1_3, *(arg1 + 0xb0) - x1_3)
    int64_t x1_1 = *(arg1 + 0xa8)
    int64_t x9_1 = *(arg1 + 0xb0)
    int64_t x8_7 = x9_1 - x1_1
    
    if (x0_6 u> x8_7)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(x21_1)
        x1_1 = *(arg1 + 0xa8)
        x9_1 = *(arg1 + 0xb0)
    else if (x0_6 u< x8_7)
        x9_1 = x1_1 + x0_6
        *(arg1 + 0xb0) = x9_1
    
    (*(*arg1 + 0x38))(arg1, x1_1, x9_1 - x1_1)
    temp1_1 = x19_1
    x19_1 -= x24_1
while (temp1_1 != x24_1)
