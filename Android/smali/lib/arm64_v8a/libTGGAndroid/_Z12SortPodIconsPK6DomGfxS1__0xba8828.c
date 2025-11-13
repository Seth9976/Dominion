// 函数: _Z12SortPodIconsPK6DomGfxS1_
// 地址: 0xba8828
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0
int64_t x1
x0, x1 = CalcPodIconWhere(arg1)
int64_t x0_2
int64_t x1_1
x0_2, x1_1 = CalcPodIconWhere(arg2)

if (x0.d s>= x0_2.d)
    if (x0.d s> x0_2.d)
        return 1
    
    uint32_t x8_1 = (x0 u>> 0x20).d
    uint32_t x9_1 = (x0_2 u>> 0x20).d
    
    if (x0.d != 3)
        if (x8_1 s>= x9_1)
            if (x8_1 s> x9_1)
                return 1
            
        label_ba88bc:
            uint32_t x8_2 = (x1 u>> 0x20).d
            uint32_t x9_2 = (x1_1 u>> 0x20).d
            
            if (x8_2 s>= x9_2)
                return zx.q(arg1 u< arg2 ? 1 : 0) | zx.q(x8_2 s> x9_2 ? 1 : 0)
    else if (x1.d s>= x1_1.d)
        if (x1.d s> x1_1.d)
            return 1
        
        if (x8_1 s>= x9_1)
            if (x8_1 s<= x9_1)
                goto label_ba88bc
            
            return 1

return 0
