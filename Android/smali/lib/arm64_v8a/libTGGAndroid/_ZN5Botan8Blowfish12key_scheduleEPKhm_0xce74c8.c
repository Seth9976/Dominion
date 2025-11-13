// 函数: _ZN5Botan8Blowfish12key_scheduleEPKhm
// 地址: 0xce74c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x20)
int64_t x9_1 = *(arg1 + 0x28) - x8

if (x9_1 s>> 2 u<= 0x11)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[0x20])
    x8 = *(arg1 + 0x20)
else if (x9_1 != 0x48)
    *(arg1 + 0x28) = x8 + 0x48

if (x8 != 0)
    __builtin_memcpy(x8, 
        "\x88\x6a\x3f\x24\xd3\x08\xa3\x85\x2e\x8a\x19\x13\x44\x73\x70\x03\x22\x38\x09\xa4\xd0\x31\x9f\x"
    "29\x98\xfa\x2e\x08\x89\x6c\x4e\xec\xe6\x21\x28\x45\x77\x13\xd0\x38\xcf\x66\x54\xbe\x6c\x0c\xe9"
    "34\xb7\x29\xac\xc0\xdd\x50\x7c\xc9\xb5\xd5\x84\x3f\x17\x09\x47\xb5\xd9\xd5\x16\x92\x1b\xfb\x79"
    "89", 
        0x48)
    int64_t x0_1 = *(arg1 + 8)
    int64_t x8_2 = *(arg1 + 0x10) - x0_1
    
    if (x8_2 s>> 2 u<= 0x3ff)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[8])
        x0_1 = *(arg1 + 8)
    else if (x8_2 != 0x1000)
        *(arg1 + 0x10) = x0_1 + 0x1000
    
    if (x0_1 != 0)
        memcpy(x0_1, 0x82a690, 0x1000)
        
        for (int64_t i = 0; i != 0x48; i += 4)
            int32_t* x13_1 = *(arg1 + 0x20)
            int64_t entry_x2
            int32_t x9_10 = (0xffff00ff & ((0xff00ffff & zx.d(*(arg2 + i u% entry_x2)) << 0x18)
                | zx.d(*(arg2 + (i + 1) u% entry_x2)) << 0x10))
                | zx.d(*(arg2 + (i + 2) u% entry_x2)) << 8 | zx.d(*(arg2 + (i + 3) u% entry_x2))
            *(x13_1 + i) ^= x9_10
        
        int64_t var_38 = 0
        Botan::Blowfish::generate_sbox(arg1, &arg1[0x20], &var_38:4, &var_38, 0, 0)
        return Botan::Blowfish::generate_sbox(arg1, &arg1[8], &var_38:4, &var_38, 0, 0)

uint8_t* x0_6
uint64_t x1_4
uint8_t* x2_2
uint64_t x3_2
x0_6, x1_4, x2_2, x3_2 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return Botan::Blowfish::key_expansion(x0_6, x1_4, x2_2, x3_2) __tailcall
