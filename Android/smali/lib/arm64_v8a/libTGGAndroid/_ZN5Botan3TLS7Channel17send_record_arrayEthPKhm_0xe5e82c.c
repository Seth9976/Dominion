// 函数: _ZN5Botan3TLS7Channel17send_record_arrayEthPKhm
// 地址: 0xe5e82c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x4

if (entry_x4 == 0)
    return 

int64_t x21_1 = entry_x4
uint64_t x22_1 = arg4
int32_t x23_1 = arg3.d
Botan::TLS::Connection_Cipher_State* x20_1 = arg1
Botan::TLS::Channel::write_cipher_state_epoch(arg1)
uint16_t var_60

if ((x23_1 & 0xff) != 0x17 || zx.d(*(*(x20_1 + 0x40) + 0x20)) != 0x301)
    int64_t x25_1
    int64_t temp0_1
    
    do
        x25_1 = x21_1 u< 0x4000 ? x21_1 : 0x4000
        
        Botan::TLS::Channel::write_record(x20_1, var_60, arg2, zx.q(x23_1), x22_1)
        temp0_1 = x21_1
        x21_1 -= x25_1
        x22_1 += x25_1
    while (temp0_1 != x25_1)
else
    int64_t x21_2
    int64_t x24_1
    
    do
        Botan::TLS::Channel::write_record(x20_1, var_60, arg2, 0x17, x22_1)
        x21_2 = x21_1 - 1
        
        x24_1 = x21_2 u< 0x4000 ? x21_2 : 0x4000
        
        Botan::TLS::Channel::write_record(x20_1, var_60, arg2, 0x17, x22_1 + 1)
        x21_1 = x21_2 - x24_1
        x22_1 = x22_1 + 1 + x24_1
    while (x21_2 != x24_1)
int64_t* var_58

if (var_58 == 0)
    return 

int64_t x9_1
int32_t i

do
    x9_1 = __ldaxr(&var_58[1])
    i = __stlxr(x9_1 - 1, &var_58[1])
while (i != 0)

if (x9_1 == 0)
    (*(*var_58 + 0x10))(var_58)
    std::__ndk1::__shared_weak_count::__release_weak()
