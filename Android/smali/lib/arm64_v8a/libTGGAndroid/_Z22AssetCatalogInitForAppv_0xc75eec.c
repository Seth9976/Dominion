// 函数: _Z22AssetCatalogInitForAppv
// 地址: 0xc75eec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gpAssetAppData != 0)
    return 

int64_t* x0 = XPooledCalloc(0x40)
*x0 = 0
x0[1] = 0
*gpAssetAppData = x0
x0[2] = 0
x0[3] = 0
x0[4] = 0x400
int64_t* x0_1 = XMalloc(0xc008)
*x0_1 = x0[3]
int32_t x9 = x0[4].d
x0[3] = x0_1
void* x8_2 = x0[2]

if (x9 s>= 1)
    int64_t i = 0
    void* x10_1 = &x0_1[1]
    
    do
        void* x11_1 = x10_1
        *x10_1 = x8_2
        x10_1 += 0x30
        i += 1
        x8_2 = x11_1
    while (i s< sx.q(x0[4].d))
    
    x8_2 = x10_1 - 0x30

x0[2] = x8_2
int64_t* x19_1 = *gpAssetAppData
*x19_1 = XPooledCalloc(0x2000)
x19_1[1].d = 0x3ff
uint64_t x8_4 = *gpAssetAppData
*(x8_4 + 0x28) = 1
*(x8_4 + 0x30) = 0
*(x8_4 + 0x38) = 0
