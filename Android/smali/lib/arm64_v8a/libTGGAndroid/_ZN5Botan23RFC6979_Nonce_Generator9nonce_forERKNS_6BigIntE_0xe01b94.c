// 函数: _ZN5Botan23RFC6979_Nonce_Generator9nonce_forERKNS_6BigIntE
// 地址: 0xe01b94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x1 = *(arg1 + 0x38)
Botan::BigInt* entry_x1
Botan::BigInt::encode_1363(*(arg1 + 0x48) + x1, x1, entry_x1)
int64_t* x21 = *(arg1 + 0x40)
std::__ndk1::recursive_mutex::lock()
x21[0xa] = 0
x21[9].d = 0
(*(*x21 + 0x80))(x21)
std::__ndk1::recursive_mutex::unlock()
*(arg1 + 0x50)
Botan::Stateful_RNG::initialize_with(*(arg1 + 0x40), *(arg1 + 0x48))

while (true)
    uint64_t x1_3 = *(arg1 + 0x60)
    Botan::Stateful_RNG::randomize_with_input(*(arg1 + 0x40), x1_3, *(arg1 + 0x68) - x1_3, 0)
    *(arg1 + 0x68)
    Botan::BigInt::binary_decode(arg1 + 8, *(arg1 + 0x60))
    *(arg1 + 0x30)
    *(arg1 + 0x38)
    Botan::BigInt::operator>>=(arg1 + 8)
    
    if (*(arg1 + 0x28) != 0)
        int64_t i_2 = *(arg1 + 0x20)
        
        if (i_2 == -1)
            int64_t x9_2 = *(arg1 + 8)
            int64_t x11_1 = *(arg1 + 0x10)
            int64_t x10_1 = x11_1 - x9_2
            
            if (x11_1 == x9_2)
                i_2 = 0
                *(arg1 + 0x20) = 0
            label_e01ce4:
                
                if (i_2 == 0)
                    continue
                else
                    int32_t* x9_4 = *(arg1 + 8)
                    int32_t x10_4 = 0
                    int64_t i
                    
                    do
                        int32_t x11_4 = *x9_4
                        x9_4 = &x9_4[1]
                        i = i_2
                        i_2 -= 1
                        int32_t x11_6 = ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
                        x10_4 = (x10_4 & x11_6) | (not.d(x11_6) & 1)
                    while (i != 1)
                    
                    if (x10_4 == 0)
                        continue
            else
                int64_t x12_1
                
                x12_1 = x10_1 s>= 0 ? x10_1 : -1
                
                int64_t x11_2 = x9_2 - x11_1
                int64_t x12_2
                
                x12_2 = x12_1 s< 1 ? x12_1 : 1
                
                i_2 = x10_1 s>> 2
                int64_t x10_2
                
                x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
                
                int64_t i_3 = x12_2 * (x10_2 u>> 2)
                uint64_t x11_3 = 1
                int64_t i_1
                
                do
                    int32_t x12_3 = *(x9_2 - 4 + (i_3 << 2))
                    i_1 = i_3
                    i_3 -= 1
                    x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                    i_2 -= x11_3
                while (i_1 != 1)
                *(arg1 + 0x20) = i_2
                
                if (i_2 u<= 1)
                    goto label_e01ce4
        else if (i_2 u<= 1)
            goto label_e01ce4
    
    if ((Botan::BigInt::cmp(arg1 + 8, (*arg1).b) & 0x80000000) != 0)
        break

return arg1 + 8
