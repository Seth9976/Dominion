// 函数: _ZN5Botan14Base64_Encoder7end_msgEv
// 地址: 0xd77530
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* entry_x0
int64_t* x22_1 = &entry_x0[0x90]
uint64_t x23 = *x22_1

if (x23 != 0)
    uint8_t* x8_1 = *(entry_x0 + 0x60)
    uint8_t* x20_1 = x8_1
    
    while (true)
        int64_t x9_1 = *(entry_x0 + 0x68)
        uint64_t var_38 = 0
        void* x8_2 = x9_1 - x8_1
        uint64_t x21_1
        
        x21_1 = x8_2 u< x23 ? x8_2 : x23
        
        Botan::base64_encode(*(entry_x0 + 0x78), x20_1, x21_1, &var_38, true)
        Botan::Base64_Encoder::do_output(entry_x0, *(entry_x0 + 0x78))
        uint64_t temp0_1 = x23
        x23 -= x21_1
        
        if (temp0_1 == x21_1)
            break
        
        x8_1 = *(entry_x0 + 0x60)
        x20_1 = &x20_1[x21_1]

char var_3c

if (zx.d(entry_x0[0x58]) != 0)
    var_3c = 0xa
    (*(*entry_x0 + 0x38))(entry_x0, &var_3c, 1)
else if (*(entry_x0 + 0x98) != 0 && *(entry_x0 + 0x50) != 0)
    var_3c = 0xa
    (*(*entry_x0 + 0x38))(entry_x0, &var_3c, 1)
*x22_1 = 0
x22_1[1] = 0
