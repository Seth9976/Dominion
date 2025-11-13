// 函数: _ZN5Botan9SHAKE_25612final_resultEPh
// 地址: 0xe24198
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x28)
int64_t* x9 = *(arg1 + 0x10)
int64_t x8_1 = x8 & 0xfffffffffffffff8
int64_t* entry_x1
int64_t* x20 = entry_x1
*(x9 + x8_1) ^= 0x1f << (zx.q(x8.d << 3) & 0x38)
void* x8_2 = *(arg1 + 0x10)
*(x8_2 + 0x80) ^= 0x8000000000000000
int128_t v0
int128_t v1
v0, v1 = Botan::SHA_3::permute(*(arg1 + 0x10))
uint64_t i_5 = *(arg1 + 8) u>> 3

if (i_5 != 0)
    while (true)
        int64_t* x11_2 = *(arg1 + 0x10)
        uint64_t i_3
        
        i_3 = i_5 u< 0x88 ? i_5 : 0x88
        
        uint64_t i_2
        int64_t* x10_4
        
        if (i_3 u< 8)
            i_2 = i_5
            x10_4 = x20
        label_e242c8:
            int64_t x12_3 = 0
            uint64_t i
            
            do
                int64_t x14_1 = x12_3 & 0x38
                i = i_2
                i_2 -= 1
                x12_3 += 8
                *x10_4 = (*x11_2 u>> x14_1).b
                x10_4 += 1
            while (i != 1)
        else
            int64_t* x12_2
            
            if (i_3 - 8 u>= 0x18)
                int64_t x9_3 = (i_3 - 8) & 0xfffffffffffffff8
                
                if (x20 u< x11_2 + x9_3 + 8)
                    i_2 = i_3
                    x10_4 = x20
                
                if (x20 u< x11_2 + x9_3 + 8 && x20 + x9_3 + 8 u> x11_2)
                    goto label_e242a8
                
                int64_t i_6 = (((i_3 - 8) u>> 3) + 1) & 0x3ffffffffffffffc
                void* x15_1 = &x20[2]
                x12_2 = &x11_2[i_6]
                i_2 = i_3 - (i_6 << 3)
                x10_4 = &x20[i_6]
                void* x11_1 = &x11_2[2]
                int64_t i_4 = i_6
                int64_t i_1
                
                do
                    v0 = *(x11_1 - 0x10)
                    v1 = *x11_1
                    i_1 = i_4
                    i_4 -= 4
                    x11_1 += 0x20
                    *(x15_1 - 0x10) = v0
                    *x15_1 = v1
                    x15_1 += 0x20
                while (i_1 != 4)
                x11_2 = x12_2
                
                if (((i_3 - 8) u>> 3) + 1 != i_6)
                    goto label_e242a8
            else
                i_2 = i_3
                x10_4 = x20
            label_e242a8:
                x12_2 = x11_2
                
                do
                    int64_t x11_3 = *x12_2
                    x12_2 = &x12_2[1]
                    i_2 -= 8
                    *x10_4 = x11_3
                    x10_4 = &x10_4[1]
                while (i_2 u> 7)
            
            x11_2 = x12_2
            
            if (i_2 != 0)
                goto label_e242c8
        uint64_t i_7 = i_5
        i_5 -= i_3
        
        if (i_7 == i_3)
            break
        
        x20 += i_3
        v0, v1 = Botan::SHA_3::permute(*(arg1 + 0x10))

int64_t result = *(arg1 + 0x10)
int64_t x8_4 = *(arg1 + 0x18)

if (x8_4 != result)
    result = memset(result, 0, x8_4 - result)

*(arg1 + 0x28) = 0
return result
