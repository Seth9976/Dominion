// 函数: _ZN5Botan7SipHash8add_dataEPKhm
// 地址: 0xe24cd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 0x20)

if (x8 == *(arg1 + 0x28))
    return Botan::SipHash::final_result(Botan::SymmetricAlgorithm::throw_key_not_set_error())
        __tailcall

int64_t x9_1 = *(arg1 + 0x40)
int64_t entry_i
arg1[0x48] += entry_i.b

if (x9_1 == 0)
label_e24dbc:
    
    if (entry_i u>= 8)
        do
            int64_t* x9_9 = *(arg1 + 0x20)
            int64_t x10_7 = *arg2
            int64_t j_1 = *(arg1 + 0x10)
            int64_t x13_5 = x9_9[2]
            int64_t x14_1 = *x9_9
            int64_t x11_6 = x9_9[1]
            int64_t x8_5 = x9_9[3] ^ x10_7
            
            if (j_1 != 0)
                int64_t j
                
                do
                    int64_t x14_2 = x14_1 + x11_6
                    int64_t x13_6 = x13_5 + x8_5
                    int64_t x11_7 = x14_2 ^ ror.q(x11_6, 0x33)
                    int64_t x8_7 = x13_6 ^ ror.q(x8_5, 0x30)
                    int64_t x13_7 = x11_7 + x13_6
                    x14_1 = ror.q(x14_2, 0x20) + x8_7
                    j = j_1
                    j_1 -= 1
                    x11_6 = x13_7 ^ ror.q(x11_7, 0x2f)
                    x8_5 = x14_1 ^ ror.q(x8_7, 0x2b)
                    x13_5 = ror.q(x13_7, 0x20)
                while (j != 1)
            
            *x9_9 = x14_1 ^ x10_7
            entry_i -= 8
            arg2 += 8
            *(*(arg1 + 0x20) + 8) = x11_6
            *(*(arg1 + 0x20) + 0x10) = x13_5
            *(*(arg1 + 0x20) + 0x18) = x8_5
        while (entry_i u> 7)
    
    if (entry_i != 0)
        int64_t x8_4 = *(arg1 + 0x38)
        int64_t x9_5 = *(arg1 + 0x40) + 1
        int64_t i
        
        do
            uint64_t x10_5 = zx.q(*arg2)
            arg2 += 1
            i = entry_i
            entry_i -= 1
            x8_4 = (x10_5 << 0x40 | x8_4) u>> 8
            *(arg1 + 0x38) = x8_4
            *(arg1 + 0x40) = x9_5
            x9_5 += 1
        while (i != 1)
else
    if (entry_i != 0)
        int64_t x10_2 = 0
        
        do
            int64_t x11_1 = x9_1 + x10_2
            
            if (x11_1 == 8)
                entry_i -= x10_2
                arg2 += x10_2
                goto label_e24d4c
            
            uint64_t x13_1 = zx.q(*(arg2 + x10_2))
            x10_2 += 1
            *(arg1 + 0x38) = (x13_1 << 0x40 | *(arg1 + 0x38)) u>> 8
            *(arg1 + 0x40) = x11_1 + 1
        while (entry_i != x10_2)
        
        x9_1 += x10_2
        arg2 += x10_2
    
    if (x9_1 == 8)
        entry_i = 0
    label_e24d4c:
        int64_t x10_3 = *(arg1 + 0x38)
        int64_t x13_2 = x8[2]
        int64_t x15_1 = *x8
        int64_t x12_3 = x8[1]
        int64_t i_2 = *(arg1 + 0x10)
        int64_t x11_4 = x8[3] ^ x10_3
        
        if (i_2 != 0)
            int64_t i_1
            
            do
                int64_t x15_2 = x15_1 + x12_3
                int64_t x13_3 = x13_2 + x11_4
                int64_t x12_4 = x15_2 ^ ror.q(x12_3, 0x33)
                int64_t x11_5 = x13_3 ^ ror.q(x11_4, 0x30)
                int64_t x13_4 = x12_4 + x13_3
                x15_1 = ror.q(x15_2, 0x20) + x11_5
                i_1 = i_2
                i_2 -= 1
                x12_3 = x13_4 ^ ror.q(x12_4, 0x2f)
                x11_4 = x15_1 ^ ror.q(x11_5, 0x2b)
                x13_2 = ror.q(x13_4, 0x20)
            while (i_1 != 1)
        
        *x8 = x15_1 ^ x10_3
        *(*(arg1 + 0x20) + 8) = x12_3
        *(*(arg1 + 0x20) + 0x10) = x13_2
        *(*(arg1 + 0x20) + 0x18) = x11_4
        *(arg1 + 0x38) = 0
        *(arg1 + 0x40) = 0
        goto label_e24dbc
