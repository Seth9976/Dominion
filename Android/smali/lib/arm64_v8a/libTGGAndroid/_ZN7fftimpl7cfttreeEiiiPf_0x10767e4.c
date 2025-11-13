// 函数: _ZN7fftimpl7cfttreeEiiiPf
// 地址: 0x10767e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x22

if ((arg3 & 3) == 0)
    int32_t x8_2
    bool cond:1_1
    
    do
        x8_2 = arg3
        x19 <<= 2
        cond:1_1 = (arg3 & 0xc) == 0
        arg3 s>>= 2
    while (cond:1_1)
    
    if ((x8_2 u>> 2 & 1) == 0)
        if (x19 s>= 0x81)
            bool cond:4_1
            
            do
                fftimpl::cftmdl2(x19, &arg4[sx.q(arg2 - x19)])
                cond:4_1 = x19 u> 0x203
                x19 u>>= 2
            while (cond:4_1)
        
        x22 = 0
    else if (x19 s< 0x81)
        x22 = 1
    else
        x22 = x8_2 u>> 2 & 1
        bool cond:5_1
        
        do
            fftimpl::cftmdl1(x19, &arg4[sx.q(arg2 - x19)])
            cond:5_1 = x19 u> 0x203
            x19 u>>= 2
        while (cond:5_1)
else
    void* x1 = &arg4[sx.q(arg2 - x19)]
    
    if ((arg3 & 1) != 0)
        fftimpl::cftmdl1(x19, x1)
        x22 = 1
    else
        fftimpl::cftmdl2(x19, x1)
        x22 = 0

return zx.q(x22)
