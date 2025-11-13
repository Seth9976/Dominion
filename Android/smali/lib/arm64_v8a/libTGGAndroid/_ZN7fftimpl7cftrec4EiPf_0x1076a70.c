// 函数: _ZN7fftimpl7cftrec4EiPf
// 地址: 0x1076a70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
int32_t x21 = arg1

if (arg1 s>= 0x201)
    int32_t x22_1 = x20
    bool cond:1_1
    
    do
        x21 = x22_1 u>> 2
        fftimpl::cftmdl1(x21, &arg2[sx.q(x20 - x21)])
        cond:1_1 = x22_1 u> 0x803
        x22_1 = x21
    while (cond:1_1)

int32_t x22_2 = x20 - x21
int64_t result = fftimpl::cftleaf(x21, 1, &arg2[sx.q(x22_2)])

if (x22_2 s>= 1)
    int32_t x23_1 = neg.d(x21)
    int32_t x22_3 = 1
    
    do
        result = fftimpl::cftleaf(x21, fftimpl::cfttree(x21, x23_1 + x20, x22_3, arg2), 
            &arg2[sx.q(neg.d(x21 << 1) + x20)])
        x20 -= x21
        x22_3 += 1
    while (x23_1 + x20 s> 0)

return result
