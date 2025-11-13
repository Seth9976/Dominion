// 函数: _ZN5Botan14Cascade_CipherC1EPNS_11BlockCipherES2_
// 地址: 0xce9994
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = arg2
int64_t* entry_x2
*(arg1 + 0x18) = entry_x2
*arg1 = _vtable_for_Botan::Cascade_Cipher + 0x10
uint64_t i_4 = (*(*arg2 + 0x30))(arg2)
uint64_t i_1 = (*(*entry_x2 + 0x30))(entry_x2)

if (i_4 != i_1)
    uint64_t i_2
    
    if (i_1 == 0)
        i_2 = i_4
    else
        uint64_t i_3 = i_4
        uint64_t i = i_1
        
        do
            i_2 = i
            i = i_3 - i_3 u/ i * i_2
            i_3 = i_2
        while (i != 0)
    
    i_4 = i_1 * i_4 u/ i_2

*(arg1 + 8) = i_4
int64_t x0_4 = (*(*arg2 + 0x30))(arg2)

if (i_4 u% x0_4 == 0)
    int64_t x21_1 = *(arg1 + 8)
    int64_t result = (*(*entry_x2 + 0x30))(entry_x2)
    
    if (x21_1 u% result == 0)
        return result

int64_t* x0_6 = Botan::assertion_failure(
    "m_block % c1->block_size() == 0 && m_block % c2->block_size() == 0", 
    "Combined block size is a multiple of each ciphers block", "Cascade_Cipher", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4a90)
int64_t* x0_7 = *(arg1 + 0x18)
*(arg1 + 0x18) = 0
int64_t* x0_8

if (x0_7 != 0)
    (*(*x0_7 + 8))()
    x0_8 = *(arg1 + 0x10)
    *(arg1 + 0x10) = 0
    
    if (x0_8 != 0)
    label_ce9ad8:
        (*(*x0_8 + 8))()
        sub_1101e04(x0_6)
        noreturn
else
    x0_8 = *(arg1 + 0x10)
    *(arg1 + 0x10) = 0
    
    if (x0_8 != 0)
        goto label_ce9ad8
sub_1101e04(x0_6)
noreturn
