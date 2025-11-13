// 函数: _ZN5Botan3TLS11Ciphersuite5by_idEt
// 地址: 0xe4f880
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int128_t v0
int128_t v1
int128_t v2
result, v0, v1, v2 = Botan::TLS::Ciphersuite::all_known_ciphersuites()
void* x8 = data_23ecc48
int64_t x9 = data_23ecc50

if (x9 != x8)
    uint64_t i = ((x9 - x8) s>> 3) * -0x71c71c71c71c71c7
    
    do
        uint64_t i_1 = i u>> 1
        int16_t* x13_1 = x8 + i_1 * 0x48
        uint32_t x14_1 = zx.d(*x13_1)
        uint32_t temp0_1 = zx.d(arg1)
        
        if (x14_1 u< temp0_1)
            i += not.q(i_1)
        else
            i = i_1
        
        if (x14_1 u< temp0_1)
            x8 = &x13_1[0x24]
    while (i != 0)

int128_t* entry_x8

if (x8 == x9 || zx.d(*x8) != zx.d(arg1))
    __builtin_memset(entry_x8, 0, 0x48)
    entry_x8[1].d = 0x10001
    __builtin_memset(entry_x8 + 0x14, 0, 0x2d)
    return result

*entry_x8 = *x8
v0 = *(x8 + 0x30)
v2 = *(x8 + 0x10)
entry_x8[4].q = *(x8 + 0x40)
entry_x8[2] = *(x8 + 0x20)
entry_x8[3] = v0
entry_x8[1] = v2
return result
