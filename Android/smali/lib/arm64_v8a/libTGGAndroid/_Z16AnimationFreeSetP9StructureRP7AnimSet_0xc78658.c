// 函数: _Z16AnimationFreeSetP9StructureRP7AnimSet
// 地址: 0xc78658
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x38)
AnimSet* i = *arg2
int64_t* x11 = x8 + 8
int64_t* x0

do
    x0 = *x11
    
    if (x0 == 0)
        pthread_kill(pthread_self(), 6)
        StructureAnim* x0_2
        bool x1
        x0_2, x1 = XNoReturn()
        return AnimationFreeSets(x0_2, x1) __tailcall
    
    x11 = &x0[1]
while (*x0 != i)

AnimSet** x11_3 = *(*gpGameData + 8)

if (*(i + 0x28) == 2)
    *(x8 + (sx.q(*(i + 0x30)) << 4) + 0x38) = 0
    int64_t x12_5 = sx.q(*(x8 + 0xc0))
    int32_t x13_1 = *(i + 0x30)
    *(x8 + 0xc0) = x12_5.d + 1
    *(x8 + (x12_5 << 2) + 0xc4) = x13_1

AnimSet* x13_2 = *x11_3
*(x11_3 + 0x14) -= 1
*i = x13_2
*x11_3 = i
void* x10 = x0[2]
int64_t* x9_1

if (x10 == 0)
    x9_1 = x8 + 8
else
    x9_1 = x10 + 8

*x9_1 = x0[1]
void* x9_2 = x0[1]
void* x9_3

if (x9_2 == 0)
    x9_3 = x8 + 0x10
else
    x9_3 = x9_2 + 0x10

*x9_3 = x0[2]
*(x8 + 0x18) -= 1
int64_t result = XPooledFree(x0, 0x18)
*arg2 = nullptr
return result
