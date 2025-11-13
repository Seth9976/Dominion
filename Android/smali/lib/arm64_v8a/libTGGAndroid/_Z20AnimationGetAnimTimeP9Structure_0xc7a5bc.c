// 函数: _Z20AnimationGetAnimTimeP9Structure
// 地址: 0xc7a5bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x38)
int128_t v0
v0.d = 0f

if (x8 == 0)
    return 

int64_t* i = *(x8 + 8)

if (i == 0)
    return 

do
    void* x9_1 = *i
    i = i[1]
    
    if (not(*(x9_1 + 0x20) f< 0f))
        int32_t x10_1 = *(x9_1 + 0x28)
        
        if (x10_1 != 4 && x10_1 != 2)
            v0.d = *(x9_1 + 4)
            return 
while (i != 0)
