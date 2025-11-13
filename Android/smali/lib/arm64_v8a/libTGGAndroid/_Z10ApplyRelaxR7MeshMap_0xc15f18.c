// 函数: _Z10ApplyRelaxR7MeshMap
// 地址: 0xc15f18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_10010[0x4000]
float v1

for (int64_t i = 0; i != 0x4000; i += 1)
    int64_t x14_2 = sx.q(*(arg1 + (i << 2) + 0xeffc0))
    int32_t j = *(arg1 + (x14_2 << 2) + 0xfffc0)
    
    if (j == 0xffffffff)
        v1 = 0f
    else
        void* x16_1 = arg1 + 0xfffc4 + (x14_2 << 2)
        float v0 = 0f
        int32_t x14_3 = -1
        
        do
            v1 = *(arg1 + muls.dp.d(j, 0xc) + 8)
            j = *x16_1
            x16_1 += 4
            x14_3 += 1
            v0 = v0 + v1
        while (j != 0xffffffff)
        
        v1 = 0f
        
        if (x14_3 u>= 2)
            v1 = v0 / float.s(x14_3 + 1)
    
    var_10010[i] = v1

int64_t i_1 = 0
float* x9 = arg1 + 0x14

do
    float* x11_1 = &var_10010 + i_1
    v1 = x11_1[1]
    i_1 += 8
    x9[-3] = *x11_1
    *x9 = v1
    x9 = &x9[6]
while (i_1 != 0x10000)
