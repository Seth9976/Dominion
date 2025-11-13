// 函数: _ZThn80_N5Botan18Cipher_Mode_Filter14buffered_blockEPKhm
// 地址: 0xd78db0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 == 0)
    return 

int64_t* x20_1 = arg1 - 0x50
int64_t x19_1 = arg3
uint8_t* x22_1 = arg2
int64_t x24_1
int64_t temp1_1

do
    uint8_t* x23_1 = x22_1
    int64_t x0_3 = (*(*x20_1[0x11] + 0x50))()
    
    x24_1 = x19_1 u< x0_3 ? x19_1 : x0_3
    
    x22_1 = &x22_1[x24_1]
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(
        &x20_1[0x15], x23_1)
    int64_t* x0_5 = x20_1[0x11]
    int64_t x1_3 = x20_1[0x15]
    int64_t x0_6 = (*(*x0_5 + 0x38))(x0_5, x1_3, x20_1[0x16] - x1_3)
    int64_t x1_1 = x20_1[0x15]
    int64_t x9_1 = x20_1[0x16]
    int64_t x8_7 = x9_1 - x1_1
    
    if (x0_6 u> x8_7)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&x20_1[0x15])
        x1_1 = x20_1[0x15]
        x9_1 = x20_1[0x16]
    else if (x0_6 u< x8_7)
        x9_1 = x1_1 + x0_6
        x20_1[0x16] = x9_1
    
    (*(*x20_1 + 0x38))(x20_1, x1_1, x9_1 - x1_1)
    temp1_1 = x19_1
    x19_1 -= x24_1
while (temp1_1 != x24_1)
