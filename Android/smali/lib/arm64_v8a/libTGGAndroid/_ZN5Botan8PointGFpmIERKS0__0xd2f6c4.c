// 函数: _ZN5Botan8PointGFpmIERKS0_
// 地址: 0xd2f6c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_130
Botan::PointGFp::PointGFp(&var_130)
Botan::PointGFp::negate()
void var_a8
Botan::PointGFp::PointGFp(&var_a8)
Botan::PointGFp::~PointGFp()
int64_t x8 = *(arg1 + 0x78)

if (x8 == -1)
    int64_t x9_1 = *(arg1 + 0x60)
    int64_t x11_1 = *(arg1 + 0x68)
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 == x9_1)
        *(arg1 + 0x78) = 0
        Botan::PointGFp::operator=(arg1)
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        int64_t x8_1 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_1 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_1 -= x11_3
        while (i != 1)
        *(arg1 + 0x78) = x8_1
        
        if (x8_1 != 0)
            Botan::PointGFp::operator+=(arg1)
        else
            Botan::PointGFp::operator=(arg1)
else if (x8 == 0)
    Botan::PointGFp::operator=(arg1)
else
    Botan::PointGFp::operator+=(arg1)

Botan::PointGFp::~PointGFp()
return arg1
