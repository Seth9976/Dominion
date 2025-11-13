// 函数: _Z13SortHandCards11DomCardEnumS_
// 地址: 0xaed324
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int32_t x20 = arg1
uint64_t x1

if (*(GetClient() + 0x5068) == 0)
    x1 = 0x18
else
    x1 = zx.q(*(ActiveGame() + 0x30))

void* x0_3 = DomDefGet(zx.q(x20), x1)
uint64_t x1_1

if (*(GetClient() + 0x5068) == 0)
    x1_1 = 0x18
else
    x1_1 = zx.q(*(ActiveGame() + 0x30))

void* x0_7 = DomDefGet(zx.q(x19), x1_1)
int64_t x8_2 = *(x0_3 + 0xc8)
int64_t x9 = *(x0_7 + 0xc8)

if ((x8_2.d & 4) != 0 && (x9.d & 4) == 0)
    return 1

int64_t x10 = x8_2 & 4

if ((x9.d & 4) != 0 && x10 == 0)
    return 0

if ((x10 & x9) == 0)
    if ((x8_2.d & 2) != 0 && (x9.d & 2) == 0)
        return 1
    
    int64_t x10_2 = x8_2 & 2
    
    if ((x9.d & 2) != 0 && x10_2 == 0)
        return 0
    
    if ((x10_2 & x9) == 0)
        if ((x8_2.d & 0x40000) != 0 && (x9.d & 0x40000) == 0)
            return 1
        
        if ((x9.d & 0x40000) != 0 && (x8_2.d & 0x40000) == 0)
            return 0

return SortCardsByCostName(zx.q(x20), zx.q(x19)) __tailcall
