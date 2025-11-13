// 函数: _Z19UpdateSplitPileInfoR7DomGame8DomWhere
// 地址: 0xae1e90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2.d - 0x13 u> 0xe)
    return 

int32_t x19_1 = arg2.d
int64_t var_60
__builtin_memset(&var_60, 0, 0x20)
int32_t i = *GetPileHead(arg1, arg2, 0xffffffff)

if (i == 0)
label_ae1fd0:
    int64_t var_68_3 = 0
    int32_t var_70_3 = 0
    int32_t var_78_3 = 0
    int32_t var_80_3 = 0
    NotifyEffect(arg1, 2, 0xffffffff, 0, zx.q(x19_1), 0, 0, 0)
    return 

IsGlobalPile(zx.q(x19_1))
int32_t x8 = *DomBoardPile(arg1, x19_1)

if (x8 == 0x91c || x8 == 0x923 || x8 == 0xc0a)
    return 

int64_t x23_1 = 0
int64_t var_50

do
    void* x0_4 = CardGet(arg1, zx.q(i))
    int32_t x10_1 = *(&var_50 + (sx.q(x23_1.d) << 2))
    int32_t x9_3 = *(x0_4 + 8)
    int64_t x8_1 = sx.q(x23_1.d)
    
    if (x10_1 == 0)
        *(&var_50 + (x8_1 << 2)) = x9_3
    else if (x10_1 != x9_3)
        bool cond:0_1 = x23_1.d s> 2
        x23_1 = x8_1 + 1
        
        if (cond:0_1)
            break
        
        x8_1 = x23_1
        *(&var_50 + (x8_1 << 2)) = x9_3
    
    int64_t x8_2 = x8_1 << 2
    *(&var_60 + x8_2) += 1
    i = *(x0_4 + 0x60)
while (i != 0)

if (x23_1.d == 0)
    goto label_ae1fd0

int32_t x21_1 = i != 0 ? 1 : 0
int64_t var_68_1 = 0
int32_t var_70_1 = 0
int32_t var_78_1 = x21_1
int64_t var_48
int32_t var_80_1 = var_48:4.d
NotifyEffect(arg1, 2, 0xffffffff, 0, zx.q(x19_1), zx.q(var_50.d), zx.q(var_50:4.d), zx.q(var_48.d))
int64_t var_68_2 = 0
int32_t var_70_2 = 0
int32_t var_78_2 = x21_1
int64_t var_58
int32_t var_80_2 = var_58:4.d
NotifyEffect(arg1, 3, 0xffffffff, 0, zx.q(x19_1), zx.q(var_60.d), zx.q(var_60:4.d), zx.q(var_58.d))
