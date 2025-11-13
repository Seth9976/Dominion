// 函数: _Z17FabDistributeDrawRK5FabElR8FabState12FabDrawStyleR12FabDrawState
// 地址: 0xf5e750
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 0x78)
int32_t x9 = *(arg2 + 0x60)
void* __offset(FabState, 0x7c) x8_1

if (x8 s> x9)
    x8_1 = arg2 + 0x7c
else
    x8_1 = arg1 + 0x94

int64_t x8_2 = *x8_1
void* __offset(FabState, 0x84) x9_2

if (x8 s> x9)
    x9_2 = arg2 + 0x84
else
    x9_2 = arg1 + 0x9c

if (x8_2.d s< 1)
    return 

uint64_t x23_1 = x8_2 u>> 0x20

if (x23_1.d s< 1)
    return 

int32_t x25_1 = *x9_2
int64_t i = 0

do
    if (x25_1 s>= 1)
        int64_t x27_1 = 0
        
        do
            int32_t x28_1 = 0
            
            do
                int64_t var_70 = i | x27_1 << 0x20
                int32_t var_68_1 = x28_1
                FabDraw(FabSubstateTable(arg1, arg2, &var_70), zx.q(arg3), arg4)
                x28_1 += 1
            while (x25_1 != x28_1)
            
            x27_1 += 1
        while (x27_1 != x23_1)
    
    i += 1
while (i != (x8_2 & 0xffffffff))
