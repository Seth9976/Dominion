// 函数: _ZN5Botan10GOST_34_1112final_resultEPh
// 地址: 0xd87f1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x88)

if (x8 != 0)
    uint64_t x1 = *(arg1 + 0x40)
    int64_t x9_2 = *(arg1 + 0x48) - x1
    
    if (x9_2 != x8)
        memset(x1 + x8, 0, x9_2 - x8)
        x1 = *(arg1 + 0x40)
    
    Botan::GOST_34_11::compress_n(arg1, x1)

uint64_t x0_2 = Botan::allocate_memory(0x20, 1)
*(x0_2 + 0x10) = 0
*(x0_2 + 0x18) = 0
*x0_2 = *(arg1 + 0x90) << 3
*(x0_2 + 8) = 0
uint64_t var_48
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_48)
Botan::GOST_34_11::compress_n(arg1, x0_2)
int128_t v0
int128_t v1
v0, v1 = Botan::GOST_34_11::compress_n(arg1, var_48)
int128_t* entry_x1

if (entry_x1 != 0)
    int128_t* x8_3 = *(arg1 + 0x70)
    
    if (x8_3 != 0)
        v0 = x8_3[1]
        *entry_x1 = *x8_3
        entry_x1[1] = v0
        int64_t x0_6 = *(arg1 + 0x28)
        int64_t x8_4 = *(arg1 + 0x30)
        
        if (x8_4 != x0_6)
            memset(x0_6, 0, x8_4 - x0_6)
            x0_6 = *(arg1 + 0x28)
        
        *(arg1 + 0x30) = x0_6
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::shrink_to_fit()
        int64_t x0_8 = *(arg1 + 0x58)
        int64_t x8_5 = *(arg1 + 0x60)
        
        if (x8_5 != x0_8)
            memset(x0_8, 0, x8_5 - x0_8)
        
        int64_t x0_9 = *(arg1 + 0x70)
        int64_t x8_6 = *(arg1 + 0x78)
        
        if (x8_6 != x0_9)
            memset(x0_9, 0, x8_6 - x0_9)
        
        *(arg1 + 0x88) = 0
        *(arg1 + 0x90) = 0
        uint64_t x0_10 = var_48
        
        if (x0_10 != 0)
            uint64_t var_40_1 = x0_10
            int64_t var_38
            Botan::deallocate_memory(x0_10, var_38 - x0_10, 1)
        
        return Botan::deallocate_memory(x0_2, 0x20, 1)

sub_c776cc(Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
noreturn
